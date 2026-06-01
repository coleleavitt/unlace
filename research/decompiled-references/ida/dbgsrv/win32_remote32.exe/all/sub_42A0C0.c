/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A0C0
// Address: 0x0042A0C0

//----- (0042A0C0) --------------------------------------------------------
int __userpurge sub_42A0C0@<eax>(__m128i a1@<xmm0>, _DWORD *a2)
{
  int v2; // ecx
  int v3; // eax
  const char *v4; // eax
  int result; // eax

  if ( a2[29] != 1 )
    return 0;
  v2 = *(_DWORD *)(a2[24] + 8);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(*(_DWORD *)(a2[14] + 40) + 4 * v2);
  if ( *(_DWORD *)(v3 + 20) )
    v4 = *(const char **)(v3 + 16);
  else
    v4 = MultiByteStr;
  result = sub_42C8D0((int)a2, a1, v4);
  if ( !result )
    return sub_42A190(a2);
  return result;
}
