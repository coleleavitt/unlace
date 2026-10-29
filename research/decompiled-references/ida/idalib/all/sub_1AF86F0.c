// write access to const memory has been detected, the output may be wrong!
_DWORD *__fastcall sub_1AF86F0(__int64 a1, int a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  _DWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned int *)(v3 + 344);
  if ( !(_DWORD)v4
    || (v5 = *(_QWORD *)(v3 + 336) + 6776 * v4 - 6776, *(_QWORD *)(v5 + 6768) != *(_QWORD *)(v3 + 328))
    || (v6 = *(unsigned int *)(v5 + 8), v7 = *(unsigned int *)(v3 + 27504), (unsigned int)v6 <= (unsigned int)v7)
    || (v8 = v6 - v7) == 0 )
  {
    LOBYTE(elf_gnu_hash_indexes[53]) = 0;
    BUG();
  }
  *(_BYTE *)(*(_QWORD *)v5 + 1688 * (v8 - 1) + 1104) = 1;
  v11 = sub_168B6C0(a1);
  v14 = *(_QWORD *)(v11 + 2352);
  v15 = v11;
  v16 = v11 + 2352;
  *(_QWORD *)(v11 + 2432) += 12LL;
  result = (_DWORD *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( *(_QWORD *)(v15 + 2360) >= (unsigned __int64)(result + 3) && v14 )
    *(_QWORD *)(v15 + 2352) = result + 3;
  else
    result = (_DWORD *)sub_986170(v16, 12, 12, 3, v12, v13);
  *result = a2;
  result[1] = a3;
  result[2] = 65;
  return result;
}
