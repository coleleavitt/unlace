__int64 __fastcall sub_1CAFE50(__int64 a1)
{
  __int64 v1; // rax

  v1 = 16LL * ((*(_QWORD *)a1 & 0x100000LL) != 0) + 72;
  if ( ((*(_QWORD *)a1 >> 16) & 0x10) != 0 && *(_DWORD *)(a1 + 72) )
    v1 += 32LL * *(unsigned int *)(a1 + 84);
  return a1 + v1;
}
