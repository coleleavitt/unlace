unsigned __int64 __fastcall sub_3AF4D0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r14
  __m128i **v7; // rbx
  const __m128i *v8; // rdx
  __m128i v10; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v12[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v13 = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a2 + 4);
  v11[0] = -1;
  v11[1] = 0;
  v6 = v12;
  v12[0] = -1;
  v12[1] = 0;
  v10 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v5));
  sub_3AA670((__int64)v11, nullptr, (__int64)&v10, 0);
  sub_3AA670((__int64)v12, nullptr, (__int64)&v10, 0);
  if ( a3 )
    v6 = v11;
  v7 = (__m128i **)sub_3AF270((__int64)(v6 - 4));
  if ( v7 == (__m128i **)(**(_QWORD **)(qword_2CCB598 + 1576)
                        + 8LL * *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1576) + 8LL))
    || (unsigned int)compare_bpt_locs((__int64)(*v7)[2].m128i_i64, (__int64)v6) )
  {
    if ( !under_debugger )
      interr(40713);
    BUG();
  }
  v8 = (const __m128i *)v11;
  if ( a3 )
    v8 = (const __m128i *)v12;
  sub_3AF3E0(v7, (__int64)v6, v8, 1u);
  return v13 - __readfsqword(0x28u);
}
