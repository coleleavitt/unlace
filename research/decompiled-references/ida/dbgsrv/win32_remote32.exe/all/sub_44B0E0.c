/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44B0E0
// Address: 0x0044B0E0

//----- (0044B0E0) --------------------------------------------------------
char __thiscall sub_44B0E0(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // edx
  _DWORD *i; // eax
  int v7; // ecx
  int v9; // edi
  int v10; // esi
  int (__thiscall *v11)(_DWORD *); // eax

  v5 = 0;
  for ( i = this + 98; ; ++i )
  {
    v7 = *(i - 4);
    if ( v7 == a3 && *i == a2 )
      return 0;
    if ( v7 == -1 )
      break;
    if ( ++v5 >= 4 )
      return 0;
  }
  if ( v5 == -1 )
    return 0;
  *(this + v5 + 94) = a3;
  v9 = 0;
  *(this + v5 + 98) = a2;
  if ( a2 != 8 )
    v9 = a2;
  if ( a4 == 2 )
  {
    v10 = 1;
  }
  else if ( a4 == 4 )
  {
    v10 = 3;
  }
  else
  {
    v10 = 0;
    if ( a4 == 8 )
      v10 = 2;
  }
  v11 = *(int (__thiscall **)(_DWORD *))(*this + 304);
  *(this + 103) |= (v10 << (4 * v5 + 18)) | (1 << (2 * v5)) | (v9 << (4 * v5 + 16));
  return v11(this);
}
