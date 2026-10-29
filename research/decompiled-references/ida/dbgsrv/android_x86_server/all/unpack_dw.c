/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_dw
// Address: 0x000AD740

//----- (000AD740) --------------------------------------------------------
int __cdecl unpack_dw(unsigned __int8 **a1, unsigned int a2)
{
  _DWORD *v2; // ebx
  unsigned __int8 *v3; // edi
  unsigned __int8 *v4; // edx
  int result; // eax
  int v6; // ecx

  v2 = a1;
  v3 = *a1;
  if ( (unsigned int)*a1 >= a2 )
  {
    result = 0;
    v4 = *a1;
  }
  else
  {
    v4 = v3 + 1;
    result = *v3;
    if ( (result & 0x80u) != 0 )
    {
      if ( (*v3 & 0xC0) == 0xC0 )
      {
        if ( (unsigned int)v4 >= a2 )
        {
          result = 0;
        }
        else
        {
          v4 = v3 + 2;
          result = v3[1] << 8;
        }
        v2 = a1;
        if ( (unsigned int)v4 < a2 )
        {
          v6 = *v4++;
          result |= v6;
        }
      }
      else
      {
        v2 = a1;
        if ( (unsigned int)v4 < a2 )
        {
          v4 = v3 + 2;
          result = v3[1] | ((result & 0x7F) << 8);
        }
      }
    }
  }
  *v2 = v4;
  return result;
}
