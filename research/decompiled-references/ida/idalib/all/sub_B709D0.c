unsigned __int64 __fastcall sub_B709D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx
  unsigned __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (v1 & 4) != 0 && (v4 = v1 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v4 + 16)) )
    v2 = *(_DWORD *)(**(_QWORD **)(v4 + 24) + 8LL);
  else
    v2 = *(_DWORD *)(a1 + 64);
  return ((unsigned __int64)*(unsigned int *)(a1 + 140) << 32) | v2;
}
