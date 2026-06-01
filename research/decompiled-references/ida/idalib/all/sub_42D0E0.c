char *__fastcall sub_42D0E0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rax
  int v7[4]; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v8; // [rsp+10h] [rbp-A8h] BYREF
  int v9[4]; // [rsp+20h] [rbp-98h]
  int v10[2]; // [rsp+30h] [rbp-88h] BYREF
  int v11[4]; // [rsp+38h] [rbp-80h] BYREF
  int v12[4]; // [rsp+48h] [rbp-70h]
  int v13[4]; // [rsp+58h] [rbp-60h]
  void *v14[2]; // [rsp+68h] [rbp-50h]
  int v15[4]; // [rsp+78h] [rbp-40h]
  void *v16; // [rsp+88h] [rbp-30h]

  v3 = *(_QWORD **)(a2 + 1672);
  v16 = (void *)__readfsqword(0x28u);
  *(_OWORD *)v12 = 0;
  *(_OWORD *)v13 = 0;
  *(_OWORD *)v14 = 0;
  *(_OWORD *)v15 = 0;
  *(_OWORD *)v11 = 0;
  *(_QWORD *)v10 = v3;
  sub_630CA0(*v3, 26, v11, 16);
  v5 = *(_QWORD **)(a2 + 1672);
  *(_OWORD *)v7 = 0;
  sub_630CA0(*v5, 26, v7, 16);
  v8.m128i_i64[0] = a3;
  v8.m128i_i64[1] = (__int64)v10;
  *(__m128i *)v9 = _mm_unpacklo_epi64(
                     _mm_loadl_epi64((const __m128i *)&off_2B28620),
                     (__m128i)(unsigned __int64)sub_42F560);
  sub_42C840(a2, (unsigned __int64 *)v7, &v8);
  if ( *(_QWORD *)v9 )
    (*(void (__fastcall **)(__m128i *, __m128i *, __int64))v9)(&v8, &v8, 3);
  return (char *)v16 - __readfsqword(0x28u);
}
