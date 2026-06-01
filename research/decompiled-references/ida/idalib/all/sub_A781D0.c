unsigned __int64 __fastcall sub_A781D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v9; // r15
  char v10; // al
  unsigned __int64 v11; // r8
  char v12; // dl
  __int16 v13; // ax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-F0h]
  __int64 v17; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+40h] [rbp-B8h] BYREF

  v4 = a1 + 672;
  ptr[0] = v19;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, a3);
  v17 = 0;
  v5 = sub_2223360(a1 + 672, ptr, &v17, off_2B40FA0);
  if ( v5 )
  {
    v6 = v5 - 24;
    if ( v6 )
    {
      v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_4;
    }
  }
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL) )
  {
    v9 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    v10 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x18 | 6;
  }
  else
  {
    v16 = sub_A781D0(
            a1,
            *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7,
            a3,
            0);
    sub_2223360(v4, ptr, &v17, off_2B40FA0);
    v15 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    v11 = v16;
    v9 = v15;
    v10 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x18 | 6;
    if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_10;
  }
  v11 = v9 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_10:
  v12 = *(_BYTE *)(v9 + 17);
  *(_QWORD *)v9 = v9;
  *(_BYTE *)(v9 + 18) &= 0xF8u;
  *(_QWORD *)(v9 + 8) = v11;
  *(_QWORD *)(v9 + 24) = 0;
  *(_BYTE *)(v9 + 17) = v12 & 0xE0 | v10;
  v13 = *(_WORD *)(v9 + 16);
  *(_QWORD *)(v9 + 32) = a2;
  *(_DWORD *)(v9 + 20) = a3;
  *(_WORD *)(v9 + 16) = v13 & 0x1F00 | 0x26;
  sub_A6A720(a1 + 8, v9);
  v14 = v9 + 24;
  v7 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  sub_2223210(v4, v14, v17, off_2B40FA0);
LABEL_4:
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v7;
}
