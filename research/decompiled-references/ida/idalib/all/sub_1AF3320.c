// write access to const memory has been detected, the output may be wrong!
char __fastcall sub_1AF3320(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax

  LOBYTE(v1) = def_FFDDA1();
  if ( (_BYTE)v1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(unsigned int *)(v2 + 344);
    if ( !(_DWORD)v3
      || (v4 = *(_QWORD *)(v2 + 336) + 6776 * v3 - 6776, *(_QWORD *)(v4 + 6768) != *(_QWORD *)(v2 + 328))
      || (v5 = *(unsigned int *)(v4 + 8), v6 = *(unsigned int *)(v2 + 27504), (unsigned int)v5 <= (unsigned int)v6)
      || (v7 = v5 - v6) == 0 )
    {
      elf_gnu_hash_indexes[52] = 0;
      BUG();
    }
    *(_QWORD *)(*(_QWORD *)v4 + 1688 * (v7 - 1) + 1096) = 0;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(unsigned int *)(v8 + 344);
    if ( !(_DWORD)v9
      || (v10 = *(_QWORD *)(v8 + 336) + 6776 * v9 - 6776, *(_QWORD *)(v10 + 6768) != *(_QWORD *)(v8 + 328))
      || (v11 = *(unsigned int *)(v10 + 8), v12 = *(unsigned int *)(v8 + 27504), (unsigned int)v11 <= (unsigned int)v12)
      || (v13 = v11 - v12) == 0 )
    {
      BYTE3(elf_gnu_hash_indexes[53]) = 0;
      BUG();
    }
    v1 = *(_QWORD *)v10 + 1688 * (v13 - 1);
    *(_BYTE *)(v1 + 1107) = 0;
  }
  return v1;
}
