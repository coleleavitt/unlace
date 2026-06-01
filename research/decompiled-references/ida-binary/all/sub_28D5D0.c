__int64 __fastcall sub_28D5D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BOOL4 v5; // edx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi
  _QWORD *func; // rax

  v5 = sub_28AB20(unk_8D0AD8, 150);
  result = 0;
  if ( v5 )
  {
    v7 = *(__int64 **)a4;
    v8 = *(_QWORD *)a4 + 8LL * *(_QWORD *)(a4 + 8);
    while ( (__int64 *)v8 != v7 )
    {
      v9 = *v7++;
      func = (_QWORD *)get_func(v9);
      sub_28BDC0(func);
    }
    return 2;
  }
  return result;
}
