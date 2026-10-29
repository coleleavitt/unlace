/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C00
// Address: 0x0000000000048C00

//----- (0000000000048C00) ----------------------------------------------------
__int64 *__fastcall sub_48C00(_QWORD **a1, _QWORD *a2, unsigned __int64 *a3, __int64 *a4)
{
  __int64 **v6; // x0
  __int64 *v7; // x20
  __int64 **v8; // x21
  __int64 *v9; // x0
  __int64 v10; // x8
  size_t v11; // x23
  void *v12; // x0
  __int64 v13; // x8
  _QWORD *v14; // x8
  __int64 *v15; // x1
  __int64 v17; // [xsp+8h] [xbp-58h] BYREF
  _QWORD v18[2]; // [xsp+10h] [xbp-50h] BYREF

  v18[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (__int64 **)sub_48D08(a1, a2, v18, &v17, a3);
  v7 = *v6;
  if ( !*v6 )
  {
    v8 = v6;
    v9 = (__int64 *)operator new(0x40u);
    v10 = *a4;
    v9[6] = 0;
    v9[7] = 0;
    v7 = v9;
    v9[4] = v10;
    v9[5] = 0;
    v11 = a4[2];
    if ( v11 )
    {
      v12 = qalloc_or_throw(a4[2]);
      v7[5] = (__int64)v12;
      v7[7] = v11;
      memcpy(v12, (const void *)a4[1], v11);
      v7[6] = v11;
    }
    v13 = v18[0];
    *v7 = 0;
    v7[1] = 0;
    v7[2] = v13;
    *v8 = v7;
    v14 = (_QWORD *)**a1;
    if ( v14 )
    {
      *a1 = v14;
      v15 = *v8;
    }
    else
    {
      v15 = v7;
    }
    sub_48ED8(a1[1], v15);
    a1[2] = (_QWORD *)((char *)a1[2] + 1);
  }
  return v7;
}
