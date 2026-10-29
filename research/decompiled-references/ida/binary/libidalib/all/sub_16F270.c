__int64 __fastcall sub_16F270(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a2 + 12);
  result = 0;
  if ( v2 != v3 )
    return v3 < v2 ? 1 : -1;
  return result;
}

