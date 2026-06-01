void __fastcall sub_1A2DE30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // r8

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
  v7 = *(_QWORD *)(v6 + 1592);
  if ( v7 )
    v7 += 72;
  v8 = a3 + 32 * a4;
  sub_17A2E00(a1, a2, v7);
  for ( ; a3 != v8; a3 += 32 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 1592);
      v10 = *(_QWORD *)(a3 + 16);
      if ( v9 )
        v9 += 72;
      sub_B8C080(*(_QWORD *)(a3 + 16), v9);
      v13 = *(_QWORD *)(v10 + 40);
      if ( (v13 & 7) == 0 && (v13 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        break;
      a3 += 32;
      if ( a3 == v8 )
        goto LABEL_11;
    }
    sub_17B7670(a1, v10, a2, 0, v11, v12);
  }
LABEL_11:
  v14 = *(_QWORD *)(v6 + 1656);
  if ( v14
    || (v18 = *(unsigned int *)(v6 + 1544), (_DWORD)v18)
    && (v14 = sub_BC21A0(
                *(_QWORD **)(a1 + 248),
                0,
                *(_DWORD *)(v6 + 1636),
                *(_QWORD *)(v6 + 1536),
                v18,
                *(unsigned int *)(v6 + 1640),
                (_DWORD *)(*(_QWORD *)(v6 + 1648) & 0xFFFFFFFFFFFFFFFELL)),
        (*(_QWORD *)(v6 + 1656) = v14) != 0) )
  {
    v15 = *(_QWORD *)(v6 + 1584);
    v16 = *(_QWORD *)(v6 + 1592);
    if ( v15 )
      v15 += 64;
    v17 = sub_BBDCA0(
            *(_QWORD *)(a1 + 248),
            v15,
            *(_DWORD *)(v16 + 24),
            *(_QWORD *)(v16 + 40),
            v14,
            *(_QWORD *)(v6 + 1592));
    *(_BYTE *)(v17 + 29) &= 0x9Fu;
    sub_B77A70(v16, v17);
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 1584) + 128LL) + 104LL) |= 4u;
    *(_BYTE *)(v6 + 1465) |= sub_BBD670(v14);
  }
  *(_BYTE *)(v6 + 1600) = 1;
}
