unsigned __int64 __fastcall sub_A76570(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  char v11; // dl
  char v12; // si
  char v13; // dl
  unsigned __int64 v14; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v15; // [rsp+8h] [rbp-E0h]
  __int64 v16; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr[0] = v18;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a3);
  sub_9B7040((__int64)ptr, SHIDWORD(a3));
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  v16 = 0;
  v5 = sub_2223360(a1 + 864, ptr, &v16, off_2B41100);
  if ( v5 && (v6 = v5 - 24) != 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v14 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)a3 | (unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    v9 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    v10 = v14;
    v11 = *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    *(_QWORD *)(v9 + 32) = a3;
    *(_QWORD *)v9 = v9;
    v7 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    *(_BYTE *)(v9 + 16) = 9;
    v12 = v11 & 0x1F;
    v13 = *(_BYTE *)(v9 + 17);
    if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v9 + 40) = a2;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 8) = v10;
    *(_BYTE *)(v9 + 17) = v12 | v13 & 0xE0;
    *(_WORD *)(v9 + 17) &= 0xF81Fu;
    v15 = v9;
    sub_A6A720(a1 + 8, v9);
    sub_2223210(a1 + 864, v15 + 24, v16, off_2B41100);
  }
  if ( ptr[0] != v18 )
    free(ptr[0]);
  return v7;
}
