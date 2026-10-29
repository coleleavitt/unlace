__int64 __fastcall sub_E44230(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  size_t v3; // rax
  __int64 v4; // rbx
  size_t v5; // rax
  __int64 v6; // rbx
  size_t v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  size_t v12; // rax
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h]
  int v15; // [rsp+10h] [rbp-58h]
  __int16 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+38h] [rbp-30h]

  v2 = *a2;
  v3 = j__strlen("isGlobal");
  sub_E35E50(a1, (__int64)"isGlobal", v3, (v2 & 0x80000) != 0);
  v4 = *a2;
  v5 = j__strlen("isArray");
  sub_E35E50(a1, (__int64)"isArray", v5, (v4 & 0x100000) != 0);
  v6 = *a2;
  v7 = j__strlen("isArrayAsWritten");
  result = sub_E35E50(a1, (__int64)"isArrayAsWritten", v7, (v6 & 0x200000) != 0);
  v9 = a2[2];
  if ( v9 )
  {
    sub_E43670((__int64)&v13, a1, v9);
    v16 = 7;
    v10 = v13;
    v13 = 0;
    v17 = v10;
    v11 = v14;
    v14 = 0;
    v18 = v11;
    LODWORD(v11) = v15;
    v15 = 0;
    v19 = v11;
    v12 = j__strlen("operatorDeleteDecl");
    sub_2206E30(a1 + 1048, "operatorDeleteDecl", v12);
    sub_2208D80(a1 + 1048, &v16);
    sub_2205EB0(a1 + 1048);
    sub_2207560(&v16);
    return sub_E395A0(&v13);
  }
  return result;
}

