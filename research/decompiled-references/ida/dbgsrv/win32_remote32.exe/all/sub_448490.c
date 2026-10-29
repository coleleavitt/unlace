/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448490
// Address: 0x00448490

//----- (00448490) --------------------------------------------------------
int __thiscall sub_448490(_DWORD *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 64);
  if ( v2 )
    return (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v2 + 76))(v2, 0);
  return result;
}
