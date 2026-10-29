/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000737E8
// Address: 0x00000001000737E8

//----- (00000001000737E8) ----------------------------------------------------
__int64 __fastcall sub_1000737E8(int a1, char a2, int a3)
{
  int v5; // w9
  int v6; // w21
  int v7; // w1
  int v9; // w22

  if ( a3 != 2 && (a2 & 3) == 0 )
    v5 = 1;
  else
    v5 = 2;
  if ( v5 != a3 )
  {
    if ( a3 != 2 && (a2 & 3) == 0 )
      v6 = 5;
    else
      v6 = 6;
    if ( flock(a1, v6) == -1 )
    {
      v9 = -110;
      do
      {
        set_qerrno();
        v9 += 10;
        if ( !v9 || *__error() != 35 && *__error() != 4 )
          return 0xFFFFFFFFLL;
        qsleep(10);
      }
      while ( flock(a1, v6) == -1 );
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
      if ( flock(a1, 12) == -1 )
        goto LABEL_19;
      return 0;
    }
    v7 = 6;
  }
  if ( flock(a1, v7) != -1 )
  {
    fcntl(a1, 2, 1);
    return 0;
  }
LABEL_19:
  set_qerrno();
  return 0xFFFFFFFFLL;
}
