__int64 __fastcall sub_69E640(__int64 *a1, __int64 *a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  _BYTE *v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r14
  void *v16; // rdi
  char *v17; // r13
  char v18; // dl
  char *v19; // r8
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // r12
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  __int64 v27; // rax
  __int64 *v28; // [rsp+0h] [rbp-C8h]
  __m128i *v29; // [rsp+10h] [rbp-B8h]
  unsigned __int8 v30; // [rsp+1Fh] [rbp-A9h]
  __int64 v31; // [rsp+20h] [rbp-A8h]
  __int64 *v32; // [rsp+28h] [rbp-A0h]
  __int64 *v33; // [rsp+30h] [rbp-98h]
  __int64 v34; // [rsp+38h] [rbp-90h]
  __m128i v35; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  __int128 v37; // [rsp+58h] [rbp-70h]
  void *v38; // [rsp+70h] [rbp-58h] BYREF
  __int128 v39; // [rsp+78h] [rbp-50h]
  unsigned __int64 v40; // [rsp+88h] [rbp-40h]

  v2 = a1;
  v3 = *a1;
  v40 = __readfsqword(0x28u);
  sub_69A900(v3);
  v29 = *(__m128i **)(*v2 + 1840);
  if ( v29->m128i_i64[1] == -1 )
    return 1;
  v28 = &v29->m128i_i64[1];
  v5 = sub_7BEB80(&v29->m128i_u64[1], *v2, 84);
  if ( v5 == -1 )
  {
    return 1;
  }
  else
  {
    v30 = 1;
    do
    {
      v6 = *v2;
      ptr = nullptr;
      v37 = 0;
      if ( sub_7BEED0(v28, v6, &ptr, 1, v5, 84) > 0 )
      {
        v7 = sub_3BDE50(v2, v5);
        v8 = v37;
        v39 = 0;
        v38 = nullptr;
        v35 = _mm_unpacklo_epi64(
                (__m128i)(unsigned __int64)ptr,
                (__m128i)(unsigned __int64)((unsigned __int64)ptr + v37));
        if ( sub_69D7A0(v29, (__int64 *)&v38, v7, &v35) && (_QWORD)v39 )
        {
          sub_69B800(v29, v7, (__int64)v38, (__int64)v38 + 104 * v39);
        }
        else
        {
          v9 = a2[1];
          v10 = *a2;
          if ( a2[2] < (unsigned __int64)(v9 + 1) )
          {
            v27 = qvector_reserve(a2, v10, v9 + 1, 24);
            *a2 = v27;
            v9 = a2[1];
            v10 = v27;
          }
          v11 = v10 + 24 * v9;
          *(_QWORD *)v11 = 0;
          *(_OWORD *)(v11 + 8) = 0;
          ++a2[1];
          sub_35A790((char **)v11);
          v30 = 0;
        }
        v12 = v38;
        v5 += v8 >> 10;
        if ( v38 )
        {
          if ( (_QWORD)v39 )
          {
            v31 = v5;
            v13 = 0;
            v14 = 0;
            v32 = v2;
            v15 = v39;
            v33 = a2;
            do
            {
              v17 = &v12[v13];
              v18 = v12[v13 + 97];
              if ( v18 == 2 )
              {
                v19 = *((char **)v17 + 3);
                if ( v19 )
                {
                  if ( *((_QWORD *)v17 + 4) )
                  {
                    v34 = v14;
                    v20 = 0;
                    v21 = 0;
                    v22 = *((_QWORD *)v17 + 4);
                    do
                    {
                      v23 = *(void **)&v19[v21];
                      if ( v23 )
                      {
                        *(_QWORD *)&v19[v21 + 8] = 0;
                        qfree(v23);
                        v19 = *((char **)v17 + 3);
                      }
                      ++v20;
                      v21 += 56;
                    }
                    while ( v22 != v20 );
                    v14 = v34;
                  }
                  *((_QWORD *)v17 + 4) = 0;
                  qfree(v19);
                }
              }
              else if ( v18 == 1 )
              {
                v24 = *((void **)v17 + 8);
                if ( v24 )
                {
                  *((_QWORD *)v17 + 9) = 0;
                  qfree(v24);
                }
                v25 = *((void **)v17 + 3);
                if ( v25 )
                {
                  *((_QWORD *)v17 + 4) = 0;
                  qfree(v25);
                }
              }
              v16 = *(void **)v17;
              v17[97] = 0;
              if ( v16 )
              {
                *((_QWORD *)v17 + 1) = 0;
                qfree(v16);
              }
              ++v14;
              v12 = v38;
              v13 += 104;
            }
            while ( v15 != v14 );
            v5 = v31;
            v2 = v32;
            a2 = v33;
          }
          *(_QWORD *)&v39 = 0;
          qfree(v12);
        }
      }
      if ( ptr )
      {
        *(_QWORD *)&v37 = 0;
        qfree(ptr);
      }
      v5 = sub_7BEBF0(v28, *v2, v5, 84);
    }
    while ( v5 != -1 );
  }
  return v30;
}
