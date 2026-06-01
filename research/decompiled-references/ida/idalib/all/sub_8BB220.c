__int64 __fastcall sub_8BB220(_QWORD **a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r14
  __m128i *v6; // rbx
  __m128i *v8; // rax
  unsigned __int64 *v9; // r10
  __int64 v10; // r14
  char v11; // al
  unsigned __int64 *v12; // rax
  __m128i *v13; // r13
  unsigned __int64 *v14; // rcx
  __m128i *v15; // rax
  __m128i *v16; // r10
  __m128i *v17; // rdx
  unsigned __int64 *v18; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i *v22; // r13
  __m128i *v23; // rdx
  __m128i *v24; // rax
  __m128i *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // [rsp+8h] [rbp-70h]
  unsigned __int64 v28; // [rsp+10h] [rbp-68h]
  unsigned __int64 *v29; // [rsp+18h] [rbp-60h]
  unsigned __int64 *v30; // [rsp+18h] [rbp-60h]
  unsigned __int64 *v31; // [rsp+18h] [rbp-60h]
  __m128i v32; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-48h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v4 = a2 + a4;
  v6 = (__m128i *)a1[7];
  v34 = __readfsqword(0x28u);
  if ( a2 == v6->m128i_i64[0] && v4 == v6->m128i_i64[1] )
    goto LABEL_6;
  v8 = sub_8BAFD0(a1, v6, a2, v4);
  v6 = v8;
  if ( v8 )
  {
    if ( a2 != v8->m128i_i64[0] || v4 != v8->m128i_i64[1] )
    {
      if ( !under_debugger )
        interr(592);
      goto LABEL_53;
    }
LABEL_6:
    v9 = sub_8B8C20(a1, a3);
    if ( v9 != (unsigned __int64 *)v6 )
    {
      if ( v6 == (__m128i *)a1[2] )
      {
        if ( v9 != a1[11] )
        {
LABEL_9:
          if ( a4 >> 62 )
          {
            if ( !under_debugger )
              interr(1168);
          }
          else
          {
            v10 = 4 * a4;
            v28 = v6[1].m128i_u64[0];
            v11 = *((_BYTE *)a1 + 100);
            if ( a2 < a3 )
            {
              v20 = v9[2];
              v21 = v9[1] - *v9;
              v27 = v20 + 4 * v21;
              if ( v11 )
              {
                v30 = v9;
                sub_8BD200(*a1, v28, v20 + 4 * v21 - v10, 4 * a4);
                v9 = v30;
              }
            }
            else
            {
              if ( v9 == a1[11] )
                v27 = **a1;
              else
                v27 = v9[2] + 4 * (v9[1] - *v9);
              if ( v11 )
              {
                v31 = v9;
                sub_8BD200(*a1, v28, v27, 4 * a4);
                v9 = v31;
              }
            }
            v29 = v9;
            v32.m128i_i64[1] = a3 + a4;
            v32.m128i_i64[0] = a3;
            v33 = v27;
            sub_8B8CE0(a1, &v32);
            v12 = sub_8B8B40(a1, a2, 0, (__int64)a1[3]);
            v13 = (__m128i *)a1[11];
            v14 = v12;
            v15 = (__m128i *)a1[2];
            v16 = (__m128i *)v29;
            v17 = (__m128i *)((char *)v15 + 24 * (_QWORD)a1[3]);
            if ( v14 != (unsigned __int64 *)v13 && a2 == *v14 )
            {
              if ( v14 != (unsigned __int64 *)v17 )
              {
                v25 = (__m128i *)memmove(v14, v14 + 3, (char *)v17 - (char *)v14 - 24);
                v16 = (__m128i *)v29;
                v13 = v25;
                v26 = (__int64)a1[3] - 1;
                v15 = (__m128i *)a1[2];
                a1[3] = (_QWORD *)v26;
                a1[11] = &v15->m128i_i64[3 * v26];
                goto LABEL_18;
              }
            }
            else if ( v13 != v17 )
            {
LABEL_18:
              if ( v16 < v15 || v16 >= (__m128i *)a1[11] || (v6 = v16, a3 != v16->m128i_i64[0]) )
              {
                v18 = sub_8B8B40(a1, a3, 0, (__int64)a1[3]);
                v6 = (__m128i *)a1[11];
                if ( v18 != (unsigned __int64 *)v6 && a3 == *v18 )
                  v6 = (__m128i *)v18;
              }
              if ( v28 >= v27 )
              {
                v22 = (__m128i *)((char *)v13 - 24);
                if ( v22 != v6 )
                {
                  v23 = (__m128i *)a1[11];
                  if ( v23 != v6 )
                  {
                    v24 = (__m128i *)((char *)v6 + 24);
                    if ( v23 != (__m128i *)&v6[1].m128i_u64[1] )
                    {
                      do
                      {
                        v24[1].m128i_i64[0] += v10;
                        if ( v22 == v24 )
                          break;
                        v24 = (__m128i *)((char *)v24 + 24);
                      }
                      while ( v24 != (__m128i *)a1[11] );
                    }
                  }
                }
              }
              else
              {
                for ( ; v13 != (__m128i *)a1[11]; v13 = (__m128i *)((char *)v13 + 24) )
                {
                  v13[1].m128i_i64[0] -= v10;
                  if ( v6 == v13 )
                    break;
                }
              }
              goto LABEL_31;
            }
            if ( !under_debugger )
              interr(804);
          }
LABEL_53:
          BUG();
        }
      }
      else if ( v9 != &v6[-2].m128i_u64[1] )
      {
        goto LABEL_9;
      }
    }
    v6->m128i_i64[0] = a3;
    v6->m128i_i64[1] = a4 + a3;
LABEL_31:
    sub_8BB100(a1, v6);
    return 0;
  }
  return 4294967292LL;
}
