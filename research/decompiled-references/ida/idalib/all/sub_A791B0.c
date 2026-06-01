unsigned __int64 __fastcall sub_A791B0(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned __int64 a5)
{
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v14; // rax
  char v15; // al
  char v16; // r9
  char v17; // di
  char v18; // si
  char v19; // al
  char v20; // r9
  char v21; // di
  char v22; // si
  char v23; // dl
  unsigned __int64 v24; // rax
  __int64 v26; // [rsp+8h] [rbp-E0h]
  __int64 v27; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v30[184]; // [rsp+30h] [rbp-B8h] BYREF

  v28 = a2;
  ptr[0] = v30;
  ptr[1] = (void *)0x2000000000LL;
  v27 = 0;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, a3);
  sub_9B7040((__int64)ptr, SHIDWORD(a3));
  v9 = 1;
  if ( !a4 )
    v9 = (unsigned __int8)sub_F235A0(&v28);
  sub_9B7040((__int64)ptr, v9);
  v10 = sub_2223360(a1 + 760, ptr, &v27, &off_2B40EA0);
  if ( v10 && (v11 = v10 - 32) != 0 )
  {
    v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v14 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    v28 = a2;
    v26 = v14;
    v15 = sub_F23270(&v28);
    v16 = v15 & 8;
    if ( (v15 & 8) != 0 )
      v16 = 16;
    v17 = v15 & 4;
    if ( (v15 & 4) != 0 )
      v17 = 12;
    v18 = v15 & 2;
    if ( (v15 & 2) != 0 )
      v18 = 2;
    v19 = v18 | v17 | v16 | v15 & 1;
    v20 = v19 & 0x10;
    if ( (v19 & 0x10) != 0 )
      v20 = 16;
    v21 = v19 & 0xC;
    if ( (v19 & 0xC) != 0 )
      v21 = 4;
    v22 = v19 & 2;
    if ( (v19 & 2) != 0 )
      v22 = 2;
    v23 = v22 | v21 | v20 | (a4 != 0 ? 6 : 0) | v19 & 1;
    if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      v23 |= *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x17;
    v24 = a5;
    *(_QWORD *)(v26 + 24) = a3;
    v12 = v26 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)v26 = v26;
    *(_QWORD *)(v26 + 32) = 0;
    if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      v24 = v26 & 0xFFFFFFFFFFFFFFF0LL;
    *(_BYTE *)(v26 + 18) &= 0xF8u;
    *(_QWORD *)(v26 + 8) = v24;
    *(_BYTE *)(v26 + 17) = *(_BYTE *)(v26 + 17) & 0xE0 | v23 & 0x1F;
    *(_WORD *)(v26 + 16) = *(_WORD *)(v26 + 16) & 0x1F00 | 0x11;
    *(_QWORD *)(v26 + 40) = v28;
    sub_A6A720(a1 + 8, v26);
    sub_2223210(a1 + 760, v26 + 32, v27, &off_2B40EA0);
  }
  if ( ptr[0] != v30 )
    free(ptr[0]);
  return v12;
}
