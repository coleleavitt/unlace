unsigned __int64 __fastcall sub_A77770(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // rax
  char v11; // cl
  char v12; // dl
  __int16 v13; // dx
  unsigned __int64 v14; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v15; // [rsp+8h] [rbp-E0h]
  __int64 v16; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[184]; // [rsp+30h] [rbp-B8h] BYREF

  ptr[0] = v18;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, a3);
  sub_9B7040((__int64)ptr, SHIDWORD(a3));
  sub_9B7040((__int64)ptr, *a4);
  sub_9B7040((__int64)ptr, a4[1] & 1);
  sub_9B7040((__int64)ptr, (a4[1] & 2) != 0);
  v16 = 0;
  v6 = sub_2223360(a1 + 880, ptr, &v16, &off_2B410E0);
  if ( v6 && (v7 = v6 - 24) != 0 )
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v10 = sub_A6FFD0((__int64 *)(a1 + 2352), 64, 4u);
    v11 = 0;
    if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      v11 = *(_BYTE *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
    *(_QWORD *)v10 = v10;
    *(_BYTE *)(v10 + 18) &= 0xF8u;
    v15 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    v12 = *(_BYTE *)(v10 + 17);
    *(_QWORD *)(v10 + 8) = v10 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v10 + 32) = a2;
    *(_QWORD *)(v10 + 40) = a3;
    *(_BYTE *)(v10 + 17) = v11 | v12 & 0xE0;
    v13 = *(_WORD *)(v10 + 16);
    *(_QWORD *)(v10 + 24) = 0;
    v14 = v10;
    *(_WORD *)(v10 + 16) = v13 & 0x1F00 | 0x1B;
    *(_WORD *)(v10 + 48) = *(_WORD *)a4;
    sub_A6A720(a1 + 8, v10);
    sub_2223210(a1 + 880, v14 + 24, v16, &off_2B410E0);
    v8 = v15;
  }
  if ( ptr[0] != v18 )
    free(ptr[0]);
  return v8;
}
