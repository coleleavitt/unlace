unsigned __int64 __fastcall sub_A52510(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // di
  unsigned __int64 v19; // r8
  __int64 v20; // r15
  unsigned __int64 v21; // rcx
  char v22; // al
  char v23; // r10
  char v24; // r9
  char v25; // di
  char v26; // al
  char v27; // r10
  char v28; // r9
  char v29; // di
  char v30; // di
  char v31; // al
  char v32; // r10
  char v33; // r11
  char v34; // di
  char v35; // r9
  char v36; // al
  char v37; // di
  char v38; // al
  __int16 v39; // dx
  __int64 v40; // rsi
  __int64 v41; // [rsp+8h] [rbp-100h]
  unsigned __int8 v42; // [rsp+14h] [rbp-F4h]
  unsigned __int64 v43; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v44; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v45; // [rsp+28h] [rbp-E0h]
  __int64 v46; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v48[184]; // [rsp+50h] [rbp-B8h] BYREF

  v42 = a2;
  ptr[0] = v48;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, a3);
  sub_993300((__int64)ptr, SHIDWORD(a3));
  sub_993300((__int64)ptr, a4);
  sub_993300((__int64)ptr, SHIDWORD(a4));
  sub_993300((__int64)ptr, a5);
  sub_993300((__int64)ptr, SHIDWORD(a5));
  v41 = a1 + 616;
  v46 = 0;
  v9 = sub_21FF620(a1 + 616, ptr, &v46, &off_2B17080);
  if ( v9 && (v10 = v9 - 24) != 0 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v13 = a4;
    v14 = a4 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a4
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v43 = *(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)a4 | (unsigned __int8)*(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
      sub_21FF620(v41, ptr, &v46, &off_2B17080);
      v13 = v43;
      v14 = v43 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v45 = v14;
    v15 = 8LL * (a5 != 0) + 48;
    v44 = v13;
    v16 = sub_A4C290((__int64 *)(a1 + 2352), v15, 4u);
    v18 = 0;
    v19 = v44;
    v20 = v16;
    v21 = v45;
    if ( a3 )
    {
      v22 = sub_E6D500(a3, v15, v17, v45, v44);
      v21 = v45;
      v23 = v22 & 8;
      v19 = v44;
      if ( (v22 & 8) != 0 )
        v23 = 16;
      v24 = v22 & 4;
      if ( (v22 & 4) != 0 )
        v24 = 12;
      v25 = v22 & 2;
      if ( (v22 & 2) != 0 )
        v25 = 2;
      v26 = v25 | v24 | v23 | v22 & 1;
      v27 = v26 & 0x10;
      if ( (v26 & 0x10) != 0 )
        v27 = 16;
      v28 = v26 & 0xC;
      if ( (v26 & 0xC) != 0 )
        v28 = 4;
      v29 = v26 & 2;
      if ( (v26 & 2) != 0 )
        v29 = 2;
      v30 = v27 | v26 & 1 | v28 | v29;
      v31 = v30 & 0x10;
      if ( (v30 & 0x10) != 0 )
        v31 = 16;
      v32 = v30 & 4;
      if ( (v30 & 4) != 0 )
        v32 = 12;
      v33 = v30 & 2;
      if ( (v30 & 2) != 0 )
        v33 = 2;
      v34 = v33 | v32 | v31 | v30 & 1;
      v35 = v34 & 0x10;
      if ( (v34 & 0x10) != 0 )
        v35 = 16;
      v36 = v34 & 2;
      if ( (v34 & 2) != 0 )
        v36 = 2;
      v18 = v36 | v35 | v34 & 1;
    }
    v37 = *(_BYTE *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) | v18;
    *(_QWORD *)v20 = v20;
    *(_QWORD *)(v20 + 24) = 0;
    if ( !v21 )
      v19 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    v38 = *(_BYTE *)(v20 + 17);
    *(_QWORD *)(v20 + 32) = a3;
    *(_BYTE *)(v20 + 18) &= 0xF8u;
    v39 = *(_WORD *)(v20 + 18);
    *(_QWORD *)(v20 + 8) = v19;
    *(_QWORD *)(v20 + 40) = a4;
    *(_BYTE *)(v20 + 17) = v38 & 0xE0 | v37 & 0x1F;
    *(_WORD *)(v20 + 16) = *(_WORD *)(v20 + 16) & 0x1F00 | 0x18;
    *(_WORD *)(v20 + 18) = v39 & 0xF807 | (8 * v42);
    if ( a5 )
    {
      *(_BYTE *)(v20 + 19) |= 8u;
      *(_QWORD *)(v20 + 48) = a5;
    }
    else
    {
      *(_BYTE *)(v20 + 19) &= ~8u;
    }
    sub_A469E0(a1 + 8, v20);
    v40 = v20 + 24;
    v11 = v20 & 0xFFFFFFFFFFFFFFF0LL;
    sub_21FF4D0(v41, v40, v46, &off_2B17080);
  }
  if ( ptr[0] != v48 )
    free(ptr[0]);
  return v11;
}

