void __fastcall sub_19EA30(char *a1)
{
  char *v1; // rbx

  v1 = *((char **)a1 + 5);
  for ( *(__m128i *)a1 = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)&off_2355F0),
                           (__m128i)(unsigned __int64)&off_22E4D8); a1 + 24 != v1; v1 = (char *)std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD *, char *))(**((_QWORD **)v1 + 4) + 32LL))(*((_QWORD **)v1 + 4), a1 + 8);
  sub_19E7F0(*((_QWORD **)a1 + 4));
  operator delete(a1, 0x58u);
}

