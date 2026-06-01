__int64 *sub_573DF0()
{
  __m128i v0; // xmm1
  __int64 *result; // rax
  __int64 *v2; // rdx
  __m128i v3; // xmm0

  qword_4AE47A8 = 6;
  qword_4AE47B8 = 35;
  qword_4AE47A0 = (__int64)"erlang";
  v0 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_49D90D0), (__m128i)(unsigned __int64)&qword_4AE46E0);
  qword_4AE47B0 = (__int64)"erlang-compatible garbage collector";
  qword_4AE47C0 = (__int64)sub_2569620;
  qword_4AE47D0 = (__int64)&qword_4AE47A0;
  result = &qword_4AE43C0;
  qword_4AE47C8 = 0;
  v2 = (__int64 *)qword_4AE43C0;
  if ( !qword_4AE43C0 )
    v2 = &qword_4AE43C8;
  v3 = _mm_loadl_epi64((const __m128i *)off_49D90D8);
  *v2 = (__int64)&qword_4AE47C8;
  qword_4AE4760 = (__int64)"ocaml";
  qword_4AE4770 = (__int64)"ocaml 3.10-compatible GC";
  qword_4AE47C8 = (__int64)&xmmword_4AE4788;
  qword_4AE4780 = (__int64)sub_2569660;
  qword_4AE4720 = (__int64)"shadow-stack";
  qword_4AE4740 = (__int64)sub_25696A0;
  xmmword_4AE4788 = (__int128)_mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)&qword_4AE4760);
  qword_4AE4730 = (__int64)"Very portable GC for uncooperative code generators";
  qword_4AE46E0 = (__int64)"statepoint-example";
  qword_4AE4700 = (__int64)sub_25696F0;
  qword_4AE46F0 = (__int64)"an example strategy for statepoint";
  qword_4AE46A0 = (__int64)"coreclr";
  qword_4AE4768 = 5;
  qword_4AE4778 = 24;
  qword_4AE4728 = 12;
  qword_4AE4738 = 50;
  qword_4AE46E8 = 18;
  qword_4AE46F8 = 34;
  qword_4AE46A8 = 7;
  qword_4AE46B0 = (__int64)"CoreCLR-compatible GC";
  qword_4AE46B8 = 21;
  qword_4AE46C0 = (__int64)sub_2569730;
  qword_4AE46C8 = 0;
  qword_4AE46D0 = (__int64)&qword_4AE46A0;
  qword_4AE43C0 = (__int64)&qword_4AE46C8;
  xmmword_4AE4748 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49D90E0),
                                (__m128i)(unsigned __int64)&qword_4AE4720);
  xmmword_4AE4708 = (__int128)v0;
  return result;
}

