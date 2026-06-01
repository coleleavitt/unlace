__int64 __fastcall sub_1803AD0(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax

  v2 = *a1 & 0x3FFFFFFF;
  v3 = *a2 & 0x3FFFFFFF;
  result = v3 < v2;
  if ( v3 > v2 )
    return 0xFFFFFFFFLL;
  return result;
}
