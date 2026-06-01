unsigned __int64 __fastcall sub_3E48D0(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned __int8 a5, int a6)
{
  __int64 v9; // rdi
  __int64 v11; // [rsp+18h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v13; // [rsp+30h] [rbp-50h]
  unsigned __int64 v14; // [rsp+48h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  v11 = 0;
  if ( (unsigned __int8)get_type_by_tid(&v11, a3) )
  {
    v12[1] = a2;
    v12[0] = a1;
    v9 = *(_QWORD *)(a1 + 1672);
    v13 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B26670), (__m128i)(unsigned __int64)sub_3E0C40);
    sub_412EA0(v9, (unsigned int)&v11, a4, a6, a5, (unsigned int)v12, 0);
    if ( v13.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v13.m128i_i64[0])(v12, v12, 3);
  }
  clear_tinfo_t(&v11);
  return v14 - __readfsqword(0x28u);
}
