void __fastcall sub_2A9EE0(double a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r12

  if ( (_QWORD)xmmword_8CB528 )
  {
    v5 = 0;
    do
    {
      v6 = 8 * v5;
      v7 = *(_QWORD *)(qword_8CB520 + 8 * v5);
      if ( (unsigned int)sub_1EB590(v7, a3, a4, a5, a1) == 2 )
      {
        if ( *(_QWORD *)(v7 + 896) )
          sub_2A9D90(*(_QWORD *)(*(_QWORD *)(qword_8CB520 + 8 * v5) + 896LL));
      }
      ++v5;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(qword_8CB520 + v6) + 760LL))(*(_QWORD *)(qword_8CB520 + v6));
    }
    while ( v5 < (unsigned __int64)xmmword_8CB528 );
  }
}
