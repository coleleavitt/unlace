unsigned __int64 __fastcall sub_7B7460(__int64 a1, _QWORD *a2, __int64 a3, _BYTE *a4, _BYTE *a5)
{
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  char v14; // dl
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rsi
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx

  *a4 = 0;
  *a5 = 0;
  if ( (*(_BYTE *)(a1 + 58) & 2) != 0 )
  {
    if ( a3 )
    {
      v8 = sub_6C9720((__int64)a2, a3, 0);
      v9 = sub_6C94F0((__int64)a2, v8);
      goto LABEL_4;
    }
    v12 = sub_6DF880(a2);
    v13 = *(_QWORD *)(v12 + 48);
    if ( v13 )
      goto LABEL_9;
  }
  else
  {
    v12 = sub_6DF820(a2);
    v13 = *(_QWORD *)(v12 + 48);
    if ( v13 )
    {
LABEL_9:
      v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_4;
    }
  }
  v9 = sub_6E8D60((__int64)a2, v12);
LABEL_4:
  if ( (*(_BYTE *)(a2[270] + 107LL) & 4) == 0 )
    return v9;
  v10 = v9 & 7;
  if ( (*(_BYTE *)(a1 + 58) & 2) == 0 )
  {
    *a4 = 1;
    return v10 | 1 | v9 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v14 = *(_BYTE *)(a1 + 29) & 1;
  if ( v14 )
  {
    v17 = sub_79A2B0(a1);
    v18 = *v17;
    v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
    if ( *v17 < v19 )
    {
      while ( *(_WORD *)(*(_QWORD *)v18 + 32LL) != 255 )
      {
        v18 += 8LL;
        if ( v19 == v18 )
          goto LABEL_27;
      }
    }
    else
    {
      if ( v18 == v19 )
      {
LABEL_27:
        v14 = 0;
        goto LABEL_13;
      }
      while ( *(_WORD *)(*(_QWORD *)v19 + 32LL) != 255 )
      {
        v19 += 8LL;
        if ( v18 == v19 )
          goto LABEL_27;
      }
    }
    v14 = v18 != v19;
  }
LABEL_13:
  *a5 = v14;
  v15 = v9 & 7;
  LOBYTE(v15) = v10 | 0x80;
  v16 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v9 & 8) != 0 )
  {
    v15 |= *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL));
    v16 = (_QWORD *)*v16;
  }
  v9 = sub_6C3980(a2, (unsigned __int64)v16, v15);
  if ( (unsigned int)sub_7B6F20(a1) != 3 && !*a5 )
  {
    *a4 = 1;
    return v9 & 7 | 1 | v9 & 0xFFFFFFFFFFFFFFF8LL;
  }
  return v9;
}

