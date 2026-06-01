/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003C5FC
// Address: 0x000000010003C5FC

//----- (000000010003C5FC) ----------------------------------------------------
_QWORD **__fastcall sub_10003C5FC(_QWORD **a1, _QWORD *a2)
{
  _QWORD *v3; // x21
  _QWORD *v4; // x20
  _QWORD *v5; // x23
  __int64 **v7; // x22
  _QWORD *v8; // x9
  __int64 *v9; // x1
  __int64 v10; // x8
  _QWORD *v11; // x8
  _QWORD *v12; // x8
  bool v13; // zf
  __int64 v14; // [xsp+0h] [xbp-60h] BYREF
  __int64 v15; // [xsp+8h] [xbp-58h] BYREF
  __int64 *v16; // [xsp+10h] [xbp-50h] BYREF

  a1[1] = nullptr;
  v3 = a1 + 1;
  a1[2] = nullptr;
  *a1 = a1 + 1;
  v4 = a2 + 1;
  v5 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 + 1 )
  {
    do
    {
      v7 = (__int64 **)sub_10003C74C(a1, v3, &v15, &v14, (__int64)(v5 + 4));
      if ( *v7 )
      {
        v8 = (_QWORD *)v5[1];
        if ( v8 )
          goto LABEL_10;
      }
      else
      {
        sub_10003C9AC((__int64)a1, (__int64)(v5 + 4), (__int64)&v16);
        v10 = v15;
        v9 = v16;
        *v16 = 0;
        v9[1] = 0;
        v9[2] = v10;
        *v7 = v9;
        v11 = (_QWORD *)**a1;
        if ( v11 )
        {
          *a1 = v11;
          v9 = *v7;
        }
        sub_10000B394(a1[1], v9);
        a1[2] = (_QWORD *)((char *)a1[2] + 1);
        v8 = (_QWORD *)v5[1];
        if ( v8 )
        {
          do
          {
LABEL_10:
            v12 = v8;
            v8 = (_QWORD *)*v8;
          }
          while ( v8 );
          goto LABEL_3;
        }
      }
      do
      {
        v12 = (_QWORD *)v5[2];
        v13 = *v12 == (_QWORD)v5;
        v5 = v12;
      }
      while ( !v13 );
LABEL_3:
      v5 = v12;
    }
    while ( v12 != v4 );
  }
  return a1;
}
