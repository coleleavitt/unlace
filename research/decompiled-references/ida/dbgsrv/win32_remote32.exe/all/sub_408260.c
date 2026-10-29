/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408260
// Address: 0x00408260

//----- (00408260) --------------------------------------------------------
int __thiscall sub_408260(_DWORD *this, int a2)
{
  int (__thiscall *v3)(_DWORD *); // edi
  int v4; // esi
  int result; // eax

  v3 = *(int (__thiscall **)(_DWORD *))(*this + 136);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2);
  if ( v3(this) != v4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30541);
  }
  if ( !*(_BYTE *)(a2 + 12) || (result = *(_DWORD *)(a2 + 8)) == 0 || *(this + 2) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30503);
  }
  *(this + 2) = result;
  *((_BYTE *)this + 12) = 1;
  *(_BYTE *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
