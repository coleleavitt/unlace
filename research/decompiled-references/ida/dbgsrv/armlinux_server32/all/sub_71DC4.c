/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71DC4
// Address: 0x00071DC4

//----- (00071DC4) --------------------------------------------------------
int __fastcall sub_71DC4(int a1, int a2)
{
  int result; // r0
  _WORD *v4; // r1
  char *v5; // r3
  unsigned int v6; // r4
  unsigned int v7; // t1
  unsigned int v8; // t1
  bool v9; // cc
  _WORD v10[12]; // [sp+4h] [bp-38h] BYREF
  _WORD v11[9]; // [sp+1Ch] [bp-20h] BYREF
  char v12; // [sp+2Eh] [bp-Eh] BYREF

  sub_71698(a1, v10);
  sub_71698(a2, v11);
  if ( v11[0] == v10[0] )
  {
    v4 = v10;
    v5 = (char *)v11;
    if ( v11[0] )
      result = -1;
    else
      result = 1;
    do
    {
      if ( &v12 == v5 )
        return 0;
      v7 = (unsigned __int16)v4[1];
      ++v4;
      v6 = v7;
      v8 = *((unsigned __int16 *)v5 + 1);
      v5 += 2;
      v9 = v6 > v8;
    }
    while ( v6 == v8 );
    if ( !v9 )
      return -result;
  }
  else if ( v10[0] )
  {
    return -1;
  }
  else
  {
    return 1;
  }
  return result;
}
