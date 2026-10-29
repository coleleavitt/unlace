unsigned __int64 **__fastcall sub_5D0300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v6; // r13
  __int64 v7; // r12
  unsigned __int64 **result; // rax
  unsigned __int64 *v9; // rbx
  __int64 v10; // rbp
  unsigned __int64 *v11; // rcx

  v6 = (int *)&unk_23AFA30;
  do
  {
    v7 = *v6;
    result = (unsigned __int64 **)(a1 + 8 * (5 * v7 + 5));
    v9 = *result;
    v10 = (__int64)&(*result)[2 * (_QWORD)result[1]];
    if ( (unsigned __int64 *)v10 != *result )
    {
      do
      {
        v11 = v9;
        v9 += 2;
        result = (unsigned __int64 **)sub_5D0200(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), v7, v11, a5, a6);
      }
      while ( (unsigned __int64 *)v10 != v9 );
    }
    ++v6;
  }
  while ( &unk_23AFA3C != (_UNKNOWN *)v6 );
  return result;
}
