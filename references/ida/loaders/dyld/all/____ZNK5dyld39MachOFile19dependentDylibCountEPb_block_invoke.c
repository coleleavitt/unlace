__int64 __fastcall ___ZNK5dyld39MachOFile19dependentDylibCountEPb_block_invoke(
        __int64 result,
        __int64 a2,
        char a3,
        char a4,
        int a5)
{
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL);
  if ( (a3 & 1) != 0 || (a4 & 1) != 0 || a5 )
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 40) + 8LL) + 24LL) = 0;
  return result;
}
