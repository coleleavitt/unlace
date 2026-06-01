void __fastcall sub_64C430(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rdi

  sub_63ECD0((__m128i *)(a1 + 2360), a2, a3);
  v4 = *(_QWORD *)(a1 + 2968);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 256LL))(v4, a1 + 2288);
}

