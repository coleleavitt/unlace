void __fastcall sub_655550(__int64 a1, double a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  void *v5; // rbp

  v3 = *(_QWORD *)(a1 + 8);
  sub_63ECD0((__m128i *)(v3 + 2360), *(_QWORD *)(a1 + 16), a2);
  v4 = *(_QWORD *)(v3 + 2968);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 256LL))(v4, v3 + 2288);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
  {
    sub_63D960(*(_QWORD *)(a1 + 16));
    sub_186B220(v5);
  }
  *(_QWORD *)(a1 + 16) = 0;
}

