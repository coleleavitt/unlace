__int64 __fastcall sub_673AC0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = *(_DWORD *)a2 & 0x7FFFFFFF;
  if ( v6 == 8 )
    return sub_672CC0(a1, *(_QWORD *)(a2 + 8), a3, a4, a5, a6);
  if ( v6 > 8 )
  {
    if ( v6 != 9 )
      return 1;
    v8 = *(_QWORD *)(a2 + 8);
    v9 = v8 + 24LL * *(unsigned int *)(a2 + 4);
    if ( v8 == v9 )
      return 1;
    while ( 1 )
    {
      result = sub_673AC0(a1, v8);
      if ( !(_BYTE)result )
        break;
      v8 += 24;
      if ( v9 == v8 )
        return 1;
    }
  }
  else
  {
    if ( v6 != 1 )
    {
      if ( ((v6 + 2147483642) & 0x7FFFFFFF) <= 1 )
      {
        sub_B03900(v10, *(_QWORD *)(a2 + 8));
        return sub_673A50(a1, v10[0], a3, a4, a5, a6);
      }
      return 1;
    }
    return sub_673340(a1, *(_QWORD *)(a2 + 8), a3, a4, a5, a6);
  }
  return result;
}

