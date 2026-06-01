/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407560
// Address: 0x00407560

//----- (00407560) --------------------------------------------------------
char *__thiscall sub_407560(char **this, LPVOID *a2)
{
  char *v3; // edx
  LPVOID v4; // edi
  char *result; // eax
  unsigned int v6; // eax

  v3 = *this;
  if ( a2 < (LPVOID *)*this || a2 >= (LPVOID *)&v3[4 * (_DWORD)*(this + 2)] )
  {
    v6 = (unsigned int)(*(this + 1) + 1);
    if ( v6 > (unsigned int)*(this + 2) )
    {
      v3 = (char *)sub_453B00((int)this, v3, v6, 4u);
      *this = v3;
    }
    result = (char *)*a2;
    *(_DWORD *)&v3[4 * (_DWORD)(*(this + 1))++] = *a2;
  }
  else
  {
    v4 = *a2;
    result = *(this + 1) + 1;
    if ( result > *(this + 2) )
    {
      result = (char *)sub_453B00((int)this, v3, (unsigned int)result, 4u);
      v3 = result;
      *this = result;
    }
    *(_DWORD *)&v3[4 * (_DWORD)(*(this + 1))++] = v4;
  }
  return result;
}
