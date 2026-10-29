/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlseek
// Address: 0x000000010007A2F0

//----- (000000010007A2F0) ----------------------------------------------------
off_t __fastcall qlseek(__int64 a1, off_t a2, int a3)
{
  off_t result; // rax
  int v4; // ecx

  result = -1;
  if ( a1 )
  {
    if ( *(int *)a1 < 2 )
    {
      v4 = qfseek(*(FILE **)(a1 + 8), a2, a3);
      result = -1;
      if ( !v4 )
        return qftell(*(FILE **)(a1 + 8));
    }
    else
    {
      switch ( a3 )
      {
        case 0:
LABEL_10:
          *(_QWORD *)(a1 + 24) = a2;
          return a2;
        case 1:
          a2 += *(_QWORD *)(a1 + 24);
          goto LABEL_10;
        case 2:
          a2 += *(_QWORD *)(a1 + 16);
          goto LABEL_10;
      }
      return *(_QWORD *)(a1 + 24);
    }
  }
  return result;
}
