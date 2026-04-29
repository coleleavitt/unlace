__int64 __fastcall sub_18980(__int64 a1, __int16 a2, const char *a3)
{
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r8

  result = *(_QWORD *)(a1 + 128);
  v4 = 32LL * *(_QWORD *)(a1 + 136);
  v5 = result + v4;
  if ( v4 )
  {
    while ( *(_WORD *)result != a2 )
    {
      result += 32;
      if ( result == v5 )
        return result;
    }
    if ( result )
      return sub_18450(a1, *(_DWORD *)(result + 24), *(_DWORD *)(result + 28), a3);
  }
  return result;
}
