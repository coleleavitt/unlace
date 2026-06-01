__int64 __fastcall sub_A56330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned __int8 v10; // al

  v7 = a2;
  v8 = *(_QWORD *)(a1 + 16);
  if ( a2 )
    v7 = a2 - 24;
  v9 = sub_F57B50(v7);
  v10 = sub_F57B40(v7);
  sub_F57B60(a5, v8, v10, v9);
  return sub_2222ED0(a5, a3);
}
