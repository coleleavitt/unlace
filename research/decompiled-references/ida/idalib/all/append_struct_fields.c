__int64 __fastcall append_struct_fields(
        __int64 (__fastcall **a1)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD),
        __m128i *a2,
        int a3,
        void *a4,
        int a5,
        __int64 a6,
        unsigned __int64 a7,
        char a8)
{
  char v12; // r9
  __int64 v13; // r15
  __int64 (__fastcall **v14)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __m128i *v15; // r8
  void *v17; // rdi
  __m128i v18; // xmm0
  __m128i *v19; // [rsp+0h] [rbp-78h]
  int v20; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v21[3])(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v12 = a8;
  v13 = *(_QWORD *)(qword_2CCB598 + 1672);
  v14 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v13;
  v15 = *(__m128i **)(*(_QWORD *)v13 + 1720LL);
  if ( a3 == v15[3].m128i_i32[3] && !v15[3].m128i_i32[2] )
  {
    if ( a5 > 0 )
    {
      v17 = (void *)v15[4].m128i_i64[0];
      if ( v17 )
      {
        v19 = *(__m128i **)(*(_QWORD *)v13 + 1720LL);
        v20 = a5;
        memcpy(v17, a4, 8LL * a5);
        v12 = a8;
        v15 = v19;
        a5 = v20;
      }
    }
    v15[4].m128i_i32[2] = a5;
    v18 = _mm_loadl_epi64(a2);
    v15[3].m128i_i32[2] = 1;
    v15[5] = _mm_unpacklo_epi64(v18, (__m128i)a7);
    v14 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v13;
  }
  a2->m128i_i64[0] += a7;
  v21[0] = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))off_2B2CEE8;
  v21[1] = v14;
  v21[2] = a1;
  v22 = a6;
  sub_3CB360(v13, v21, (__int64 *)a4, a5, a2, v12);
  a2->m128i_i64[0] -= a7;
  return v22;
}
