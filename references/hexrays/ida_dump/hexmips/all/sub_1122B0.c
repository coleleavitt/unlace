__int64 __fastcall sub_1122B0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v5; // ecx
  int v6; // r15d
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  int v10; // eax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp

  v5 = *(_DWORD *)(a1 + 128) + *(_DWORD *)(a1 + 120);
  v6 = *(_DWORD *)(a1 + 124);
  v7 = *(_QWORD *)(a1 + 112);
  if ( (unsigned __int64)v5 > 0x7F )
  {
    v9 = 0;
    v8 = 0;
  }
  else
  {
    v8 = (unsigned __int64)((v5 & 0x40) != 0) << v5;
    v9 = (unsigned __int64)((v5 & 0x40) == 0) << v5;
  }
  v10 = log2ceil(*(_QWORD *)(a1 + 112));
  v11 = 0;
  v12 = 0;
  if ( (unsigned __int64)v10 <= 0x7F )
  {
    v12 = (unsigned __int64)((v10 & 0x40) != 0) << v10;
    v11 = (unsigned __int64)((v10 & 0x40) == 0) << v10;
  }
  if ( v6 > 3 )
  {
    v12 = (v12 << ((unsigned __int8)v6 - 3)) | (v11 >> (64 - ((unsigned __int8)v6 - 3)));
    v11 <<= (unsigned __int8)v6 - 3;
    if ( (((_BYTE)v6 - 3) & 0x40) != 0 )
    {
      v12 = v11;
      v11 = 0;
    }
  }
  v13 = 0;
  v14 = a2 * v7;
  v15 = (__PAIR128__(a3, a2) * v7) >> 64;
  if ( __PAIR128__(v15, a2 * v7) >= __PAIR128__(v8, v9) )
  {
    LOBYTE(v13) = __PAIR128__(v12, v9) + __PAIR128__(v8, v11) < __PAIR128__(v15, v14);
    LOBYTE(v14) = v7 <= 1;
    return ((unsigned int)v14 | v13) ^ 1;
  }
  return v13;
}
