unsigned __int64 __fastcall sub_A93A80(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  bool v11; // r14
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // al
  unsigned __int64 v20; // r8
  char v21; // r10
  char v22; // di
  char v23; // si
  char v24; // al
  char v25; // di
  char v26; // si
  char v27; // dl
  char v28; // dl
  char v29; // al
  char v30; // dl
  __int16 v31; // ax
  __int16 v32; // dx
  unsigned __int8 v33; // [rsp+4h] [rbp-F4h]
  _QWORD *v34; // [rsp+8h] [rbp-F0h]
  unsigned int v35; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v36; // [rsp+10h] [rbp-E8h]
  __int64 v37; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v38; // [rsp+18h] [rbp-E0h]
  __int64 v39; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v41[184]; // [rsp+40h] [rbp-B8h] BYREF

  v33 = a2;
  ptr[0] = v41;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, a3);
  sub_993300((__int64)ptr, SHIDWORD(a3));
  sub_993300((__int64)ptr, a4);
  sub_993300((__int64)ptr, SHIDWORD(a4));
  v34 = a1 + 79;
  v39 = 0;
  v7 = sub_21FF620(a1 + 79, ptr, &v39, &off_2B17040);
  if ( v7 && (v8 = v7 - 24) != 0 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( ((1LL << a2) & 0x57) != 0 )
    {
      v35 = a2;
      v11 = 0;
    }
    else if ( ((1LL << a2) & 8) != 0 )
    {
      v35 = 0;
      v11 = a2 != 0;
    }
    else
    {
      v35 = 6;
      v11 = a2 != 6;
    }
    v12 = sub_A93830(a1, a3);
    if ( a3 != v12 || (v14 = 0, v13 = 0, v11) )
    {
      v37 = sub_A93A80(a1, v35, v12, a4, v13);
      sub_21FF620(v34, ptr, &v39, &off_2B17040);
      v13 = v37;
      v14 = v37 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v38 = v14;
    v36 = v13;
    v15 = sub_A4C290(a1 + 294, 48, 4u);
    v19 = sub_E6D500(a3, 48, v16, v17, v18);
    v20 = v36;
    v21 = v19 & 8;
    *(_QWORD *)v15 = v15;
    if ( (v19 & 8) != 0 )
      v21 = 16;
    v22 = v19 & 4;
    *(_QWORD *)(v15 + 24) = 0;
    if ( (v19 & 4) != 0 )
      v22 = 12;
    *(_QWORD *)(v15 + 32) = a3;
    v23 = v19 & 2;
    *(_QWORD *)(v15 + 40) = a4;
    if ( (v19 & 2) != 0 )
      v23 = 2;
    v24 = v23 | v22 | v21 | v19 & 1;
    v25 = v24 & 0x10;
    if ( (v24 & 0x10) != 0 )
      v25 = 16;
    v26 = v24 & 0xC;
    if ( (v24 & 0xC) != 0 )
      v26 = 4;
    v27 = v24 & 2;
    if ( (v24 & 2) != 0 )
      v27 = 2;
    v9 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    v28 = v24 & 1 | v27;
    v29 = *(_BYTE *)(v15 + 17);
    v30 = v26 | v25 | v28;
    if ( !v38 )
      v20 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    *(_BYTE *)(v15 + 18) &= 0xF8u;
    *(_BYTE *)(v15 + 17) = v29 & 0xE0 | v30 | 6;
    v31 = *(_WORD *)(v15 + 16);
    v32 = *(_WORD *)(v15 + 18);
    *(_QWORD *)(v15 + 8) = v20;
    *(_WORD *)(v15 + 16) = v31 & 0x1F00 | 0x14;
    *(_WORD *)(v15 + 18) = v32 & 0xF807 | (8 * v33);
    sub_A469E0((__int64)(a1 + 1), v15);
    sub_21FF4D0(v34, v15 + 24, v39, &off_2B17040);
  }
  if ( ptr[0] != v41 )
    free(ptr[0]);
  return v9;
}

