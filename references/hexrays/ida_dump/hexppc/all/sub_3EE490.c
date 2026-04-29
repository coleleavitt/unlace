__int64 __fastcall sub_3EE490(__int64 a1, int a2, int a3, int a4, double a5)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int16 v13; // ax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // r13d
  __int64 v18; // r15
  __int64 v19; // rdi
  int v20; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r15d
  __int64 v25; // r13
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int dtype_size; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax

  v7 = 7;
  v8 = a3;
  v10 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v10 + 84) != 8 )
    v7 = 2;
  v11 = *(_QWORD *)(v10 + 4464);
  if ( !v11 )
    sub_3E6800(a5, a1, v7);
  v12 = *(int *)(*(_QWORD *)(v10 + 4456) + 4 * v11 - 4);
  *(_QWORD *)(v10 + 4464) = v11 - 1;
  v13 = *(_WORD *)(a1 + 48);
  if ( v13 == 153 )
  {
    v24 = (unsigned __int8)v7;
    v25 = a2;
    dtype_size = get_dtype_size((unsigned __int8)v7);
    sub_1D2710(a1, 0x13u, dtype_size, (int)v8, a4, a2, 0);
    goto LABEL_24;
  }
  if ( v13 <= 0x99u )
  {
    if ( v13 == 45 )
    {
      v24 = (unsigned __int8)v7;
      v25 = a2;
      v31 = get_dtype_size((unsigned __int8)v7);
      sub_1D2710(a1, 0x15u, v31, (int)v8, a4, a2, 0);
    }
    else
    {
      if ( v13 <= 0x2Du )
      {
        if ( v13 != 9 )
        {
          if ( v13 == 10 )
          {
            if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
            {
              v14 = get_dtype_size((unsigned __int8)v7);
              sub_1D2710(a1, 7u, v14, (int)v8, 0x3BEA45E214ADDC55LL, v12, 0);
              v15 = get_dtype_size((unsigned __int8)v7);
              sub_1D2710(a1, 0x14u, v15, a2, v12, a2, 0);
            }
            else
            {
              v32 = get_dtype_size((unsigned __int8)v7);
              sub_1D2710(a1, 7u, v32, a4, 0x3BEA45E214ADDC55LL, v12, 0);
              v33 = get_dtype_size((unsigned __int8)v7);
              sub_1D2710(a1, 0x14u, v33, (int)v8, v12, a2, 0);
            }
            goto LABEL_17;
          }
          return 0;
        }
        v17 = 20;
        v18 = a2;
        v19 = (unsigned __int8)v7;
        if ( (*(_BYTE *)(a1 + 53) & 0x20) == 0 )
          goto LABEL_20;
        goto LABEL_16;
      }
      if ( v13 != 151 )
        return 0;
      v24 = (unsigned __int8)v7;
      v25 = a2;
      v26 = get_dtype_size((unsigned __int8)v7);
      sub_1D2710(a1, 0x14u, v26, (int)v8, a4, a2, 0);
    }
LABEL_24:
    v27 = get_dtype_size(v24);
    sub_1D2710(a1, 7u, v27, v25, 0x3BEA45E214ADDC55LL, v25, 0);
    goto LABEL_17;
  }
  if ( v13 == 155 )
  {
    v28 = get_dtype_size((unsigned __int8)v7);
    sub_1D2710(a1, 7u, v28, a4, 0x3BEA45E214ADDC55LL, v12, 0);
    v29 = get_dtype_size((unsigned __int8)v7);
    sub_1D2710(a1, 0x13u, v29, (int)v8, v12, a2, 0);
    goto LABEL_17;
  }
  if ( v13 == 226 )
  {
    v23 = get_dtype_size((unsigned __int8)v7);
    sub_1D2710(a1, 0x15u, v23, (int)v8, a4, a2, 0);
    goto LABEL_17;
  }
  v16 = 0;
  v17 = 19;
  if ( v13 == 154 )
  {
    v18 = a2;
    v19 = (unsigned __int8)v7;
    if ( (*(_BYTE *)(a1 + 53) & 0x20) == 0 )
    {
LABEL_20:
      v22 = get_dtype_size(v19);
      sub_1D2710(a1, v17, v22, v8, a4, v18, 0);
      goto LABEL_17;
    }
LABEL_16:
    v20 = get_dtype_size(v19);
    sub_1D2710(a1, v17, v20, v18, v8, v18, 0);
LABEL_17:
    sub_3EC840(a1, a2, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
    return 1;
  }
  return v16;
}
