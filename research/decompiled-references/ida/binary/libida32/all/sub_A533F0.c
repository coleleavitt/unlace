unsigned __int64 __fastcall sub_A533F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v14; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v16[184]; // [rsp+30h] [rbp-B8h] BYREF

  v5 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v14 = 0;
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)a2 | (unsigned __int8)v5) & 7;
  ptr[0] = v16;
  ptr[1] = (void *)0x2000000000LL;
  sub_F33920(ptr, a1, v6, a3);
  v7 = sub_21FF620(a1 + 264, ptr, &v14, &off_2B17280);
  if ( !v7 || (v8 = v7 - 24, v7 == 24) )
  {
    v8 = sub_A4C290((__int64 *)(a1 + 2352), 64, 4u);
    sub_F33860(v8, v6, 0, a3, a4);
    sub_21FF4D0(a1 + 264, v8 + 24, v14, &off_2B17280);
    sub_A469E0(a1 + 8, v8);
  }
  if ( a2 != v6 || (v9 = v8 & 0xFFFFFFFFFFFFFFF0LL, a3 != *(_QWORD *)(v8 + 32)) )
  {
    v10 = sub_A4C290((__int64 *)(a1 + 2352), 64, 4u);
    sub_F33860(v10, a2, v8 & 0xFFFFFFFFFFFFFFF0LL, a3, a4);
    v11 = v10;
    v9 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    sub_A469E0(a1 + 8, v11);
  }
  if ( ptr[0] != v16 )
    free(ptr[0]);
  return v9;
}

