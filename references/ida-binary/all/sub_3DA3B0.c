__int64 __fastcall sub_3DA3B0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  QT::QAbstractScrollArea *v14; // rdi
  __int64 v15; // r12
  __int64 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // [rsp+0h] [rbp-D8h]
  __int64 v24; // [rsp+8h] [rbp-D0h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+10h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-C0h]
  __int128 v27; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-A8h]
  int v29; // [rsp+38h] [rbp-A0h]
  __int64 v30; // [rsp+40h] [rbp-98h]
  __int128 v31; // [rsp+48h] [rbp-90h]
  __m128i si128; // [rsp+58h] [rbp-80h] BYREF
  int v33; // [rsp+68h] [rbp-70h]
  char v34; // [rsp+70h] [rbp-68h]
  __int64 v35; // [rsp+78h] [rbp-60h]
  int v36; // [rsp+80h] [rbp-58h]
  __int64 v37; // [rsp+88h] [rbp-50h]
  __int128 v38; // [rsp+90h] [rbp-48h]
  __int64 v39; // [rsp+A0h] [rbp-38h]
  char v40; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v41; // [rsp+B8h] [rbp-20h]

  v41 = __readfsqword(0x28u);
  v24 = -1;
  if ( !qword_8CD7E8 )
    goto LABEL_13;
  v31 = 0;
  LODWORD(v27) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
  a1 = 0;
  *((_QWORD *)&v27 + 1) = 0;
  v28 = -1;
  v29 = -1;
  v30 = 0;
  v33 = -1;
  v34 = 0;
  v35 = -1;
  v36 = -2;
  v37 = -1;
  v39 = 0xFFFFFFFFLL;
  v40 = 0;
  v38 = 0;
  sub_1ED900(qword_8CD7E8, &v27, 2, a12, 0.0);
  if ( (_DWORD)v27 != 5 )
  {
    if ( v36 < -1 )
      goto LABEL_6;
    goto LABEL_4;
  }
  v21 = si128.m128i_i64[0];
  if ( si128.m128i_i64[0] == -1 )
    v21 = v35;
  v24 = v21;
  if ( v36 >= -1 )
  {
LABEL_4:
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      *(double *)a1.m128_u64 = qfree(v37, (const char *)&v27);
    }
  }
LABEL_6:
  clear_tinfo_t(&si128.m128i_u64[1]);
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    *(double *)a1.m128_u64 = qfree(v30, (const char *)&v27);
  }
  if ( v24 == -1 )
  {
LABEL_13:
    v24 = xmmword_8CC810;
    if ( !(unsigned __int8)sub_3757B0(
                             (int)&v24,
                             (int)"Please enter the watch address",
                             a11,
                             a12,
                             a13,
                             a14,
                             a1,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7,
                             a8,
                             v23)
      || v24 == -1 )
    {
      return 1;
    }
  }
  sub_3DA260(
    *(double *)a1.m128_u64,
    *(double *)a2.m128_u64,
    a3,
    a4,
    *(double *)a5.m128_u64,
    *(double *)a6.m128_u64,
    a7,
    a8);
  v25 = (__int64 (__fastcall **)())(&dword_0 + 1);
  netnode_supset(qword_8D0C88, v24, &v25, 8, 321);
  v14 = qword_8D0C80;
  v15 = v24;
  v16 = *((__int64 **)qword_8D0C80 + 91);
  v17 = v16[1];
  v18 = *v16;
  if ( v16[2] < (unsigned __int64)(v17 + 1) )
  {
    v22 = qvector_reserve(*((_QWORD *)qword_8D0C80 + 91), v18, v17 + 1, 8);
    v14 = qword_8D0C80;
    v17 = v16[1];
    *v16 = v22;
    v18 = v22;
  }
  *(_QWORD *)(v18 + 8 * v17) = v15;
  ++v16[1];
  v25 = watchplace_t___vtable;
  v26 = 0x22B00000000LL;
  v19 = *(_QWORD *)(*((_QWORD *)v14 + 91) + 8LL);
  LODWORD(v26) = 0x7FFFFFFF;
  HIDWORD(v26) = ((_DWORD)v19 == 0) + (_DWORD)v19 - 1;
  sub_1EB140(v14, *((const char **)v14 + 115), (__int64)&v25);
  (*(void (__fastcall **)(QT::QAbstractScrollArea *, __int64, __int64))(*(_QWORD *)qword_8D0C80 + 536LL))(
    qword_8D0C80,
    2,
    1);
  return 1;
}
