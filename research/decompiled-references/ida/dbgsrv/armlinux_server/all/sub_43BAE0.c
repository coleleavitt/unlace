/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BAE0
// Address: 0x000000000043BAE0

//----- (000000000043BAE0) ----------------------------------------------------
__int64 __fastcall sub_43BAE0(__int64 (__fastcall ***a1)(_QWORD, __int64), unsigned __int8 a2)
{
  int v2; // w23
  pthread_mutex_t *v3; // x24
  unsigned __int64 v5; // x25
  int v6; // w20
  __int64 v7; // x1
  int v8; // w0
  __int64 v9; // x19
  __int64 v10; // x19

  v2 = a2;
  v3 = (pthread_mutex_t *)qword_522180;
  sub_494720((pthread_mutex_t *)qword_522180);
  v5 = qword_522160;
  if ( !qword_522170 )
  {
    v9 = 0;
LABEL_11:
    sub_494760(v3);
    return v9;
  }
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)(qword_522168 + 8 * v7);
    if ( v10 )
    {
      if ( v2 )
        sub_43BA08(*(__int64 **)(qword_522168 + 8 * v7));
      v8 = (**a1)(a1, v10);
      v9 = v8;
      if ( v8 )
        break;
    }
    v7 = ++v6;
    if ( v6 >= (unsigned __int64)qword_522170 )
    {
      v9 = 0;
      break;
    }
  }
  if ( !v2 || v5 >= qword_522170 )
    goto LABEL_11;
  sub_43BA08(*(__int64 **)(qword_522168 + 8 * v5));
  sub_494760(v3);
  return v9;
}
// 522160: using guessed type __int64 qword_522160;
// 522168: using guessed type __int64 qword_522168;
// 522170: using guessed type __int64 qword_522170;
// 522180: using guessed type __int64 qword_522180;
