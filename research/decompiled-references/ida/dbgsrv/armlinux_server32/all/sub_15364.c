/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15364
// Address: 0x00015364

//----- (00015364) --------------------------------------------------------
bool __fastcall sub_15364(int a1, char *a2, unsigned int a3)
{
  ssize_t v5; // r3
  _BOOL4 result; // r0
  FILE *v7; // r0
  FILE *v8; // r6
  size_t v9; // r4
  char v10[4092]; // [sp+4h] [bp-1004h] BYREF

  sub_7EBB4(v10, 4096, "/proc/%u/exe", a1);
  v5 = readlink(v10, a2, a3 - 1);
  if ( v5 <= 0 )
  {
    v7 = sub_75D50((int)v10, (unsigned __int8 *)"r");
    v8 = v7;
    if ( !v7 )
      goto LABEL_10;
    v9 = sub_77788(v7, a2, a3);
    sub_778BC(v8);
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
