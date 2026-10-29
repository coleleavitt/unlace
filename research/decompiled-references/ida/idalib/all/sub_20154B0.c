__int64 __fastcall sub_20154B0(__int64 a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebp
  bool v7; // zf
  _DWORD v9[11]; // [rsp+14h] [rbp-2Ch] BYREF

  v9[0] = 0;
  v6 = sub_2213200((int)a1 + 144, a1, a3, a4, a5, a6, (__int64)v9);
  if ( !(_BYTE)v6 )
  {
    **(_DWORD **)(a1 + 120) = v9[0];
    v7 = *(_QWORD *)(a1 + 168) == 0;
    *(_WORD *)(a1 + 12) = a2;
    if ( v7 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 176))(a1 + 152, v9);
  }
  return v6;
}
