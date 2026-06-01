/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4300C0
// Address: 0x004300C0

//----- (004300C0) --------------------------------------------------------
unsigned int __thiscall sub_4300C0(_DWORD *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int result; // eax
  unsigned int v6; // eax
  _DWORD *v7; // eax
  unsigned int v8; // ecx
  _DWORD *v9; // esi
  unsigned int v10; // [esp-4h] [ebp-Ch]

  v3 = a3;
  if ( a3 > 0x7FFFFFFF )
    sub_431BD0();
  if ( a3 > 0xF )
  {
    v6 = a3 | 0xF;
    if ( (a3 | 0xF) <= 0x7FFFFFFF )
    {
      if ( v6 < 0x16 )
        v6 = 22;
    }
    else
    {
      v6 = 0x7FFFFFFF;
    }
    a3 = v6;
    v7 = sub_430060((int)this, v3, (int)this, &a3);
    v8 = a3;
    v9 = v7;
    *this = v7;
    *(this + 4) = v3;
    *(this + 5) = v8;
    result = sub_464310((unsigned int)v7, a2, v3);
    *((_BYTE *)v9 + v3) = 0;
  }
  else
  {
    v10 = a3;
    *(this + 4) = a3;
    *(this + 5) = 15;
    result = sub_464310((unsigned int)this, a2, v10);
    *((_BYTE *)this + v3) = 0;
  }
  return result;
}
