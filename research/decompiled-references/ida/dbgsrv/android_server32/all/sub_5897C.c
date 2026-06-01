/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5897C
// Address: 0x0005897C

//----- (0005897C) --------------------------------------------------------
int __fastcall sub_5897C(int a1, int a2, void *a3, _DWORD *a4)
{
  signed int v6; // r4
  size_t v7; // r2
  int result; // r0
  unsigned int v9; // r4
  unsigned int v10; // r6
  int *v11; // r3
  __int64 v12; // r0
  __int64 v13; // r0
  __int64 v14; // r0
  bool v15; // cc
  int v16; // r4
  int v17; // r1
  int v18; // r2
  int v19; // r3
  void *v20; // r1
  size_t v21; // r2
  _DWORD *bytearray_linput; // r0
  _DWORD *zip_linput; // r6
  size_t v24; // r4
  int v25; // r1
  int v26; // r5
  int v28; // [sp+24h] [bp-24h]
  _BYTE *v29; // [sp+28h] [bp-20h]
  char *v32; // [sp+38h] [bp-10h] BYREF
  int v33; // [sp+3Ch] [bp-Ch]
  int v34; // [sp+40h] [bp-8h]

  if ( (*(_BYTE *)(a2 + 57) & 8) == 0 )
  {
    v6 = *(_DWORD *)(a2 + 8);
    v7 = qlread(a1, a3, v6);
    if ( v7 == v6 )
    {
      result = 0;
      if ( dword_DE4A8 )
      {
        if ( *(_BYTE *)(dword_DE4A8 + 96) )
        {
          sub_1BBA0((int)"Section loaded (%d bytes).\n", v6);
          return 0;
        }
      }
    }
    else
    {
      if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
        sub_1BBA0((int)"Couldn't read %d bytes of data (read %d).\n", v6, v7);
      *a4 = 10;
      return 1;
    }
    return result;
  }
  if ( *(_BYTE *)(a2 + 96) )
  {
    *a4 = 10;
    return 1;
  }
  v29 = (_BYTE *)(a2 + 96);
  v9 = *(_DWORD *)(a2 + 88);
  v10 = *(_DWORD *)(a2 + 92);
  if ( qlseek(a1, __SPAIR64__(v10, v9), 0) != __PAIR64__(v10, v9) )
  {
    if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
      sub_1BBA0((int)"File truncated.\n");
LABEL_34:
    *v29 = 1;
    *a4 = 10;
    return 1;
  }
  v11 = (int *)a1;
  v28 = *(_DWORD *)(a2 + 72);
  if ( (v9 & v10) == 0xFFFFFFFF )
  {
    v12 = qlseek(a1, 0, 1);
    v11 = (int *)a1;
    v10 = HIDWORD(v12);
    v9 = v12;
  }
  LODWORD(v13) = qlsize(v11);
  v14 = v13 - __PAIR64__(v10, v9);
  v15 = __SPAIR64__(v10 | HIDWORD(v14), v9 | (unsigned int)v14) > -1;
  v16 = 0;
  if ( v15 )
  {
    if ( v14 >= (unsigned int)v28 )
    {
      v16 = v28;
      goto LABEL_25;
    }
    v16 = v14;
  }
  if ( sub_375C0() != 1 )
    sub_371F8(0, v17, v18, v19);
LABEL_25:
  v20 = nullptr;
  v33 = 0;
  v32 = nullptr;
  v34 = 0;
  if ( v16 )
  {
    v32 = (char *)qvector_reserve((int)&v32, nullptr, v16, 1u);
    memset(&v32[v33], 0, v16 - v33);
    v33 = v16;
    v20 = v32;
  }
  v21 = qlread(a1, v20, v16);
  if ( v21 == v16 )
  {
    bytearray_linput = create_bytearray_linput((int)v32, v33);
    zip_linput = create_zip_linput((int)bytearray_linput, v33, 0);
    v24 = qlread((int)zip_linput, a3, *(_DWORD *)(a2 + 8));
    close_linput(zip_linput);
    v25 = *(_DWORD *)(a2 + 8);
    v26 = 1;
    if ( v24 != v25 )
    {
      v26 = 4;
      sub_1BBA0((int)"Couldn't read %d bytes of uncompressed data (read %d).\n", v25, v24);
    }
  }
  else
  {
    v26 = 4;
    sub_1BBA0((int)"Couldn't read %d bytes of compressed data (read %d).\n", v16, v21);
  }
  if ( v32 )
  {
    v33 = 0;
    qfree(v32);
    v34 = 0;
    v32 = nullptr;
  }
  result = 0;
  if ( v26 == 4 )
    goto LABEL_34;
  return result;
}
// 58A92: variable 'v13' is possibly undefined
// 58AD2: variable 'v17' is possibly undefined
// 58AD2: variable 'v18' is possibly undefined
// 58AD2: variable 'v19' is possibly undefined
// DE4A8: using guessed type int dword_DE4A8;
