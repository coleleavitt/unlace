__int64 __fastcall sub_BDF650(__int64 a1)
{
  __m128i v1; // xmm0
  _QWORD *v3; // rax
  __m128i v4; // [rsp+0h] [rbp-58h] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h]
  __m128i v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]

  sub_EC6110(&v6, a1);
  v1 = _mm_load_si128(&v6);
  v5 = v7;
  v4 = v1;
  if ( (v1.m128i_i8[8] & 3) == 0 )
    return sub_EC8400(*(_QWORD *)v1.m128i_i64[0]);
  v3 = (_QWORD *)sub_ECEDF0(&v4);
  return sub_EC8400(*v3);
}

