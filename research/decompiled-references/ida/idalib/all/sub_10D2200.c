__int64 __fastcall sub_10D2200(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdx

  if ( a2 )
  {
    result = *(_QWORD *)(a1 + 88);
    if ( result )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))a3)(
               *(_QWORD *)(a3 + 8),
               **(_QWORD **)(a1 + 16),
               result,
               *(_QWORD *)(**(_QWORD **)(a1 + 16) + 72LL));
  }
  else
  {
    v4 = *(__int64 **)(a1 + 16);
    result = *(unsigned int *)(a1 + 24);
    v5 = &v4[result];
    if ( v4 != v5 )
    {
      v7 = *(__int64 **)(a1 + 96);
      if ( !*(_QWORD *)(a1 + 88) || (++v4, v5 != v4) )
      {
        do
        {
          v8 = *v4++;
          v9 = *v7++;
          result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))a3)(
                     *(_QWORD *)(a3 + 8),
                     v8,
                     v9,
                     *(_QWORD *)(v8 + 72));
        }
        while ( v5 != v4 );
      }
    }
  }
  return result;
}
