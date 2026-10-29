__int64 __fastcall sub_18C0B20(__int64 a1)
{
  __int64 v2; // rax

  if ( (*(_QWORD *)a1 & 0x80000LL) == 0 )
    return 0;
  v2 = 8LL * *(unsigned int *)(a1 + 4);
  if ( (*(_WORD *)a1 & 0x1FF) == 0x18 )
  {
    if ( *(_DWORD *)(a1 + v2 + 64) )
      return a1 + v2 + 16LL * ((*(_QWORD *)a1 & 0x80000LL) != 0) + 64;
    return 0;
  }
  if ( !*(_DWORD *)(a1 + v2 + 80) )
    return 0;
  return a1 + v2 + 16LL * ((*(_QWORD *)a1 & 0x80000LL) != 0) + 80;
}
