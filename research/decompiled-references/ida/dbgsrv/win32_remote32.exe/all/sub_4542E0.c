/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4542E0
// Address: 0x004542E0

//----- (004542E0) --------------------------------------------------------
__int16 __stdcall sub_4542E0(unsigned __int8 **a1, unsigned int a2)
{
  __int16 v2; // dx
  unsigned __int8 **v3; // esi
  unsigned __int8 *v4; // ecx
  unsigned __int8 *v5; // edi
  __int16 result; // ax
  unsigned __int8 v7; // al

  v2 = 0;
  v3 = a1;
  v4 = *a1;
  v5 = v4;
  a1 = (unsigned __int8 **)*a1;
  if ( (unsigned int)v4 < a2 )
  {
    v2 = *v4;
    v5 = ++v4;
    a1 = (unsigned __int8 **)v4;
  }
  if ( (v2 & 0x80u) == 0 )
    goto LABEL_8;
  if ( (v2 & 0xC0) == 0xC0 )
  {
    result = sub_454020((_BYTE **)&a1, a2);
    *v3 = (unsigned __int8 *)a1;
    return result;
  }
  if ( (unsigned int)v5 >= a2 )
  {
LABEL_8:
    *v3 = v4;
    return v2;
  }
  else
  {
    v7 = *v4;
    *v3 = v5 + 1;
    return (v7 | (unsigned __int16)(v2 << 8)) & 0x7FFF;
  }
}
