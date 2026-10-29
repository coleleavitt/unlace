unsigned __int64 __fastcall sub_A521C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  char v11; // dl
  char v12; // cl
  char v13; // dl
  char v14; // cl
  unsigned __int64 v15; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v16; // [rsp+8h] [rbp-E0h]
  __int64 v17; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a1 + 72;
  ptr[0] = v19;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, SHIDWORD(a2));
  sub_993300((__int64)ptr, a3);
  sub_993300((__int64)ptr, SHIDWORD(a3));
  v17 = 0;
  v5 = sub_21FF620(a1 + 72, ptr, &v17, off_2B17440);
  if ( v5 && (v6 = v5 - 24) != 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v15 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)a3 | (unsigned __int8)*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    sub_21FF620(v3, ptr, &v17, off_2B17440);
    v9 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
    v10 = v15;
    v11 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    *(_QWORD *)(v9 + 40) = a3;
    v7 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)v9 = v9;
    v12 = v11;
    v13 = *(_BYTE *)(v9 + 17);
    *(_BYTE *)(v9 + 16) = 0;
    v14 = v12 & 0x1F;
    *(_QWORD *)(v9 + 24) = 0;
    if ( (v15 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v9 + 32) = a2;
    *(_BYTE *)(v9 + 17) = v14 | v13 & 0xE0;
    *(_WORD *)(v9 + 17) &= 0xF81Fu;
    *(_QWORD *)(v9 + 8) = v10;
    v16 = v9;
    sub_A469E0(a1 + 8, v9);
    sub_21FF4D0(v3, v16 + 24, v17, off_2B17440);
  }
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v7;
}

