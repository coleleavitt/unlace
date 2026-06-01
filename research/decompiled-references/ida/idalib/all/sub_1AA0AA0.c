unsigned __int64 __fastcall sub_1AA0AA0(__int64 *a1, unsigned __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rbp
  int v6; // r12d
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  bool v10; // cc
  unsigned __int64 result; // rax
  unsigned __int64 v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = *a1;
  v12[0] = a2;
  v6 = sub_EEC140(a2);
  v7 = sub_EEB7E0(a2, a2, a4);
  v8 = sub_18C4330(v5, v7, v6, v12, 1, a3);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  v10 = v8 <= 1;
  result = 0;
  if ( !v10 )
    return v9;
  return result;
}
