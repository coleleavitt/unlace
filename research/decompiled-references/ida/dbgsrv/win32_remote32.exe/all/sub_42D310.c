/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D310
// Address: 0x0042D310

//----- (0042D310) --------------------------------------------------------
int __thiscall sub_42D310(_DWORD *this, const char *a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int i; // esi
  const char *v5; // eax
  int v6; // eax

  v2 = *(this + 1);
  v3 = 0;
  if ( !v2 )
    return -1;
  for ( i = *this; ; i += 12 )
  {
    v5 = MultiByteStr;
    if ( *(_DWORD *)(i + 4) )
      v5 = *(const char **)i;
    v6 = strcmp(v5, a2);
    if ( v6 )
      v6 = v6 < 0 ? -1 : 1;
    if ( !v6 )
      break;
    if ( ++v3 >= v2 )
      return -1;
  }
  return v3;
}
