/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_float
// Address: 0x00000001000338E4

//----- (00000001000338E4) ----------------------------------------------------
__int64 __fastcall idcv_float(int16x4_t *a1, int8x16x2_t a2)
{
  int v3; // w8
  char *v5; // x8
  int v6; // w8
  void *v7; // x0
  char *v8; // [xsp+0h] [xbp-30h] BYREF
  __int128 v9; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a1 )
  {
    while ( 1 )
    {
      v3 = a1->u8[0];
      if ( v3 != 10 )
        break;
      if ( !deref_idcv((unsigned __int8 *)a1, 2) )
      {
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return get_qerrno();
      }
    }
    if ( a1->u8[0] > 6u )
    {
      if ( v3 == 7 )
      {
        if ( a1[2] )
          v5 = (char *)a1[1];
        else
          v5 = &byte_10007AE40;
        v8 = v5;
        asctoreal(&v8, (int16x4_t *)&v9);
        v6 = a1->u8[0];
        if ( v6 == 5 )
        {
          sub_10003307C(*(_QWORD *)&a1[1], (unsigned __int8 *)a1);
        }
        else if ( v6 == 7 )
        {
          v7 = (void *)a1[1];
          if ( v7 )
          {
            a1[2] = 0;
            qfree(v7);
            a1[3] = 0;
          }
        }
        *(_OWORD *)a1[1].i8 = v9;
      }
      else
      {
        if ( v3 != 9 )
          goto LABEL_14;
        eltoe64(*(_QWORD *)&a1[1], a1 + 1, a2);
      }
    }
    else
    {
      if ( v3 != 2 )
      {
        if ( v3 != 3 )
          goto LABEL_14;
        return 0;
      }
      eltoe(*(_QWORD *)&a1[1], a1 + 1, a2);
    }
    a1->i8[0] = 3;
    return 0;
  }
LABEL_14:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return set_qerrno();
}
// 100033998: variable 'a2' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
