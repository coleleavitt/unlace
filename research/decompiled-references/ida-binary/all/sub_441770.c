__int64 __fastcall sub_441770(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 i; // rbx
  __int64 *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi

  v5 = *(_QWORD *)(a1 + 408);
  if ( v5 )
  {
    v6 = 0;
    for ( i = 0; i != v5; ++i )
    {
      v8 = (__int64 *)(v6 + *(_QWORD *)(a1 + 400));
      v9 = v8[6];
      if ( v9 )
      {
        v8[7] = 0;
        qfree(v9, a2);
      }
      v10 = v8[3];
      if ( v10 )
      {
        v8[4] = 0;
        qfree(v10, a2);
      }
      v11 = *v8;
      if ( *v8 )
      {
        v8[1] = 0;
        qfree(v11, a2);
      }
      v6 += 88;
    }
  }
  *(_QWORD *)(a1 + 408) = 0;
  sub_441670(*(void **)(a1 + 440), a2);
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = a1 + 432;
  *(_QWORD *)(a1 + 456) = a1 + 432;
  *(_QWORD *)(a1 + 464) = 0;
  sub_42B110(a1, a2, a3);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 544LL))(a1);
}
