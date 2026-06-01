/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062E04
// Address: 0x0000000100062E04

//----- (0000000100062E04) ----------------------------------------------------
__int64 __fastcall sub_100062E04(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  const char *v4; // x21
  __int64 result; // x0
  __int64 v6; // x0
  const char *v7; // x8
  const char *v8; // x8

  v3 = *(_QWORD *)(a2 + 40);
  if ( !v3 || (v4 = *(const char **)(a2 + 64), !qfileexist(*(const char **)(a2 + 40))) )
  {
    result = 0;
    v7 = "certchain_not_found";
LABEL_12:
    *(_QWORD *)(a1 + 64) = v7;
    return result;
  }
  if ( !v4 || !qfileexist(v4) )
  {
    result = 0;
    v7 = "privkey_not_found";
    goto LABEL_12;
  }
  result = sub_100061DB4(&qword_10009DAD8, (const char **)(a1 + 64));
  if ( (_DWORD)result )
  {
    sub_10005E2CC(0);
    *(_QWORD *)(a1 + 32) = v6;
    if ( (sub_10005E320(v6) & 1) != 0 )
    {
      result = sub_1000626EC(&qword_10009DAD8, v3, (__int64)v4);
      *(_QWORD *)(a1 + 80) = result;
      if ( result )
      {
        if ( sub_100062A58(a1) )
          return 1;
        result = 0;
      }
      v8 = "openssl";
    }
    else
    {
      result = 0;
      v8 = "irs";
    }
    *(_QWORD *)(a1 + 64) = v8;
  }
  return result;
}
// 100062E60: variable 'v6' is possibly undefined
// 10009DAD8: using guessed type __int64 qword_10009DAD8;
