__int64 __fastcall sub_3D4D90(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  unsigned int v3; // ebx
  __m128i v5; // [rsp+0h] [rbp-E8h] BYREF
  __int64 (__fastcall **v6)(); // [rsp+10h] [rbp-D8h] BYREF
  _BYTE v7[24]; // [rsp+18h] [rbp-D0h] BYREF
  __m128i v8; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-A0h]
  void *v10; // [rsp+50h] [rbp-98h]
  __int64 v11; // [rsp+60h] [rbp-88h]
  void *v12; // [rsp+68h] [rbp-80h]
  __int64 (__fastcall **v13)(); // [rsp+70h] [rbp-78h]
  __int64 v14; // [rsp+80h] [rbp-68h]
  void *v15; // [rsp+88h] [rbp-60h]
  __int64 v16; // [rsp+98h] [rbp-50h]
  void *v17; // [rsp+A0h] [rbp-48h]
  __int64 v18[2]; // [rsp+A8h] [rbp-40h] BYREF
  char v19; // [rsp+B8h] [rbp-30h]

  v6 = off_1C4E6F0;
  v5 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v6, (__m128i)(unsigned __int64)&off_1C62200);
  sub_1684300(v7, a2);
  v2 = _mm_load_si128(&v5);
  v9 = 0;
  v10 = nullptr;
  v11 = 0;
  v12 = nullptr;
  v13 = &off_1C62200;
  v14 = 0;
  v15 = nullptr;
  v16 = 0;
  v17 = nullptr;
  v18[0] = a2;
  v18[1] = 0;
  v19 = 0;
  v8 = v2;
  v3 = sub_168D740(&v8, a1);
  sub_2334C0(v18);
  v13 = &off_1C62200;
  if ( v17 )
    sub_186B220(v17);
  if ( v15 )
    sub_186B220(v15);
  v8.m128i_i64[1] = (__int64)&off_1C62200;
  if ( v12 )
    sub_186B220(v12);
  if ( v10 )
    sub_186B220(v10);
  return v3;
}

