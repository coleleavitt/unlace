_BOOL8 __fastcall sub_30D0C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 i; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rbp
  int v25; // eax

  v2 = *(_DWORD *)a1 & 0xF;
  if ( v2 != 2 )
    return v2 == 5;
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 == 1 )
  {
    v7 = *(__int64 **)(a1 + 8);
    v8 = v7[1];
    v9 = *v7;
    v10 = v8 - 1;
    if ( ((v8 - 1) & v8) == 0 && (v10 & v9) == 0 )
    {
      sub_30B800(a2);
      *(_DWORD *)a2 = 5;
      v23 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a2 + 16) = v9;
      v24 = v10 | v9;
      *(_DWORD *)(a2 + 4) = v23;
      v25 = *(_DWORD *)(a1 + 4);
      if ( v25 != 8 )
        v24 |= -1LL << (8 * (unsigned __int8)v25);
      *(_QWORD *)(a2 + 8) = ~v24;
      return 1;
    }
    goto LABEL_6;
  }
  if ( v6 )
  {
    v7 = *(__int64 **)(a1 + 8);
LABEL_6:
    v11 = 0;
    for ( i = 0; i != v6; ++i )
    {
      v11 += v7[2 * (int)i + 1];
      if ( v11 > 0x10 )
        return 0;
    }
    v13 = 0;
    v14 = 0;
    v15 = -1;
    do
    {
      v16 = &v7[2 * (int)v13];
      v17 = v16[1];
      if ( v17 )
      {
        v18 = *v16;
        v19 = v18 + v17;
        do
        {
          v15 &= v18;
          v14 |= v18++;
        }
        while ( v18 != v19 );
      }
      ++v13;
    }
    while ( v6 != v13 );
    v20 = ~v14;
    goto LABEL_16;
  }
  v20 = -1;
  v15 = -1;
LABEL_16:
  sub_30B800(a2);
  *(_DWORD *)a2 = 5;
  v21 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 4) = v21;
  if ( v21 != 8 )
    v15 &= ~(-1LL << (8 * (unsigned __int8)v21));
  *(_QWORD *)(a2 + 16) = v15;
  v22 = *(_DWORD *)(a1 + 4);
  if ( v22 != 8 )
    v20 &= ~(-1LL << (8 * (unsigned __int8)v22));
  *(_QWORD *)(a2 + 8) = v20;
  return 1;
}
