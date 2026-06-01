/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003B02C
// Address: 0x000000010003B02C

//----- (000000010003B02C) ----------------------------------------------------
__int64 **__fastcall sub_10003B02C(int16x4_t *a1, int16x4_t *a2)
{
  __int64 **result; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  _QWORD *v19; // x21
  _QWORD *v20; // x21
  _QWORD *v21; // x22
  _QWORD *v22; // t1
  _QWORD **v23; // x19
  __int64 **v24; // x20
  _QWORD *v25; // x9
  __int64 *v26; // x1
  __int64 v27; // x8
  _QWORD *v28; // x8
  _QWORD *v29; // x8
  bool v30; // zf
  __int64 v31; // [xsp+0h] [xbp-50h] BYREF
  __int64 v32; // [xsp+8h] [xbp-48h] BYREF
  __int64 *v33; // [xsp+10h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]
  int8x16x2_t v35; // 0:q0.32
  int8x16x2_t v36; // 0:q0.32

  result = (__int64 **)sub_10003B280(a1, a2);
  if ( (int)result <= 5 )
  {
    if ( (_DWORD)result == 2 )
    {
LABEL_27:
      *(_QWORD *)&a1[1] += *(_QWORD *)&a2[1];
      return result;
    }
    if ( (_DWORD)result == 3 )
    {
      result = (__int64 **)eadd((unsigned __int16 *)&a1[1], (unsigned __int16 *)&a2[1], a1 + 1, 0, v35);
      if ( (_DWORD)result != 2 && (_DWORD)result != 5 && (_DWORD)result != 4 )
        return result;
      goto LABEL_33;
    }
    if ( (_DWORD)result != 5 )
      return result;
    result = (__int64 **)deep_copy_idcv((unsigned __int8 *)a1, (__int64)a1);
    if ( (_DWORD)result )
      return result;
    v19 = (_QWORD *)a2[1];
    v22 = (_QWORD *)*v19;
    v20 = v19 + 1;
    v21 = v22;
    if ( v22 == v20 )
      return result;
    v23 = (_QWORD **)a1[1];
    while ( 1 )
    {
      result = (__int64 **)sub_10003E5A0(v23, v23 + 1, &v32, &v31, (__int64)(v21 + 4));
      v24 = result;
      if ( *result )
      {
        v25 = (_QWORD *)v21[1];
        if ( v25 )
          goto LABEL_20;
      }
      else
      {
        sub_10003E804((__int64)v23, (__int64)(v21 + 4), (__int64)&v33);
        v27 = v32;
        v26 = v33;
        *v33 = 0;
        v26[1] = 0;
        v26[2] = v27;
        *v24 = v26;
        v28 = (_QWORD *)**v23;
        if ( v28 )
        {
          *v23 = v28;
          v26 = *v24;
        }
        result = (__int64 **)sub_10000BD00(v23[1], v26);
        v23[2] = (_QWORD *)((char *)v23[2] + 1);
        v25 = (_QWORD *)v21[1];
        if ( v25 )
        {
          do
          {
LABEL_20:
            v29 = v25;
            v25 = (_QWORD *)*v25;
          }
          while ( v25 );
          goto LABEL_13;
        }
      }
      do
      {
        v29 = (_QWORD *)v21[2];
        v30 = *v29 == (_QWORD)v21;
        v21 = v29;
      }
      while ( !v30 );
LABEL_13:
      v21 = v29;
      if ( v29 == v20 )
        return result;
    }
  }
  if ( (int)result > 7 )
  {
    if ( (_DWORD)result != 8 )
    {
      if ( (_DWORD)result != 9 )
        return result;
      goto LABEL_27;
    }
    goto LABEL_33;
  }
  if ( (_DWORD)result == 6 )
  {
LABEL_33:
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (__int64 **)set_qerrno();
  }
  result = (__int64 **)idcv_int64((unsigned __int8 *)a1, v35, v5, v6, v7, v8, v9, v10, v11);
  if ( !(_DWORD)result )
  {
    result = (__int64 **)idcv_int64((unsigned __int8 *)a2, v36, v12, v13, v14, v15, v16, v17, v18);
    if ( !(_DWORD)result )
      goto LABEL_27;
  }
  return result;
}
// 10003B07C: conditional instruction was optimized away because w0.4==7
// 10003B084: variable 'v35' is possibly undefined
// 10003B084: variable 'v5' is possibly undefined
// 10003B084: variable 'v6' is possibly undefined
// 10003B084: variable 'v7' is possibly undefined
// 10003B084: variable 'v8' is possibly undefined
// 10003B084: variable 'v9' is possibly undefined
// 10003B084: variable 'v10' is possibly undefined
// 10003B084: variable 'v11' is possibly undefined
// 10003B090: variable 'v36' is possibly undefined
// 10003B090: variable 'v12' is possibly undefined
// 10003B090: variable 'v13' is possibly undefined
// 10003B090: variable 'v14' is possibly undefined
// 10003B090: variable 'v15' is possibly undefined
// 10003B090: variable 'v16' is possibly undefined
// 10003B090: variable 'v17' is possibly undefined
// 10003B090: variable 'v18' is possibly undefined
