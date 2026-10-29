unsigned __int64 __fastcall sub_371C20(
        __int64 **a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 *v12; // rbp
  __int64 *v13; // rdx
  __int64 v14; // r12
  __int64 *v15; // rax
  __int64 *v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a2 )
  {
    v12 = *a1;
    v13 = a1[3];
    v14 = (__int64)&(*a1)[5 * (_QWORD)a1[1]];
    if ( *a1 != (__int64 *)v14 )
    {
      v15 = *a1;
      while ( v13 != (__int64 *)*v15 )
      {
        v15 += 5;
        if ( (__int64 *)v14 == v15 )
          return v26 - __readfsqword(0x28u);
      }
      if ( v15 )
      {
        v16 = *a1;
        while ( v13 != (__int64 *)*v16 )
        {
          v16 += 5;
          if ( (__int64 *)v14 == v16 )
            goto LABEL_21;
        }
        if ( v16 )
        {
          while ( 1 )
          {
            v17 = *v12;
            if ( (__int64 *)*v12 == v13
              || (v18 = *v12,
                  v24 = 0,
                  v25 = 0,
                  (unsigned __int8)sub_371840(
                                     (__int64)a1,
                                     v16,
                                     v18,
                                     (__int64)&v24,
                                     1,
                                     nullptr,
                                     0.0,
                                     a4,
                                     a5,
                                     a6,
                                     a7,
                                     a8,
                                     a9,
                                     a10))
              || (a4 = 0,
                  v25 = 0,
                  v24 = 0,
                  (unsigned __int8)sub_371840(
                                     (__int64)a1,
                                     v16,
                                     v17,
                                     (__int64)&v24,
                                     0,
                                     nullptr,
                                     0.0,
                                     (__m128)0LL,
                                     a5,
                                     a6,
                                     a7,
                                     a8,
                                     a9,
                                     a10)) )
            {
              v12 += 5;
              if ( v12 == (__int64 *)v14 )
                return v26 - __readfsqword(0x28u);
            }
            else
            {
              v19 = a2[1];
              v20 = *a2;
              if ( a2[2] < (unsigned __int64)(v19 + 1) )
              {
                v22 = qvector_reserve(a2, v20, v19 + 1, 8);
                *a2 = v22;
                v20 = v22;
                v19 = a2[1];
              }
              *(_QWORD *)(v20 + 8 * v19) = v17;
              v12 += 5;
              ++a2[1];
              if ( v12 == (__int64 *)v14 )
                return v26 - __readfsqword(0x28u);
            }
            v13 = a1[3];
          }
        }
LABEL_21:
        if ( !under_debugger )
          interr(40325, a2, v13, a12, a3);
        BUG();
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}
