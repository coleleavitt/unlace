/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_480C65
// Address: 0x00480C65

//----- (00480C65) --------------------------------------------------------
unsigned int __cdecl sub_480C65(unsigned int a1)
{
  unsigned int result; // eax
  _DWORD v2[7]; // [esp+4h] [ebp-20h] BYREF

  memset(v2, 0, sizeof(v2));
  __asm { fnstenv byte ptr [ebp+var_20] }
  v2[0] ^= (LOWORD(v2[0]) ^ (unsigned __int16)sub_480A30(a1)) & 0x1F3F;
  __asm { fldenv  byte ptr [ebp+var_20] }
  result = sub_480963(a1);
  if ( dword_4B7844 >= 1 )
  {
    result = result & 0xFFC0 | _mm_getcsr() & 0xFFFF003F;
    _mm_setcsr(result);
  }
  return result;
}
// 4B7844: using guessed type int dword_4B7844;
