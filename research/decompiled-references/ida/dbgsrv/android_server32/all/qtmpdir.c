/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpdir
// Address: 0x0007D3C4

//----- (0007D3C4) --------------------------------------------------------
unsigned int __fastcall qtmpdir(unsigned int a1, int a2)
{
  char *v4; // r1
  char *v6; // [sp+4h] [bp-10h] BYREF
  int v7; // [sp+8h] [bp-Ch]
  int v8; // [sp+Ch] [bp-8h]

  v7 = 0;
  v6 = nullptr;
  v8 = 0;
  if ( qgetenv("TMPDIR", (int)&v6) )
  {
    if ( v7 )
      v4 = v6;
    else
      v4 = &byte_B3CBE;
    qustrncpy(a1, (int)v4, a2);
  }
  else
  {
    qustrncpy(a1, (int)"/tmp", a2);
  }
  if ( v6 )
  {
    v7 = 0;
    qfree(v6);
    v8 = 0;
    v6 = nullptr;
  }
  return a1;
}
// B3CBE: using guessed type char byte_B3CBE;
