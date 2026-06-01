__int64 *__fastcall sub_1656EB0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 *v7; // r12
  _QWORD *v8; // rbp
  _QWORD *v9; // r9
  unsigned int v10; // r15d
  _QWORD *v11; // r9
  _QWORD *i; // r14
  __int64 v13; // rdi
  __int64 (*v14)(void); // rax
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r13d
  int v18; // eax
  char v19; // al
  char v23; // [rsp+1Eh] [rbp-4Ah]
  char v24; // [rsp+1Fh] [rbp-49h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 *v26; // [rsp+28h] [rbp-40h]

  sub_B70530(*(_QWORD *)(a3 + 16), *(_QWORD *)(a3 + 72), a5);
  v7 = *(__int64 **)(a5 + 8);
  v25 = a5 + 8;
  if ( v7 == (__int64 *)(a5 + 8) )
    return nullptr;
  v23 = 0;
  v26 = nullptr;
  v24 = *(_BYTE *)(a3 + 56) & 1;
  do
  {
    v8 = (_QWORD *)v7[2];
    v9 = &v8[3 * *((unsigned int *)v7 + 6)];
    if ( v8 == v9 )
    {
      v10 = a4;
      if ( !v26 )
      {
LABEL_31:
        *((_DWORD *)v7 + 32) = v10;
        v26 = v7 + 2;
        if ( !v10 )
        {
LABEL_36:
          *(_BYTE *)(a3 + 56) = v24 | *(_BYTE *)(a3 + 56) & 0xFE;
          return v26;
        }
LABEL_23:
        v19 = *(_BYTE *)(a3 + 56);
        goto LABEL_24;
      }
      v17 = a4;
LABEL_30:
      if ( *((_DWORD *)v26 + 28) <= v17 )
        goto LABEL_23;
      goto LABEL_31;
    }
    v10 = a4;
    v11 = v9 - 3;
    if ( a4 == 2 )
    {
LABEL_28:
      v17 = 3;
      v10 = 3;
LABEL_29:
      if ( !v26 )
      {
        *((_DWORD *)v7 + 32) = v10;
        v26 = v7 + 2;
        v19 = *(_BYTE *)(a3 + 56);
        goto LABEL_24;
      }
      goto LABEL_30;
    }
    for ( i = v11; ; i -= 3 )
    {
      v13 = i[1];
      v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 32LL);
      v15 = (char *)v14 == (char *)sub_A01140 ? sub_B70A60(v13) : v14();
      v17 = v10;
      if ( (*(_BYTE *)(*i + 12LL) & 0xC) == 0xC )
      {
        if ( (*(_BYTE *)(*i + 12LL) & 2) != 0 )
        {
          if ( v10 <= 1 )
          {
            v17 = 2;
            v10 = 2;
          }
          goto LABEL_12;
        }
      }
      else if ( ((*(_BYTE *)(*i + 12LL) >> 2) & 3) > (int)v10 )
      {
        v10 = (*(_BYTE *)(*i + 12LL) >> 2) & 3;
        v17 = v10;
      }
      if ( !v10 )
        break;
LABEL_12:
      v18 = sub_1656AA0(a1, a2, v15, v10, a3, v16);
      if ( !v18 )
        break;
      if ( v18 == 2 )
      {
        v23 = 1;
        goto LABEL_23;
      }
      if ( v8 == i )
        goto LABEL_29;
      if ( v10 == 2 )
        goto LABEL_28;
LABEL_16:
      ;
    }
    v19 = *(_BYTE *)(a3 + 56) & 0xFE;
    *(_BYTE *)(a3 + 56) = v19;
    if ( v8 != i )
    {
      v10 = 0;
      goto LABEL_16;
    }
    if ( !v26 || *((int *)v26 + 28) > 0 )
    {
      *((_DWORD *)v7 + 32) = 0;
      v26 = v7 + 2;
      goto LABEL_36;
    }
LABEL_24:
    *(_BYTE *)(a3 + 56) = v24 | v19 & 0xFE;
    v7 = (__int64 *)*v7;
  }
  while ( (__int64 *)v25 != v7 );
  if ( v23 )
    return nullptr;
  return v26;
}
