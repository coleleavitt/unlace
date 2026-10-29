/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B580
// Address: 0x0040B580

//----- (0040B580) --------------------------------------------------------
bool __thiscall sub_40B580(const char **this, int a2)
{
  const char *v2; // edx
  const char *v3; // eax

  if ( *(_DWORD *)(a2 + 4) )
    v2 = *(const char **)a2;
  else
    v2 = MultiByteStr;
  v3 = MultiByteStr;
  if ( *(this + 1) )
    v3 = *this;
  return strcmp(v3, v2) != 0;
}
