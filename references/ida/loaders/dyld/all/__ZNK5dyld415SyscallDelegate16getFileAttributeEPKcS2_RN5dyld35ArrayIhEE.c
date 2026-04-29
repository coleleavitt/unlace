bool __fastcall dyld4::SyscallDelegate::getFileAttribute(int a1, char *path, char *name, __int64 a4)
{
  unsigned __int64 v5; // x0

  v5 = getxattr(path, name, *(void **)a4, *(_QWORD *)(a4 + 8), 0, 0);
  if ( v5 != -1 )
  {
    if ( *(_QWORD *)(a4 + 8) < v5 )
      dyld4::SyscallDelegate::getFileAttribute();
    *(_QWORD *)(a4 + 16) = v5;
  }
  return v5 != -1;
}
