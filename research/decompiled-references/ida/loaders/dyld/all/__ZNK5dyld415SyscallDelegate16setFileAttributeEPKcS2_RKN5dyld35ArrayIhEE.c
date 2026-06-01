__int64 __fastcall dyld4::SyscallDelegate::setFileAttribute(int a1, char *a2, const char *a3, __int64 a4)
{
  bool v8; // w20

  if ( chmod(a2, 0x180u) )
    return 0;
  if ( setxattr(a2, a3, *(const void **)a4, *(_QWORD *)(a4 + 16), 0, 4) )
    v8 = setxattr(a2, a3, *(const void **)a4, *(_QWORD *)(a4 + 16), 0, 0) == 0;
  else
    v8 = 1;
  return v8 & (unsigned __int8)(chmod(a2, 0x100u) == 0);
}
