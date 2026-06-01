/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4540B0
// Address: 0x004540B0

//----- (004540B0) --------------------------------------------------------
_BYTE *__stdcall sub_4540B0(_BYTE *a1, unsigned int a2, unsigned int a3)
{
  _BYTE *v3; // ecx
  _BYTE *v5; // eax

  v3 = a1;
  if ( (int)(a2 - (_DWORD)a1) < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( a3 > 0x7F )
  {
    if ( a3 > 0x3FFF )
    {
      if ( a3 > 0x1FFFFFFF )
      {
        *a1 = -1;
        v5 = sub_454070(a1 + 1, a2, SHIWORD(a3));
      }
      else
      {
        v5 = sub_454070(a1, a2, HIWORD(a3) | 0xC000);
      }
      return sub_454070(v5, a2, a3);
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
