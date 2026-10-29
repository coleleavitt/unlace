unsigned __int64 __fastcall sub_A4DE50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v22; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v23; // [rsp+0h] [rbp-F8h]
  __int64 v24; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v25; // [rsp+8h] [rbp-F0h]
  __int64 v26; // [rsp+18h] [rbp-E0h]
  __int64 v27; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v29[184]; // [rsp+40h] [rbp-B8h] BYREF

  v8 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
  v9 = ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
  if ( (byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
  {
    v9 |= *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
    v8 = *(_QWORD *)v8;
  }
  v21 = v9;
  v27 = 0;
  ptr[0] = v29;
  ptr[1] = (void *)0x2000000000LL;
  if ( a3 )
  {
    v25 = v8 & 0xFFFFFFFFFFFFFFF0LL;
    sub_F3C500(ptr, a1, v8 & 0xFFFFFFFFFFFFFFF0LL, a4, a5, a3);
    v10 = sub_21FF620(a1 + 216, ptr, &v27, &off_2B17360);
    v11 = v21;
    if ( !v10 || (v22 = v10 - 24, v10 == 24) )
    {
      v26 = v11;
      v22 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
      sub_F333C0(v22, v25, 0, a3, a4, a5);
      sub_21FF4D0(a1 + 216, v22 + 24, v27, &off_2B17360);
      sub_A469E0(a1 + 8, v22);
      v11 = v26;
    }
    v12 = sub_A4D1E0(a1, v22 & 0xFFFFFFFFFFFFFFF0LL, v11);
    if ( a2 == v25 && a3 == *(_QWORD *)(v22 + 40) )
    {
      v15 = v12;
    }
    else
    {
      v23 = v12;
      v13 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
      v14 = v23;
      v24 = v13;
      sub_F333C0(v13, a2, v14, a3, a4, a5);
      sub_A469E0(a1 + 8, v24);
      v15 = v24 & 0xFFFFFFFFFFFFFFF0LL;
    }
  }
  else
  {
    sub_F3C500(ptr, a1, a2, a4, a5, 0);
    v17 = sub_21FF620(a1 + 216, ptr, &v27, &off_2B17360);
    if ( !v17 || (v18 = v17 - 24, v15 = v18 & 0xFFFFFFFFFFFFFFF0LL, !v18) )
    {
      v19 = sub_A4C290((__int64 *)(a1 + 2352), 48, 4u);
      sub_F333C0(v19, a2, 0, 0, a4, a5);
      sub_21FF4D0(a1 + 216, v19 + 24, v27, &off_2B17360);
      v20 = v19;
      v15 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      sub_A469E0(a1 + 8, v20);
    }
  }
  if ( ptr[0] != v29 )
    free(ptr[0]);
  return v15;
}

