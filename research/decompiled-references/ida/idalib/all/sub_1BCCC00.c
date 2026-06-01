__int64 __fastcall sub_1BCCC00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h] BYREF

  v3 = a2;
  v9 = a3;
  v10 = a2;
  v4 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v5 = 0;
  if ( (v4 & 8) != 0 )
    v5 = *(__int64 *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL));
  v6 = v5 | (v3 | (unsigned __int8)v4) & 7;
  if ( v9 == v6 )
    return v10;
  if ( sub_16A8C50((unsigned __int64 *)&v9, v6, a1) )
    return sub_A70F20(a1, v10, v9);
  v8 = sub_6D5440(&v10);
  return sub_A70F20(a1, v8, v9);
}
