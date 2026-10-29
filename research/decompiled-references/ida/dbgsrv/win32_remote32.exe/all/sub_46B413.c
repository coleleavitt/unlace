/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B413
// Address: 0x0046B413

//----- (0046B413) --------------------------------------------------------
int __thiscall sub_46B413(_DWORD **this, char *a2, int a3, _DWORD *a4, int **a5)
{
  if ( ((*this)[3] & 0x1000) == 0 || (*this)[1] )
    return sub_46B4A6(this, a2, a3, a4, a5);
  *a4 += a3;
  return a3;
}
