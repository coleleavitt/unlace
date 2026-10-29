_QWORD *__fastcall sub_BC1C10(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  _QWORD *v7; // rbx

  v6 = a2[294];
  a2[304] += 208LL;
  v7 = (_QWORD *)((v6 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)(v7 + 26) && v6 )
    a2[294] = v7 + 26;
  else
    v7 = (_QWORD *)sub_986170((__int64)(a2 + 294), 208, 208, 3, a5, a6);
  *v7 = 0;
  sub_2222F10(v7 + 1, 6);
  v7[4] = 0x800000000LL;
  v7[3] = v7 + 5;
  sub_2222F10(v7 + 13, 6);
  v7[15] = v7 + 17;
  v7[16] = 0x800000000LL;
  v7[25] = 0;
  sub_A5F590((__int64)a2, (__int64)sub_BBBF10, (__int64)v7);
  return v7;
}
