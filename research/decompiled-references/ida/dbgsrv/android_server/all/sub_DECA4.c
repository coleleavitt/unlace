/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DECA4
// Address: 0x00000000000DECA4

//----- (00000000000DECA4) ----------------------------------------------------
__int64 __fastcall sub_DECA4(__int64 a1)
{
  _BYTE *v1; // x8
  _BYTE *v2; // x10
  _BYTE *v3; // x9
  unsigned __int64 v5; // x20
  int v6; // w8
  _QWORD *v7; // x20
  _QWORD *v8; // x8
  __int64 v9; // x9
  _QWORD *v10; // x0
  __int128 v11; // q0
  __int64 result; // x0
  __int64 v13; // x11
  __int64 v14; // x11
  int v15; // w14
  _QWORD *v16; // x21
  _QWORD *v17; // x8
  __int64 v18; // x9
  _QWORD *v19; // x0
  __int64 v20; // x23
  __int64 *v21; // x8
  _BYTE *v22; // x20
  size_t v23; // x22
  __int64 v24; // x25
  __int64 v25; // x24
  char *v26; // x21
  __int64 v27; // x8
  char *v28; // x0

  v2 = *(_BYTE **)a1;
  v1 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE **)a1 == v1 || *v2 != 84 )
    return 0;
  v3 = v2 + 1;
  *(_QWORD *)a1 = v2 + 1;
  if ( v2 + 1 != v1 && *v3 == 95 )
  {
    v5 = 0;
    goto LABEL_6;
  }
  if ( v1 == v3 || (unsigned int)(unsigned __int8)*v3 - 48 > 9 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = 10 * v13;
    if ( v1 - 1 == v2 )
      break;
    v3 = v2 + 2;
    *(_QWORD *)a1 = v2 + 2;
    v13 = v14 + (unsigned __int8)v2[1] - 48;
    if ( v1 - 2 != v2 )
    {
      v15 = (unsigned __int8)v2[2];
      ++v2;
      if ( (unsigned int)(v15 - 48) < 0xA )
        continue;
    }
    goto LABEL_24;
  }
  v13 = v14 - 48;
  v3 = v2 + 1;
LABEL_24:
  if ( v3 == v1 || *v3 != 95 )
    return 0;
  v5 = v13 + 1;
LABEL_6:
  v6 = *(unsigned __int8 *)(a1 + 722);
  *(_QWORD *)a1 = v3 + 1;
  if ( v6 )
  {
    v7 = *(_QWORD **)(a1 + 4832);
    v8 = v7 + 1;
    v9 = v7[1];
    if ( (unsigned __int64)(v9 + 32) >= 0xFF0 )
    {
      v10 = (_QWORD *)operator new[](0x1000u);
      v9 = 0;
      *v10 = v7;
      v10[1] = 0;
      v8 = v10 + 1;
      v7 = v10;
      *(_QWORD *)(a1 + 4832) = v10;
    }
    *v8 = v9 + 32;
    *(_QWORD *)&v11 = "auto";
    *(_QWORD *)((char *)v7 + v9 + 16) = off_161838;
    result = (__int64)v7 + v9 + 16;
    *((_QWORD *)&v11 + 1) = "";
    *(_DWORD *)(result + 8) = 16843015;
    *(_OWORD *)(result + 16) = v11;
    return result;
  }
  if ( !*(_BYTE *)(a1 + 721) )
  {
    v27 = *(_QWORD *)(a1 + 576);
    if ( v5 < (*(_QWORD *)(a1 + 584) - v27) >> 3 )
      return *(_QWORD *)(v27 + 8 * v5);
    return 0;
  }
  v16 = *(_QWORD **)(a1 + 4832);
  v17 = v16 + 1;
  v18 = v16[1];
  if ( (unsigned __int64)(v18 + 48) >= 0xFF0 )
  {
    v19 = (_QWORD *)operator new[](0x1000u);
    v18 = 0;
    *v19 = v16;
    v19[1] = 0;
    v17 = v19 + 1;
    v16 = v19;
    *(_QWORD *)(a1 + 4832) = v19;
  }
  *v17 = v18 + 48;
  *(_QWORD *)((char *)v16 + v18 + 16) = off_1618A8;
  v20 = (__int64)v16 + v18 + 16;
  *(_DWORD *)(v20 + 8) = 33686047;
  *(_QWORD *)(v20 + 16) = v5;
  *(_QWORD *)(v20 + 24) = 0;
  *(_BYTE *)(v20 + 32) = 0;
  v21 = *(__int64 **)(a1 + 672);
  if ( v21 == *(__int64 **)(a1 + 680) )
  {
    v22 = *(_BYTE **)(a1 + 664);
    v23 = (char *)v21 - v22;
    v24 = ((char *)v21 - v22) >> 3;
    v25 = ((char *)v21 - v22) >> 2;
    if ( (_BYTE *)(a1 + 688) == v22 )
    {
      v28 = (char *)malloc(2 * v23);
      v26 = v28;
      if ( v23 )
        memmove(v28, v22, v23);
      *(_QWORD *)(a1 + 664) = v26;
    }
    else
    {
      v26 = (char *)realloc(*(void **)(a1 + 664), 2 * v23);
      *(_QWORD *)(a1 + 664) = v26;
    }
    v21 = (__int64 *)&v26[8 * v24];
    *(_QWORD *)(a1 + 672) = v21;
    *(_QWORD *)(a1 + 680) = &v26[8 * v25];
  }
  *(_QWORD *)(a1 + 672) = v21 + 1;
  *v21 = v20;
  return *(_QWORD *)(*(_QWORD *)(a1 + 672) - 8LL);
}
// 161838: using guessed type __int64 (__fastcall *off_161838[7])();
// 1618A8: using guessed type __int64 (__fastcall *off_1618A8[7])();
