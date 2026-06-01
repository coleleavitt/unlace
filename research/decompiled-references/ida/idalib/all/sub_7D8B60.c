__int64 __fastcall sub_7D8B60(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 func_qty; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rsi
  void *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = a2[1];
  if ( v4 )
    goto LABEL_12;
  func_qty = get_func_qty();
  if ( func_qty )
  {
    do
    {
      v6 = (_QWORD *)getn_func(v4);
      v7 = v6;
      if ( v6 )
      {
        v8 = v6[1] - *v6;
        if ( v8 >= (int)sub_600380() && !(unsigned __int8)is_spec_ea(*v7) && (v7[2] & 4) == 0 )
        {
          v9 = a2[1];
          v10 = *v7;
          v11 = *a2;
          if ( a2[2] < (unsigned __int64)(v9 + 1) )
          {
            v14 = qvector_reserve(a2, v11, v9 + 1, 8);
            *a2 = v14;
            v11 = v14;
            v9 = a2[1];
          }
          *(_QWORD *)(v11 + 8 * v9) = v10;
          ++a2[1];
        }
      }
      ++v4;
    }
    while ( func_qty != v4 );
  }
  if ( a2[1] )
LABEL_12:
    sub_7D6880(a1);
  if ( a3 )
  {
    v13 = (void *)*a3;
    if ( (unsigned __int64)a3[2] <= 0xC )
    {
      v15 = qvector_reserve(a3, v13, 13, 1);
      *a3 = v15;
      v13 = (void *)v15;
    }
    a3[1] = 13;
    qmemcpy(v13, "No functions", 12);
    *(_BYTE *)(*a3 + 12) = 0;
  }
  return 0;
}
