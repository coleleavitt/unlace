/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: idcv_object
// Address: 0x0000000100034658

//----- (0000000100034658) ----------------------------------------------------
__int64 __fastcall idcv_object(unsigned __int8 *a1, __int64 a2)
{
  int v4; // w8
  void *v5; // x0
  void *v7; // x0
  void *v8; // x21
  __int64 v9; // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( a1 )
  {
    v4 = *a1;
    if ( v4 == 5 )
    {
      sub_10003307C(*((_QWORD *)a1 + 1), a1);
    }
    else if ( v4 == 7 )
    {
      v5 = *((void **)a1 + 1);
      if ( v5 )
      {
        *((_QWORD *)a1 + 2) = 0;
        qfree(v5);
        *((_QWORD *)a1 + 3) = 0;
      }
    }
    *((_QWORD *)a1 + 1) = 0;
    *a1 = 5;
    v7 = operator new(0x20u);
    v8 = v7;
    if ( a2 )
      v9 = *(unsigned int *)(a2 + 28);
    else
      v9 = 0;
    sub_10002D324(v7, v9);
    *((_QWORD *)a1 + 1) = v8;
    return 0;
  }
  else
  {
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return set_qerrno();
  }
}
// 1000346B8: variable '_28' is possibly undefined
// 10002D324: using guessed type __int64 __fastcall sub_10002D324(_QWORD, _QWORD);
