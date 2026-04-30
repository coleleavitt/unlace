__int64 __fastcall sub_235E50(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  char v3; // cl

  v1 = *(_DWORD *)(a1 + 44);
  if ( v1 < 0 )
    return -1;
  result = -1;
  if ( v1 < *(_DWORD *)(dbg + 64) )
  {
    result = sub_233C80(a1);
    v3 = *(_BYTE *)(a1 + 32);
    if ( v3 != -1 )
      result <<= v3;
  }
  return result;
}
