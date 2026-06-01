/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C8640
// Address: 0x00000000000C8640

//----- (00000000000C8640) ----------------------------------------------------
__int64 __fastcall sub_C8640(_QWORD *a1, unsigned int a2, _BYTE *a3, int a4)
{
  __int64 result; // x0
  void *(__fastcall *v6)(__int64, int, int); // x8
  unsigned int v7; // w23
  __int64 v8; // x0
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x8
  __int64 v12; // x9

  if ( !a3 )
    return 4294967290LL;
  result = 4294967290LL;
  if ( a4 != 112 || *a3 != 49 )
    return result;
  if ( !a1 )
    return 4294967294LL;
  v6 = (void *(__fastcall *)(__int64, int, int))a1[8];
  a1[6] = 0;
  if ( v6 )
  {
    if ( a1[9] )
      goto LABEL_7;
  }
  else
  {
    v6 = sub_D42E0;
    a1[10] = 0;
    a1[8] = sub_D42E0;
    if ( a1[9] )
      goto LABEL_7;
  }
  a1[9] = sub_D42E8;
LABEL_7:
  if ( a2 == -1 )
    v7 = 6;
  else
    v7 = a2;
  result = 4294967294LL;
  if ( v7 <= 9 )
  {
    v8 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, _QWORD))v6)(a1[10], 1, 5952, 15, 8, 0);
    if ( v8 )
    {
      a1[7] = v8;
      *(_DWORD *)(v8 + 88) = 0x7FFF;
      *(_DWORD *)(v8 + 8) = 42;
      *(_DWORD *)(v8 + 132) = 0x8000;
      *(_DWORD *)(v8 + 136) = 15;
      *(_DWORD *)(v8 + 48) = 1;
      *(_DWORD *)(v8 + 80) = 0x8000;
      *(_DWORD *)(v8 + 84) = 15;
      *(_QWORD *)v8 = a1;
      *(_QWORD *)(v8 + 56) = 0;
      *(_DWORD *)(v8 + 140) = 0x7FFF;
      *(_DWORD *)(v8 + 144) = 5;
      v9 = v8;
      *(_QWORD *)(v8 + 96) = ((__int64 (__fastcall *)(_QWORD))a1[8])(a1[10]);
      *(_QWORD *)(v9 + 112) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))a1[8])(
                                a1[10],
                                *(unsigned int *)(v9 + 80),
                                2);
      *(_QWORD *)(v9 + 120) = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64))a1[8])(
                                a1[10],
                                *(unsigned int *)(v9 + 132),
                                2);
      *(_QWORD *)(v9 + 5944) = 0;
      *(_DWORD *)(v9 + 5896) = 0x4000;
      v10 = ((__int64 (__fastcall *)(_QWORD))a1[8])(a1[10]);
      v11 = *(unsigned int *)(v9 + 5896);
      v12 = *(_QWORD *)(v9 + 96);
      *(_QWORD *)(v9 + 16) = v10;
      *(_QWORD *)(v9 + 24) = 4 * v11;
      if ( v12 && *(_QWORD *)(v9 + 112) && v10 && *(_QWORD *)(v9 + 120) )
      {
        *(_DWORD *)(v9 + 196) = v7;
        *(_DWORD *)(v9 + 200) = 0;
        *(_QWORD *)(v9 + 5888) = v10 + v11;
        *(_DWORD *)(v9 + 5904) = 3 * v11 - 3;
        *(_BYTE *)(v9 + 72) = 8;
        return sub_C89E8((__int64)a1);
      }
      *(_DWORD *)(v9 + 8) = 666;
      a1[6] = "insufficient memory";
      sub_C88E4(a1);
    }
    return 4294967292LL;
  }
  return result;
}
// C86D0: conditional instruction was optimized away because w3.4==F
// C8720: conditional instruction was optimized away because w20.4==0
// C873C: conditional instruction was optimized away because w21.4==8
// C8748: conditional instruction was optimized away because w9.4==F
// C8750: conditional instruction was optimized away because w9.4==F
// C878C: conditional instruction was optimized away because w9.4==F
