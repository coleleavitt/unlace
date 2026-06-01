void __fastcall sub_19F5C0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  for ( *(__m128i *)a1 = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)&off_2365F0),
                           (__m128i)(unsigned __int64)&off_22F558); a1 + 24 != v1; v1 = std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 32) + 32LL))(*(_QWORD *)(v1 + 32), a1 + 8);
  sub_19F3F0(*(_QWORD **)(a1 + 32));
}

