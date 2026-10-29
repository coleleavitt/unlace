/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: search_path
// Address: 0x000796C0

//----- (000796C0) --------------------------------------------------------
int __fastcall search_path(char *a1, int a2, unsigned __int8 *a3, int a4)
{
  int v6; // r7
  bool v8; // zf
  int v9; // r0
  char *i; // r2
  char *s; // [sp+1Ch] [bp+4h] BYREF
  int v14; // [sp+20h] [bp+8h]
  int v15; // [sp+24h] [bp+Ch]
  const char *v16[1025]; // [sp+28h] [bp+10h] BYREF

  v6 = 0;
  if ( a3 && *a3 )
  {
    if ( qisabspath(a3) )
    {
      qstrncpy((unsigned int)a1, a3, a2);
      return 1;
    }
    else
    {
      v14 = 0;
      s = nullptr;
      v15 = 0;
      v8 = qgetenv("PATH", (int)&s) == 0;
      v9 = a4;
      if ( v8 )
      {
LABEL_12:
        if ( !v9 || (v6 = 1, qgetcwd((char *)v16, 0x1000u), qmakepath(a1, a2, (char *)v16), !qfileexist(a1)) )
          v6 = 0;
      }
      else
      {
        for ( i = (char *)qstrtok(s, ":", v16); ; i = (char *)qstrtok(nullptr, ":", v16) )
        {
          if ( !i )
          {
            v9 = a4;
            goto LABEL_12;
          }
          if ( *i )
          {
            qmakepath(a1, a2, i);
            if ( qfileexist(a1) )
              break;
          }
        }
        v6 = 1;
      }
      if ( s )
      {
        v14 = 0;
        qfree(s);
        v15 = 0;
        s = nullptr;
      }
    }
  }
  return v6;
}
