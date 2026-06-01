/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_float
// Address: 0x000000010003216C

//----- (000000010003216C) ----------------------------------------------------
__int64 __fastcall idcv_float(int16x4_t *a1, int8x16x2_t a2)
{
  int v3; // w8
  char *v5; // x8
  int v6; // w8
  void *v7; // x0
  char *v8; // [xsp+0h] [xbp-30h] BYREF
  __int128 v9; // [xsp+8h] [xbp-28h] BYREF

  if ( !a1 )
    return set_qerrno();
  while ( 1 )
  {
    v3 = a1->u8[0];
    if ( v3 != 10 )
      break;
    if ( !deref_idcv((unsigned __int8 *)a1, 2) )
      return get_qerrno();
  }
  if ( a1->u8[0] > 6u )
  {
    if ( v3 == 7 )
    {
      if ( a1[2] )
        v5 = (char *)a1[1];
      else
        v5 = &byte_100075A30;
      v8 = v5;
      asctoreal(&v8, (int16x4_t *)&v9);
      v6 = a1->u8[0];
      if ( v6 == 5 )
      {
        sub_100031978(*(_QWORD *)&a1[1], (unsigned __int8 *)a1);
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
        return set_qerrno();
      eltoe64(*(_QWORD *)&a1[1], a1 + 1, a2);
    }
    goto LABEL_23;
  }
  if ( v3 == 2 )
  {
    eltoe(*(_QWORD *)&a1[1], a1 + 1, a2);
LABEL_23:
    a1->i8[0] = 3;
    return 0;
  }
  if ( v3 != 3 )
    return set_qerrno();
  return 0;
}
// 10003220C: variable 'a2' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
