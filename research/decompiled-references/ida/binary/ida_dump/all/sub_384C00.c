__int64 __fastcall sub_384C00(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rax

  if ( a1[24] )
  {
    a1[25] = 0;
    qfree();
    a1[24] = 0;
    a1[26] = 0;
  }
  v1 = a1[23];
  v2 = *(_QWORD *)(v1 + 432);
  if ( 104LL * *(_QWORD *)(v1 + 440) )
  {
    do
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 176LL))(a1, v2) )
      {
        v3 = a1[25];
        v4 = a1[24];
        if ( a1[26] < (unsigned __int64)(v3 + 1) )
        {
          v5 = qvector_reserve();
          a1[24] = v5;
          v4 = v5;
          v3 = a1[25];
        }
        *(_QWORD *)(v4 + 8 * v3) = v2;
        ++a1[25];
      }
      v2 += 104;
    }
    while ( v2 != *(_QWORD *)(a1[23] + 432LL) + 104LL * *(_QWORD *)(a1[23] + 440LL) );
  }
  return 1;
}
