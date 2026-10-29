unsigned __int64 __fastcall sub_A71E50(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // r14
  __int64 v20; // [rsp+8h] [rbp-E0h]
  int v21; // [rsp+8h] [rbp-E0h]
  __int64 v22; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v24[184]; // [rsp+30h] [rbp-B8h] BYREF

  v6 = a2;
  v7 = a1 + 176;
  ptr[0] = v24;
  ptr[1] = (void *)0x2000000000LL;
  sub_9B7040((__int64)ptr, a2);
  sub_9B7040((__int64)ptr, SHIDWORD(a2));
  sub_9B7040((__int64)ptr, a3);
  sub_9B7040((__int64)ptr, a4);
  v22 = 0;
  v8 = sub_2223360(a1 + 176, ptr, &v22, off_2B412E0);
  if ( v8 && (v9 = v8 - 24) != 0 )
  {
    v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v12 = a2 & 7;
    if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL)
      || (v21 = 0, v12 | (a2 >> 3) & 1) )
    {
      v13 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | v12;
      v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      v15 = v13 & 7;
      if ( (v13 & 8) != 0 )
      {
        v15 |= *(__int64 *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL));
        v14 = (_QWORD *)(*v14 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v20 = v15;
      v16 = sub_A71E50(a1, v14, a3, a4);
      v21 = sub_A70F20(a1, v16, v20);
      sub_2223360(v7, ptr, &v22, off_2B412E0);
    }
    v17 = sub_A6FFD0((__int64 *)(a1 + 2352), 48, 4u);
    v18 = a3;
    v19 = v17;
    sub_F56B60(v17, 5, v6, v21, v18, a4, 0);
    sub_2223210(v7, v19 + 24, v22, off_2B412E0);
    sub_A6A720(a1 + 8, v19);
    v10 = v19 & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( ptr[0] != v24 )
    free(ptr[0]);
  return v10;
}
