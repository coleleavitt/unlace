__int64 __fastcall sub_B73090(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (v1 & 4) != 0 && (v3 = v1 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v3 + 16)) )
    return *(unsigned int *)(**(_QWORD **)(v3 + 24) + 8LL);
  else
    return *(unsigned int *)(a1 + 64);
}
