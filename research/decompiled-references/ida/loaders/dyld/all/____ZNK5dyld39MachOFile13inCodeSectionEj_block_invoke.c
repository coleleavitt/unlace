__int64 __fastcall ___ZNK5dyld39MachOFile13inCodeSectionEj_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x8

  v4 = *(_QWORD *)(a2 + 64) - *(_QWORD *)(result + 40);
  v5 = *(unsigned int *)(result + 48);
  if ( v4 <= v5 && v4 + *(_QWORD *)(a2 + 72) > v5 )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = (*(_DWORD *)(a2 + 92) & 0x80000400) != 0;
    *a4 = 1;
  }
  return result;
}
