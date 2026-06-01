/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_179F0
// Address: 0x000179F0

//----- (000179F0) --------------------------------------------------------
int __fastcall sub_179F0(int (**a1)(), int (**a2)(), int a3)
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
      v6 = (const char *)&dword_8DB98;
    return sub_53ED4((int)a1, "Can't import symbols from %s: no imagebase\n", v6);
  }
  else
  {
    v7[2] = a1;
    v7[3] = (int (**)())a3;
    v7[4] = a2;
    v7[0] = (int (**)())&off_D0570;
    v7[1] = (int (**)())49;
    if ( v3 )
      v4 = *(int **)(a3 + 8);
    else
      v4 = &dword_8DB98;
    return sub_35040((int)v4, v7, 0);
  }
}
// 8DB98: using guessed type int dword_8DB98;
// D0570: using guessed type _UNKNOWN *off_D0570;
