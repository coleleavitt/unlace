char __fastcall sub_1BCC200(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  char v6; // cl
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  char v10; // si
  char result; // al
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // [rsp+8h] [rbp-10h] BYREF

  v3 = *a1;
  v4 = 0;
  v5 = *(_QWORD *)&byte_8[v3 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v5 & 8) != 0 )
    v4 = *(__int64 *)((char *)&qword_18 + (v5 & 0xFFFFFFFFFFFFFFF0LL));
  v6 = v3 | v5;
  v7 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v8 = v4 | v6 & 7;
  v9 = 0;
  v13 = v8;
  if ( (v7 & 8) != 0 )
    v9 = *(__int64 *)((char *)&qword_18 + (v7 & 0xFFFFFFFFFFFFFFF0LL));
  v10 = v7 | a2;
  result = 0;
  v12 = v9 | v10 & 7;
  if ( v12 != v8 )
    return sub_16A8C50(&v13, v12, a3);
  return result;
}
