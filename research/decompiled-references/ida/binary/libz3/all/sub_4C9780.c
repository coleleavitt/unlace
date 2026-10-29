_QWORD *__fastcall sub_4C9780(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // r14
  _QWORD *v8; // rbp
  __int64 v10; // r12
  __int64 *v11; // rax
  __int64 v12; // rax
  unsigned int *v13; // r13

  v5 = a4;
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a2 + 8) + 160LL))(
                   *(_QWORD *)(a2 + 8),
                   a2,
                   a3,
                   a4);
  if ( !v8 )
  {
    v10 = sub_4C4D50(a1, a2, a3);
    v8 = (_QWORD *)sub_186B270(0x30u);
    v11 = *(__int64 **)(a1 + 8);
    *v8 = &off_1C4F1C8;
    v12 = *v11;
    v8[1] = v10;
    v8[2] = 0;
    v8[3] = a3;
    v8[4] = v12;
    if ( a3 )
      ++*(_DWORD *)(a3 + 8);
    v8[5] = 0;
    if ( (_DWORD)v5 )
    {
      v13 = &a5[v5];
      do
        sub_4C54F0(v8 + 5, a5++);
      while ( a5 != v13 );
    }
  }
  return v8;
}

