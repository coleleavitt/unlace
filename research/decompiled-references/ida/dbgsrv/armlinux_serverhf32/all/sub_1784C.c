/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1784C
// Address: 0x0001784C

//----- (0001784C) --------------------------------------------------------
int __fastcall sub_1784C(int (**a1)(), int (**a2)(), int a3)
{
  int v3; // r6
  int *v4; // r0
  const char *v6; // r2
  int (**v7[5])(); // [sp+0h] [bp-1Ch] BYREF

  v3 = *(_DWORD *)(a3 + 12);
  if ( *(_DWORD *)a3 == -1 )
  {
    if ( v3 )
      v6 = *(const char **)(a3 + 8);
    else
      v6 = (const char *)&dword_8DA5C;
    return sub_53D50((int)a1, "Can't import symbols from %s: no imagebase\n", v6);
  }
  else
  {
    v7[2] = a1;
    v7[3] = (int (**)())a3;
    v7[4] = a2;
    v7[0] = (int (**)())&off_CF570;
    v7[1] = (int (**)())49;
    if ( v3 )
      v4 = *(int **)(a3 + 8);
    else
      v4 = &dword_8DA5C;
    return sub_34EA8((int)v4, v7, 0);
  }
}
// 8DA5C: using guessed type int dword_8DA5C;
// CF570: using guessed type _UNKNOWN *off_CF570;
