/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_405380
// Address: 0x00405380

//----- (00405380) --------------------------------------------------------
int __thiscall sub_405380(_DWORD **this, int a2)
{
  int v2; // edi
  _DWORD **v3; // ebx
  int result; // eax
  _DWORD **v5; // ecx
  _DWORD **v6; // [esp+8h] [ebp-4h] BYREF

  v6 = this;
  v2 = (*(int (__stdcall **)(_DWORD, _DWORD ***))(**(this + 2) + 32))(*(this + 2), &v6);
  v3 = v6;
  if ( !a2 )
    return 1;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30545);
  }
  v5 = nullptr;
  *(_BYTE *)(a2 + 12) = 1;
  result = v2;
  if ( !v2 )
    v5 = v3;
  *(_DWORD *)(a2 + 8) = v5;
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
