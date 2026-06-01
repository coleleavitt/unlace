__int64 __fastcall sub_5DD4C0(_QWORD *a1, __m128i a2, double a3)
{
  char v3; // al
  int v4; // ebp
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rsi
  int v8; // ecx
  __int64 v10; // r13
  int v11; // eax

  v3 = sub_5CD650((__int64)a1, a1[14]);
  v4 = sub_51C510(v3);
  if ( (unsigned int)sub_5DD470(a1, a2, a3) )
  {
    return (unsigned int)-1;
  }
  else
  {
    v5 = 0;
    v6 = a1[49];
    v7 = *(_QWORD *)(a1[48] + 16 * v6 - 16);
    if ( v6 )
      a1[49] = v6 - 1;
    v8 = 0;
    while ( 1LL << v8 != v7 )
    {
      if ( ++v8 == 7 )
        return set_qerrno(1297, v7);
    }
    if ( v8 > 3 )
      return set_qerrno(1297, v7);
    v10 = *(_QWORD *)(a1[15] + 48LL);
    if ( ((1 << v8) & ((1 << v8) - 1)) == 0 )
      *(_BYTE *)(v10 + 52) = (log2ceil(1 << v8, v7, 1) + 1) | *(_BYTE *)(v10 + 52) & 0xF8;
    v11 = 64;
    if ( v4 == 1 )
      v11 = 128;
    *(_DWORD *)(v10 + 48) |= v11;
    *(_DWORD *)(a1[15] + 80LL) |= 2u;
  }
  return v5;
}

