/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407890
// Address: 0x00407890

//----- (00407890) --------------------------------------------------------
int __thiscall sub_407890(_DWORD **this, _DWORD *a2, int a3, int (__thiscall ***a4)(_DWORD, int))
{
  int v5; // esi
  _DWORD v7[6]; // [esp+0h] [ebp-2Ch] BYREF
  int *v8[5]; // [esp+18h] [ebp-14h] BYREF

  v8[1] = v7;
  v7[5] = this;
  v8[4] = nullptr;
  if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 136))(a2) )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(30536);
  }
  v5 = (*(int (__stdcall **)(_DWORD, _DWORD, int, _DWORD, _DWORD, int **))(**(this + 7) + 32))(
         *(this + 7),
         a2[2],
         a3,
         0,
         0,
         v8);
  if ( !v5 )
  {
    v5 = sub_404110(this, v8[0], a4);
    (*(void (__stdcall **)(int *))(*v8[0] + 8))(v8[0]);
  }
  return v5;
}
// 4B70F0: using guessed type char byte_4B70F0;
