/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvsnprintf
// Address: 0x00000000000C608C

//----- (00000000000C608C) ----------------------------------------------------
size_t __fastcall qvsnprintf(pthread_mutex_t *a1, __int64 a2, char *s, _OWORD *a4)
{
  const char *v7; // x19
  size_t result; // x0
  size_t v9; // x0
  const char *v10; // x0
  __int128 v11; // q0
  _OWORD v12[2]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v13; // [xsp+28h] [xbp-38h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !s )
  {
    if ( !under_debugger )
      interr(539);
    goto LABEL_22;
  }
  v7 = (const char *)a1;
  if ( !a1 )
  {
    if ( a2 )
      return 0;
    goto LABEL_10;
  }
  if ( a2 < 0 )
  {
    if ( !under_debugger )
      a1 = interr(1225);
LABEL_22:
    __break(1u);
    return (size_t)sub_C61D8((const char *)a1, (unsigned __int8 *)a2, (__int64)s);
  }
  if ( a2 <= 1 )
  {
    result = 0;
    if ( a2 )
      *v7 = 0;
    return result;
  }
  a1->__size[0] = 0;
LABEL_10:
  v9 = strlen(s);
  v10 = sub_C61D8(s, (unsigned __int8 *)v12 - ((v9 + 115) & 0xFFFFFFFFFFFFFFF0LL), v9 + 100);
  v11 = a4[1];
  v12[0] = *a4;
  v12[1] = v11;
  LODWORD(result) = __vsnprintf_chk(v7, a2, 0, -1, v10, v12);
  if ( (result & 0x80000000) != 0 || (result = (int)result, a2) && (int)result >= (unsigned __int64)a2 )
  {
    result = 0;
    if ( v7 )
    {
      if ( a2 )
      {
        result = (int)a2 - 1;
        v7[result] = 0;
        if ( (int)a2 - 1 < 0 )
          return strlen(v7);
      }
    }
  }
  return result;
}
// C61D5: variable 'a2' is possibly undefined
// C61D5: variable 's' is possibly undefined
// 373F0: using guessed type __int64 __fastcall __vsnprintf_chk(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 168DF0: using guessed type char under_debugger;
