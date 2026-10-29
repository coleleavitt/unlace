__int64 __fastcall search_path(__int64 a1, __int64 a2, _BYTE *a3, char a4)
{
  unsigned int v4; // r13d
  _BYTE *v8; // rax
  int v9; // r9d
  int v10; // r9d
  char v11; // [rsp+0h] [rbp-1088h]
  _BYTE v12[4104]; // [rsp+40h] [rbp-1048h] BYREF
  unsigned __int64 v13; // [rsp+1048h] [rbp-40h]

  v13 = __readfsqword(0x28u);
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
              qmakepath(a1, a2, (int)v8, (int)a3, 0, v9, v11);
              if ( (unsigned __int8)qfileexist(a1, a2) )
                return 1;
            }
          }
        }
        if ( a4 )
        {
          qgetcwd(v12, 4096);
          qmakepath(a1, a2, (int)v12, (int)a3, 0, v10, v11);
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

