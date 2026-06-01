/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36C70
// Address: 0x00036C70

//----- (00036C70) --------------------------------------------------------
int __fastcall sub_36C70(int a1, int a2)
{
  char *v3; // r1
  unsigned int v4; // r3

  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    if ( *(_DWORD *)(a1 + 36) )
      v3 = *(char **)(a1 + 32);
    else
      v3 = (char *)&dword_8DA5C;
    v4 = __clz((unsigned int)sub_48D0C((_BYTE *)a1, v3, (unsigned __int8 *)(a1 + 48), 0));
    *(_DWORD *)(a2 + 8) = v4 >> 5;
    return 0;
  }
  else
  {
    sub_70A98(0, "setattr");
    return sub_70A2C(56);
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
