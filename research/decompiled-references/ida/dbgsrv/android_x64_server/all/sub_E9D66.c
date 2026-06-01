/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9D66
// Address: 0x00000000000E9D66

//----- (00000000000E9D66) ----------------------------------------------------
__int64 __fastcall sub_E9D66(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // bl
  char *v5; // rax
  char v6; // bl
  char *v7; // rax
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = sub_E9979(a2);
  v5 = (char *)sub_E959E(v4, a1);
  sub_E961A(v4, v5, (char *)(a2 + 8), &v9);
  v6 = sub_E9979(a3);
  v7 = (char *)sub_E959E(v6, a1);
  sub_E961A(v6, v7, (char *)(a3 + 8), v10);
  result = 1;
  if ( v9 <= v10[0] )
    return (unsigned int)-(v9 < v10[0]);
  return result;
}
