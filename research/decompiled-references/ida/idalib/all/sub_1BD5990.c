char __fastcall sub_1BD5990(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  __int64 v5; // r13
  char result; // al
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  char v8; // [rsp+16h] [rbp-32h] BYREF
  char v9; // [rsp+17h] [rbp-31h] BYREF
  __int64 v10[6]; // [rsp+18h] [rbp-30h] BYREF

  v4 = a4;
  v7 = a3;
  v5 = sub_C1BEF0((__int64)&v7, a2, a3, a4);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    return 1;
  result = sub_1BD41F0(a1, a2, v5, 0, &v8);
  if ( result )
    return 1;
  if ( v4 )
  {
    v9 = 0;
    v10[0] = 0;
    return sub_1BD2CB0(a1, a2, v5, v10, &v9);
  }
  return result;
}
