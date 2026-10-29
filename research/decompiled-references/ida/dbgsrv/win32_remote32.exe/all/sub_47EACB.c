/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EACB
// Address: 0x0047EACB

//----- (0047EACB) --------------------------------------------------------
int __usercall sub_47EACB@<eax>(char a1@<fpstat>)
{
  int v1; // ecx
  int v2; // edx
  int result; // eax
  int v4; // [esp+8h] [ebp-8h]

  __asm { fnclex }
  if ( dword_4B7844 < 1 )
  {
    result = 0;
    if ( (a1 & 0x3F) != 0 )
    {
      result = 16 * (a1 & 1);
      if ( (a1 & 4) != 0 )
        result |= 8u;
      if ( (a1 & 8) != 0 )
        result |= 4u;
      if ( (a1 & 0x10) != 0 )
        result |= 2u;
      if ( (a1 & 0x20) != 0 )
        result |= 1u;
      if ( (a1 & 2) != 0 )
        return result | 0x80000;
    }
  }
  else
  {
    v1 = 0;
    v2 = 0;
    if ( (a1 & 0x3F) != 0 )
    {
      v2 = 16 * (a1 & 1);
      if ( (a1 & 4) != 0 )
        v2 |= 8u;
      if ( (a1 & 8) != 0 )
        v2 |= 4u;
      if ( (a1 & 0x10) != 0 )
        v2 |= 2u;
      if ( (a1 & 0x20) != 0 )
        v2 |= 1u;
      if ( (a1 & 2) != 0 )
        v2 |= 0x80000u;
    }
    v4 = _mm_getcsr();
    _mm_setcsr(v4 & 0xFFFFFFC0);
    if ( (v4 & 0x3F) != 0 )
    {
      v1 = 16 * (v4 & 1);
      if ( (v4 & 4) != 0 )
        v1 |= 8u;
      if ( (v4 & 8) != 0 )
        v1 |= 4u;
      if ( (v4 & 0x10) != 0 )
        v1 |= 2u;
      if ( (v4 & 0x20) != 0 )
        v1 |= 1u;
      if ( (v4 & 2) != 0 )
        v1 |= 0x80000u;
    }
    return v2 | v1;
  }
  return result;
}
// 4B7844: using guessed type int dword_4B7844;
