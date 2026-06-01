__int64 __fastcall sub_20BF1F0(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // rax
  bool v3; // zf
  _DWORD v5[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 16) == 0;
  v5[0] = *a2;
  if ( v3 )
    std::__throw_bad_function_call();
  return (*(__int64 (__fastcall **)(__int64, _DWORD *))(v2 + 24))(v2, v5);
}
