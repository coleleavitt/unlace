/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: search_path
// Address: 0x000A9A50

//----- (000A9A50) --------------------------------------------------------
int __cdecl search_path(char *file, int a2, _BYTE *a3, char a4)
{
  char *v4; // esi
  int v5; // ecx
  const char *i; // eax
  bool v8; // al
  int v9; // esi
  int v10; // [esp+8h] [ebp-1024h] BYREF
  int v11; // [esp+Ch] [ebp-1020h]
  int v12; // [esp+10h] [ebp-101Ch]
  char buf[4]; // [esp+18h] [ebp-1014h] BYREF
  unsigned int v14; // [esp+1018h] [ebp-14h]

  v14 = __readgsdword(0x14u);
  if ( !a3 || !*a3 )
    return 0;
  v4 = file;
  if ( qisabspath(a3) )
  {
    qstrncpy((unsigned int)file, (int)a3, a2);
    LOBYTE(v5) = 1;
  }
  else
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    if ( (unsigned __int8)qgetenv("PATH", (int)&v10) )
    {
      for ( i = qstrtok((char *)v10, ":", (const char **)buf); ; i = qstrtok(nullptr, ":", (const char **)buf) )
      {
        if ( !i )
        {
          v4 = file;
          goto LABEL_14;
        }
        if ( *i )
        {
          qmakepath(file, a2, i, (int)a3);
          if ( qfileexist(file) )
            break;
        }
      }
      LOBYTE(v5) = 1;
    }
    else
    {
LABEL_14:
      if ( !a4 || (qgetcwd(buf, 0x1000u), qmakepath(v4, a2, buf, (int)a3), v8 = qfileexist(v4), LOBYTE(v5) = 1, !v8) )
        v5 = 0;
    }
    if ( v10 )
    {
      v9 = v5;
      v11 = 0;
      qfree((void *)v10);
      v10 = 0;
      v12 = 0;
      return v9;
    }
  }
  return v5;
}
// A9AC0: variable 'v5' is possibly undefined
