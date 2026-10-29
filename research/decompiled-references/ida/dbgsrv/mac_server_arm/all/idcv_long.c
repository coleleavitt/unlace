/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_long
// Address: 0x0000000100031B7C

//----- (0000000100031B7C) ----------------------------------------------------
__int64 __fastcall idcv_long(
        unsigned __int8 *a1,
        int8x16x2_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v10; // w8
  __int64 result; // x0
  int v12; // w8
  const char *v13; // x0
  int v14; // w8
  void *v15; // x0
  __int64 v16; // [xsp+10h] [xbp-20h] BYREF

  if ( !a1 )
    return set_qerrno();
  while ( 1 )
  {
    v10 = *a1;
    if ( v10 != 10 )
      break;
    if ( !deref_idcv(a1, 2) )
      return get_qerrno();
  }
  if ( *a1 > 6u )
  {
    if ( v10 == 7 )
    {
      if ( *((_QWORD *)a1 + 2) )
        v13 = *((const char **)a1 + 1);
      else
        v13 = &byte_100075A30;
      v16 = 0;
      qsscanf(v13, "%lli", a4, a5, a6, a7, a8, a9, (char)&v16);
      v14 = *a1;
      if ( v14 == 5 )
      {
        sub_100031978(*((_QWORD *)a1 + 1), a1);
      }
      else if ( v14 == 7 )
      {
        v15 = *((void **)a1 + 1);
        if ( v15 )
        {
          *((_QWORD *)a1 + 2) = 0;
          qfree(v15);
          *((_QWORD *)a1 + 3) = 0;
        }
      }
      *a1 = 2;
      *((_QWORD *)a1 + 1) = v16;
      return 0;
    }
    if ( v10 == 9 )
    {
      result = 0;
      goto LABEL_15;
    }
    return set_qerrno();
  }
  if ( v10 == 2 )
    return 0;
  if ( v10 != 3 )
    return set_qerrno();
  v12 = eetol(&v16, (__int64)(a1 + 8), 0, a2);
  result = 0;
  if ( v12 <= 3 )
  {
    if ( v12 != 1 )
    {
      if ( v12 != 2 )
        return result;
      return set_qerrno();
    }
    result = 0;
    *((_QWORD *)a1 + 1) = v16;
LABEL_15:
    *a1 = 2;
    return result;
  }
  if ( v12 == 5 || v12 == 4 )
    return set_qerrno();
  return result;
}
// 100031C0C: variable 'a2' is possibly undefined
// 100031CD0: variable 'a4' is possibly undefined
// 100031CD0: variable 'a5' is possibly undefined
// 100031CD0: variable 'a6' is possibly undefined
// 100031CD0: variable 'a7' is possibly undefined
// 100031CD0: variable 'a8' is possibly undefined
// 100031CD0: variable 'a9' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
