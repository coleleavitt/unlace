dyld3::FatFile *__fastcall ___ZN5dyld44APIs16dlopen_preflightEPKc_block_invoke_2(
        __int64 a1,
        dyld3::FatFile *a2,
        unsigned __int64 a3,
        _BOOL8 a4)
{
  dyld3::FatFile *result; // x0

  result = dyld3::MachOFile::compatibleSlice(
             (Diagnostics *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL),
             a2,
             a3,
             *(const char **)(a1 + 56),
             *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) + 68LL),
             a4,
             *(dyld3::GradedArchs **)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) + 144LL));
  if ( result )
  {
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL) = 1;
    **(_BYTE **)(a1 + 64) = 1;
  }
  return result;
}
