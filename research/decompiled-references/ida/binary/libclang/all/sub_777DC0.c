__int64 __fastcall sub_777DC0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int64 v3; // rax

  v1 = *(unsigned int *)(a1 + 116);
  if ( !(_DWORD)v1 )
    v1 = *(unsigned int *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 120);
  if ( (v2 & 4) != 0 && (v3 = v2 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v3 + 16)) )
    return (v1 << 32) | *(unsigned int *)(**(_QWORD **)(v3 + 24) + 8LL);
  else
    return (v1 << 32) | *(unsigned int *)(a1 + 56);
}

