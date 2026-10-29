/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000FD50
// Address: 0x000000010000FD50

//----- (000000010000FD50) ----------------------------------------------------
__int64 __fastcall sub_10000FD50(__int64 *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r14
  off_t v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v3 = (unsigned int)a1;
  if ( a3 )
  {
    if ( a3 <= 0 )
      return 0;
  }
  else
  {
    a3 = qlsize(a1[6]);
    if ( a3 <= 0 )
      return 0;
  }
  v4 = a1[10];
  if ( a2 != 0 || v4 != 0 )
  {
    if ( v4 > a2 )
    {
      v7 = a1[9];
      v5 = *(unsigned int *)(v7 + 20LL * a2 + 8);
      a1[15] = v5;
      v8 = *(unsigned int *)(v7 + 20LL * a2 + 12);
      a1[16] = v8;
      if ( a3 <= v5 )
      {
        v3 = 0;
        sub_100000AE0((int)"Fat subfile %u is outside the file\n");
        return v3;
      }
      if ( v5 + v8 > a3 )
      {
        sub_100000AE0((int)"Fat subfile %u is truncated\n");
        v9 = qlsize(a1[6]);
        v5 = a1[15];
        a1[16] = v9 - v5;
      }
      goto LABEL_7;
    }
    return 0;
  }
  a1[15] = 0;
  a1[16] = a3;
  v5 = 0;
LABEL_7:
  v6 = a1[12] + v5;
  LOBYTE(v3) = qlseek(a1[6], v6, 0) == v6;
  return v3;
}
