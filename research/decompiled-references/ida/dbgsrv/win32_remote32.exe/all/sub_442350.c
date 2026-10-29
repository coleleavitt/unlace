/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442350
// Address: 0x00442350

//----- (00442350) --------------------------------------------------------
void *__thiscall sub_442350(CHAR **this, int a2)
{
  CHAR *v2; // eax

  v2 = (CHAR *)MultiByteStr;
  if ( *(this + 3) )
    v2 = *(this + 2);
  return sub_441370(a2, v2);
}
