unsigned __int64 __fastcall sub_A54090(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rbp
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int16 v15; // cx
  __int16 v16; // ax
  unsigned __int64 v17; // r8
  char v18; // al
  __int16 v19; // ax
  __int16 v20; // ax
  __int16 v21; // [rsp+8h] [rbp-100h]
  unsigned __int64 v22; // [rsp+8h] [rbp-100h]
  unsigned __int64 v23; // [rsp+8h] [rbp-100h]
  __int64 v24; // [rsp+18h] [rbp-F0h]
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v27[184]; // [rsp+50h] [rbp-B8h] BYREF

  v8 = a1 + 480;
  ptr[0] = v27;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, a3);
  sub_993300((__int64)ptr, a4);
  sub_993300((__int64)ptr, a5);
  sub_993300((__int64)ptr, SHIDWORD(a5));
  v25 = 0;
  v9 = sub_21FF620(a1 + 480, ptr, &v25, &off_2B170C0);
  if ( !v9 || (v10 = v9 - 24, v9 == 24) )
  {
    v21 = a2 & 0x7FFF;
    if ( a5 )
    {
      v24 = sub_A54090(a1, a2, a3, a4, 0);
      v13 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
      *(_QWORD *)v13 = v13;
      v14 = v24;
      *(_QWORD *)(v13 + 32) = a5;
      *(_QWORD *)(v13 + 24) = 0;
      *(_WORD *)(v13 + 22) = a3;
      if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      *(_BYTE *)(v13 + 18) &= 0xF8u;
      *(_QWORD *)(v13 + 8) = v14;
      *(_BYTE *)(v13 + 17) = *(_BYTE *)(v13 + 17) & 0xE0 | a4 & 0x19 | 6;
      v15 = *(_WORD *)(v13 + 20);
      *(_WORD *)(v13 + 16) = *(_WORD *)(v13 + 16) & 0x1F00 | 0x32;
      v16 = v15 & 0x8000 | v21;
      *(_WORD *)(v13 + 20) = v16;
      *(_BYTE *)(v13 + 21) = HIBYTE(v16) & 0x7F | (a4 << 7);
      v22 = v13;
      sub_21FF620(v8, ptr, &v25, &off_2B170C0);
      v17 = v22;
    }
    else
    {
      v17 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
      *(_QWORD *)v17 = v17;
      *(_QWORD *)(v17 + 8) = v17 & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_BYTE *)(v17 + 17);
      *(_BYTE *)(v17 + 18) &= 0xF8u;
      *(_QWORD *)(v17 + 24) = 0;
      *(_QWORD *)(v17 + 32) = 0;
      *(_BYTE *)(v17 + 17) = v18 & 0xE0 | a4 & 0x19 | 6;
      v19 = *(_WORD *)(v17 + 16);
      *(_WORD *)(v17 + 22) = a3;
      *(_WORD *)(v17 + 16) = v19 & 0x1F00 | 0x32;
      v20 = v21 | *(_WORD *)(v17 + 20) & 0x8000;
      *(_WORD *)(v17 + 20) = v20;
      *(_BYTE *)(v17 + 21) = HIBYTE(v20) & 0x7F | (a4 << 7);
    }
    v23 = v17;
    sub_A469E0(a1 + 8, v17);
    sub_21FF4D0(v8, v23 + 24, v25, &off_2B170C0);
    v10 = v23;
  }
  v11 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  if ( ptr[0] != v27 )
    free(ptr[0]);
  return v11;
}

