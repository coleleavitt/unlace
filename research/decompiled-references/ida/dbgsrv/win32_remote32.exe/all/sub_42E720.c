/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E720
// Address: 0x0042E720

//----- (0042E720) --------------------------------------------------------
char __thiscall sub_42E720(int this, unsigned int a2)
{
  char v2; // bl
  unsigned int v4; // edx
  _DWORD *v5; // ecx
  unsigned int v6; // edx

  v2 = -87;
  if ( a2 )
  {
    v4 = *(_DWORD *)(this + 108);
    if ( v4 < a2 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(708);
    }
    v5 = *(_DWORD **)(this + 104);
    v6 = v4 - a2;
    *(_DWORD *)(this + 108) = v6;
    v2 = *(_BYTE *)(v6 + *v5);
    sub_4028B0((int)v5, v6);
  }
  *(_BYTE *)(this + 112) = -87;
  return v2;
}
// 4B70F0: using guessed type char byte_4B70F0;
