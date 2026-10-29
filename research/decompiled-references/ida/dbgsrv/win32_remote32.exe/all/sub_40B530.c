/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B530
// Address: 0x0040B530

//----- (0040B530) --------------------------------------------------------
bool __thiscall sub_40B530(const char **this, const char *a2)
{
  const char *v2; // eax

  v2 = MultiByteStr;
  if ( *(this + 1) )
    v2 = *this;
  return strcmp(v2, a2) == 0;
}
