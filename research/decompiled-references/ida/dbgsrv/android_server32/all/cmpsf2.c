/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cmpsf2
// Address: 0x0009ACA8

//----- (0009ACA8) --------------------------------------------------------
// Alternative name is '__nesf2'
// Alternative name is '__eqsf2'
int __fastcall _cmpsf2(int result, int a2)
{
  int v2; // r2
  unsigned int v3; // r3
  bool v4; // zf
  bool v5; // cf
  bool v6; // zf
  bool v7; // nf
  bool v8; // cc

  v2 = 2 * result;
  v3 = 2 * a2;
  v4 = (2 * result) >> 24 == -1;
  if ( (2 * result) >> 24 != -1 )
    v4 = (int)v3 >> 24 == -1;
  if ( v4 && (v2 >> 24 == -1 && result << 9 || (int)v3 >> 24 == -1 && a2 << 9) )
    return 1;
  v5 = 0;
  v6 = (v2 | (v3 >> 1)) == 0;
  v8 = 0;
  v7 = ((v2 | (v3 >> 1)) & 0x80000000) != 0;
  if ( v2 | (v3 >> 1) )
  {
    v6 = result == a2;
    v8 = 0;
    v7 = (result ^ a2) < 0;
  }
  if ( !v7 )
  {
    v5 = v2 >= v3;
    result = v2 - v3;
    v6 = v2 == v3;
    v8 = v2 > v3;
  }
  if ( v8 )
    result = a2 >> 31;
  if ( !v5 )
    result = ~(a2 >> 31);
  if ( !v6 )
    return result | 1;
  return result;
}
