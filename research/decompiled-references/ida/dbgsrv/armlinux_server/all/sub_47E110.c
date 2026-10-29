/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E110
// Address: 0x000000000047E110

//----- (000000000047E110) ----------------------------------------------------
__int64 __fastcall sub_47E110(unsigned int a1)
{
  int v1; // w4
  int v2; // w2
  unsigned int v3; // w5
  int i; // w3
  int v6; // w2
  unsigned int v7; // w6
  int v8; // w1
  char *v12; // x1
  unsigned int v13; // w2
  unsigned int v14; // w5

  if ( a1 > 0x10FFFF )
    return 0;
  v1 = 3200;
  v2 = 3200;
  v3 = 13312;
  for ( i = 0; ; v3 = *((_DWORD *)&qword_4D1730 + 3 * ((i + v1) >> 1)) )
  {
    v6 = v2 >> 1;
    v7 = 1114112;
    v8 = v6 + 1;
    if ( v6 != 3199 )
      v7 = *((_DWORD *)&qword_4D1730 + 3 * v8);
    if ( a1 >= v3 && a1 < v7 )
      break;
    if ( a1 <= v3 )
    {
      v1 = v6 - 1;
      if ( i > 3199 || i > v1 )
        return 0;
    }
    else
    {
      i = v6 + 1;
      if ( v8 > 3199 || v8 > v1 )
        return 0;
    }
    v2 = i + v1;
  }
  v12 = (char *)&qword_4D1730 + 12 * v6;
  v13 = *((_DWORD *)v12 + 1);
  v14 = a1 + v13 - v3;
  if ( !*((_DWORD *)v12 + 2) )
    v13 = v14;
  if ( v13 > 0x1D51 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(1519);
  }
  return *((unsigned __int16 *)qword_4CA1E8 + 2 * v13)
       | (*((unsigned __int8 *)qword_4CA1E8 + 4 * v13 + 2) << 16) & 0xFFFFFF
       | (*((unsigned __int8 *)qword_4CA1E8 + 4 * v13 + 3) << 24);
}
// 4CA1E8: using guessed type __int64 qword_4CA1E8[512];
// 4D1730: using guessed type __int64 qword_4D1730;
// 52451C: using guessed type char under_debugger;
