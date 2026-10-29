/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402F30
// Address: 0x00402F30

//----- (00402F30) --------------------------------------------------------
int __thiscall sub_402F30(int *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *this;
  if ( v1 )
    return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 8))(v1);
  return result;
}
