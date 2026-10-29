__int64 __fastcall sub_1AF5E20(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int *)(v1 + 344);
  if ( !(_DWORD)v2
    || (v3 = *(_QWORD *)(v1 + 336) + 6776 * v2 - 6776, *(_QWORD *)(v3 + 6768) != *(_QWORD *)(v1 + 328))
    || (v4 = *(unsigned int *)(v3 + 8), v5 = *(unsigned int *)(v1 + 27504), (unsigned int)v4 <= (unsigned int)v5)
    || (v6 = v4 - v5) == 0
    || (v7 = *(_QWORD *)v3 + 1688 * (v6 - 1)) == 0 )
  {
    BUG();
  }
  return *(_QWORD *)(*(_QWORD *)(v7 + 1536) + 16LL);
}
