/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442990
// Address: 0x00442990

//----- (00442990) --------------------------------------------------------
int __cdecl sub_442990(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  _DWORD v8[2]; // [esp+8h] [ebp-8h] BYREF

  v8[0] = a3;
  v8[1] = a3 + a4;
  if ( a2 < 0x1000000 )
    return (*(int (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)(a1 != 0 ? a1 - 112 + 0x100 : 256) + 196))(
             *(_DWORD *)(a1 != 0 ? a1 - 112 + 0x100 : 256),
             a2,
             a3,
             a4,
             a5,
             a6);
  v6 = a1 != 0 ? a1 - 112 : 0;
  return (*(int (__thiscall **)(int, int, int, int, _DWORD *))(*(_DWORD *)v6 + 12))(v6, a2, a5, a6, v8);
}
