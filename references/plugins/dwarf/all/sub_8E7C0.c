__int64 __fastcall sub_8E7C0(__int64 a1, __int64 (***a2)())
{
  __int64 (***v2)(); // r8
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  bool v5; // zf
  const __m128i *v6; // rbp
  unsigned int v7; // r14d
  __m128i *v8; // rbx
  __int64 (*v9)(); // rax
  int v10; // eax
  __int64 (*v12)(); // rax
  __m128i *v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // [rsp+8h] [rbp-D0h]
  __int64 (***v16)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v17)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v18)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v19)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v20)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v21)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v22)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v23)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v24)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v25)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v26)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v27)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v28)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v29)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v30)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v31)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v32)(); // [rsp+18h] [rbp-C0h]
  __int64 (***v33)(); // [rsp+18h] [rbp-C0h]
  __int64 v34; // [rsp+28h] [rbp-B0h] BYREF
  __m128i v35; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+40h] [rbp-98h]
  __m128i v37; // [rsp+50h] [rbp-88h]
  __m128i v38; // [rsp+60h] [rbp-78h]
  __m128i v39; // [rsp+70h] [rbp-68h]
  __m128i v40; // [rsp+80h] [rbp-58h] BYREF
  __int64 v41; // [rsp+90h] [rbp-48h]
  unsigned __int64 v42; // [rsp+98h] [rbp-40h]

  v2 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 136) + *(_QWORD *)(a1 + 144);
  v42 = __readfsqword(0x28u);
  v15 = v4;
  while ( v3 < *(_QWORD *)(a1 + 208) )
  {
    while ( 1 )
    {
      v5 = *(_BYTE *)(a1 + 160) == 0;
      v6 = *(const __m128i **)(*(_QWORD *)(a1 + 200) + 8 * v3);
      v34 = v6->m128i_i64[0];
      if ( !v5 )
        sub_7ED50((unsigned int *)&v34);
      v7 = HIDWORD(v34);
      v8 = (__m128i *)((char *)v6 + HIDWORD(v34));
      if ( v15 < (unsigned __int64)v8 || v6 >= v8 )
      {
        sub_17110((__int64)"Inconsistency in load commands");
        return 0;
      }
      v9 = **v2;
      if ( v9 != sub_12D00 )
      {
        v16 = v2;
        v10 = ((__int64 (__fastcall *)(__int64 (***)(), __int64 *, const __m128i *, __int8 *))v9)(
                v2,
                &v34,
                v6,
                &v6->m128i_i8[HIDWORD(v34)]);
        v2 = v16;
        if ( v10 == 2 )
          goto LABEL_19;
        if ( v10 )
          return 1;
      }
      if ( (unsigned int)v34 > 0x32 )
      {
        switch ( (unsigned int)v34 )
        {
          case 0x80000018:
          case 0x8000001F:
          case 0x80000023:
LABEL_42:
            if ( v7 <= 0x17 )
            {
              v36.m128i_i64[0] = 0;
              v35 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36.m128i_i64[0] = v6[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v36.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v36.m128i_u32[0], v36.m128i_u32[1]));
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            }
            v23 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[9])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v23;
            goto LABEL_27;
          case 0x8000001C:
            v13 = &v35;
            if ( v7 <= 0xB )
            {
              v35.m128i_i64[0] = 0;
              v35.m128i_i32[2] = 0;
            }
            else
            {
              v35.m128i_i64[0] = v6->m128i_i64[0];
              v35.m128i_i32[2] = v6->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i32[2] = _byteswap_ulong(v35.m128i_u32[2]);
            }
            v12 = (*v2)[21];
            if ( v12 != sub_12E40 )
              goto LABEL_25;
            ++v3;
            break;
          case 0x80000022:
LABEL_138:
            if ( v7 <= 0x2F )
            {
              v35 = 0;
              v36 = 0;
              v37 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36 = _mm_loadu_si128(v6 + 1);
              v37 = _mm_loadu_si128(v6 + 2);
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
              v36 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v36.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v36.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v36.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v36.m128i_u32[3]))));
              v37 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v37.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v37.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v37.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v37.m128i_u32[3]))));
            }
            v29 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[25])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v29;
            goto LABEL_27;
          case 0x80000028:
            if ( v7 <= 0x17 )
            {
              v36.m128i_i64[0] = 0;
              v35 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36.m128i_i64[0] = v6[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i64[1] = _byteswap_uint64(v35.m128i_u64[1]);
              v36.m128i_i64[0] = _byteswap_uint64(v36.m128i_u64[0]);
            }
            v33 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[30])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v33;
            goto LABEL_27;
          case 0x80000033:
          case 0x80000034:
