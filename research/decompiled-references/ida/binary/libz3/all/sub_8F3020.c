__int64 __fastcall sub_8F3020(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  __int64 v4; // r10
  __int64 *v5; // r10
  unsigned int *v6; // rcx
  unsigned int *v7; // r9
  int v8; // r11d
  unsigned int *v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // rsi
  char v12; // dl
  __int64 v13; // rsi
  int v14; // edi
  unsigned int *v15; // rax
  unsigned int v16; // edx
  char v17; // al
  unsigned int v18; // eax
  __int64 v19; // rax

  result = 1;
  v3 = *(__int64 **)(a1 + 8928);
  if ( !v3 )
    return result;
  v4 = *((unsigned int *)v3 - 1);
  if ( !(_DWORD)v4 )
    return result;
  v5 = &v3[2 * v4];
LABEL_6:
  v6 = (unsigned int *)v3[1];
  if ( !v6 )
    goto LABEL_22;
  v7 = &v6[*(v6 - 1)];
  v8 = *(v6 - 1);
  if ( v7 == v6 )
  {
LABEL_21:
    if ( v8 == 1 )
    {
      if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
      {
        v18 = *v6;
        *(_QWORD *)(a1 + 8984) = 2;
        *(_DWORD *)(a1 + 8992) = v18 ^ 1;
      }
      goto LABEL_23;
    }
LABEL_22:
    if ( *(_QWORD *)(a1 + 8984) == qword_1C7EC50 && !*(_BYTE *)(a1 + 2416) )
    {
      v19 = *v3;
      *(_DWORD *)(a1 + 8992) = -2;
      *(_QWORD *)(a1 + 8984) = v19;
    }
LABEL_23:
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))a1)(a1) )
    {
      sub_1872CE0("");
      sub_1873130(114, 3374);
    }
    return 0xFFFFFFFFLL;
  }
  v9 = (unsigned int *)v3[1];
  v10 = -2;
  do
  {
    while ( 1 )
    {
      v11 = *v9;
      v12 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v11);
      if ( v12 != -1 )
        break;
      if ( v7 == ++v9 )
        goto LABEL_11;
    }
    if ( v12 == 1 )
    {
      v3 += 2;
      if ( v5 != v3 )
        goto LABEL_6;
      return 1;
    }
    ++v9;
    v10 = v11;
  }
  while ( v7 != v9 );
LABEL_11:
  if ( v10 == -2 )
    goto LABEL_21;
  LODWORD(v13) = v8 - 1;
  if ( v8 - 1 > 0 )
  {
    v14 = *(_DWORD *)(a1 + 7504);
    v13 = (int)v13;
    do
    {
      v14 = 214013 * v14 + 2531011;
      *(_DWORD *)(a1 + 7504) = v14;
      v15 = &v6[(HIWORD(v14) & 0x7FFF) % ((int)v13 + 1)];
      v16 = v6[v13];
      v6[v13--] = *v15;
      *v15 = v16;
    }
    while ( (int)v13 > 0 );
  }
  sub_8EC360(a1);
  v17 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v10);
  if ( v17 == -1 )
  {
    if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
      return 0;
    *(_QWORD *)(a1 + 8984) = 2;
    *(_DWORD *)(a1 + 8992) = v10 ^ 1;
    return 0;
  }
  else
  {
    if ( v17 )
      return 0;
    sub_8F28B0(a1, v10, 2, 1u);
    return 0;
  }
}

