unsigned __int64 __fastcall sub_A4F090(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r14
  char v18; // dl
  char v19; // al
  char v20; // al
  unsigned __int64 v21; // rsi
  __int64 v22; // [rsp+8h] [rbp-E0h]
  __int64 v23; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v25[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = a1 + 120;
  ptr[0] = v25;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, SHIDWORD(a2));
  sub_993300((__int64)ptr, 0);
  v23 = 0;
  v4 = sub_21FF620(a1 + 120, ptr, &v23, &off_2B173C0);
  if ( v4 )
  {
    v8 = v4 - 24;
    if ( v8 )
    {
      v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_4;
    }
  }
  v11 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43 <= 1 || (v12 = sub_A32F40(v12, (__int64)ptr, v5, v6, v7)) != 0 )
  {
    v13 = sub_990B30(v12, (__int64)ptr, v5, v6, v7);
    v14 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    if ( (*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
    {
      v17 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
      v18 = *(_BYTE *)(*(_QWORD *)v11 + 17LL) & 0x1F;
      goto LABEL_12;
    }
    v14 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    LOBYTE(v13) = a2;
  }
  v22 = sub_A4F090(
          a1,
          *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)(v14 + 8) | (unsigned __int8)v13) & 7);
  sub_21FF620(v3, ptr, &v23, &off_2B173C0);
  v15 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
  v16 = v22;
  v17 = v15;
  v18 = *(_BYTE *)(*(_QWORD *)v11 + 17LL) & 0x1F;
  if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
LABEL_12:
    v16 = v17 & 0xFFFFFFFFFFFFFFF0LL;
  v19 = *(_BYTE *)(v17 + 17);
  *(_QWORD *)(v17 + 8) = v16;
  *(_QWORD *)v17 = v17;
  *(_QWORD *)(v17 + 24) = 0;
  *(_QWORD *)(v17 + 32) = a2;
  *(_BYTE *)(v17 + 17) = v18 | v19 & 0xE0;
  *(_WORD *)(v17 + 16) = *(_WORD *)(v17 + 16) & 0x1F00 | 0x2C;
  v20 = *(_BYTE *)(v17 + 18);
  *(_BYTE *)(v17 + 18) = v20 & 0xF0;
  *(_BYTE *)(v17 + 18) = (16
                        * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL)
                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 16LL)
                         - 43 <= 1))
                       | v20 & 0xE0;
  sub_A469E0(a1 + 8, v17);
  v21 = v17 + 24;
  v9 = v17 & 0xFFFFFFFFFFFFFFF0LL;
  sub_21FF4D0(v3, v21, v23, &off_2B173C0);
LABEL_4:
  if ( ptr[0] != v25 )
    free(ptr[0]);
  return v9;
}

