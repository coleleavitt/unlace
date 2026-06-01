unsigned __int64 __fastcall sub_A52370(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  char v11; // dl
  char v12; // si
  char v13; // dl
  unsigned __int64 v14; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v15; // [rsp+8h] [rbp-E0h]
  __int64 v16; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[184]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = a1 + 568;
  ptr[0] = v18;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, SHIDWORD(a2));
  v16 = 0;
  v3 = sub_21FF620(a1 + 568, ptr, &v16, off_2B17060);
  if ( v3 && (v4 = v3 - 24) != 0 )
  {
    v5 = v4 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v7 = a2;
    v8 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL) )
    {
      v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
         | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
      sub_21FF620(v2, ptr, &v16, off_2B17060);
      v8 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v15 = v8;
    v9 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
    v10 = a1 + 8;
    v5 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    v11 = *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
    *(_QWORD *)(v9 + 32) = a2;
    *(_QWORD *)v9 = v9;
    *(_BYTE *)(v9 + 16) = 40;
    v12 = v11 & 0x1F;
    v13 = *(_BYTE *)(v9 + 17);
    if ( !v15 )
      v7 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 8) = v7;
    *(_BYTE *)(v9 + 17) = v12 | v13 & 0xE0;
    *(_WORD *)(v9 + 17) &= 0xF81Fu;
    v14 = v9;
    sub_A469E0(v10, v9);
    sub_21FF4D0(v2, v14 + 24, v16, off_2B17060);
  }
  if ( ptr[0] != v18 )
    free(ptr[0]);
  return v5;
}

