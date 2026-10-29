/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EFE0
// Address: 0x0042EFE0

//----- (0042EFE0) --------------------------------------------------------
int __thiscall sub_42EFE0(int this, int a2)
{
  int v3; // ecx
  int v4; // ebp
  unsigned int v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx

  v3 = *(_DWORD *)(this + 140);
  v4 = *(_DWORD *)(*(_DWORD *)(this + 136) + 4 * v3 - 4);
  if ( v3 )
    *(_DWORD *)(this + 140) = v3 - 1;
  v5 = *(_DWORD *)(this + 108) - v4;
  v6 = sub_4627C2(0x10u);
  v7 = v6;
  if ( v6 )
  {
    *v6 = 0;
    v6[3] = 0;
  }
  else
  {
    v7 = nullptr;
  }
  *v7 = a2;
  v8 = sub_4539E0(12);
  v9 = (int)v8;
  if ( v8 )
  {
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
  }
  else
  {
    v9 = 0;
  }
  v7[1] = v9;
  sub_401600(v9, v4 + **(_DWORD **)(this + 104), v5);
  v7[2] = *(_DWORD *)(*(_DWORD *)(this + 184) + 4 * *(_DWORD *)(this + 188) - 4);
  *(_DWORD *)(*(_DWORD *)(this + 184) + 4 * *(_DWORD *)(this + 188) - 4) = v7;
  if ( v5 )
  {
    v10 = *(_DWORD *)(this + 108);
    if ( v10 < v5 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(708);
    }
    v11 = *(_DWORD *)(this + 104);
    *(_DWORD *)(this + 108) = v10 - v5;
    sub_4028B0(v11, v10 - v5);
  }
  *(_BYTE *)(this + 112) = -87;
  return 0;
}
// 4B70F0: using guessed type char byte_4B70F0;
