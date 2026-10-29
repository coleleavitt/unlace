/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_151BC
// Address: 0x000151BC

//----- (000151BC) --------------------------------------------------------
bool __fastcall sub_151BC(int a1, char *a2, unsigned int a3)
{
  ssize_t v5; // r3
  _BOOL4 result; // r0
  FILE *v7; // r0
  FILE *v8; // r6
  size_t v9; // r4
  char v10[4092]; // [sp+4h] [bp-1004h] BYREF

  sub_7EA4C(v10, 4096, "/proc/%u/exe", a1);
  v5 = readlink(v10, a2, a3 - 1);
  if ( v5 <= 0 )
  {
    v7 = sub_75BE8((int)v10, (unsigned __int8 *)"r");
    v8 = v7;
    if ( !v7 )
      goto LABEL_10;
    v9 = sub_77620(v7, a2, a3);
    sub_77754(v8);
    result = (int)v9 > 1;
    if ( v9 >= a3 )
      result = 0;
    if ( result && *a2 == 47 )
    {
      a2[v9] = 0;
    }
    else
    {
LABEL_10:
      *a2 = 0;
      return 0;
    }
  }
  else
  {
    result = 1;
    a2[v5] = 0;
  }
  return result;
}
