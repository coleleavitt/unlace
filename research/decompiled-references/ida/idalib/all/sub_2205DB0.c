__int64 __fastcall sub_2205DB0(unsigned __int64 *a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  v2 = *((unsigned int *)a1 + 2);
  v3 = *a2;
  v4 = *a1;
  if ( (unsigned int)v2 <= 0x40 )
  {
    result = v4 > v3;
    if ( v4 < v3 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    v5 = 8LL * ((unsigned int)((unsigned __int64)(v2 + 63) >> 6) - 1);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + v5);
      v7 = *(_QWORD *)(v3 + v5);
      if ( v6 != v7 )
        break;
      v5 -= 8;
      if ( v5 == -8 )
        return 0;
    }
    return v7 < v6 ? 1 : -1;
  }
  return result;
}
