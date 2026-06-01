/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4541E0
// Address: 0x004541E0

//----- (004541E0) --------------------------------------------------------
int __stdcall sub_4541E0(unsigned __int8 **a1, unsigned int a2)
{
  unsigned __int8 **v2; // ebx
  int v3; // edx
  unsigned int v4; // esi
  unsigned __int8 *v5; // ecx
  unsigned __int8 *v6; // edi
  int result; // eax
  unsigned __int16 v8; // bp
  int v9; // eax

  v2 = a1;
  v3 = 0;
  v4 = a2;
  v5 = *a1;
  v6 = v5;
  a1 = (unsigned __int8 **)*a1;
  if ( (unsigned int)v5 < a2 )
  {
    v3 = *v5;
    v6 = ++v5;
    a1 = (unsigned __int8 **)v5;
  }
  result = v3;
  if ( (v3 & 0x80u) == 0 )
  {
LABEL_14:
    *v2 = v5;
    return result;
  }
  if ( (v3 & 0xC0) != 0xC0 )
  {
    if ( (unsigned int)v6 < a2 )
    {
      v9 = *v5;
      *v2 = v6 + 1;
      return ((v3 & 0xFFFFFF7F) << 8) + v9;
    }
    result = v3;
    goto LABEL_14;
  }
  if ( (v3 & 0xE0) == 0xE0 )
  {
    v8 = sub_454020((_BYTE **)&a1, a2);
  }
  else if ( (unsigned int)v6 >= a2 )
  {
    v8 = 0;
  }
  else
  {
    v8 = *v5 + ((v3 & 0x3F) << 8);
    a1 = (unsigned __int8 **)(v6 + 1);
  }
  result = (v8 << 16) + (unsigned __int16)sub_454020((_BYTE **)&a1, v4);
  *v2 = (unsigned __int8 *)a1;
  return result;
}