LABEL_32:
            if ( v7 <= 0xF )
              v35 = 0;
            else
              v35 = _mm_loadu_si128(v6);
            if ( *(_BYTE *)(a1 + 160) )
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            v21 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[22])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v21;
            goto LABEL_27;
          case 0x80000035:
            if ( v7 <= 0x1F )
            {
              v35 = 0;
              v36 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36 = _mm_loadu_si128(v6 + 1);
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v36.m128i_i64[0] = v35.m128i_i64[1];
              v35.m128i_i64[1] = _byteswap_uint64(v35.m128i_u64[1]);
              v36.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v36.m128i_u32[2], v36.m128i_u32[3]));
            }
            v32 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[31])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v32;
            goto LABEL_27;
          default:
            goto LABEL_23;
        }
        goto LABEL_20;
      }
      if ( (_DWORD)v34 )
      {
        switch ( (int)v34 )
        {
          case 1:
            v19 = v2;
            v14 = sub_8E0E0(v6, (unsigned __int64)v8, (__int64)v2, *(_BYTE *)(a1 + 160));
            v2 = v19;
            goto LABEL_27;
          case 2:
            if ( v7 <= 0x17 )
            {
              v36.m128i_i64[0] = 0;
              v35 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36.m128i_i64[0] = v6[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v36.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v36.m128i_u32[0], v36.m128i_u32[1]));
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            }
            v26 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[2])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v26;
            goto LABEL_27;
          case 3:
            if ( v7 <= 0xF )
              v35 = 0;
            else
              v35 = _mm_loadu_si128(v6);
            if ( *(_BYTE *)(a1 + 160) )
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            v12 = (*v2)[3];
            if ( v12 != sub_12D30 )
              goto LABEL_73;
            ++v3;
            goto LABEL_20;
          case 4:
          case 5:
            if ( v7 <= 7 )
              v35.m128i_i64[0] = 0;
            else
              v35.m128i_i64[0] = v6->m128i_i64[0];
            if ( *(_BYTE *)(a1 + 160) )
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
            v25 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[4])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v25;
            goto LABEL_27;
          case 6:
          case 7:
            v13 = &v35;
            if ( v7 <= 0x13 )
            {
              v36.m128i_i32[0] = 0;
              v35 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36.m128i_i32[0] = v6[1].m128i_i32[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v36.m128i_i32[0] = _byteswap_ulong(v36.m128i_u32[0]);
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            }
            v12 = (*v2)[5];
            if ( v12 != sub_12D50 )
              goto LABEL_25;
            ++v3;
            goto LABEL_20;
          case 8:
            if ( v7 <= 7 )
              v35.m128i_i64[0] = 0;
            else
              v35.m128i_i64[0] = v6->m128i_i64[0];
            if ( *(_BYTE *)(a1 + 160) )
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
            v12 = (*v2)[6];
            if ( v12 != sub_12D60 )
              goto LABEL_73;
            ++v3;
            goto LABEL_20;
          case 9:
            if ( v7 <= 0xF )
              v35 = 0;
            else
              v35 = _mm_loadu_si128(v6);
            if ( *(_BYTE *)(a1 + 160) )
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            v12 = (*v2)[7];
            if ( v12 != sub_12D70 )
              goto LABEL_73;
            ++v3;
            goto LABEL_20;
          case 11:
            if ( v7 <= 0x4F )
            {
              v35 = 0;
              v36 = 0;
              v37 = 0;
              v38 = 0;
              v39 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36 = _mm_loadu_si128(v6 + 1);
              v37 = _mm_loadu_si128(v6 + 2);
              v38 = _mm_loadu_si128(v6 + 3);
              v39 = _mm_loadu_si128(v6 + 4);
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[2], v35.m128i_u32[3]));
              v36.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v36.m128i_u32[0], v36.m128i_u32[1]));
              v36.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v36.m128i_u32[2], v36.m128i_u32[3]));
              v37.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v37.m128i_u32[0], v37.m128i_u32[1]));
              v37.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v37.m128i_u32[2], v37.m128i_u32[3]));
              v38.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[0], v38.m128i_u32[1]));
              v38.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v38.m128i_u32[2], v38.m128i_u32[3]));
              v39.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v39.m128i_u32[0], v39.m128i_u32[1]));
              v39.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v39.m128i_u32[2], v39.m128i_u32[3]));
            }
            v30 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[8])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v30;
            goto LABEL_27;
          case 12:
          case 13:
          case 32:
            goto LABEL_42;
          case 14:
          case 15:
          case 39:
            if ( v7 <= 0xB )
            {
              v35.m128i_i64[0] = 0;
              v35.m128i_i32[2] = 0;
            }
            else
            {
              v35.m128i_i64[0] = v6->m128i_i64[0];
              v35.m128i_i32[2] = v6->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i32[2] = _byteswap_ulong(v35.m128i_u32[2]);
            }
            v24 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[10])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v24;
            goto LABEL_27;
          case 16:
            v13 = &v35;
            if ( v7 <= 0x13 )
            {
              v36.m128i_i32[0] = 0;
              v35 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36.m128i_i32[0] = v6[1].m128i_i32[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v36.m128i_i32[0] = _byteswap_ulong(v36.m128i_u32[0]);
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            }
            v12 = (*v2)[11];
            if ( v12 != sub_12DB0 )
              goto LABEL_25;
            ++v3;
            goto LABEL_20;
          case 17:
            v13 = &v35;
            if ( v7 <= 0x27 )
            {
              v37.m128i_i64[0] = 0;
              v35 = 0;
              v36 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36 = _mm_loadu_si128(v6 + 1);
              v37.m128i_i64[0] = v6[2].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
              v37.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v37.m128i_u32[0], v37.m128i_u32[1]));
              v36 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v36.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v36.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v36.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v36.m128i_u32[3]))));
            }
            v12 = (*v2)[12];
            if ( v12 != sub_12DC0 )
              goto LABEL_25;
            ++v3;
            goto LABEL_20;
          case 18:
            v13 = &v35;
            if ( v7 <= 0xB )
            {
              v35.m128i_i64[0] = 0;
              v35.m128i_i32[2] = 0;
            }
            else
            {
              v35.m128i_i64[0] = v6->m128i_i64[0];
              v35.m128i_i32[2] = v6->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i32[2] = _byteswap_ulong(v35.m128i_u32[2]);
            }
            v12 = (*v2)[13];
            if ( v12 != sub_12DD0 )
              goto LABEL_25;
            ++v3;
            goto LABEL_20;
          case 19:
            v13 = &v35;
            if ( v7 <= 0xB )
            {
              v35.m128i_i64[0] = 0;
              v35.m128i_i32[2] = 0;
            }
            else
            {
              v35.m128i_i64[0] = v6->m128i_i64[0];
              v35.m128i_i32[2] = v6->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i32[2] = _byteswap_ulong(v35.m128i_u32[2]);
            }
            v12 = (*v2)[14];
            if ( v12 != sub_12DE0 )
              goto LABEL_25;
            ++v3;
            goto LABEL_20;
          case 20:
            v13 = &v35;
            if ( v7 <= 0xB )
            {
              v35.m128i_i64[0] = 0;
              v35.m128i_i32[2] = 0;
            }
            else
            {
              v35.m128i_i64[0] = v6->m128i_i64[0];
              v35.m128i_i32[2] = v6->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i32[2] = _byteswap_ulong(v35.m128i_u32[2]);
            }
            v12 = (*v2)[15];
            if ( v12 != sub_12DF0 )
              goto LABEL_25;
            ++v3;
            goto LABEL_20;
          case 21:
            v13 = &v35;
            if ( v7 <= 0xB )
            {
              v35.m128i_i64[0] = 0;
              v35.m128i_i32[2] = 0;
            }
            else
            {
              v35.m128i_i64[0] = v6->m128i_i64[0];
              v35.m128i_i32[2] = v6->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i32[2] = _byteswap_ulong(v35.m128i_u32[2]);
            }
            v12 = (*v2)[16];
            if ( v12 != sub_12E00 )
              goto LABEL_25;
            ++v3;
            goto LABEL_20;
          case 22:
            if ( v7 <= 0xF )
              v35 = 0;
            else
              v35 = _mm_loadu_si128(v6);
            if ( *(_BYTE *)(a1 + 160) )
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            v12 = (*v2)[17];
            if ( v12 == sub_12E10 )
              goto LABEL_19;
            goto LABEL_73;
          case 23:
            v13 = &v35;
            if ( v7 <= 0xB )
            {
              v35.m128i_i64[0] = 0;
              v35.m128i_i32[2] = 0;
            }
            else
            {
              v35.m128i_i64[0] = v6->m128i_i64[0];
              v35.m128i_i32[2] = v6->m128i_i32[2];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i32[2] = _byteswap_ulong(v35.m128i_u32[2]);
            }
            v12 = (*v2)[18];
            if ( v12 != sub_12E20 )
              goto LABEL_25;
            ++v3;
            goto LABEL_20;
          case 25:
            v18 = v2;
            v14 = sub_8E3F0(v6, (unsigned __int64)v8, (__int64)v2, *(_BYTE *)(a1 + 160));
            v2 = v18;
            goto LABEL_27;
          case 26:
            v13 = &v35;
            if ( v7 <= 0x47 )
            {
              v39.m128i_i64[0] = 0;
              v35 = 0;
              v36 = 0;
              v37 = 0;
              v38 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36 = _mm_loadu_si128(v6 + 1);
              v37 = _mm_loadu_si128(v6 + 2);
              v38 = _mm_loadu_si128(v6 + 3);
              v39.m128i_i64[0] = v6[4].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i64[1] = _byteswap_uint64(v35.m128i_u64[1]);
              v36.m128i_i64[0] = _byteswap_uint64(v36.m128i_u64[0]);
              v36.m128i_i64[1] = _byteswap_uint64(v36.m128i_u64[1]);
              v37.m128i_i64[0] = _byteswap_uint64(v37.m128i_u64[0]);
              v37.m128i_i64[1] = _byteswap_uint64(v37.m128i_u64[1]);
              v38.m128i_i64[0] = _byteswap_uint64(v38.m128i_u64[0]);
              v38.m128i_i64[1] = _byteswap_uint64(v38.m128i_u64[1]);
              v39.m128i_i64[0] = _byteswap_uint64(v39.m128i_u64[0]);
            }
            v12 = (*v2)[19];
            if ( v12 != sub_12E30 )
              goto LABEL_25;
            ++v3;
            goto LABEL_20;
          case 27:
            if ( v7 <= 0x17 )
            {
              v41 = 0;
              v40 = 0;
            }
            else
            {
              v40 = _mm_loadu_si128(v6);
              v41 = v6[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
              v40.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v40.m128i_u32[0], v40.m128i_u32[1]));
            v27 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[20])(
                    v2,
                    &v40,
                    v6,
                    v8);
            v2 = v27;
            goto LABEL_27;
          case 29:
          case 30:
          case 38:
          case 41:
          case 43:
            goto LABEL_32;
          case 33:
            if ( v7 <= 0x13 )
            {
              v36.m128i_i32[0] = 0;
              v35 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36.m128i_i32[0] = v6[1].m128i_i32[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v36.m128i_i32[0] = _byteswap_ulong(v36.m128i_u32[0]);
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            }
            v28 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[23])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v28;
            goto LABEL_27;
          case 34:
            goto LABEL_138;
          case 36:
          case 37:
          case 47:
          case 48:
            if ( v7 <= 0xF )
              v35 = 0;
            else
              v35 = _mm_loadu_si128(v6);
            if ( *(_BYTE *)(a1 + 160) )
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            v22 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[26])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v22;
            goto LABEL_27;
          case 42:
            if ( v7 <= 0xF )
              v35 = 0;
            else
              v35 = _mm_loadu_si128(v6);
            if ( *(_BYTE *)(a1 + 160) )
            {
              v35.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v35.m128i_u32[0], v35.m128i_u32[1]));
              v35.m128i_i64[1] = _byteswap_uint64(v35.m128i_u64[1]);
            }
            v12 = (*v2)[29];
            if ( v12 == sub_12EC0 )
              goto LABEL_19;
