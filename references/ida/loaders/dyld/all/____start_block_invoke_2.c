__int64 __fastcall ___start_block_invoke_2(__int64 result, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 56) & 2) != 0 )
    return dyld4::SyscallDelegate::mprotect(
             (dyld4::SyscallDelegate *)&dyld4::sSyscallDelegate,
             (void *)(*(_QWORD *)(result + 32) + *(_QWORD *)(a2 + 16)),
             *(_QWORD *)(a2 + 24),
             1);
  return result;
}
