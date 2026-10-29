/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AA5C
// Address: 0x0006AA5C

//----- (0006AA5C) --------------------------------------------------------
int __fastcall sub_6AA5C(int result)
{
  _DWORD *v1; // r4
  int v2; // r2
  int v3; // r5
  int v4; // r6
  int v5; // r1
  const char *v6; // r1

  v1 = (_DWORD *)result;
  if ( *(_DWORD *)(result + 20) > 1u )
  {
    sub_6A95C("certificate", *(const char **)(result + 16), 17);
    if ( v1[8] )
      v6 = (const char *)v1[7];
    else
      v6 = (const char *)&dword_8DA5C;
    result = sub_6A95C("private key", v6, 17);
  }
  v2 = dword_D3B84;
  if ( (unsigned int)dword_D3B84 > 1 )
  {
    result = v1[17];
    v3 = v1[16];
    v4 = dword_D3B80;
    dword_D3B80 = v1[15];
    v5 = dword_D3B88;
    v1[15] = v4;
    dword_D3B84 = v3;
    v1[16] = v2;
    dword_D3B88 = result;
    v1[17] = v5;
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D3B80: using guessed type int dword_D3B80;
// D3B84: using guessed type int dword_D3B84;
// D3B88: using guessed type int dword_D3B88;
