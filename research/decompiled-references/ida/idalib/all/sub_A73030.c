unsigned __int64 __fastcall sub_A73030(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // r15
  char v20; // dl
  char v21; // al
  char v22; // bp
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // [rsp+0h] [rbp-E8h]
  __int64 v27; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v28; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v29; // [rsp+8h] [rbp-E0h]
  __int64 v30; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v32[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = a1 + 104;
  ptr[0] = v32;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, a3);
  v30 = 0;
  v6 = sub_2223360(a1 + 104, ptr, &v30, &off_2B41380);
  if ( v6 )
  {
    v9 = v6 - 24;
    if ( v9 )
    {
      v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_4;
    }
  }
  v12 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v13 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v13 + 16) - 43 <= 1 )
    goto LABEL_8;
  v28 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v24 = sub_A56C80(v13, (__int64)ptr, v7, v8, v12);
  v12 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v13 = v24;
  if ( a3 != 1 || v24 )
  {
    if ( v24 )
    {
LABEL_8:
      v26 = v12;
      v14 = sub_9B4870(v13, (__int64)ptr, v7, v8, v12);
      v12 = v26;
      v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_9;
    }
    v15 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    LOBYTE(v14) = a2;
  }
  else
  {
    v15 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    LOBYTE(v14) = a2;
    if ( (*(_QWORD *)v28 & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)v28 + 8LL) )
    {
      v25 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
      v17 = a2 & 0xFFFFFFFFFFFFFFF0LL;
      v19 = v25;
      v20 = *(_BYTE *)(*(_QWORD *)v28 + 17LL) & 0x1F;
      goto LABEL_15;
    }
  }
LABEL_9:
  v29 = v12;
  v27 = sub_A73030(
          a1,
          *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)(v15 + 8) | (unsigned __int8)v14) & 7,
          1);
  sub_2223360(v4, ptr, &v30, &off_2B41380);
  v16 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
  v17 = v29;
  v18 = v27;
  v19 = v16;
  v20 = *(_BYTE *)(*(_QWORD *)v29 + 17LL) & 0x1F;
  if ( (v27 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
LABEL_15:
    v18 = v19 & 0xFFFFFFFFFFFFFFF0LL;
  v21 = *(_BYTE *)(v19 + 17);
  *(_QWORD *)(v19 + 8) = v18;
  *(_QWORD *)v19 = v19;
  *(_QWORD *)(v19 + 24) = 0;
  *(_QWORD *)(v19 + 32) = a2;
  *(_BYTE *)(v19 + 17) = v20 | v21 & 0xE0;
  *(_WORD *)(v19 + 16) = *(_WORD *)(v19 + 16) & 0x1F00 | 0x2B;
  v22 = (8 * (a3 & 1)) | *(_BYTE *)(v19 + 18) & 0xF0;
  *(_BYTE *)(v19 + 18) = v22;
  *(_BYTE *)(v19 + 18) = (16
                        * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL)
                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 16LL)
                         - 43 <= 1))
                       | v22 & 0xEF;
  sub_A6A720(a1 + 8, v19);
  v23 = v19 + 24;
  v10 = v19 & 0xFFFFFFFFFFFFFFF0LL;
  sub_2223210(v4, v23, v30, &off_2B41380);
LABEL_4:
  if ( ptr[0] != v32 )
    free(ptr[0]);
  return v10;
}
