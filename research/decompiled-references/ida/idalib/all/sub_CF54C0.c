__int64 __fastcall sub_CF54C0(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rsi
  char v11; // bp

  v5 = *(_QWORD *)(a1 + 176);
  v6 = *(_QWORD *)sub_E21760(v5, 8);
  sub_E21790(v5, 8);
  v7 = *(_QWORD *)(a1 + 176);
  v8 = *(_QWORD *)sub_E21760(v7, 8);
  sub_E21790(v7, 8);
  v9 = *(_QWORD *)(a1 + 176);
  v10 = 2;
  if ( v8 >= v6 )
  {
    LOBYTE(v10) = v8 > v6;
    v10 = (unsigned int)(3 * v10);
  }
  v11 = a2(a3, v10);
  *(_BYTE *)sub_E216C0(v9, 8) = v11;
  return 1;
}
