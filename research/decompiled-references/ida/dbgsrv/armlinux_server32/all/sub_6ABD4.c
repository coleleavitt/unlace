/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6ABD4
// Address: 0x0006ABD4

//----- (0006ABD4) --------------------------------------------------------
int __fastcall sub_6ABD4(int result)
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
    sub_6AAD4("certificate", *(const char **)(result + 16), 17);
    if ( v1[8] )
      v6 = (const char *)v1[7];
    else
      v6 = (const char *)&dword_8DB98;
    result = sub_6AAD4("private key", v6, 17);
  }
  v2 = dword_D4BA4;
  if ( (unsigned int)dword_D4BA4 > 1 )
  {
    result = v1[17];
    v3 = v1[16];
    v4 = dword_D4BA0;
    dword_D4BA0 = v1[15];
    v5 = dword_D4BA8;
    v1[15] = v4;
    dword_D4BA4 = v3;
    v1[16] = v2;
    dword_D4BA8 = result;
    v1[17] = v5;
  }
  return result;
}
// 8DB98: using guessed type int dword_8DB98;
// D4BA0: using guessed type int dword_D4BA0;
// D4BA4: using guessed type int dword_D4BA4;
// D4BA8: using guessed type int dword_D4BA8;
