/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: str2user
// Address: 0x00000000000AFE80

//----- (00000000000AFE80) ----------------------------------------------------
_BYTE *__fastcall str2user(_BYTE *a1, const char *a2, signed __int64 a3)
{
  _BYTE *v3; // r14
  const char *v5; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+20h] [rbp-18h]

  v9 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
    BUG();
  }
  v3 = a1;
  if ( a3 )
  {
    *(_OWORD *)ptr = 0;
    v8 = 0;
    sub_AFC30((__int64)ptr, a2, -1, a3);
    if ( ptr[1] )
      v5 = (const char *)ptr[0];
    else
      v5 = s1;
    v3 = qstrncpy(a1, (__int64)v5, a3);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v8 = 0;
    }
  }
  return v3;
}
// 158B40: using guessed type __int64 under_debugger;
