unsigned __int64 __fastcall sub_A51180(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rbx
  char v9; // dl
  unsigned __int64 v10; // r8
  char v11; // al
  __int16 v12; // ax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-E8h]
  __int64 v16; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[184]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = a1 + 704;
  ptr[0] = v18;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, SHIDWORD(a2));
  v16 = 0;
  v3 = sub_21FF620(a1 + 704, ptr, &v16, off_2B16FA0);
  if ( v3 )
  {
    v4 = v3 - 24;
    if ( v4 )
    {
      v5 = v4 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_4;
    }
  }
  v7 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL) )
  {
    v8 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
    v9 = *(_BYTE *)(*(_QWORD *)v7 + 17LL) & 0x1F;
  }
  else
  {
    v15 = sub_A51180(
            a1,
            *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
    sub_21FF620(v2, ptr, &v16, off_2B16FA0);
    v14 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
    v10 = v15;
    v8 = v14;
    v9 = *(_BYTE *)(*(_QWORD *)v7 + 17LL) & 0x1F;
    if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_10;
  }
  v10 = v8 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_10:
  v11 = *(_BYTE *)(v8 + 17);
  *(_BYTE *)(v8 + 18) &= 0xF8u;
  *(_QWORD *)(v8 + 8) = v10;
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 24) = 0;
  *(_BYTE *)(v8 + 17) = v9 | v11 & 0xE0;
  v12 = *(_WORD *)(v8 + 16);
  *(_QWORD *)(v8 + 32) = a2;
  *(_WORD *)(v8 + 16) = v12 & 0x1F00 | 0x22;
  sub_A469E0(a1 + 8, v8);
  v13 = v8 + 24;
  v5 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  sub_21FF4D0(v2, v13, v16, off_2B16FA0);
LABEL_4:
  if ( ptr[0] != v18 )
    free(ptr[0]);
  return v5;
}

