/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_405560
// Address: 0x00405560

//----- (00405560) --------------------------------------------------------
int __thiscall sub_405560(_DWORD **this, int a2, int a3)
{
  int v3; // edi
  _DWORD **v5; // [esp+Ch] [ebp-4h] BYREF

  v5 = this;
  v3 = (*(int (__stdcall **)(_DWORD, int, _DWORD ***))(**(this + 7) + 72))(*(this + 7), a3, &v5);
  if ( !v3 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(30543);
    }
    *(_DWORD *)(a2 + 8) = v5;
    *(_BYTE *)(a2 + 12) = 1;
  }
  return v3;
}
// 4B70F0: using guessed type char byte_4B70F0;
