unsigned __int64 __fastcall sub_A71A40(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // rax
  int v9; // ebp
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // r15d
  unsigned __int64 *v15; // rsi
  unsigned __int64 v17; // [rsp+8h] [rbp-50h]
  unsigned __int64 v18[8]; // [rsp+18h] [rbp-40h] BYREF

  v5 = a2 & 7;
  v9 = a2;
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL)
    || (v14 = 0, v5 | (a2 >> 3) & 1) )
  {
    v10 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | v5;
    v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    v12 = v10 & 7;
    if ( (v10 & 8) != 0 )
    {
      v12 |= *(__int64 *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL));
      v11 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v13 = sub_A71A40(a1, v11, a3, a4, a5);
    v14 = sub_A70F20((__int64)a1, v13, v12);
  }
  v17 = sub_A6FFD0(a1 + 294, 48, 4u);
  sub_F56B60(v17, 6, v9, v14, a4, a5, a3);
  *(_QWORD *)(v17 + 40) = a3;
  v15 = (unsigned __int64 *)a1[25];
  v18[0] = v17;
  if ( v15 == (unsigned __int64 *)a1[26] )
  {
    sub_A6EE50((__int64)(a1 + 24), v15, (__int64 *)v18);
  }
  else
  {
    *v15 = v17;
    a1[25] = v15 + 1;
  }
  sub_A6A720((__int64)(a1 + 1), v18[0]);
  return v18[0] & 0xFFFFFFFFFFFFFFF0LL;
}
