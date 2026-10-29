unsigned __int64 __fastcall sub_A52D20(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // [rsp+8h] [rbp-E0h]
  __int64 v14; // [rsp+8h] [rbp-E0h]
  __int64 v15; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v17[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = a1 + 288;
  ptr[0] = v17;
  ptr[1] = (void *)0x2000000000LL;
  sub_993300((__int64)ptr, a2);
  sub_993300((__int64)ptr, SHIDWORD(a2));
  sub_993300((__int64)ptr, a3);
  sub_993300((__int64)ptr, 58);
  sub_993300((__int64)ptr, 0);
  v15 = 0;
  v5 = sub_21FF620(a1 + 288, ptr, &v15, &off_2B17320);
  if ( v5 && (v6 = v5 - 24) != 0 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v9 = 0;
    v10 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v10 != *(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
    {
      v13 = sub_A52D20(
              a1,
              *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7,
              a3,
              v10,
              0);
      sub_21FF620(v4, ptr, &v15, &off_2B17320);
      v9 = v13;
    }
    v14 = v9;
    v11 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
    sub_F33C20(v11, 58, a2, a3, v14, 0);
    sub_21FF4D0(v4, v11 + 24, v15, &off_2B17320);
    v12 = v11;
    v7 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    sub_A469E0(a1 + 8, v12);
  }
  if ( ptr[0] != v17 )
    free(ptr[0]);
  return v7;
}

