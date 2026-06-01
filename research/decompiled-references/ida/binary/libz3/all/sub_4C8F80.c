_QWORD *__fastcall sub_4C8F80(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v6; // r12
  __int64 v8; // rbp
  _QWORD *v10; // r13
  unsigned int *v11; // r12

  v6 = a4;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a2 + 8) + 160LL))(
         *(_QWORD *)(a2 + 8),
         a2,
         a3,
         a4);
  if ( !v8 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8) + 152LL))(
           *(_QWORD *)(a2 + 8),
           a2,
           a3);
    if ( v8 )
    {
      v10 = (_QWORD *)sub_186B270(0x20u);
      v10[1] = v8;
      *v10 = &off_1C4ED68;
      v10[2] = 0;
      v10[3] = 0;
      if ( (_DWORD)v6 )
      {
        v11 = &a5[v6];
        do
          sub_4C54F0(v10 + 3, a5++);
        while ( a5 != v11 );
      }
      return v10;
    }
  }
  return (_QWORD *)v8;
}

