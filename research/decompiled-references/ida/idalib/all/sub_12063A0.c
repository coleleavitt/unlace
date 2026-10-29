__int64 __fastcall sub_12063A0(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax
  __int64 v3; // rcx

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 == 18 )
  {
    v3 = sub_112B370(a1) | 0x100000000007LL;
    return v3 | 0x48000;
  }
  v2 = sub_112B370(a1);
  if ( v1 == 38 || v1 == 3 )
    return v2 | 0x20010000004BC0FLL;
  v3 = v2 | 0x100000000007LL;
  if ( v1 == 19 )
    return v3 | 0x48000;
  if ( v1 != 37 )
    return v3;
  return v2 | 0x200100000003007LL;
}
