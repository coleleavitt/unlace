__int64 __fastcall xref_editor_t__::vfunc_4(__int64 a1, const char *a2)
{
  __m128i **v2; // rbp
  __int64 v4; // rdi

  v2 = (__m128i **)(a1 + 256);
  v4 = *(_QWORD *)(a1 + 256);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 264) = 0;
    qfree(v4, a2);
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  sub_3EBB40(v2, *(_QWORD *)(a1 + 216), *(_DWORD *)(a1 + 224), nullptr, 0, 1);
  return 1;
}
