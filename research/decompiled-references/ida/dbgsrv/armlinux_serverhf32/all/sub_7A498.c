/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A498
// Address: 0x0007A498

//----- (0007A498) --------------------------------------------------------
int __fastcall sub_7A498(__pid_t a1, int *a2, int a3)
{
  int v4; // r3
  int v5; // r0
  int v6; // r4
  int v7; // r3
  int v9; // [sp+0h] [bp-Ch] BYREF

  if ( a3 == 1 )
    v4 = -1;
  else
    v4 = a3;
  v5 = sub_7A478(&v9, a1, 0, v4);
  if ( !v5 )
    return 1;
  v6 = v5;
  if ( v5 == -1 )
  {
    if ( a2 )
      *a2 = *_errno_location();
  }
  else
  {
    v6 = v9 & 0x7F;
    if ( (v9 & 0x7F) != 0 )
    {
      if ( (v6 + 1) << 24 >> 25 <= 0 )
      {
        if ( under_debugger )
          __und(0xFFu);
        sub_78AFC(1150);
      }
      if ( a2 )
      {
        v7 = -v6;
        v6 = 0;
        *a2 = v7;
      }
      else
      {
        return 0;
      }
    }
    else if ( a2 )
    {
      *a2 = BYTE1(v9);
    }
  }
  return v6;
}
// D5C00: using guessed type char under_debugger;
