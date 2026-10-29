/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A820
// Address: 0x0005A820

//----- (0005A820) --------------------------------------------------------
int __fastcall sub_5A820(int a1)
{
  unsigned int v2; // r2
  int result; // r0
  const char *v4; // r4
  bool v5; // zf
  const char *v6; // r1
  char *v7; // [sp+4h] [bp-10h] BYREF
  int v8; // [sp+8h] [bp-Ch]
  int v9; // [sp+Ch] [bp-8h]

  v2 = *(_DWORD *)(a1 + 12);
  result = 0;
  if ( v2 <= 0x12 && ((1 << v2) & 0x40C00) != 0 )
  {
    v4 = *(const char **)a1;
    v5 = sub_5A7C8(a1 + 16, *(const char **)a1, v2) == 0;
    result = 1;
    if ( v5 )
    {
      v8 = 0;
      v7 = nullptr;
      v9 = 0;
      sub_5A030(a1, (int)&v7);
      if ( dword_DE4A8 && *(_BYTE *)(dword_DE4A8 + 96) )
      {
        if ( v8 )
          v6 = v7;
        else
          v6 = &byte_B3CBE;
        sub_1BBA0((int)"Couldn't find UUID/debug ID \"%s\" for file: %s\n", v6, v4);
      }
      if ( v7 )
      {
        v8 = 0;
        qfree(v7);
        v9 = 0;
        v7 = nullptr;
      }
      return 0;
    }
  }
  return result;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE4A8: using guessed type int dword_DE4A8;
