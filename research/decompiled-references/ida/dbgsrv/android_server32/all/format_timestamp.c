/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: format_timestamp
// Address: 0x0006CF34

//----- (0006CF34) --------------------------------------------------------
int __fastcall format_timestamp(_BYTE *a1, int a2, int a3, int a4, char a5)
{
  _BOOL4 v5; // r0
  _BOOL4 v6; // r1
  int result; // r0
  unsigned int v8; // r0
  unsigned int v9; // r1
  _BYTE *v10; // r5
  unsigned int v11; // r6
  unsigned int v12; // r0
  struct tm tp; // [sp+34h] [bp-30h] BYREF

  if ( (a5 & 1) != 0 )
    v5 = qgmtime(&tp, a4);
  else
    v5 = qlocaltime(&tp, a4);
  v6 = v5;
  result = 0;
  if ( v6 )
  {
    v8 = qsnprintf(a1, a2, "%04u-%02u-%02u%s%02u:%02u:%02u");
    v9 = a2 - v8;
    v10 = &a1[v8];
    if ( (a5 & 4) != 0 )
    {
      v11 = a2 - v8;
      v12 = qsnprintf(v10, v9, ".%03u");
      v9 = v11 - v12;
      v10 += v12;
    }
    if ( (a5 & 2) != 0 && (a5 & 1) != 0 && v9 >= 2 )
    {
      v10[1] = 0;
      *v10 = 90;
    }
    return 1;
  }
  return result;
}
