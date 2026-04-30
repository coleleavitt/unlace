void __fastcall sub_198540(__m128i *this, int a2, __int64 a3, double a4, double a5, __m128 a6, __int64 a7, int a8)
{
  __int64 v9; // rdi
  int v11; // r13d

  if ( a8 != 2 )
  {
    v9 = *((_QWORD *)this + 321);
    if ( v9 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 112LL))(v9);
      if ( v11 == (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a3 + 40) + 112LL))(*(_QWORD *)(a3 + 40)) )
        sub_1983D0(this, a2, a4, a5, a6);
    }
  }
}
