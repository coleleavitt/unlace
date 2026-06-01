__int64 __fastcall search_path(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  unsigned int v4; // r13d
  _BYTE *v8; // rax
  int v9; // r9d
  int v10; // r9d
  _BYTE v11[4104]; // [rsp+40h] [rbp-1048h] BYREF
  unsigned __int64 v12; // [rsp+1048h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( a3 )
  {
    v4 = 0;
    if ( *a3 )
    {
      v4 = qisabspath(a3);
      if ( (_BYTE)v4 )
      {
        qstrncpy(a1, a3, a2);
      }
      else
      {
        if ( (unsigned __int8)qgetenv("PATH") )
        {
          while ( 1 )
          {
            v8 = (_BYTE *)qstrtok(nullptr, ":");
            if ( !v8 )
              break;
            if ( *v8 )
            {
              qmakepath(a1, a2, (_DWORD)v8, (_DWORD)a3, 0, v9);
              if ( (unsigned __int8)qfileexist(a1, a2) )
                return 1;
            }
          }
        }
        if ( a4 )
        {
          qgetcwd(v11, 4096);
          qmakepath(a1, a2, (unsigned int)v11, (_DWORD)a3, 0, v10);
          if ( (unsigned __int8)qfileexist(a1, a2) )
            return 1;
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v4;
}
