__int64 __fastcall sub_B3FE40(__int64 a1)
{
  _DWORD **v1; // r8
  _DWORD **v2; // rdi
  __int64 result; // rax
  int v4; // ecx
  int v5; // edx

  v1 = (_DWORD **)(a1 + 8LL * *(unsigned int *)(a1 + 24) + 32);
  v2 = (_DWORD **)(a1 + 32);
  for ( result = (**v1 >> 14) & 0x1F; v1 != v2; ++v2 )
  {
    if ( *v2 )
    {
      v4 = **v2 >> 14;
      v5 = v4 & 0x1F;
      if ( (v4 & 8) != 0 )
        v5 = v4 & 0x1B | 4;
      result = v5 | (unsigned int)result;
    }
  }
  return result;
}

