unsigned __int64 __fastcall sub_3FF2D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  int v7; // eax
  int v8; // esi

  result = *(_QWORD *)(a1 + 376);
  if ( result )
  {
    v7 = result - 1;
    v8 = *(_DWORD *)(a1 + 384) - 1;
    if ( v8 < 0 )
      v8 = v7;
    *(_DWORD *)(a1 + 384) = v8;
    return sub_3FF1D0(a1, v8, a3, a4, a5, a6);
  }
  return result;
}
