/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_469B52
// Address: 0x00469B52

//----- (00469B52) --------------------------------------------------------
char *__thiscall sub_469B52(_DWORD *this)
{
  int v2; // edi
  int v3; // eax

  v2 = *(this + 257);
  v3 = sub_469A8C(this);
  if ( v2 )
    return (char *)(v2 + v3);
  else
    return (char *)this + v3;
}
