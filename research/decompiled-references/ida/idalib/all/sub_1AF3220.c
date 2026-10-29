// write access to const memory has been detected, the output may be wrong!
char __fastcall sub_1AF3220(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  LOBYTE(v1) = def_FFDDA1();
  if ( (_BYTE)v1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(unsigned int *)(v2 + 344);
    if ( !(_DWORD)v3
      || (v1 = *(_QWORD *)(v2 + 336) + 6776 * v3 - 6776, *(_QWORD *)(v1 + 6768) != *(_QWORD *)(v2 + 328))
      || (v4 = *(unsigned int *)(v1 + 8), v5 = *(unsigned int *)(v2 + 27504), (unsigned int)v4 <= (unsigned int)v5)
      || (v6 = v4 - v5) == 0 )
    {
      BYTE3(elf_gnu_hash_indexes[53]) = 0;
      BUG();
    }
    *(_BYTE *)(*(_QWORD *)v1 + 1688 * (v6 - 1) + 1107) = 1;
  }
  return v1;
}
