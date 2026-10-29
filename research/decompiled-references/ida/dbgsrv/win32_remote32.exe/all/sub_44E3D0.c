/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E3D0
// Address: 0x0044E3D0

//----- (0044E3D0) --------------------------------------------------------
int __thiscall sub_44E3D0(void *this)
{
  int result; // eax

  if ( this )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, 1);
  return result;
}
