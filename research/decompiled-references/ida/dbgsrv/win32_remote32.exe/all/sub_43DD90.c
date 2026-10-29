/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43DD90
// Address: 0x0043DD90

//----- (0043DD90) --------------------------------------------------------
bool __thiscall sub_43DD90(int *this, int a2, int a3)
{
  _DWORD *v3; // edi
  int v4; // eax
  bool result; // al
  int v6; // [esp+0h] [ebp-Ch] BYREF
  int v7; // [esp+8h] [ebp-4h]

  if ( !a3 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
    return 1;
  v3 = this + 40;
  sub_408BC0(this + 40, &v6, (int *)(a2 + 4));
  result = false;
  if ( !*(_BYTE *)(v7 + 13) && *(_DWORD *)(a2 + 4) >= *(_DWORD *)(v7 + 16) && v7 != *v3 )
  {
    v4 = *(_DWORD *)(v7 + 24);
    if ( v4 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v7 + 20) + 24 * v4 - 8) == *(_DWORD *)(a2 + 8) )
        return true;
    }
  }
  return result;
}
