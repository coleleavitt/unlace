/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454070
// Address: 0x00454070

//----- (00454070) --------------------------------------------------------
_BYTE *__cdecl sub_454070(_BYTE *a1, unsigned int a2, __int16 a3)
{
  _BYTE *v3; // edx

  v3 = a1;
  if ( (int)(a2 - (_DWORD)a1) < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( (unsigned int)a1 < a2 )
  {
    *a1 = HIBYTE(a3);
    v3 = a1 + 1;
    if ( (unsigned int)(a1 + 1) < a2 )
    {
      *v3 = a3;
      return a1 + 2;
    }
  }
  return v3;
}
// 4B70F0: using guessed type char byte_4B70F0;
