_BYTE *__fastcall qmake_full_path(_BYTE *a1, __int64 a2, char *a3)
{
  char *v4; // rbx
  int v6; // r9d
  _QWORD v7[519]; // [rsp+0h] [rbp-1038h] BYREF

  v7[513] = __readfsqword(0x28u);
  v4 = (char *)__realpath_chk(a3, v7, 4096);
  if ( !v4 )
  {
    v4 = a3;
    if ( !(unsigned __int8)qisabspath(a3) )
    {
      v4 = (char *)v7;
      qgetcwd(v7, 4096);
      qmakepath((unsigned int)v7, 4096, (unsigned int)v7, (_DWORD)a3, 0, v6);
    }
  }
  qustrncpy(a1, v4, a2);
  return a1;
}
