_BOOL8 __fastcall clang_TargetInfo_isTargetWindows(__int64 a1)
{
  if ( !a1 )
    return 0;
  if ( !*(_QWORD *)a1 )
    BUG();
  return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 80LL) + 17288LL) + 260LL) == 14;
}

