__int64 __fastcall sub_1556F60(const __m128i *a1, double a2, __m128 a3)
{
  __int16 v4; // r13
  unsigned int v5; // ebp
  __int32 v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // eax
  _BYTE v12[9]; // [rsp+1h] [rbp-81h] BYREF
  int v13; // [rsp+Ah] [rbp-78h] BYREF
  __int64 v14; // [rsp+12h] [rbp-70h]
  __int32 v15; // [rsp+22h] [rbp-60h]
  __int32 v16; // [rsp+26h] [rbp-5Ch]
  __int128 v17; // [rsp+2Ah] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+3Ah] [rbp-48h]
  __int128 v19; // [rsp+4Ah] [rbp-38h]

  v4 = a1[2].m128i_i16[0];
  v17 = 0;
  *(_OWORD *)ptr = 0;
  v19 = 0;
  v5 = sub_14D0170(a1, (__int64)&v17, 0, 0, 0, nullptr, (__m128i)0LL, 1, nullptr, 0, 0, 0);
  if ( !(_BYTE)v5 )
  {
    if ( a1[2].m128i_i16[0] == 5
      && (v7 = a1[1].m128i_i32[0],
          v8 = a1[1].m128i_i64[1],
          memset(v12, 0, sizeof(v12)),
          v9 = a1[6].m128i_i64[0],
          v13 = 0,
          v14 = v8,
          v16 = v7,
          v15 = v7,
          v10 = sub_1CE58C0(v9, 0, (__int64)&v12[1], (__int64)v12, 1),
          !v12[0])
      && *(_QWORD *)&v12[1]
      && v10 == 6
      && (v11 = sub_1556B20(a1, *(__int64 *)&v12[1], 6u, (__int64)&v17, 0, &v13, (__m128i)0LL, a3, 0, 1), (_BYTE)v11) )
    {
      v5 = v11;
    }
    else if ( (_DWORD)v17 && DWORD1(v17) || *((_QWORD *)&v17 + 1) )
    {
      sub_15655A0(a1, &v17, v4 != 416);
    }
  }
  if ( HIDWORD(ptr[1]) )
    free(ptr[0]);
  return v5;
}
