__int64 __fastcall sub_178E2A0(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 72);
  result = 0;
  if ( v1 )
  {
    *(_DWORD *)(a1 + 72) = v1 - 1;
    return 1;
  }
  return result;
}
