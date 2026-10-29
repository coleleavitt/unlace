/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409180
// Address: 0x00409180

//----- (00409180) --------------------------------------------------------
_DWORD *__thiscall sub_409180(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = *(_DWORD *)(a2 + 4);
  *this = *(_DWORD *)a2;
  *(this + 1) = v2;
  *(this + 2) = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = 0;
  *(this + 3) = v3;
  v4 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = 0;
  *(this + 4) = v4;
  v5 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 16) = 0;
  *(this + 5) = v5;
  v6 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 20) = 0;
  *(this + 6) = v6;
  v7 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 24) = 0;
  *(this + 7) = v7;
  *(_DWORD *)(a2 + 28) = 0;
  *(this + 8) = *(_DWORD *)(a2 + 32);
  *((_BYTE *)this + 36) = *(_BYTE *)(a2 + 36);
  *((_BYTE *)this + 37) = *(_BYTE *)(a2 + 37);
  return this;
}
