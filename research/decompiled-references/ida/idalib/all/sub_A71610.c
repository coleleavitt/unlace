unsigned __int64 __fastcall sub_A71610(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v5; // r13
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v11; // rax
  unsigned __int16 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r15
  char v16; // dl
  char v17; // al
  __int16 v18; // ax
  unsigned __int64 v19; // rsi
  __int64 v20; // [rsp+0h] [rbp-E8h]
  __int64 v21; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v23[184]; // [rsp+30h] [rbp-B8h] BYREF

  v5 = a1 + 368;
  v6 = *a3;
  ptr[0] = v23;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, v6);
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  v21 = 0;
  v7 = sub_2223360(a1 + 368, ptr, &v21, &off_2B41200);
  if ( v7 )
  {
    v8 = v7 - 32;
    if ( v8 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_4;
    }
  }
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL)
    && ((*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 8) == 0
     || (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
         | *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
       & 6) == 0) )
  {
    v12 = *a3;
    v15 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    v16 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x18;
    goto LABEL_12;
  }
  v11 = sub_A712D0(a1, a2);
  v20 = sub_A71610(a1, v11, a3);
  sub_2223360(v5, ptr, &v21, &off_2B41200);
  v12 = *a3;
  v13 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
  v14 = v20;
  v15 = v13;
  v16 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x18;
  if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
LABEL_12:
    v14 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_BYTE *)(v15 + 17);
  *(_QWORD *)(v15 + 8) = v14;
  *(_BYTE *)(v15 + 18) &= 0xF8u;
  *(_QWORD *)v15 = v15;
  *(_QWORD *)(v15 + 24) = a2;
  *(_BYTE *)(v15 + 17) = v16 | v17 & 0xE0;
  v18 = *(_WORD *)(v15 + 16);
  *(_QWORD *)(v15 + 32) = 0;
  *(_WORD *)(v15 + 16) = v18 & 0x1F00 | 0x19;
  *(_WORD *)(v15 + 20) = (4 * v12) | *(_WORD *)(v15 + 20) & 3;
  sub_A6A720(a1 + 8, v15);
  v19 = v15 + 32;
  v9 = v15 & 0xFFFFFFFFFFFFFFF0LL;
  sub_2223210(v5, v19, v21, &off_2B41200);
LABEL_4:
  if ( ptr[0] != v23 )
    free(ptr[0]);
  return v9;
}
