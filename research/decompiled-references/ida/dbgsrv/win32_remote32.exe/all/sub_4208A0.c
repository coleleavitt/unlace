/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4208A0
// Address: 0x004208A0

//----- (004208A0) --------------------------------------------------------
int __thiscall sub_4208A0(_DWORD *this, int *a2)
{
  int v3; // ebp
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  int v9; // eax

  v3 = *(this + 3) + 8 * (3 * *(this + 4) - 3);
  if ( sub_424980((char *)v3) )
    return 0;
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  *a2 = *(_DWORD *)(v3 + 8);
  a2[1] = *(_DWORD *)(v3 + 12);
  a2[2] = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 16) = v6;
  *(_DWORD *)(v3 + 8) = v4;
  *(_DWORD *)(v3 + 12) = v5;
  sub_423380(this);
  v7 = *(this + 3);
  v8 = *(_BYTE *)(v7 + 24 * *(this + 4) - 24) == 5;
  v9 = v7 + 24 * *(this + 4);
  if ( !v8 )
  {
    sub_45CC20(1532);
    return 0;
  }
  return *(_DWORD *)(v9 - 16);
}
