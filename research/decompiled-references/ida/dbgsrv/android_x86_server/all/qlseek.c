/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlseek
// Address: 0x000AB880

//----- (000AB880) --------------------------------------------------------
int __cdecl qlseek(int a1, __int64 off, int whence)
{
  __int64 v3; // rax
  int v4; // ecx

  if ( a1 )
  {
    v3 = off;
    if ( *(int *)a1 < 2 )
    {
      v4 = qfseek(*(FILE **)(a1 + 4), off, SHIDWORD(off), whence);
      LODWORD(v3) = -1;
      if ( !v4 )
        LODWORD(v3) = qftell(*(FILE **)(a1 + 4));
    }
    else
    {
      if ( whence )
      {
        if ( whence == 1 )
        {
          v3 = *(_QWORD *)(a1 + 16) + off;
        }
        else
        {
          if ( whence != 2 )
          {
            LODWORD(v3) = *(_DWORD *)(a1 + 16);
            return v3;
          }
          v3 = *(_QWORD *)(a1 + 8) + off;
        }
      }
      *(_QWORD *)(a1 + 16) = v3;
    }
  }
  else
  {
    LODWORD(v3) = -1;
  }
  return v3;
}
