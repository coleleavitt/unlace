/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41FBD0
// Address: 0x0041FBD0

//----- (0041FBD0) --------------------------------------------------------
void __usercall sub_41FBD0(LPVOID *this@<ecx>, int a2@<ebx>)
{
  LPVOID *v3; // esi
  char *v4; // eax
  int v5; // ecx
  _BYTE *v6; // eax
  int v7; // esi

  v3 = this + 3;
  if ( !*(this + 4) )
  {
    v4 = (char *)*(this + 4) + 1;
    if ( v4 > *(this + 5) )
      *v3 = sub_453B00((int)(this + 3), *v3, (unsigned int)v4, 0x18u);
    v5 = 3 * (_DWORD)v3[1];
    v6 = *v3;
    v6[8 * v5] = 2;
    *(_OWORD *)&v6[8 * v5 + 8] = 0;
    v3[1] = (char *)v3[1] + 1;
  }
  v7 = (int)*v3 + 24 * (_DWORD)v3[1] - 24;
  sub_41D420(a2, v7);
  sub_41EFC0((unsigned int *)this, v7);
}
