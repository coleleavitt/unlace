/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4378A0
// Address: 0x004378A0

//----- (004378A0) --------------------------------------------------------
void __thiscall sub_4378A0(_DWORD *this)
{
  int v2; // edx
  int v3; // esi
  int v4; // ecx
  int v5; // ecx
  void **v6; // esi

  v2 = *(this + 8);
  while ( v2 )
  {
    v3 = *(this + 7);
    v4 = 7 * *(this + 8);
    *this = *(_DWORD *)(v3 + 28 * *(this + 8) - 16);
    *(this + 1) = *(_DWORD *)(v3 + 4 * v4 - 12);
    *(this + 10) = *(_DWORD *)(v3 + 4 * v4 - 4);
    *(this + 8) = v2 - 1;
    v5 = 7 * --v2;
    v6 = (void **)(4 * v5 + v3);
    if ( *v6 )
    {
      sub_415F90(v6, 0);
      sub_453A20(*v6);
      *v6 = nullptr;
      v6[2] = nullptr;
      v2 = *(this + 8);
    }
  }
}
// 4378F5: conditional instruction was optimized away because edx.4!=0
