void __fastcall sub_3C6AF0(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rax

  if ( !*(_BYTE *)(a1 + 112) )
  {
    v11 = *(_QWORD *)(a1 + 104);
    if ( v11 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v11 + 1000) + 57LL) )
        sub_3C67A0(a1, *(_DWORD *)(*(_QWORD *)(a11 + 40) + 12LL), 5, a2, a3, a4, a5, a6, a7, a8, a9);
    }
  }
}
