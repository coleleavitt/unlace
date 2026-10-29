/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46369B
// Address: 0x0046369B

//----- (0046369B) --------------------------------------------------------
int sub_46369B()
{
  bool v5; // zf
  int v11; // eax
  int v12; // edx
  int v28; // eax
  unsigned int v29; // ecx
  int v31; // [esp+0h] [ebp-28h]
  int v32; // [esp+1Ch] [ebp-Ch]
  int v33; // [esp+24h] [ebp-4h]

  dword_4B5E28 |= 1u;
  dword_4B7844 = 0;
  if ( IsProcessorFeaturePresent(0xAu) )
  {
    _EAX = 0;
    __asm { cpuid }
    v33 = _EAX;
    v5 = (_EBX ^ 0x756E6547 | _ECX ^ 0x6C65746E | _EDX ^ 0x49656E69) == 0;
    _EAX = 1;
    __asm { cpuid }
    v31 = _EAX;
    if ( v5 )
    {
      v11 = _EAX & 0xFFF3FF0;
      if ( (v31 & 0xFFF3FF0) == 0x106C0
        || v11 == 132704
        || v11 == 132720
        || v11 == 198224
        || v11 == 198240
        || v11 == 198256 )
      {
        dword_4B7848 |= 1u;
      }
    }
    v12 = _ECX;
    v32 = _ECX;
    if ( v33 >= 7 )
    {
      _EAX = 7;
      __asm { cpuid }
      if ( (_EBX & 0x200) != 0 )
        dword_4B7848 |= 2u;
      if ( _EAX >= 1 )
      {
        _EAX = 7;
        __asm { cpuid }
      }
      _EAX = 36;
      if ( v33 >= 36 )
        __asm { cpuid }
      v12 = v32;
    }
    v28 = dword_4B5E28 | 2;
    v29 = dword_4B5E20 & 0xFFFFFFFE;
    dword_4B7844 = 1;
    dword_4B5E28 |= 2u;
    dword_4B5E20 &= ~1u;
    if ( (v12 & 0x100000) != 0 )
    {
      dword_4B7844 = 2;
      dword_4B5E28 = v28 | 4;
      dword_4B5E20 = v29 & 0xFFFFFFEF;
      if ( (v12 & 0x18000000) == 0x18000000 )
        __asm { xgetbv }
    }
  }
  return 0;
}
// 46369B: could not find valid save-restore pair for ebx
// 4B5E20: using guessed type int dword_4B5E20;
// 4B5E24: using guessed type int dword_4B5E24;
// 4B5E28: using guessed type int dword_4B5E28;
// 4B7844: using guessed type int dword_4B7844;
// 4B7848: using guessed type int dword_4B7848;
