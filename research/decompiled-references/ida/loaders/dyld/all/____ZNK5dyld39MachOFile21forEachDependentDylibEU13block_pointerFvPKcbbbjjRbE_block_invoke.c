__int64 __fastcall ___ZNK5dyld39MachOFile21forEachDependentDylibEU13block_pointerFvPKcbbbjjRbE_block_invoke(
        __int64 result,
        char *a2,
        _BYTE *a3)
{
  int v3; // w9
  __int64 v7; // x19

  v3 = *(_DWORD *)a2;
  if ( (unsigned int)(*(_DWORD *)a2 + 2147483624) <= 0xB && ((1 << (*(_DWORD *)a2 - 24)) & 0x881) != 0 || v3 == 12 )
  {
    v7 = result;
    result = (*(__int64 (__fastcall **)(_QWORD, char *, bool, bool, bool, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)(result + 32)
                                                                                                  + 16LL))(
               *(_QWORD *)(result + 32),
               &a2[*((unsigned int *)a2 + 2)],
               v3 == -2147483624,
               v3 == -2147483617,
               v3 == -2147483613,
               *((unsigned int *)a2 + 5),
               *((unsigned int *)a2 + 4),
               a3);
    ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 8LL) + 24LL);
    if ( *a3 )
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 48) + 8LL) + 24LL) = 1;
  }
  return result;
}
