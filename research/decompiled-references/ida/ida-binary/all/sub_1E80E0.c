unsigned __int64 __fastcall sub_1E80E0(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  __m128i *v4; // rsi
  __int64 v6; // rax
  __int64 *v7; // r15
  __int64 *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 i; // r15
  int v17; // r14d
  const char *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // [rsp+0h] [rbp-A8h]
  __int64 v27; // [rsp+8h] [rbp-A0h]
  __int64 v29; // [rsp+20h] [rbp-88h] BYREF
  __int128 v30; // [rsp+28h] [rbp-80h]
  __int128 v31; // [rsp+40h] [rbp-68h] BYREF
  __m128i v32; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]

  v4 = &v32;
  v33 = __readfsqword(0x28u);
  v32.m128i_i64[1] = a3;
  v32.m128i_i64[0] = 0;
  v6 = sub_1E7840(a1, &v32);
  v7 = (__int64 *)qword_8CB520;
  v30 = 0;
  v27 = v6;
  v29 = 0;
  v8 = (__int64 *)(qword_8CB520 + 8 * xmmword_8CB528);
  if ( (__int64 *)qword_8CB520 == v8 )
  {
    if ( dword_8CC5F0 < 0 )
    {
      v15 = qword_8CC390;
      v26 = qword_8CC390 + 56 * xmmword_8CC398;
      if ( v26 != qword_8CC390 )
        goto LABEL_16;
    }
  }
  else
  {
    do
    {
      v9 = *v7;
      if ( *v7 != a3 )
      {
        v32.m128i_i64[0] = 0;
        v4 = (__m128i *)a3;
        v32.m128i_i64[1] = v9;
        if ( (unsigned __int8)sub_1E7F60(a1, a3, &v32) )
        {
          v10 = v29;
          v11 = *v7;
          v32.m128i_i64[0] = 0;
          v12 = v29 + 16 * v30;
          v32.m128i_i64[1] = v11;
          if ( v29 == v12 )
            goto LABEL_14;
          while ( 1 )
          {
            v4 = (__m128i *)(*(_QWORD *)(v10 + 8) ^ v32.m128i_i64[1]);
            if ( *(_OWORD *)v10 - *(_OWORD *)&v32 == 0 )
              break;
            v10 += 16;
            if ( v12 == v10 )
              goto LABEL_14;
          }
          if ( v12 == v10 )
          {
LABEL_14:
            v14 = *v7;
            v32.m128i_i64[0] = 0;
            v4 = (__m128i *)a2;
            v32.m128i_i64[1] = v14;
            sub_1E78E0(a1, a2, &v29, &v32, v27);
          }
        }
      }
      ++v7;
    }
    while ( v8 != v7 );
    if ( dword_8CC5F0 < 0 )
    {
      v15 = qword_8CC390;
      v26 = qword_8CC390 + 56 * xmmword_8CC398;
      if ( v26 != qword_8CC390 )
      {
LABEL_16:
        for ( i = v15; v26 != i; i += 56 )
        {
          v17 = sub_235EA0(i);
          v18 = &s1;
          if ( *(_QWORD *)(i + 8) )
            v18 = *(const char **)i;
          if ( v17 != -1 && (unsigned __int8)sub_235DE0(i) && (v17 & 0x10) != 0 )
          {
            if ( !*v18 )
              goto LABEL_39;
            v31 = 0;
            qstrncpy(&v31, v18, 16);
            v4 = (__m128i *)a3;
            if ( (unsigned __int8)sub_1E7F60(a1, a3, &v31) )
            {
              if ( !*v18 )
              {
                if ( !under_debugger )
                  interr(1716, a3, v21, v22, 0.0);
                goto LABEL_43;
              }
              v4 = (__m128i *)v18;
              v32 = 0;
              qstrncpy(&v32, v18, 16);
              v24 = v29;
              v25 = v29 + 16 * v30;
              if ( v29 == v25 )
                goto LABEL_32;
              while ( 1 )
              {
                v4 = (__m128i *)(*(_QWORD *)(v24 + 8) ^ v32.m128i_i64[1]);
                if ( *(_OWORD *)v24 - *(_OWORD *)&v32 == 0 )
                  break;
                v24 += 16;
                if ( v25 == v24 )
                  goto LABEL_32;
              }
              if ( v24 == v25 )
              {
LABEL_32:
                if ( !*v18 )
                {
                  if ( !under_debugger )
                  {
                    interr(1716, v4, v24, v23, 0.0);
LABEL_39:
                    if ( !under_debugger )
                      interr(1716, v4, v19, v20, 0.0);
                  }
LABEL_43:
                  BUG();
                }
                v32 = 0;
                qstrncpy(&v32, v18, 16);
                v4 = (__m128i *)a2;
                sub_1E78E0(a1, a2, &v29, &v32, v27);
              }
            }
          }
        }
      }
    }
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29, v4->m128i_i8, 0.0);
    }
  }
  return v33 - __readfsqword(0x28u);
}
