__m128i *__fastcall sub_7A60C0(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        int a10,
        char a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rbp
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r8
  unsigned __int8 v19; // r11
  __m128i *v20; // rbx
  __int32 v21; // edx
  unsigned int v22; // edx
  __int8 v23; // al
  __int8 v24; // r12
  __int64 v25; // rax
  __m128 v28; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v29; // [rsp+20h] [rbp-58h]
  int v30; // [rsp+28h] [rbp-50h]
  int v31; // [rsp+2Ch] [rbp-4Ch]
  __int64 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+38h] [rbp-40h]

  v14 = a2;
  v29 = a4;
  v30 = a10;
  v33 = a6;
  v32 = a5;
  v31 = a9;
  v28 = _mm_loadh_ps((const double *)&a13);
  v15 = 16LL * (a12 != 0) + 8LL * (a7 > 3);
  if ( a2 )
  {
    v14 = a2 + 64;
    v16 = sub_79A610(176, a1, a2 + 64, v15);
    v17 = v33;
    v18 = v32;
    v19 = v31;
  }
  else
  {
    v16 = sub_79A610(176, a1, 0, v15);
    v19 = v31;
    v18 = v32;
    v17 = v33;
  }
  v20 = (__m128i *)v16;
  sub_77D6F0(v16, 0x24u, (__int64)a1, v14, a3, v29, v18, v17, 0, a8, v19, a11, a14);
  v21 = v20[5].m128i_i32[1];
  v20[10].m128i_i64[1] = 0;
  v22 = v21 & 0xE0001FFF;
  v20->m128i_i64[0] = (__int64)&off_49F54A0;
  v20[5].m128i_i32[1] = v22;
  v23 = v20[1].m128i_i8[13];
  v24 = (32 * (a12 != 0)) | HIBYTE(v22) & 0xDF;
  v20[5].m128i_i8[7] = v24;
  v20[1].m128i_i8[13] = (2 * (v30 & 1)) | v23 & 0xFD;
  if ( a7 <= 3 )
  {
    v20[5].m128i_i8[7] = (32 * (a12 != 0)) & 0xBF | HIBYTE(v22) & 0x9F;
    if ( a12 )
      v20[11] = _mm_load_si128((const __m128i *)&v28);
    v20[5].m128i_i8[7] = ((a7 == 1) << 7) | v20[5].m128i_i8[7] & 0x7F;
  }
  else
  {
    v20[5].m128i_i8[7] = v24 | 0x40;
    if ( a12 )
      v20[11] = _mm_load_si128((const __m128i *)&v28);
    v25 = sub_777D70((__int64)v20);
    *(_QWORD *)(v25 + 16LL * ((*(_BYTE *)(v25 + 87) & 0x20) != 0) + 176) = a7;
  }
  return v20;
}

