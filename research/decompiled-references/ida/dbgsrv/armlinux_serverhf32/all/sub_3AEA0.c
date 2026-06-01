/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AEA0
// Address: 0x0003AEA0

//----- (0003AEA0) --------------------------------------------------------
int __fastcall sub_3AEA0(_DWORD *a1)
{
  char *v2; // r1
  unsigned __int16 v3; // r0
  const char *v4; // r1
  int result; // r0
  int v6; // r5
  _DWORD *v7; // r3
  int v8; // [sp+0h] [bp-8h] BYREF

  if ( a1[7] )
    v2 = (char *)a1[6];
  else
    v2 = (char *)&dword_8DA5C;
  v3 = sub_3ADD8(a1, v2, &v8);
  if ( (unsigned int)(v8 - 1) <= 2 )
  {
    v6 = v3;
    result = 0;
    v7 = (_DWORD *)(a1[51] + 16 * (a1[52] + 0xFFFFFFF));
    v7[2] = v8;
    v7[3] = v6;
    v7[1] = a1[29];
  }
  else
  {
    if ( a1[7] )
      v4 = (const char *)a1[6];
    else
      v4 = (const char *)&dword_8DA5C;
    sub_70A98(0, v4);
    return sub_70A2C(55);
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
