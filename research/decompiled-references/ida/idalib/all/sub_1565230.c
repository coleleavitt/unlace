char __fastcall sub_1565230(__int64 a1, __int64 a2)
{
  __int16 v2; // dx
  __int64 v3; // rax
  int v5; // r8d
  _DWORD *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // r10
  __int64 v13; // r11

  v2 = *(_WORD *)(a1 + 32);
  if ( v2 == 24 )
    return 1;
  v3 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 56) + 1LL) & 8) != 0 )
  {
    if ( v2 != 64 )
      return v2 == 150 || v2 == 62;
    v8 = *(_QWORD *)(v3 + 2944);
    if ( v8 >= *(unsigned int *)(v3 + 2912) )
      v9 = sub_14180A0(*(_QWORD *)(a1 + 8), 1u);
    else
      v9 = *(_QWORD *)(v3 + 2904) + 24 * v8;
    return *(_WORD *)(v9 + 16) == 82 || *(_WORD *)(v9 + 16) == 131;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 136);
    v6 = *(_DWORD **)(a2 + 128);
    if ( v5 )
    {
      v7 = 1LL << *v6;
      if ( (v7 & 0xB7) == 0 && (v7 & 0x40) != 0 )
      {
        v10 = v6 + 36;
        v11 = (__int64)&v6[36 * (v5 - 1) + 36];
        while ( v10 != (_DWORD *)v11 )
        {
          v12 = v10;
          v13 = 1LL << *v10;
          if ( (v13 & 0xB7) != 0 )
            break;
          v10 += 36;
          if ( (v13 & 0x40) == 0 )
          {
            v6 = v12;
            break;
          }
        }
      }
    }
    if ( (v6[14] & 1) != 0 || !v6[18] )
      return v2 == 150 || v2 == 62;
    return sub_147EA80(a1, 0, 0);
  }
}
