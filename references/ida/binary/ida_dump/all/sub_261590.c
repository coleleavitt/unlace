__int64 __fastcall sub_261590(_QWORD *a1, __int64 a2, int a3, int a4)
{
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rdx

  if ( a3 > 7 && (getinf() & 0xF) == 1 )
    return 0;
  v6 = *(unsigned __int8 *)(a2 + 130);
  if ( v6 < a3 )
    v6 = a3;
  v7 = 8 * v6 - 1;
  if ( (unsigned __int64)v7 > 0x3F )
    return 0;
  v8 = 1LL << v7;
  if ( ((1LL << v7) & *a1) == 0 )
  {
    return 0;
  }
  else
  {
    v9 = 1;
    if ( a4 == 10 )
    {
      v10 = *a1 & (2 * v8 - 1);
      LOBYTE(v10) = v10 == v8;
      return (unsigned int)v10;
    }
  }
  return v9;
}
