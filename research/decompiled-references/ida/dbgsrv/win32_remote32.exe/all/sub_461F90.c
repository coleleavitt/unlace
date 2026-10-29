/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461F90
// Address: 0x00461F90

//----- (00461F90) --------------------------------------------------------
char __thiscall sub_461F90(char **this, char *a2)
{
  char *v3; // edx
  char *v4; // eax
  char v5; // bl
  unsigned int v6; // eax

  v3 = *this;
  if ( a2 < *this || a2 >= &(*(this + 2))[(int)v3] )
  {
    v6 = (unsigned int)(*(this + 1) + 1);
    if ( v6 > (unsigned int)*(this + 2) )
    {
      v3 = (char *)sub_453B00((int)this, v3, v6, 1u);
      *this = v3;
    }
    LOBYTE(v4) = *a2;
    ((*(this + 1))++)[(_DWORD)v3] = *a2;
  }
  else
  {
    v4 = *(this + 1) + 1;
    v5 = *a2;
    if ( v4 > *(this + 2) )
    {
      v4 = (char *)sub_453B00((int)this, v3, (unsigned int)v4, 1u);
      v3 = v4;
      *this = v4;
    }
    ((*(this + 1))++)[(_DWORD)v3] = v5;
  }
  return (char)v4;
}
