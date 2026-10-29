_QWORD *__fastcall sub_B77510(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  unsigned int v8; // [rsp+0h] [rbp-68h] BYREF
  char v9; // [rsp+4h] [rbp-64h]

  v9 &= ~1u;
  v8 = 0;
  v6 = sub_B6C230(120, a1, a2, 0, a5, a6);
  sub_B4E870((__int64)v6, 0x1Du, 0, 0);
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  *v6 = &off_2BD97B0;
  sub_A2FF00((__int64)(v6 + 8), (int *)&v8);
  if ( sub_A2C050((__int64)(v6 + 8)) )
    sub_A3B850((__int64)a1, (__int64)sub_B4CF80, (__int64)(v6 + 8));
  if ( v8 > 1 )
    sub_A2BBA0((int *)&v8);
  return v6;
}

