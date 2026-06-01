__int64 __fastcall qmove(__int64 a1, __int64 a2, char a3)
{
  int v4; // r12d
  unsigned int v5; // r12d
  unsigned int v7; // r12d
  int v8; // eax

  if ( (unsigned __int8)qfileexist(a2, a2) )
  {
    if ( (unsigned int)qaccess(a2, 2) )
    {
      v4 = a3 & 6;
      if ( v4 != 6 )
      {
        v5 = 6;
LABEL_5:
        set_qerrno(1, 2);
        return v5;
      }
    }
    else
    {
      v4 = 2;
      if ( (a3 & 2) == 0 )
      {
        v5 = 2;
        *__errno_location() = 17;
        goto LABEL_5;
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( !(unsigned int)qrename(a1, a2) )
    return 0;
  if ( *__errno_location() == 18 )
  {
    v7 = v4 | 1;
    if ( (a3 & 1) == 0 )
      return v7;
    if ( (a3 & 4) != 0 )
      qunlink(a2);
    v8 = qcopyfile(a1, a2, 1, 0, 0, 0);
    if ( (unsigned int)(v8 + 1) > 1 )
    {
      if ( (v8 & 0xFFFFFFFD) != 0xFFFFFFFC )
      {
        if ( !under_debugger )
          interr(1354);
        BUG();
      }
      return (unsigned int)-1;
    }
    if ( !v8 )
    {
      qunlink(a1);
      return 0;
    }
  }
  return (unsigned int)-1;
}

