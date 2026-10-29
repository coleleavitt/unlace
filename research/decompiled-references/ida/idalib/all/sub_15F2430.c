bool __fastcall sub_15F2430(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v1 )
    BUG();
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v1 - 8);
  return *(_DWORD *)(v2 + 52) < *(_DWORD *)(*(_QWORD *)(v2 + 40) + 200LL);
}
