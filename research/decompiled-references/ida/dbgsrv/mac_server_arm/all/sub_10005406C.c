/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005406C
// Address: 0x000000010005406C

//----- (000000010005406C) ----------------------------------------------------
unsigned __int64 __fastcall sub_10005406C(char **a1)
{
  unsigned __int64 v2; // x8
  char *v3; // x9
  char *v4; // x1
  __int64 v6; // x20
  int v7; // w9
  int v8; // w10
  unsigned int v9; // w9
  size_t v10; // x2
  char *v11; // x9
  unsigned int v13; // w20
  unsigned __int64 v14; // x8
  char *v15; // x9
  char *v16; // x1
  __int64 v18; // x21
  int v19; // w9
  int v20; // w10
  unsigned int v21; // w9
  size_t v22; // x2
  char *v23; // x9
  char *v26; // [xsp+8h] [xbp-38h] BYREF
  char v27; // [xsp+13h] [xbp-2Dh] BYREF
  _BYTE v28[4]; // [xsp+14h] [xbp-2Ch] BYREF

  v3 = *a1;
  v2 = (unsigned __int64)a1[1];
  v4 = *a1 + 1;
  if ( v4 < *a1 || (unsigned __int64)v4 > v2 )
  {
    v27 = 0;
    v6 = 1;
  }
  else
  {
    *a1 = v4;
    v7 = *v3;
    v27 = v7;
    if ( v7 < 0 )
    {
      v8 = v7 & 0xC0;
      if ( (~(unsigned __int8)v7 & 0xE0) != 0 )
        v9 = 4;
      else
        v9 = 5;
      if ( v8 == 192 )
        v6 = v9;
      else
        v6 = 2;
      if ( v8 == 192 )
        v10 = v9 - 1;
      else
        v10 = 1;
      v11 = &v4[v10];
      if ( &v4[v10] >= v4 && (unsigned __int64)v11 <= v2 )
      {
        *a1 = v11;
        memcpy(v28, v4, v10);
      }
    }
    else
    {
      v6 = 1;
    }
  }
  v26 = &v27;
  v13 = unpack_dd((unsigned __int64 *)&v26, (unsigned __int64)&v28[v6 - 1]);
  v15 = *a1;
  v14 = (unsigned __int64)a1[1];
  v16 = *a1 + 1;
  if ( v16 < *a1 || (unsigned __int64)v16 > v14 )
  {
    v27 = 0;
    v18 = 1;
  }
  else
  {
    *a1 = v16;
    v19 = *v15;
    v27 = v19;
    if ( v19 < 0 )
    {
      v20 = v19 & 0xC0;
      if ( (~(unsigned __int8)v19 & 0xE0) != 0 )
        v21 = 4;
      else
        v21 = 5;
      if ( v20 == 192 )
        v18 = v21;
      else
        v18 = 2;
      if ( v20 == 192 )
        v22 = v21 - 1;
      else
        v22 = 1;
      v23 = &v16[v22];
      if ( &v16[v22] >= v16 && (unsigned __int64)v23 <= v14 )
      {
        *a1 = v23;
        memcpy(v28, v16, v22);
      }
    }
    else
    {
      v18 = 1;
    }
  }
  v26 = &v27;
  return v13 | (unsigned __int64)(unpack_dd((unsigned __int64 *)&v26, (unsigned __int64)&v28[v18 - 1]) << 32);
}
