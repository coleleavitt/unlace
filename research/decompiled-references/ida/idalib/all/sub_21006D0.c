__int64 __fastcall sub_21006D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  char v3; // dl
  bool v4; // zf
  char v6[9]; // [rsp+Fh] [rbp-9h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v3 = 0;
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 88);
    v3 = 1;
  }
  v4 = *(_QWORD *)(a1 + 136) == 0;
  v6[0] = v3;
  if ( v4 )
    std::__throw_bad_function_call();
  return (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, __int64))(a1 + 144))(
           a1 + 120,
           a2,
           v6,
           v2,
           a1 + 96);
}
