__int64 sub_866DC0()
{
  int v10; // esi
  int v11; // eax
  int v17; // eax
  __int64 result; // rax
  int v23; // edx

  _RAX = 0;
  __asm { cpuid }
  if ( (unsigned int)_RAX > 6 )
  {
    _RAX = 7;
    __asm { cpuid }
    v10 = (_RBX & 8) == 0 ? 1 : 17;
    v11 = v10;
    if ( (_RBX & 0x20) != 0 )
    {
      LOBYTE(v11) = ((_RBX & 8) == 0 ? 1 : 17) | 0x80;
      v10 = v11;
    }
    goto LABEL_4;
  }
  if ( (_DWORD)_RAX )
  {
    v10 = 1;
LABEL_4:
    _RAX = 1;
    __asm { cpuid }
    if ( (_RCX & 0x80000) != 0 )
      v10 |= 4u;
    v17 = v10;
    if ( (_RCX & 0x8000000) != 0 )
    {
      BYTE1(v17) = BYTE1(v10) | 1;
      v10 = v17;
    }
    if ( (_RCX & 0x10000000) != 0 )
      v10 |= 0x40u;
    if ( (_RDX & 0x8000) != 0 )
      v10 |= 0x20u;
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)result > 0x80000000 )
    {
      _RAX = 2147483649LL;
      __asm { cpuid }
      result = v10 | 8u;
      if ( (_RCX & 0x20) != 0 )
        v10 |= 8u;
    }
    if ( (v10 & 0x100) != 0 )
    {
      __asm { xgetbv }
      v23 = v10;
      if ( (result & 4) == 0 )
      {
        LOBYTE(v23) = v10 & 0x3F;
        v10 = v23;
      }
    }
    goto LABEL_16;
  }
  _RAX = 0x80000000LL;
  __asm { cpuid }
  v10 = 1;
  if ( (unsigned int)result <= 0x80000000 )
  {
LABEL_16:
    dword_2CD6FCC = v10;
    return result;
  }
  _RAX = 2147483649LL;
  __asm { cpuid }
  dword_2CD6FCC = (_RCX & 0x20) == 0 ? 1 : 9;
  __asm { cpuid }
  return result;
}
