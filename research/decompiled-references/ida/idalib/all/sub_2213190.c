__int64 __fastcall sub_2213190(__int64 a1, __int16 a2, __int64 a3, __int64 a4, char *a5, size_t a6)
{
  unsigned int v6; // ebp
  char v7; // al
  bool v8; // zf
  _BYTE v10[41]; // [rsp+Fh] [rbp-29h] BYREF

  v10[0] = 0;
  v6 = sub_2212E20(a1, a5, a6, v10);
  if ( !(_BYTE)v6 )
  {
    v7 = v10[0];
    v8 = *(_QWORD *)(a1 + 168) == 0;
    *(_WORD *)(a1 + 12) = a2;
    *(_BYTE *)(a1 + 120) = v7;
    if ( v8 )
      std::__throw_bad_function_call();
    (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 176))(a1 + 152, v10);
  }
  return v6;
}
