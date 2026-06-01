__int64 (*__fastcall sub_18F350(__int64 a1, __int64 a2, __int64 **a3, double a4, __m128i a5, __m128 a6))(void)
{
  __int64 (*result)(void); // rax
  __int64 *v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // rdx

  result = *(__int64 (**)(void))(*(_QWORD *)a1 + 392LL);
  if ( (char *)result != (char *)nullsub_121 )
    result = (__int64 (*)(void))result();
  *(_QWORD *)(a1 + 2496) = 0;
  if ( a3 )
  {
    v8 = *a3;
    v9 = (__int64)&(*a3)[4 * (_QWORD)a3[1]];
    if ( (__int64 *)v9 != *a3 )
    {
      do
      {
        while ( v8[1] != -2 )
        {
          v8 += 4;
          if ( v8 == (__int64 *)v9 )
            return result;
        }
        v10 = v8;
        v8 += 4;
        result = (__int64 (*)(void))sub_17B240(*(TListViewer **)(a1 + 2600), a4, a5, a6, a2, v10);
      }
      while ( v8 != (__int64 *)v9 );
    }
  }
  return result;
}

