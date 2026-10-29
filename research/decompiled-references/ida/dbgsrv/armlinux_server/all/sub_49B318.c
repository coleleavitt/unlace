/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B318
// Address: 0x000000000049B318

//----- (000000000049B318) ----------------------------------------------------
size_t __fastcall sub_49B318(const char *a1, unsigned __int64 a2, char *s, __int64 *a4)
{
  size_t v8; // x0
  const char *v9; // x0
  __int64 v10; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  size_t result; // x0
  size_t v14; // x0
  const char *v15; // x0
  __int64 v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  unsigned __int8 v19[16]; // [xsp+0h] [xbp+0h] BYREF
  __int64 v20; // [xsp+40h] [xbp+40h] BYREF
  __int64 v21; // [xsp+48h] [xbp+48h]
  __int64 v22; // [xsp+50h] [xbp+50h]
  __int64 v23; // [xsp+58h] [xbp+58h]
  __int64 v24; // [xsp+68h] [xbp+68h]
  __int64 v25; // [xsp+70h] [xbp+70h]
  __int64 v26; // [xsp+78h] [xbp+78h]
  __int64 v27; // [xsp+80h] [xbp+80h]

  if ( !s )
  {
    if ( !under_debugger )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( !a1 )
  {
    if ( !a2 )
    {
      v14 = strlen(s);
      v15 = sub_49AEC8(s, v19, v14 + 100);
      v16 = a4[1];
      v17 = a4[2];
      v18 = a4[3];
      v20 = *a4;
      v21 = v16;
      v22 = v17;
      v23 = v18;
      v24 = v20;
      v25 = v16;
      v26 = v17;
      v27 = v18;
      result = __vsnprintf_chk(0, 0, 1, -1, v15, &v20);
      if ( (result & 0x80000000) == 0 )
        return result;
    }
    return 0;
  }
  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    if ( !under_debugger )
      sub_492270(1225);
LABEL_14:
    __break(0x3E8u);
LABEL_15:
    sub_492270(539);
  }
  if ( (__int64)a2 <= 1 )
  {
    if ( a2 )
      *a1 = 0;
    return 0;
  }
  *a1 = 0;
  v8 = strlen(s);
  v9 = sub_49AEC8(s, v19, v8 + 100);
  v10 = a4[1];
  v11 = a4[2];
  v12 = a4[3];
  v20 = *a4;
  v21 = v10;
  v22 = v11;
  v23 = v12;
  v24 = v20;
  v25 = v10;
  v26 = v11;
  v27 = v12;
  result = __vsnprintf_chk(a1, a2, 1, -1, v9, &v20);
  if ( (result & 0x80000000) != 0 || a2 <= (int)result )
  {
    result = (unsigned int)(a2 - 1);
    a1[(int)result] = 0;
    if ( (result & 0x80000000) != 0 )
      return strlen(a1);
  }
  return result;
}
// 405ED0: using guessed type __int64 __fastcall __vsnprintf_chk(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 52451C: using guessed type char under_debugger;
