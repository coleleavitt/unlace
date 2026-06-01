/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57174
// Address: 0x00057174

//----- (00057174) --------------------------------------------------------
int *sub_57174()
{
  int v0; // r3
  void *v2; // r7

  if ( byte_D4AE4 )
  {
    v0 = dword_D4ADC;
  }
  else
  {
    if ( !sub_7A894("DEBUG_FILE_DIRECTORY", (int)&dword_D4AD8) )
      sub_7A894("ELF_DEBUG_FILE_DIRECTORY", (int)&dword_D4AD8);
    v0 = dword_D4ADC;
    if ( (unsigned int)dword_D4ADC <= 1 )
    {
      v2 = (void *)dword_D4AD8;
      if ( (unsigned int)dword_D4AE0 <= 0xE )
      {
        v2 = sub_78018((int)&dword_D4AD8, (void *)dword_D4AD8, 0xFu, 1u);
        dword_D4AD8 = (int)v2;
      }
      dword_D4ADC = 15;
      qmemcpy(v2, "/usr/lib/debug", 14);
      v0 = dword_D4ADC;
      *(_BYTE *)(dword_D4AD8 + 14) = 0;
    }
    byte_D4AE4 = 1;
  }
  if ( v0 )
    return (int *)dword_D4AD8;
  else
    return &dword_8DB98;
}
// 8DB98: using guessed type int dword_8DB98;
// D4AD8: using guessed type int dword_D4AD8;
// D4ADC: using guessed type int dword_D4ADC;
// D4AE0: using guessed type int dword_D4AE0;
// D4AE4: using guessed type char byte_D4AE4;
