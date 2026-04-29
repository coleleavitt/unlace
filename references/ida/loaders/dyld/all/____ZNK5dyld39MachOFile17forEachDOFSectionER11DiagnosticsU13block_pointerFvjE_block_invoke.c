__int64 __fastcall ___ZNK5dyld39MachOFile17forEachDOFSectionER11DiagnosticsU13block_pointerFvjE_block_invoke(
        __int64 result,
        __int64 a2,
        char a3)
{
  if ( *(_BYTE *)(a2 + 92) == 15 && (a3 & 1) == 0 )
    return (*(__int64 (**)(void))(*(_QWORD *)(result + 32) + 16LL))();
  return result;
}
