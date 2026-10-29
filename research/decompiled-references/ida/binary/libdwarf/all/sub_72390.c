__int64 __fastcall sub_72390(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r12
  char *v11; // rbp
  char *v12; // r10
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdx
  unsigned int v20; // edx
  char v21; // cl
  unsigned int v22; // ecx
  __int64 v23; // rdx
  char v24; // cl
  unsigned int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // rdx
  char v28; // cl
  unsigned int v29; // edx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  char v32; // cl
  unsigned int v33; // edx
  unsigned int v34; // ecx
  __int64 v35; // rdx

  v7 = a2 + a3;
  if ( a3 <= 0 )
  {
    if ( !a3 )
      return 0;
    v7 = a2;
  }
  if ( a5 <= 9 )
    return -20;
  if ( *(_BYTE *)(a6 + 2) != 11 )
    return 0;
  v8 = *a4;
  v9 = a4[1];
  v10 = a4[2];
  a1[15] = a4 + 3;
  v11 = (char *)a4 + v8 + 6;
  v12 = &v11[v9];
  a1[16] = v11;
  v13 = (unsigned __int64)&v11[v9 + v10];
  a1[17] = &v11[v9];
  a1[18] = v13;
  if ( v8 <= 7 )
    return 0;
  if ( v9 <= 7 )
    return 0;
  v14 = a5 - 6 - v8 - v9 - v10;
  if ( v10 <= 7 || v14 <= 7 )
    return 0;
  if ( a5 < v14 )
    return -20;
  a1[4] = a2;
  v15 = (__int64)a4 + a5 - 8;
  v16 = (unsigned __int64)(a3 + 3) >> 2;
  *a1 = v11 - 8;
  v17 = v16 + a2;
  a1[1] = v12 - 8;
  a1[5] = v17;
  v18 = v16 + v17;
  v19 = v18 + v16;
  a1[2] = v13 - 8;
  a1[3] = v15;
  a1[6] = v18;
  a1[7] = v19;
  if ( v19 >= v7 )
    return 0;
  v20 = (unsigned __int8)*(v11 - 1);
  v21 = 0;
  if ( (_BYTE)v20 )
  {
    _BitScanReverse(&v22, v20);
    v21 = (v22 ^ 0x1F) - 23;
  }
  v23 = (*((_QWORD *)v11 - 1) | 1LL) << v21;
  v24 = 0;
  a1[8] = v23;
  v25 = (unsigned __int8)*(v12 - 1);
  if ( (_BYTE)v25 )
  {
    _BitScanReverse(&v26, v25);
    v24 = (v26 ^ 0x1F) - 23;
  }
  v27 = (*((_QWORD *)v12 - 1) | 1LL) << v24;
  v28 = 0;
  a1[9] = v27;
  v29 = *(unsigned __int8 *)(v13 - 1);
  if ( (_BYTE)v29 )
  {
    _BitScanReverse(&v30, v29);
    v28 = (v30 ^ 0x1F) - 23;
  }
  v31 = (*(_QWORD *)(v13 - 8) | 1LL) << v28;
  v32 = 0;
  a1[10] = v31;
  v33 = *(unsigned __int8 *)(v15 + 7);
  if ( (_BYTE)v33 )
  {
    _BitScanReverse(&v34, v33);
    v32 = (v34 ^ 0x1F) - 23;
  }
  v35 = *(_QWORD *)v15;
  a1[13] = a4;
  a1[14] = v7;
  a1[12] = a6 + 4;
  a1[11] = (v35 | 1) << v32;
  return 1;
}

