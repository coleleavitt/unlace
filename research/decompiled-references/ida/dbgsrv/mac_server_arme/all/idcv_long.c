/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_long
// Address: 0x0000000100033288

//----- (0000000100033288) ----------------------------------------------------
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
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a1 )
  {
    while ( 1 )
    {
      v10 = *a1;
      if ( v10 != 10 )
        break;
      if ( !deref_idcv(a1, 2) )
      {
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return get_qerrno();
      }
    }
    if ( *a1 <= 6u )
    {
      if ( v10 == 2 )
        return 0;
      if ( v10 != 3 )
        goto LABEL_18;
      v12 = eetol(&v16, (__int64)(a1 + 8), 0, a2);
      result = 0;
      if ( v12 > 3 )
      {
        if ( v12 != 5 && v12 != 4 )
          return result;
        return set_qerrno();
      }
      if ( v12 != 1 )
      {
        if ( v12 != 2 )
          return result;
        return set_qerrno();
      }
      result = 0;
      *((_QWORD *)a1 + 1) = v16;
LABEL_17:
      *a1 = 2;
      return result;
    }
    if ( v10 != 7 )
    {
      if ( v10 != 9 )
        goto LABEL_18;
      result = 0;
      goto LABEL_17;
    }
    if ( *((_QWORD *)a1 + 2) )
      v13 = *((const char **)a1 + 1);
    else
      v13 = &byte_10007AE40;
    v16 = 0;
    qsscanf(v13, "%lli", a4, a5, a6, a7, a8, a9, (char)&v16);
    v14 = *a1;
    if ( v14 == 5 )
    {
      sub_10003307C(*((_QWORD *)a1 + 1), a1);
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
  else
  {
LABEL_18:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return set_qerrno();
  }
}
// 10003332C: variable 'a2' is possibly undefined
// 100033400: variable 'a4' is possibly undefined
// 100033400: variable 'a5' is possibly undefined
// 100033400: variable 'a6' is possibly undefined
// 100033400: variable 'a7' is possibly undefined
// 100033400: variable 'a8' is possibly undefined
// 100033400: variable 'a9' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
