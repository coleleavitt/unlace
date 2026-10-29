/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007C170
// Address: 0x000000010007C170

//----- (000000010007C170) ----------------------------------------------------
__int64 __fastcall sub_10007C170(int a1, char a2, int a3)
{
  _BOOL4 v4; // eax
  int v5; // r15d
  unsigned int v6; // r12d
  int v7; // esi
  int v9; // r13d

  v4 = a3 != 2 && (a2 & 3) == 0;
  if ( 2 - v4 != a3 )
  {
    v5 = 6 - v4;
    if ( flock(a1, 6 - v4) == -1 )
    {
      v9 = -110;
      v6 = -1;
      do
      {
        set_qerrno();
        v9 += 10;
        if ( !v9 || *__error() != 35 && *__error() != 4 )
          return v6;
        qsleep(10);
      }
      while ( flock(a1, v5) == -1 );
    }
    fcntl(a1, 2, 1);
  }
  if ( a3 == 1 )
  {
    v7 = 5;
  }
  else
  {
    if ( a3 == 8 )
    {
      v6 = 0;
      if ( flock(a1, 12) == -1 )
        goto LABEL_12;
      return v6;
    }
    v7 = 6;
  }
  if ( flock(a1, v7) == -1 )
  {
LABEL_12:
    set_qerrno();
    return (unsigned int)-1;
  }
  v6 = 0;
  fcntl(a1, 2, 1);
  return v6;
}
