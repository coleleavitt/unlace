__int64 __fastcall sub_B70A10(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v4; // rdx

  v1 = *(unsigned int *)(a1 + 116);
  if ( !(_DWORD)v1 )
    v1 = *(unsigned int *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 120);
  if ( (v2 & 4) != 0 && (v4 = v2 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v4 + 16)) )
    return (v1 << 32) | *(unsigned int *)(**(_QWORD **)(v4 + 24) + 8LL);
  else
    return (v1 << 32) | *(unsigned int *)(a1 + 56);
}
