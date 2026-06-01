/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480910
// Address: 0x0000000000480910

//----- (0000000000480910) ----------------------------------------------------
__int64 __fastcall sub_480910(const char *a1, unsigned int a2, int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  v4 = open64(a1, 66, a2);
  if ( v4 == -1 )
  {
    sub_479EB0(1u);
  }
  else
  {
    v5 = v4;
    if ( !(unsigned int)sub_480810(v4, 66, a3) && !sub_4808B0(v5, 0) )
      return v5;
    sub_4808E0(v5);
  }
  return 0xFFFFFFFFLL;
}
