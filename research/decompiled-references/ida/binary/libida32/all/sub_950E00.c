__int64 __fastcall sub_950E00(__int64 a1)
{
  __int64 result; // rax
  _BOOL4 v6; // ecx

  _RAX = 0;
  *(_QWORD *)(a1 + 30168) = 0;
  __asm { cpuid }
  *(_QWORD *)(a1 + 30192) = 0;
  v6 = 0;
  *(_QWORD *)(a1 + 30184) = 0;
  *(_QWORD *)(a1 + 29912) = 0;
  *(_QWORD *)(a1 + 30204) = 0;
  *(_QWORD *)(a1 + 30240) = 0;
  *(_QWORD *)(a1 + 30248) = 0;
  *(_QWORD *)(a1 + 30280) = 0;
  *(_DWORD *)(a1 + 30236) = 0;
  *(_DWORD *)(a1 + 30316) = 0;
  *(_QWORD *)(a1 + 95960) = 0;
  *(_DWORD *)(a1 + 30176) = 1;
  if ( (unsigned int)result > 6 )
  {
    _RAX = 7;
    __asm { cpuid }
    v6 = (_RBX & 0x108) == 264;
  }
  *(_DWORD *)(a1 + 30180) = v6;
  *(_QWORD *)(a1 + 30264) = 134217729;
  *(_DWORD *)(a1 + 30320) = 0;
  *(_QWORD *)(a1 + 30104) = 0;
  *(_QWORD *)(a1 + 30216) = 0;
  *(_QWORD *)(a1 + 30224) = 0;
  *(_DWORD *)(a1 + 30232) = 0;
  return result;
}

