__int64 __fastcall sub_2012B10(__int64 a1, __int16 a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebp
  int v7; // xmm0_4
  bool v8; // zf
  __int64 v10; // [rsp-8h] [rbp-48h]
  _DWORD v11[11]; // [rsp+14h] [rbp-2Ch] BYREF

  v11[0] = 0;
  v6 = sub_2213960((int)a1 + 144, a1, a3, a4, a5, a6, (__int64)v11);
  if ( !(_BYTE)v6 )
  {
    v7 = v11[0];
    v8 = *(_QWORD *)(a1 + 168) == 0;
    *(_WORD *)(a1 + 12) = a2;
    *(_DWORD *)(a1 + 120) = v7;
    if ( v8 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, _DWORD *, __int64))(a1 + 176))(a1 + 152, v11, v10);
  }
  return v6;
}
