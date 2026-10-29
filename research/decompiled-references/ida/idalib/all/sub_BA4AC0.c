__int64 __fastcall sub_BA4AC0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v6 = (__int64)sub_B8FF70(112, (_QWORD *)a1, a2, 0, a5, a6);
  sub_B725B0(v6, 0x18u, 0, 0);
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)v6 = &off_2B4A650;
  sub_B8E080(v6 + 48, 24);
  *(_QWORD *)(v6 + 88) = v6;
  *(_QWORD *)(v6 + 96) = 0;
  *(_QWORD *)(v6 + 80) = a1 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(v6 + 104) = 0;
  *(_BYTE *)(v6 + 57) &= 0x9Fu;
  *(_QWORD *)v6 = &off_2C03010;
  if ( (a1 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    *(_QWORD *)(v6 + 80) = sub_6E2500((_QWORD *)(a1 & 0xFFFFFFFFFFFFFFFCLL), v6, v7, v8, v9, v10) | 1;
  else
    *(_QWORD *)(v6 + 80) = v6 & 0xFFFFFFFFFFFFFFFALL | 1;
  return v6;
}
