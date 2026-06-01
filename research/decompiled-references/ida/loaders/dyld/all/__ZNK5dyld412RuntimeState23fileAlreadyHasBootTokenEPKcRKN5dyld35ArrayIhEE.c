__int64 __fastcall dyld4::RuntimeState::fileAlreadyHasBootToken(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  _BYTE v5[136]; // [xsp+20h] [xbp-A0h] BYREF

  result = dyld4::SyscallDelegate::getFileAttribute(*(_QWORD *)(a1 + 8), *(char **)(a1 + 672), "com.apple.dyld");
  if ( (_DWORD)result )
    return !*(_QWORD *)(a3 + 16) && _platform_memcmp(*(const void **)a3, v5, 0) == 0;
  return result;
}
