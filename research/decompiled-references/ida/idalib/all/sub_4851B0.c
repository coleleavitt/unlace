unsigned __int64 __fastcall sub_4851B0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 *v10; // rdi
  __int64 v11; // rax
  __m128i v13; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-58h] BYREF
  __m128i v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v16 = __readfsqword(0x28u);
  v13 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2C3D8), (__m128i)(unsigned __int64)sub_483220);
  if ( a3 != a2[1] )
    sub_481440(a2, a3);
  if ( a3 > 0 )
  {
    v6 = v4 + 4 * v3;
    v7 = 0;
    do
    {
      v8 = switch_dbctx(*(int *)(v4 + 16));
      v9 = _mm_load_si128(&v13);
      v14[1] = 0;
      v10 = *(__int64 **)(v8 + 1672);
      v11 = *a2;
      v15 = v9;
      v14[0] = v7 + v11;
      sub_47FAE0(v10, (__int64)v14);
      if ( v15.m128i_i64[0] )
        ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v15.m128i_i64[0])(v14, v14, 3);
      v4 += 4;
      v7 += 24;
    }
    while ( v4 != v6 );
  }
  return v16 - __readfsqword(0x28u);
}
