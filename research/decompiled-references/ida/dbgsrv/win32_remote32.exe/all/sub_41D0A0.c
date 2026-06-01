/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41D0A0
// Address: 0x0041D0A0

//----- (0041D0A0) --------------------------------------------------------
signed int __stdcall sub_41D0A0(int a1, int a2)
{
  const char *v2; // eax
  const char *v3; // ecx
  signed int result; // eax

  if ( *(_DWORD *)(a2 + 4) )
    v2 = *(const char **)a2;
  else
    v2 = MultiByteStr;
  if ( *(_DWORD *)(a1 + 4) )
    v3 = *(const char **)a1;
  else
    v3 = MultiByteStr;
  result = strcmp(v3, v2);
  if ( result )
    return (unsigned int)(result < 0 ? -1 : 1) >> 31;
  return result;
}
