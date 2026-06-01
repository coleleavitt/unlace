/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480CCD
// Address: 0x00480CCD

//----- (00480CCD) --------------------------------------------------------
int __cdecl sub_480CCD(unsigned int a1)
{
  int v1; // ebx
  int result; // eax
  _DWORD v3[7]; // [esp+Ch] [ebp-20h] BYREF

  memset(v3, 0, sizeof(v3));
  __asm { fnstenv [ebp+var_20] }
  v3[1] ^= ((unsigned __int8)((2 * ((a1 & 0x200000) != 0))
                            | ((a1 & 0x100000) != 0)
                            | (4 * ((a1 & 0x80000) != 0))
                            | (8 * ((a1 & 0x40000) != 0))
                            | (16 * ((a1 & 0x20000) != 0))
                            | (32 * (BYTE2(a1) & 1)))
          ^ LOBYTE(v3[1]))
         & 0x3F;
  __asm { fldenv  [ebp+var_20] }
  result = 2 * ((a1 & 0x20000000) != 0);
  if ( dword_4B7844 >= 1 )
  {
    v1 = HIBYTE(a1) & 0x3F;
    result = (2 * ((v1 & 0x20) != 0)) & 0x3F
           | ((v1 & 0x10) != 0)
           | ((unsigned __int8)(4 * ((v1 & 8) != 0))
            | (unsigned __int8)((8 * ((v1 & 4) != 0)) | (16 * ((v1 & 2) != 0)) | (32 * (v1 & 1))))
           & 0x3F
           | _mm_getcsr() & 0xFFFFFFC0;
    _mm_setcsr(result);
  }
  return result;
}
// 4B7844: using guessed type int dword_4B7844;
