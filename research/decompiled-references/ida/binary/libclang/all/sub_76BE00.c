__int64 __fastcall sub_76BE00(__int64 a1)
{
  __int64 v1; // rdx
  _DWORD **v2; // r8
  _DWORD **v3; // rdi
  __int64 result; // rax
  int v5; // ecx
  int v6; // edx

  v1 = 8LL * *(unsigned int *)(a1 + 24);
  v2 = (_DWORD **)(a1 + v1 + 32);
  v3 = (_DWORD **)(a1 + 32);
  result = (**v2 >> 14) & 0x1F;
  if ( v1 )
  {
    do
    {
      if ( *v3 )
      {
        v5 = **v3 >> 14;
        v6 = v5 & 0x1F;
        if ( (v5 & 8) != 0 )
          v6 = v5 & 0x1B | 4;
        result = v6 | (unsigned int)result;
      }
      ++v3;
    }
    while ( v3 != v2 );
  }
  return result;
}

