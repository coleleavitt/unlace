__int64 __fastcall sub_E1CCC0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 v7; // rbp
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *a1;
  v9[0] = 0;
  sub_1863170(v9, v6);
  sub_1863170(v9, a3);
  if ( !*(_QWORD *)(v6 + 24) )
    std::__throw_bad_function_call();
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, __int64))(v6 + 32))(v6 + 8, a2, v9, a4);
  sub_18572D0(v9);
  return v7;
}

