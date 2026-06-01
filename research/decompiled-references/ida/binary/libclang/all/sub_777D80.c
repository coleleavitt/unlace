unsigned __int64 __fastcall sub_777D80(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (v1 & 4) != 0 && (v2 = v1 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v2 + 16)) )
    return ((unsigned __int64)*(unsigned int *)(a1 + 140) << 32) | *(unsigned int *)(**(_QWORD **)(v2 + 24) + 8LL);
  else
    return ((unsigned __int64)*(unsigned int *)(a1 + 140) << 32) | *(unsigned int *)(a1 + 64);
}

