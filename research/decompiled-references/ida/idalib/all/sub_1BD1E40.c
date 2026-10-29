void __fastcall sub_1BD1E40(
        unsigned __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbp
  __int64 v9; // r13
  unsigned __int64 *v10; // rbx
  __m128i v11; // xmm1
  unsigned __int64 *v12; // r14
  __int64 v13; // r15
  unsigned __int64 *v14; // rbp
  __int64 v15; // r12
  unsigned __int64 *v16; // rbx
  unsigned __int64 *v17; // r12
  int v18; // r9d
  unsigned __int64 v19; // rax
  __m128i v20; // xmm3
  __int64 v21; // r12
  unsigned __int64 *v22; // rbp
  __int64 v23; // r15
  unsigned __int64 *v24; // r14
  __int64 v25; // rbp
  unsigned __int64 *v26; // [rsp+0h] [rbp-98h]
  char *v27; // [rsp+8h] [rbp-90h]
  __int64 v28; // [rsp+18h] [rbp-80h]
  __int64 v29; // [rsp+18h] [rbp-80h]
  __int64 v30; // [rsp+20h] [rbp-78h]
  __int64 v31; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  __m128i v35; // [rsp+40h] [rbp-58h] BYREF
  __m128i v36; // [rsp+50h] [rbp-48h]

  v26 = a1;
  v27 = a2;
  if ( a5 )
  {
    v8 = a4;
    if ( a4 )
    {
      v9 = a5;
      if ( a5 + a4 == 2 )
      {
        v17 = a1;
        v10 = (unsigned __int64 *)a2;
LABEL_16:
        if ( sub_1BCD630(&a7, *v10, *v17) )
        {
          v19 = *v17;
          *v17 = *v10;
          *v10 = v19;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v9 >= v8 )
          {
            v12 = v26;
            v20 = _mm_loadu_si128((const __m128i *)&a8);
            v35 = _mm_loadu_si128((const __m128i *)&a7);
            v36 = v20;
            v31 = v9 / 2;
            v33 = v9 / 2;
            v10 = (unsigned __int64 *)&v27[v33 * 8];
            v21 = (v27 - (char *)v26) >> 3;
            if ( v27 - (char *)v26 > 0 )
            {
              v29 = v8;
              v22 = v26;
              while ( 1 )
              {
                v23 = v21 >> 1;
                v24 = &v22[v21 >> 1];
                if ( sub_1BCD630(&v35, *v10, *v24) )
                {
                  if ( !v23 )
                  {
LABEL_25:
                    v12 = v22;
                    v25 = v29;
                    v28 = v12 - v26;
                    v8 = v25 - v28;
                    goto LABEL_26;
                  }
                }
                else
                {
                  v22 = v24 + 1;
                  v23 = v21 - v23 - 1;
                  if ( v23 <= 0 )
                    goto LABEL_25;
                }
                v21 = v23;
              }
            }
            LODWORD(v28) = 0;
LABEL_26:
            v9 -= v9 / 2;
            v17 = &v12[v33];
          }
          else
          {
            v10 = (unsigned __int64 *)v27;
            v11 = _mm_loadu_si128((const __m128i *)&a8);
            v35 = _mm_loadu_si128((const __m128i *)&a7);
            v32 = v8 / 2;
            v28 = v8 / 2;
            v12 = &v26[v8 / 2];
            v36 = v11;
            if ( a3 - (__int64)v27 > 0 )
            {
              v30 = v8;
              v13 = (a3 - (__int64)v27) >> 3;
              v14 = (unsigned __int64 *)v27;
              while ( 1 )
              {
                v15 = v13 >> 1;
                v16 = &v14[v13 >> 1];
                if ( sub_1BCD630(&v35, *v16, *v12) )
                {
                  v14 = v16 + 1;
                  v15 = v13 - v15 - 1;
                  if ( v15 <= 0 )
                    goto LABEL_11;
                }
                else if ( !v15 )
                {
LABEL_11:
                  v10 = v14;
                  v8 = v30;
                  v17 = (unsigned __int64 *)((char *)v12 + (char *)v10 - v27);
                  v31 = ((char *)v10 - v27) >> 3;
                  v9 -= v31;
                  goto LABEL_12;
                }
                v13 = v15;
              }
            }
            LODWORD(v31) = 0;
            v17 = &v26[v8 / 2];
LABEL_12:
            v8 -= v32;
          }
          sub_1BC7E50((char *)v12, v27, (char *)v10);
          sub_1BD1E40((_DWORD)v26, (_DWORD)v12, (_DWORD)v17, v28, v31, v18, a7, a8);
          if ( !v8 || !v9 )
            break;
          v27 = (char *)v10;
          v26 = v17;
          if ( v9 + v8 == 2 )
            goto LABEL_16;
        }
      }
    }
  }
}
