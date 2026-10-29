/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B038
// Address: 0x0003B038

//----- (0003B038) --------------------------------------------------------
int __fastcall sub_3B038(_DWORD *a1)
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
    v2 = (char *)&dword_8DB98;
  v3 = sub_3AF70(a1, v2, &v8);
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
      v4 = (const char *)&dword_8DB98;
    sub_70C04(0, v4);
    return sub_70B98(55);
  }
  return result;
}
// 8DB98: using guessed type int dword_8DB98;
