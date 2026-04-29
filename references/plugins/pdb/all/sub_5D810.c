__int64 __fastcall sub_5D810(__int64 a1, _DWORD *a2)
{
  int v2; // edx
  __int64 result; // rax

  if ( !a2 )
    return 2147500037LL;
  v2 = *(_DWORD *)(a1 + 56);
  result = 1;
  if ( v2 != -1 )
  {
    *a2 = v2;
    return 0;
  }
  return result;
}
