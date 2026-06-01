/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F770
// Address: 0x000000010006F770

//----- (000000010006F770) ----------------------------------------------------
char __fastcall sub_10006F770(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  const char *v3; // r12
  char *v4; // rax
  __int64 v5; // rax
  bool v6; // cl
  char result; // al
  const char *v8; // rax
  const char *v9; // rax

  v2 = *(_QWORD *)(a2 + 40);
  if ( !v2 || (v3 = *(const char **)(a2 + 64), !qfileexist(*(const char **)(a2 + 40))) )
  {
    v9 = "certchain_not_found";
LABEL_12:
    *(_QWORD *)(a1 + 64) = v9;
    return 0;
  }
  if ( !v3 || !qfileexist(v3) )
  {
    v9 = "privkey_not_found";
    goto LABEL_12;
  }
  if ( !(unsigned __int8)sub_10006E7C0(&xmmword_1000AE410, (const char **)(a1 + 64)) )
    return 0;
  v4 = sub_10006AA50(0);
  *(_QWORD *)(a1 + 32) = v4;
  if ( !(unsigned __int8)sub_10006AAD0((__int64)v4) )
  {
    v8 = "irs";
    goto LABEL_16;
  }
  v5 = sub_10006F050(&xmmword_1000AE410, v2, (__int64)v3);
  *(_QWORD *)(a1 + 80) = v5;
  if ( !v5 || (v6 = sub_10006F400(a1), result = 1, !v6) )
  {
    v8 = "openssl";
LABEL_16:
    *(_QWORD *)(a1 + 64) = v8;
    return 0;
  }
  return result;
}
// 1000AE410: using guessed type __int128 xmmword_1000AE410;
