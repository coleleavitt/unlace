/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000E774
// Address: 0x000000010000E774

//----- (000000010000E774) ----------------------------------------------------
bool __fastcall sub_10000E774(__int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v5; // x9
  unsigned __int64 v6; // x8
  off_t v7; // x20
  __int64 v9; // x9
  __int64 v10; // x9
  __int64 v11; // x0

  if ( a3 )
  {
    if ( a3 < 1 )
      return 0;
  }
  else
  {
    a3 = qlsize(a1[6]);
    if ( a3 < 1 )
      return 0;
  }
  v5 = a1[10];
  if ( !a2 && !v5 )
  {
    v6 = 0;
    a1[15] = 0;
    a1[16] = a3;
LABEL_8:
    v7 = a1[12] + v6;
    return qlseek(a1[6], v7, 0) == v7;
  }
  if ( v5 > a2 )
  {
    v9 = a1[9] + 20LL * a2;
    v6 = *(unsigned int *)(v9 + 8);
    a1[15] = v6;
    v10 = *(unsigned int *)(v9 + 12);
    a1[16] = v10;
    if ( a3 > v6 )
    {
      if ( v10 + v6 > a3 )
      {
        sub_100000AA0();
        v11 = qlsize(a1[6]);
        v6 = a1[15];
        a1[16] = v11 - v6;
      }
      goto LABEL_8;
    }
    sub_100000AA0();
  }
  return 0;
}
