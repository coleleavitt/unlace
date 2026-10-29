/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E9A0
// Address: 0x000000010005E9A0

//----- (000000010005E9A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_10005E9A0(char **a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rsi
  __int64 v5; // rdx
  char v6; // cl
  char v7; // cl
  _BOOL4 v8; // edi
  unsigned int v9; // r8d
  unsigned int v10; // edi
  size_t v11; // rdx
  unsigned int v12; // r14d
  unsigned int v13; // r14d
  char *v14; // rcx
  unsigned __int64 v15; // rax
  char *v16; // rsi
  __int64 v17; // rdx
  char v18; // cl
  char v19; // cl
  _BOOL4 v20; // edi
  unsigned int v21; // r8d
  unsigned int v22; // edi
  size_t v23; // rdx
  unsigned int v24; // r12d
  char *v26; // [rsp+8h] [rbp-38h] BYREF
  char v27; // [rsp+13h] [rbp-2Dh] BYREF
  _BYTE __dst[4]; // [rsp+14h] [rbp-2Ch] BYREF

  v2 = *a1;
  v3 = (unsigned __int64)a1[1];
  v4 = *a1 + 1;
  if ( (unsigned __int64)v4 <= v3 && v4 >= *a1 )
  {
    *a1 = v4;
    v6 = *v2;
    v27 = v6;
    v5 = 1;
    if ( v6 < 0 )
    {
      v7 = ~v6;
      v8 = (v7 & 0xE0) == 0;
      v9 = v8 + 4;
      v10 = v8 + 3;
      v11 = 1;
      if ( (v7 & 0xC0) == 0 )
        v11 = v10;
      v12 = 2;
      if ( (v7 & 0xC0) == 0 )
        v12 = v9;
      if ( &v4[v11] >= v4 && (unsigned __int64)&v4[v11] <= v3 )
      {
        *a1 = &v4[v11];
        memcpy(__dst, v4, v11);
      }
      v5 = v12;
    }
  }
  else
  {
    v27 = 0;
    v5 = 1;
  }
  v26 = &v27;
  v13 = unpack_dd((unsigned __int64 *)&v26, (unsigned __int64)&__dst[v5 - 1]);
  v14 = *a1;
  v15 = (unsigned __int64)a1[1];
  v16 = *a1 + 1;
  if ( (unsigned __int64)v16 <= v15 && v16 >= *a1 )
  {
    *a1 = v16;
    v18 = *v14;
    v27 = v18;
    v17 = 1;
    if ( v18 < 0 )
    {
      v19 = ~v18;
      v20 = (v19 & 0xE0) == 0;
      v21 = v20 + 4;
      v22 = v20 + 3;
      v23 = 1;
      if ( (v19 & 0xC0) == 0 )
        v23 = v22;
      v24 = 2;
      if ( (v19 & 0xC0) == 0 )
        v24 = v21;
      if ( &v16[v23] >= v16 && (unsigned __int64)&v16[v23] <= v15 )
      {
        *a1 = &v16[v23];
        memcpy(__dst, v16, v23);
      }
      v17 = v24;
    }
  }
  else
  {
    v27 = 0;
    v17 = 1;
  }
  v26 = &v27;
  return v13 | (unsigned __int64)(unpack_dd((unsigned __int64 *)&v26, (unsigned __int64)&__dst[v17 - 1]) << 32);
}
