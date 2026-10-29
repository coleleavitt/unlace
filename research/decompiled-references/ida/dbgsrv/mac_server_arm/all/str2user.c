/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: str2user
// Address: 0x0000000100064478

//----- (0000000100064478) ----------------------------------------------------
const char *__fastcall str2user(const char *result, char *a2, __int64 a3)
{
  const char *v4; // x20
  unsigned __int8 *v5; // x1
  unsigned __int64 v6; // x19
  _Unwind_Exception *v7; // x0
  int v8; // w1
  void *v9; // [xsp+0h] [xbp-30h] BYREF
  __int64 v10; // [xsp+8h] [xbp-28h]
  __int64 v11; // [xsp+10h] [xbp-20h]

  if ( a3 < 0 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(1225);
    if ( v8 )
      sub_1000013F4(v7);
    _Unwind_Resume(v7);
  }
  if ( a3 )
  {
    v9 = nullptr;
    v10 = 0;
    v11 = 0;
    v4 = result;
    sub_1000641E8((__int64)&v9, a2, -1, a3);
    if ( v10 )
      v5 = (unsigned __int8 *)v9;
    else
      v5 = (unsigned __int8 *)&byte_100075A30;
    result = qstrncpy(v4, v5, a3);
    if ( v9 )
    {
      v10 = 0;
      v6 = (unsigned __int64)result;
      qfree(v9);
      return (const char *)v6;
    }
  }
  return result;
}
// 10006454C: variable 'v8' is possibly undefined
// 100064554: variable 'v7' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009D90D: using guessed type char under_debugger;
