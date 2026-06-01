__int64 __fastcall sub_12AF030(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 48) - 29;
  v2 = sub_112B370(a1);
  if ( (v1 & 0xFFFFFFF7) == 0 )
    v2 |= 7uLL;
  return v2 | 0x200100000000000LL;
}
