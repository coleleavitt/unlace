/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_427E40
// Address: 0x00427E40

//----- (00427E40) --------------------------------------------------------
int __thiscall sub_427E40(_DWORD *this, const char *a2)
{
  int v2; // esi
  int i; // edi
  const char *v4; // eax
  int v5; // eax

  if ( !a2 )
    return -1;
  v2 = *(this + 1) - 1;
  if ( v2 < 0 )
    return -1;
  for ( i = *this + 4 * v2; ; i -= 4 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)i + 4) ? **(const char ***)i : MultiByteStr;
    v5 = strcmp(v4, a2);
    if ( v5 )
      v5 = v5 < 0 ? -1 : 1;
    if ( !v5 )
      break;
    if ( --v2 < 0 )
      return -1;
  }
  return v2;
}
