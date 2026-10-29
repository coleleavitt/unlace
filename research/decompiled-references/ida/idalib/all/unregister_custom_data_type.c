__int64 __fastcall unregister_custom_data_type(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // r13
  void *v10; // rdi

  result = 0;
  if ( a1 > 0 )
  {
    v8 = *(_QWORD **)(qword_2CCB598 + 1552);
    if ( (unsigned __int64)a1 < v8[1] )
    {
      v9 = (_QWORD *)(48LL * a1 + *v8);
      if ( *v9 )
      {
        v10 = (void *)v9[3];
        if ( v10 )
        {
          v9[4] = 0;
          qfree(v10);
          v9[3] = 0;
          v9[5] = 0;
        }
        callui(93, a1, 0, (int)&callui, a5, a6);
      }
    }
  }
  return result;
}