LABEL_73:
            v13 = &v35;
            goto LABEL_25;
          case 44:
            if ( v7 <= 0x17 )
            {
              v36.m128i_i64[0] = 0;
              v35 = 0;
            }
            else
            {
              v35 = _mm_loadu_si128(v6);
              v36.m128i_i64[0] = v6[1].m128i_i64[0];
            }
            if ( *(_BYTE *)(a1 + 160) )
            {
              v36.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v36.m128i_u32[0], v36.m128i_u32[1]));
              v35 = _mm_unpacklo_epi64(
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[0])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[1]))),
                      _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[2])),
                        _mm_cvtsi32_si128(_byteswap_ulong(v35.m128i_u32[3]))));
            }
            v31 = v2;
            v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))(*v2)[24])(
                    v2,
                    &v35,
                    v6,
                    v8);
            v2 = v31;
            goto LABEL_27;
          case 50:
            v20 = v2;
            v14 = sub_82740(v6, v8, (__int64)v2, *(_BYTE *)(a1 + 160));
            v2 = v20;
            goto LABEL_27;
          default:
            break;
        }
      }
LABEL_23:
      v12 = (*v2)[1];
      if ( v12 != sub_12D10 )
        break;
LABEL_19:
      ++v3;
LABEL_20:
      if ( v3 >= *(_QWORD *)(a1 + 208) )
        return 0;
    }
    v13 = (__m128i *)&v34;
LABEL_25:
    v17 = v2;
    v14 = ((__int64 (__fastcall *)(__int64 (***)(), __m128i *, const __m128i *, __m128i *))v12)(v2, v13, v6, v8);
    v2 = v17;
LABEL_27:
    ++v3;
    if ( v14 )
      return 1;
  }
  return 0;
}
