__int64 __fastcall sub_277C90(__int64 a1, int a2)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(v2 + 64);
  if ( a2 == 2 )
    return v3 != 1;
  result = 2;
  if ( a2 != 3 )
  {
    result = 0xFFFFFFFFLL;
    if ( a2 == 1 )
      return v3 != 0;
  }
  return result;
}
