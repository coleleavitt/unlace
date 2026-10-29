__int64 __fastcall sub_20FDE10(__int64 a1, __int16 a2)
{
  unsigned int v2; // ebp
  int v3; // eax
  bool v4; // zf
  _DWORD v6[11]; // [rsp+14h] [rbp-2Ch] BYREF

  v6[0] = 0;
  v2 = sub_2213510(a1 + 144, a1);
  if ( !(_BYTE)v2 )
  {
    v3 = v6[0];
    v4 = *(_QWORD *)(a1 + 168) == 0;
    *(_WORD *)(a1 + 12) = a2;
    *(_DWORD *)(a1 + 120) = v3;
    if ( v4 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 176))(a1 + 152, v6);
  }
  return v2;
}
