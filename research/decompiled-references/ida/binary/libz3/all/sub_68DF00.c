void __fastcall sub_68DF00(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rcx
  __int64 v4; // r13
  __int64 *v5; // r14
  __int64 v7; // r12
  int v8; // r8d
  __int32 v9; // ecx
  const __m128i *v10; // rbp
  unsigned int v11; // r9d
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rdx
  const __m128i *v15; // rdi
  __m128i *v16; // rax
  __m128i *v17; // rsi
  int v18; // edx
  __int64 *v19; // rax
  __int32 v20; // eax
  const __m128i *v21; // rax
  int v22; // r11d
  const __m128i *v23; // rdx
  const __m128i *v24; // r8
  __m128i *v25; // r10
  __int64 v26; // rdx
  __m128i *v27; // rsi
  __m128i *v28; // rdx
  __m128i v29; // xmm0
  size_t v30; // [rsp+0h] [rbp-68h]
  __int32 v31; // [rsp+0h] [rbp-68h]
  unsigned int v32; // [rsp+8h] [rbp-60h]
  __int32 v33; // [rsp+18h] [rbp-50h]
  int v34; // [rsp+18h] [rbp-50h]

  v2 = *(__int64 **)(a1 + 4840);
  v3 = &v2[2 * *(unsigned int *)(a1 + 4848)];
  if ( v2 != v3 )
  {
    while ( (unsigned __int64)*v2 <= 1 )
    {
      v2 += 2;
      if ( v3 == v2 )
        return;
    }
    if ( v3 != v2 )
    {
      v4 = *v2;
      v5 = v3;
      while ( 1 )
      {
        v7 = *(unsigned int *)(a2 + 8);
        v8 = *(_DWORD *)(a2 + 16);
        v9 = *((_DWORD *)v2 + 2);
        if ( 3 * (int)v7 < (unsigned int)(4 * (v8 + *(_DWORD *)(a2 + 12))) )
        {
          v33 = *((_DWORD *)v2 + 2);
          v30 = 24LL * (unsigned int)(2 * v7);
          v21 = (const __m128i *)sub_186B270(v30);
          v22 = 2 * v7;
          v12 = v30;
          v9 = v33;
          v10 = v21;
          if ( 2 * (_DWORD)v7 )
          {
            v23 = &v21[3 * (v7 & 0x7FFFFFFF)];
            do
            {
              v21->m128i_i64[0] = 0;
              v21 += 3;
              v21[-2].m128i_i64[1] = 0;
            }
            while ( v23 != v21 );
          }
          v24 = *(const __m128i **)a2;
          v11 = v22 - 1;
          v25 = (__m128i *)(*(_QWORD *)a2 + 24LL * *(unsigned int *)(a2 + 8));
          v13 = (__int64)&v10->m128i_i64[v30 / 8];
          if ( *(__m128i **)a2 != v25 )
          {
            do
            {
              while ( v24->m128i_i32[1] != 2 )
              {
                v24 = (const __m128i *)((char *)v24 + 24);
                if ( v25 == v24 )
                  goto LABEL_47;
              }
              v26 = 24LL * (v24->m128i_i32[0] & v11);
              v27 = (__m128i *)((char *)v10 + v26);
              if ( v30 == v26 )
              {
LABEL_52:
                if ( v10 == v27 )
                {
LABEL_59:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v28 = (__m128i *)v10;
                while ( v28->m128i_i32[1] )
                {
                  v28 = (__m128i *)((char *)v28 + 24);
                  if ( v27 == v28 )
                    goto LABEL_59;
                }
              }
              else
              {
                v28 = (__m128i *)((char *)v10 + v26);
                while ( v28->m128i_i32[1] )
                {
                  v28 = (__m128i *)((char *)v28 + 24);
                  if ( (__m128i *)v13 == v28 )
                    goto LABEL_52;
                }
              }
              v29 = _mm_loadu_si128(v24);
              v24 = (const __m128i *)((char *)v24 + 24);
              *v28 = v29;
              v28[1].m128i_i64[0] = v24[-1].m128i_i64[1];
            }
            while ( v25 != v24 );
LABEL_47:
            v25 = *(__m128i **)a2;
            v12 = v30;
          }
          if ( v25 )
          {
            v34 = v22;
            v32 = v22 - 1;
            v31 = v9;
            sub_186B220(v25);
            v22 = v34;
            v11 = v32;
            v9 = v31;
          }
          *(_QWORD *)a2 = v10;
          v8 = 0;
          *(_DWORD *)(a2 + 8) = v22;
          *(_DWORD *)(a2 + 16) = 0;
        }
        else
        {
          v10 = *(const __m128i **)a2;
          v11 = v7 - 1;
          v12 = 24 * v7;
          v13 = *(_QWORD *)a2 + 24 * v7;
        }
        v14 = v9 & v11;
        v15 = (const __m128i *)((char *)v10 + 24 * v14);
        if ( 24 * v14 != v12 )
        {
          v16 = (__m128i *)((char *)v10 + 24 * v14);
          v17 = nullptr;
          while ( 1 )
          {
            v18 = v16->m128i_i32[1];
            if ( v18 == 2 )
            {
              if ( v9 == v16->m128i_i32[0] && v9 == v16->m128i_i32[2] )
              {
                v16->m128i_i32[2] = v9;
                v16[1].m128i_i64[0] = v4;
                v16->m128i_i32[1] = 2;
                goto LABEL_18;
              }
            }
            else
            {
              if ( !v18 )
              {
                if ( v17 )
                  goto LABEL_33;
                v17 = v16;
                goto LABEL_34;
              }
              v17 = v16;
            }
            v16 = (__m128i *)((char *)v16 + 24);
            if ( v16 == (__m128i *)v13 )
              goto LABEL_27;
          }
        }
        v17 = nullptr;
        while ( 1 )
        {
LABEL_27:
          if ( v15 == v10 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v20 = v10->m128i_i32[1];
          if ( v20 != 2 )
            break;
          if ( v9 == v10->m128i_i32[0] && v9 == v10->m128i_i32[2] )
          {
            v10->m128i_i32[2] = v9;
            v10[1].m128i_i64[0] = v4;
            v10->m128i_i32[1] = 2;
            goto LABEL_18;
          }
LABEL_26:
          v10 = (const __m128i *)((char *)v10 + 24);
        }
        if ( v20 )
          break;
        if ( v17 )
LABEL_33:
          *(_DWORD *)(a2 + 16) = v8 - 1;
        else
          v17 = (__m128i *)v10;
LABEL_34:
        v17->m128i_i32[2] = v9;
        v17[1].m128i_i64[0] = v4;
        v17->m128i_i32[1] = 2;
        v17->m128i_i32[0] = v9;
        ++*(_DWORD *)(a2 + 12);
LABEL_18:
        v19 = v2 + 2;
        if ( v5 != v2 + 2 )
        {
          while ( 1 )
          {
            v4 = *v19;
            v2 = v19;
            if ( (unsigned __int64)*v19 > 1 )
              break;
            v19 += 2;
            if ( v5 == v19 )
              return;
          }
          if ( v5 != v19 )
            continue;
        }
        return;
      }
      v17 = (__m128i *)v10;
      goto LABEL_26;
    }
  }
}

