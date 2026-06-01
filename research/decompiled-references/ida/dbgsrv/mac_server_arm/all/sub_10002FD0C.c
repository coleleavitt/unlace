/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002FD0C
// Address: 0x000000010002FD0C

//----- (000000010002FD0C) ----------------------------------------------------
__int64 __fastcall sub_10002FD0C(_BYTE *__src, _BYTE *a2)
{
  char *v3; // x19
  size_t v4; // x21
  void *v5; // x0
  __int64 result; // x0
  __int64 v7; // x19
  _Unwind_Exception *v8; // x0
  _Unwind_Exception *v9; // x19
  void *v10; // [xsp+0h] [xbp-40h] BYREF
  size_t v11; // [xsp+8h] [xbp-38h]
  __int64 v12; // [xsp+10h] [xbp-30h]

  if ( __src > a2 )
  {
    if ( under_debugger == 1 )
      __break(1u);
    interr(1833);
    v9 = v8;
    sub_10000A550(&v10);
    _Unwind_Resume(v9);
  }
  v10 = nullptr;
  v11 = 0;
  v3 = &byte_100075A30;
  v12 = 0;
  v4 = a2 - __src;
  if ( a2 != __src )
  {
    if ( v4 == -1 )
    {
      v5 = nullptr;
    }
    else
    {
      v5 = qvector_reserve(&v10, nullptr, v4 + 1, 1u);
      v10 = v5;
    }
    v11 = v4 + 1;
    memmove(v5, __src, v4);
    *((_BYTE *)v10 + v4) = 0;
    if ( v11 )
      v3 = (char *)v10;
  }
  result = qustrlen(v3);
  if ( v10 )
  {
    v11 = 0;
    v7 = result;
    qfree(v10);
    return v7;
  }
  return result;
}
// 10002FE14: variable 'v8' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009D90D: using guessed type char under_debugger;
