/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4235A0
// Address: 0x004235A0

//----- (004235A0) --------------------------------------------------------
int __thiscall sub_4235A0(LPVOID *this, int a2)
{
  LPVOID *v2; // esi
  unsigned int v3; // eax
  int v4; // ecx
  _BYTE *v5; // eax

  v2 = this + 3;
  v3 = (unsigned int)*(this + 4) + 1;
  if ( v3 > (unsigned int)*(this + 5) )
    *v2 = sub_453B00((int)(this + 3), *v2, v3, 0x18u);
  v4 = 3 * (_DWORD)v2[1];
  v5 = *v2;
  v5[8 * v4] = 2;
  *(_OWORD *)&v5[8 * v4 + 8] = 0;
  v2[1] = (char *)v2[1] + 1;
  return sub_424B40(&v5[8 * v4], a2);
}
