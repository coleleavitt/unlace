__int64 __fastcall sub_6A8170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int8 v10; // al

  v7 = a2;
  v8 = *(_QWORD *)(a1 + 16);
  if ( a2 )
    v7 = a2 - 24;
  v9 = sub_B07330(v7);
  v10 = sub_B07320(v7);
  sub_B07340(a5, v8, v10, v9);
  return sub_25ABE00(a5, a3);
}

