__int64 __fastcall dyld4::SyscallDelegate::dtraceUserProbesEnabled(dyld4::SyscallDelegate *this)
{
  return MEMORY[0xFFFFFC092] & 1;
}
