/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CB88C
// Address: 0x00000000000CB88C

//----- (00000000000CB88C) ----------------------------------------------------
__int64 __fastcall sub_CB88C(__int64 a1, __int128 *a2)
{
  __int64 v2; // x19
  int v4; // w8
  __int128 v6; // q1
  __int128 v7; // q2
  __int128 v8; // q3
  __int128 v9; // q0
  __int128 v10; // q1
  __int128 v11; // q4
  __int64 (__fastcall *v12)(__int64, __int64, __int64); // x8
  __int64 v13; // x0
  unsigned int *v14; // x0
  unsigned int *v15; // x21
  __int64 v16; // x0
  void *v17; // x8
  __int64 v18; // x8
  __int64 v19; // x11
  __int64 v20; // x9

  if ( !a2 )
    return 4294967294LL;
  if ( !*((_QWORD *)a2 + 8) )
    return 4294967294LL;
  if ( !*((_QWORD *)a2 + 9) )
    return 4294967294LL;
  v2 = *((_QWORD *)a2 + 7);
  if ( !v2 || *(__int128 **)v2 != a2 )
    return 4294967294LL;
  v4 = *(_DWORD *)(v2 + 8);
  if ( ((unsigned int)(v4 - 57) > 0x38 || ((1LL << ((unsigned __int8)v4 - 57)) & 0x100400400011001LL) == 0)
    && v4 != 666
    && v4 != 42 )
  {
    return 4294967294LL;
  }
  if ( !a1 )
    return 4294967294LL;
  v6 = a2[5];
  v7 = a2[3];
  v8 = a2[6];
  *(_OWORD *)(a1 + 64) = a2[4];
  *(_OWORD *)(a1 + 80) = v6;
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 64);
  v13 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 96) = v8;
  *(_OWORD *)a1 = v9;
  *(_OWORD *)(a1 + 16) = v10;
  *(_OWORD *)(a1 + 32) = v11;
  *(_OWORD *)(a1 + 48) = v7;
  v14 = (unsigned int *)v12(v13, 1, 5952);
  if ( v14 )
  {
    v15 = v14;
    *(_QWORD *)(a1 + 56) = v14;
    memcpy(v14, (const void *)v2, 0x1740u);
    *(_QWORD *)v15 = a1;
    *((_QWORD *)v15 + 12) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 64))(
                              *(_QWORD *)(a1 + 80),
                              v15[20],
                              2);
    *((_QWORD *)v15 + 14) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 64))(
                              *(_QWORD *)(a1 + 80),
                              v15[20],
                              2);
    *((_QWORD *)v15 + 15) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 64))(
                              *(_QWORD *)(a1 + 80),
                              v15[33],
                              2);
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 64))(*(_QWORD *)(a1 + 80), v15[1474], 4);
    v17 = *((void **)v15 + 12);
    *((_QWORD *)v15 + 2) = v16;
    if ( v17 && *((_QWORD *)v15 + 14) && v16 && *((_QWORD *)v15 + 15) )
    {
      memcpy(v17, *(const void **)(v2 + 96), 2 * v15[20]);
      memcpy(*((void **)v15 + 14), *(const void **)(v2 + 112), 2LL * v15[20]);
      memcpy(*((void **)v15 + 15), *(const void **)(v2 + 120), 2LL * v15[33]);
      memcpy(*((void **)v15 + 2), *(const void **)(v2 + 16), 4 * v15[1474]);
      v18 = *((_QWORD *)v15 + 2);
      v19 = v15[1474];
      v20 = *(_QWORD *)(v2 + 32) - *(_QWORD *)(v2 + 16);
      *((_QWORD *)v15 + 363) = v15 + 53;
      *((_QWORD *)v15 + 366) = v15 + 626;
      *((_QWORD *)v15 + 736) = v18 + v19;
      *((_QWORD *)v15 + 4) = v18 + v20;
      *((_QWORD *)v15 + 369) = v15 + 687;
      return 0;
    }
    sub_C88E4((_QWORD *)a1);
  }
  return 4294967292LL;
}
