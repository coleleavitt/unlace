/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BAA8
// Address: 0x000000000007BAA8

//----- (000000000007BAA8) ----------------------------------------------------
__int64 *__fastcall sub_7BAA8(_QWORD **a1, _QWORD *a2, const char **a3, __int64 a4)
{
  __int64 **v6; // x0
  __int64 *v7; // x20
  __int64 **v8; // x21
  __int64 v9; // x8
  _QWORD *v10; // x8
  __int64 *v11; // x1
  __int64 v13; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v14[2]; // [xsp+10h] [xbp-40h] BYREF

  v14[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (__int64 **)sub_7BB80(a1, a2, v14, &v13, a3);
  v7 = *v6;
  if ( !*v6 )
  {
    v8 = v6;
    v7 = (__int64 *)operator new(0x58u);
    sub_7BE08((__int64)(v7 + 4), a4);
    v9 = v14[0];
    *v7 = 0;
    v7[1] = 0;
    v7[2] = v9;
    *v8 = v7;
    v10 = (_QWORD *)**a1;
    if ( v10 )
    {
      *a1 = v10;
      v11 = *v8;
    }
    else
    {
      v11 = v7;
    }
    sub_48ED8(a1[1], v11);
    a1[2] = (_QWORD *)((char *)a1[2] + 1);
  }
  return v7;
}
