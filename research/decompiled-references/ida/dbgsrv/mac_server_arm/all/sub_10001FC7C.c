/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001FC7C
// Address: 0x000000010001FC7C

//----- (000000010001FC7C) ----------------------------------------------------
__int64 __fastcall sub_10001FC7C(__int64 a1, __int64 a2)
{
  const char *v3; // x1
  __int64 v4; // x20
  void *v5; // x0
  const char *v6; // x1
  void *v8; // [xsp+0h] [xbp-30h] BYREF
  __int64 v9; // [xsp+8h] [xbp-28h]
  __int64 v10; // [xsp+10h] [xbp-20h]

  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = &byte_100075A30;
  if ( (eval_idc_snippet(nullptr, v3, (char **)&v8, 0) & 1) != 0 )
  {
    v4 = 0;
    *(_QWORD *)(a2 + 8) = 1;
    v5 = v8;
    if ( !v8 )
      return v4;
    goto LABEL_11;
  }
  if ( v9 )
    v6 = (const char *)v8;
  else
    v6 = &byte_100075A30;
  v4 = throw_idc_exception((unsigned __int8 *)a2, v6);
  v5 = v8;
  if ( v8 )
  {
LABEL_11:
    v9 = 0;
    qfree(v5);
  }
  return v4;
}
// 100075A30: using guessed type char byte_100075A30;
