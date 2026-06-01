__int64 __fastcall sub_51A3C0(__int64 a1)
{
  char v2; // cl
  __int64 result; // rax
  int v4; // ecx
  unsigned __int64 v5; // r8
  __int64 v6; // rdi
  unsigned __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx

  if ( (*(_BYTE *)(a1 + 52) & 7) != 0 )
  {
    v2 = (*(_BYTE *)(a1 + 52) & 7) - 1;
    result = (unsigned int)(1 << v2);
    v4 = 1 << v2;
  }
  else
  {
    result = getinf(61);
    v4 = (unsigned __int8)result;
  }
  if ( v4 <= 7 )
  {
    v5 = 0;
    v6 = 1LL << (8 * (unsigned __int8)v4);
    v7 = v6 - 1;
    if ( (*(_BYTE *)(a1 + 48) & 0x40) == 0 && (*(_BYTE *)(a1 + 52) & 0x10) == 0 )
      v5 = v7 ^ (v7 >> 1);
    result = *(_QWORD *)a1;
    v8 = -v6;
    v9 = *(_QWORD *)a1 + 56LL * *(_QWORD *)(a1 + 8);
    if ( v9 != *(_QWORD *)a1 )
    {
      do
      {
        v10 = *(_QWORD *)(result + 48);
        v11 = v10 & v7;
        if ( (v10 & v5) != 0 )
          v11 = v10 | v8;
        result += 56;
        *(_QWORD *)(result - 8) = v11;
      }
      while ( v9 != result );
    }
  }
  return result;
}

