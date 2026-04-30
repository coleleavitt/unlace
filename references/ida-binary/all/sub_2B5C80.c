unsigned __int64 __fastcall sub_2B5C80(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 *v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 *i; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( a3 )
    v4 = *(_QWORD *)(a3 + 408);
  else
    v4 = *(_QWORD *)(a1 + 440);
  if ( v4 )
  {
    v5 = *(__int64 **)(v4 + 16);
    for ( i = &v5[3 * *(_QWORD *)(v4 + 24)]; i != v5; v5 += 3 )
    {
      v6 = a2[1];
      v7 = *a2;
      if ( a2[2] < (unsigned __int64)(v6 + 1) )
      {
        v15 = qvector_reserve(a2, v7, v6 + 1, 24);
        v6 = a2[1];
        *a2 = v15;
        v7 = v15;
      }
      v8 = (__int64 *)(v7 + 24 * v6);
      *v8 = 0;
      *(_OWORD *)(v8 + 1) = 0;
      ++a2[1];
      v9 = *v5;
      v10 = *v5 + 272 * v5[1];
      if ( v10 != *v5 )
      {
        v11 = v8[1];
        do
        {
          v12 = *v8;
          if ( v8[2] < (unsigned __int64)(v11 + 1) )
          {
            v13 = qvector_reserve(v8, v12, v11 + 1, 8);
            v11 = v8[1];
            *v8 = v13;
            v12 = v13;
          }
          *(_QWORD *)(v12 + 8 * v11) = v9;
          v9 += 272;
          v11 = v8[1] + 1;
          v8[1] = v11;
        }
        while ( v10 != v9 );
      }
    }
  }
  return v17 - __readfsqword(0x28u);
}
