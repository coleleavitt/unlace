/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454170
// Address: 0x00454170

//----- (00454170) --------------------------------------------------------
_BYTE *__stdcall sub_454170(_BYTE *a1, unsigned int a2, __int16 a3)
{
  _BYTE *v3; // ecx

  v3 = a1;
  if ( (int)(a2 - (_DWORD)a1) < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( (unsigned __int16)a3 > 0x7Fu )
  {
    if ( (unsigned __int16)a3 > 0x3FFFu )
    {
      if ( (unsigned int)a1 < a2 )
      {
        *a1 = -1;
        v3 = a1 + 1;
      }
      return sub_454070(v3, a2, a3);
    }
    else
    {
      return sub_454070(a1, a2, a3 | 0x8000);
    }
  }
  else
  {
    if ( (unsigned int)a1 < a2 )
    {
      *a1 = a3;
      return a1 + 1;
    }
    return v3;
  }
}
// 4B70F0: using guessed type char byte_4B70F0;
