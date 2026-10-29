/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36E08
// Address: 0x00036E08

//----- (00036E08) --------------------------------------------------------
int __fastcall sub_36E08(int a1, int a2)
{
  char *v3; // r1
  unsigned int v4; // r3

  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    if ( *(_DWORD *)(a1 + 36) )
      v3 = *(char **)(a1 + 32);
    else
      v3 = (char *)&dword_8DB98;
    v4 = __clz((unsigned int)sub_48E9C((_BYTE *)a1, v3, (unsigned __int8 *)(a1 + 48), 0));
    *(_DWORD *)(a2 + 8) = v4 >> 5;
    return 0;
  }
  else
  {
    sub_70C04(0, "setattr");
    return sub_70B98(56);
  }
}
// 8DB98: using guessed type int dword_8DB98;
