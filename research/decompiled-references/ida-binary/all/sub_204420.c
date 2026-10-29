unsigned __int64 __fastcall sub_204420(
        __int64 *a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v14; // rax
  __int64 v16; // rbp
  int v17; // ebx
  __int64 v18; // r13
  __m128i **v19; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rbp
  __m128i **v24; // rax
  __int64 v25; // rax
  char v26; // [rsp+0h] [rbp-A8h]
  __int64 v27; // [rsp+10h] [rbp-98h]
  __int64 v28; // [rsp+18h] [rbp-90h]
  __int64 *v29; // [rsp+18h] [rbp-90h]
  __int64 *v30; // [rsp+20h] [rbp-88h]
  __int64 v31; // [rsp+28h] [rbp-80h]
  __m128i v32; // [rsp+30h] [rbp-78h] BYREF
  __m128i v33; // [rsp+40h] [rbp-68h] BYREF
  __m128i v34; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v30 = (__int64 *)a2;
  v35 = __readfsqword(0x28u);
  v14 = a2->m128i_i64[1];
  if ( (int)v14 > 0 )
  {
    v27 = 0;
    v31 = 8 * (3LL * (unsigned int)(v14 - 1) + 3);
    do
    {
      v16 = 0;
      v17 = 0;
      v18 = *v30 + v27;
      v28 = *(_QWORD *)(v18 + 8);
      if ( (int)v28 <= 1 )
      {
        sub_169700(
          (int)"Group has less than 2 entries. Skipping.\n",
          (__int64)a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          v26);
      }
      else
      {
        while ( 1 )
        {
          a2 = (__m128i *)&s1;
          v19 = (__m128i **)(v16 + *(_QWORD *)v18);
          if ( v19[1] )
            a2 = *v19;
          a7 = 0;
          v34 = 0;
          if ( !(unsigned __int8)sub_1FA9F0(&v34, (__int64)a2, 0.0) )
            break;
          if ( v17 )
          {
            if ( v34.m128i_i8[0] )
              break;
            a2 = &v34;
            if ( sub_1E7840(a1, &v34) )
              break;
            ++v17;
            v16 += 24;
            if ( (_DWORD)v28 == v17 )
              goto LABEL_11;
          }
          else
          {
            a2 = &v34;
            if ( sub_1E7840(a1, &v34) )
              goto LABEL_14;
            v16 += 24;
            v17 = 1;
          }
        }
        if ( (_DWORD)v28 != v17 )
          goto LABEL_14;
LABEL_11:
        a7 = 0;
        a2 = (__m128i *)&s1;
        v32 = 0;
        if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) )
          a2 = **(__m128i ***)v18;
        if ( (unsigned __int8)sub_1FA9F0(&v32, (__int64)a2, 0.0) )
        {
          v21 = *(_QWORD *)(v18 + 8);
          if ( (int)v21 > 1 )
          {
            v29 = a1;
            v22 = 24;
            v23 = 24LL * (unsigned int)(v21 - 2) + 48;
            do
            {
              a7 = 0;
              a2 = (__m128i *)&s1;
              v33 = 0;
              v24 = (__m128i **)(v22 + *(_QWORD *)v18);
              if ( v24[1] )
                a2 = *v24;
              if ( (unsigned __int8)sub_1FA9F0(&v33, (__int64)a2, 0.0) )
              {
                if ( !v33.m128i_i8[0] )
                {
                  a2 = (__m128i *)v33.m128i_i64[1];
                  if ( v33.m128i_i64[1] )
                  {
                    v25 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, (const QT::QObject *)v33.m128i_i64[1]);
                    if ( v25 )
                    {
                      v34.m128i_i64[0] = 0;
                      a2 = &v34;
                      v34.m128i_i64[1] = v25;
                      sub_203F40(
                        v29,
                        &v34,
                        &v32,
                        (__m128)0LL,
                        a8,
                        a9,
                        a10,
                        *(double *)a11.m128_u64,
                        *(double *)a12.m128_u64,
                        a13,
                        a14);
                    }
                  }
                }
              }
              v22 += 24;
            }
            while ( v23 != v22 );
            a1 = v29;
          }
        }
      }
LABEL_14:
      v27 += 24;
      a3 = v31;
    }
    while ( v27 != v31 );
  }
  return v35 - __readfsqword(0x28u);
}
