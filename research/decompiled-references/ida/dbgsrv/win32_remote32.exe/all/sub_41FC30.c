/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41FC30
// Address: 0x0041FC30

//----- (0041FC30) --------------------------------------------------------
int __thiscall sub_41FC30(_DWORD *this, _DWORD *a2)
{
  int v2; // eax
  _DWORD *v3; // edx

  v2 = *(this + 1);
  if ( v2 < 0 )
    return sub_420810(a2, ~v2);
  v3 = (_DWORD *)*this;
  if ( *this && *v3 == 289621065 && (unsigned int)v2 < v3[4] )
    return v3[3] + 24 * v2;
  else
    return 0;
}
