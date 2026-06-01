__int64 __fastcall sub_2282AF0(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ecx
  int v7; // r13d
  int *v8; // rax
  const char *v9; // r14
  __int64 v10; // r12
  char *v12; // rax
  int v13; // ecx
  unsigned int v14; // edx
  const char *v15; // r14
  int *v16; // r12
  int v17; // ecx
  int v18; // ecx
  char v19[104]; // [rsp+0h] [rbp-68h] BYREF

  v6 = a1;
  BYTE1(v6) = BYTE1(a1) & 0xFE;
  v7 = dword_2CCAFE0;
  if ( a1 != 255 )
  {
    v8 = &dword_2CCAFE0;
    if ( dword_2CCAFE0 )
    {
      if ( v6 == dword_2CCAFE0 )
      {
LABEL_11:
        if ( (a1 & 0x100) != 0 )
        {
          v9 = v19;
          sub_2287340(v19, *((_QWORD *)v8 + 1), 50);
          v12 = v19;
          do
          {
            v13 = *(_DWORD *)v12;
            v12 += 4;
            v14 = ~v13 & (v13 - 16843009) & 0x80808080;
          }
          while ( !v14 );
          goto LABEL_14;
        }
        goto LABEL_8;
      }
      while ( 1 )
      {
        v8 += 6;
        if ( !*v8 )
          break;
        if ( *v8 == v6 )
          goto LABEL_11;
      }
    }
    if ( (a1 & 0x100) != 0 )
    {
      v9 = v19;
      snprintf(v19, 0x32u, "REG_0x%x", v6);
      v12 = v19;
      do
      {
        v18 = *(_DWORD *)v12;
        v12 += 4;
        v14 = ~v18 & (v18 - 16843009) & 0x80808080;
      }
      while ( !v14 );
      goto LABEL_14;
    }
LABEL_8:
    v9 = *((const char **)v8 + 2);
    v10 = strlen(v9) + 1;
    goto LABEL_9;
  }
  if ( dword_2CCAFE0 )
  {
    v15 = *(const char **)(a2 + 16);
    v16 = &dword_2CCAFE0;
    while ( strcmp(*((const char **)v16 + 1), v15) )
    {
      v16 += 6;
      v7 = *v16;
      if ( !*v16 )
        goto LABEL_25;
    }
    v9 = v19;
    snprintf(v19, 0x32u, "%d", v7);
    v12 = v19;
    do
    {
      v17 = *(_DWORD *)v12;
      v12 += 4;
      v14 = ~v17 & (v17 - 16843009) & 0x80808080;
    }
    while ( !v14 );
LABEL_14:
    if ( (v14 & 0x8080) == 0 )
    {
      v14 >>= 16;
      v12 += 2;
    }
    v10 = &v12[-__CFADD__((_BYTE)v14, (_BYTE)v14) - 3] - v19 + 1;
    if ( a4 )
      goto LABEL_17;
    return v10;
  }
LABEL_25:
  v10 = 2;
  v9 = "0";
LABEL_9:
  if ( !a4 )
    return v10;
LABEL_17:
  sub_2287340(a3, v9, a4);
  return v10;
}
