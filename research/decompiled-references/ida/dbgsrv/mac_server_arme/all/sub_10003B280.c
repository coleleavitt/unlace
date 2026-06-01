/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003B280
// Address: 0x000000010003B280

//----- (000000010003B280) ----------------------------------------------------
__int64 __fastcall sub_10003B280(int16x4_t *a1, int16x4_t *a2)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  int v11; // w9
  int v12; // w8
  bool v14; // zf
  bool v15; // zf
  unsigned __int8 *v16; // x0
  int8x16x2_t v17; // 0:q0.32

  if ( deref_idcv((unsigned __int8 *)a1, 2) && deref_idcv((unsigned __int8 *)a2, 2) )
  {
    v11 = a1->u8[0];
    v12 = a2->u8[0];
    if ( v11 == v12 )
      return (unsigned int)(char)v11;
    v14 = (unsigned int)(v11 - 1) < 3 || v11 == 9;
    v15 = v14 || v11 == 7;
    if ( v15 && ((unsigned int)(v12 - 1) < 3 || v12 == 9 || v12 == 7) )
    {
      if ( a1->u8[0] <= 6u )
      {
        if ( v11 != 2 )
        {
          if ( v11 == 3 && !(unsigned int)idcv_float(a2, v17) )
            goto LABEL_52;
          goto LABEL_49;
        }
        if ( a2->u8[0] <= 6u )
        {
          LOBYTE(v11) = a2->i8[0];
          if ( v12 == 2 )
            return (unsigned int)(char)v11;
LABEL_33:
          if ( v12 == 3 && !(unsigned int)idcv_float(a1, v17) )
            goto LABEL_52;
          goto LABEL_49;
        }
        if ( v12 != 9 )
        {
          if ( a1[1] )
          {
            if ( !(unsigned int)idcv_long((unsigned __int8 *)a2, v17, v4, v5, v6, v7, v8, v9, v10) )
              goto LABEL_52;
LABEL_49:
            set_qerrno();
            return 0xFFFFFFFFLL;
          }
          goto LABEL_51;
        }
        goto LABEL_47;
      }
      if ( v11 == 9 )
      {
        if ( a2->u8[0] > 6u )
        {
          LOBYTE(v11) = a2->i8[0];
          if ( v12 == 9 )
            return (unsigned int)(char)v11;
          if ( !*(_QWORD *)&a1[1] )
          {
LABEL_51:
            if ( (unsigned int)idcv_string((unsigned __int8 *)a1, v17, v4, v5, v6, v7, v8, v9, v10) )
              goto LABEL_49;
            goto LABEL_52;
          }
        }
        else if ( v12 != 2 )
        {
          goto LABEL_33;
        }
        v16 = (unsigned __int8 *)a2;
        goto LABEL_48;
      }
      if ( v11 != 7 )
        goto LABEL_49;
      if ( a2->u8[0] > 6u )
      {
        LOBYTE(v11) = a2->i8[0];
        if ( v12 == 7 )
          return (unsigned int)(char)v11;
        if ( a2[1] )
        {
LABEL_47:
          v16 = (unsigned __int8 *)a1;
LABEL_48:
          if ( (unsigned int)idcv_int64(v16, v17, v4, v5, v6, v7, v8, v9, v10) )
            goto LABEL_49;
          goto LABEL_52;
        }
      }
      else
      {
        if ( v12 != 2 )
          goto LABEL_33;
        if ( a2[1] )
        {
          if ( (unsigned int)idcv_long((unsigned __int8 *)a1, v17, v4, v5, v6, v7, v8, v9, v10) )
            goto LABEL_49;
LABEL_52:
          LOBYTE(v11) = a1->i8[0];
          return (unsigned int)(char)v11;
        }
      }
      if ( (unsigned int)idcv_string((unsigned __int8 *)a2, v17, v4, v5, v6, v7, v8, v9, v10) )
        goto LABEL_49;
      goto LABEL_52;
    }
  }
  return 0xFFFFFFFFLL;
}
// 10003B3B0: conditional instruction was optimized away because w8.4==9
// 10003B3D8: conditional instruction was optimized away because w8.4==7
// 10003B404: conditional instruction was optimized away because w8.4==7
// 10003B31C: variable 'v17' is possibly undefined
// 10003B354: variable 'v4' is possibly undefined
// 10003B354: variable 'v5' is possibly undefined
// 10003B354: variable 'v6' is possibly undefined
// 10003B354: variable 'v7' is possibly undefined
// 10003B354: variable 'v8' is possibly undefined
// 10003B354: variable 'v9' is possibly undefined
// 10003B354: variable 'v10' is possibly undefined
