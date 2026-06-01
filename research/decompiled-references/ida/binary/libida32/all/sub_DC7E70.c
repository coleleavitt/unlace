__int64 __fastcall sub_DC7E70(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __m128i v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  __m128i v7; // [rsp+0h] [rbp-98h] BYREF
  __m128i v8; // [rsp+10h] [rbp-88h] BYREF
  __m128i v9; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v10[4]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v11[9]; // [rsp+50h] [rbp-48h] BYREF

  v1 = a1[22];
  v7 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v1, 16));
  sub_DFDA50(v1, 16);
  v9 = _mm_load_si128(&v7);
  v2 = sub_21D4FB0(v9.m128i_u32[2]);
  v3.m128i_i64[0] = sub_D1E4A0(a1, v2);
  v8 = v3;
  sub_CDADA0((__int64)v10, (__int64)&v9);
  v5 = sub_21D5390(v10, &v9, v4);
  if ( v10[0] == v5 )
  {
    sub_21DC120(v11, v10);
    if ( v11[0] != v5 )
      goto LABEL_3;
LABEL_6:
    sub_21DC230(v11);
    goto LABEL_4;
  }
  sub_21D5A60(v11, v10);
  if ( v11[0] == v5 )
    goto LABEL_6;
LABEL_3:
  sub_21D66D0(v11);
LABEL_4:
  sub_CDAFD0((__int64)&v8, v11);
  sub_971860(v11);
  sub_971860(v10);
  *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v8);
  return 1;
}

