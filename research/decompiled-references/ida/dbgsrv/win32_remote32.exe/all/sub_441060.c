/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441060
// Address: 0x00441060

//----- (00441060) --------------------------------------------------------
void **__thiscall sub_441060(void **this, void **a2)
{
  void *v3; // ecx
  void *v4; // edx
  void *v5; // esi
  void *v6; // eax
  void *v8; // [esp+14h] [ebp-10h]
  void *v9; // [esp+2Ch] [ebp+8h]

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  *a2 = nullptr;
  a2[1] = nullptr;
  a2[2] = nullptr;
  v6 = *this;
  v9 = v3;
  v8 = v4;
  if ( *this )
  {
    *(this + 1) = nullptr;
    sub_453A20(v6);
    v3 = v9;
    v4 = v8;
    *(this + 2) = nullptr;
  }
  *this = v3;
  *(this + 1) = v4;
  *(this + 2) = v5;
  return this;
}
