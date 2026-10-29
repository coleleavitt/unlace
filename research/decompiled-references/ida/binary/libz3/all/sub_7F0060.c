__int64 __fastcall sub_7F0060(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 *v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // esi
  unsigned int v9; // edx
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 *i; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  _QWORD *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 *v20; // rbx
  __int64 v21; // rax
  __int64 *v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  _QWORD *v28; // rsi
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // r14
  __m128i *v33; // rax
  __m128i *v34; // r13
  __m128i *v35; // rdx
  __int64 v36; // rax
  __m128i *v37; // rdi
  unsigned int v38; // r8d
  const __m128i *v39; // r12
  const __m128i *v40; // rcx
  __int64 v41; // r15
  __m128i *v42; // r14
  __int64 v43; // rax
  __m128i *v44; // rdx
  __m128i *v45; // rax

  v1 = 0x7FFFFFFF8LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 2312);
  if ( v4 )
    v1 = 8LL * (unsigned int)(*(_DWORD *)(v4 - 4) - 1);
  v5 = *(__int64 **)(v3 + 2320);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + v1) + 16LL);
  v7 = *(unsigned int *)(v3 + 2328);
  v8 = *(_DWORD *)(v6 + 12);
  v9 = v7 - 1;
  v7 *= 16;
  v10 = (__int64 *)((char *)v5 + v7);
  v11 = 16LL * (v8 & v9);
  v12 = &v5[(unsigned __int64)v11 / 8];
  if ( v11 != v7 )
  {
    for ( i = &v5[(unsigned __int64)v11 / 8]; v10 != i; i += 2 )
    {
      v14 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v14 + 12) == v8 && v6 == v14 )
        {
LABEL_39:
          v28 = i + 2;
          if ( v10 == i + 2 )
            v28 = *(_QWORD **)(v3 + 2320);
          v29 = *(_DWORD *)(v3 + 2332) - 1;
          if ( *v28 )
          {
            *i = 1;
            v30 = *(_DWORD *)(v3 + 2336);
            *(_DWORD *)(v3 + 2332) = v29;
            v31 = v30 + 1;
            if ( v29 < 0x40 )
              v29 = 64;
            *(_DWORD *)(v3 + 2336) = v31;
            if ( v29 < v31 )
            {
              if ( !(unsigned __int8)sub_186AF10(v12) )
              {
                v32 = *(unsigned int *)(v3 + 2328);
                v33 = (__m128i *)sub_186B270(16 * v32);
                v34 = v33;
                v35 = &v33[v32];
                if ( (_DWORD)v32 )
                {
                  do
                  {
                    v33->m128i_i64[0] = 0;
                    ++v33;
                    v33[-1].m128i_i32[2] = 0;
                  }
                  while ( v33 != v35 );
                }
                v36 = *(unsigned int *)(v3 + 2328);
                v37 = *(__m128i **)(v3 + 2320);
                v38 = v36 - 1;
                v36 *= 16;
                v39 = v37;
                v40 = (__m128i *)((char *)v37 + v36);
                v41 = v36;
                v42 = (__m128i *)((char *)v34 + v36);
                if ( v37 != (__m128i *)&v37->m128i_i8[v36] )
                {
                  do
                  {
                    if ( v39->m128i_i64[0] > 1uLL )
                    {
                      v43 = 16LL * (*(_DWORD *)(v39->m128i_i64[0] + 12) & v38);
                      v44 = &v34[(unsigned __int64)v43 / 0x10];
                      if ( v41 == v43 )
                      {
LABEL_63:
                        if ( v34 == v44 )
                        {
LABEL_68:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v45 = v34;
                        while ( v45->m128i_i64[0] )
                        {
                          if ( v44 == ++v45 )
                            goto LABEL_68;
                        }
                      }
                      else
                      {
                        v45 = &v34[(unsigned __int64)v43 / 0x10];
                        while ( v45->m128i_i64[0] )
                        {
                          if ( v42 == ++v45 )
                            goto LABEL_63;
                        }
                      }
                      *v45 = _mm_loadu_si128(v39);
                    }
                    ++v39;
                  }
                  while ( v40 != v39 );
                  v37 = *(__m128i **)(v3 + 2320);
                }
                if ( v37 )
                  sub_186B220(v37);
                *(_QWORD *)(v3 + 2320) = v34;
                *(_DWORD *)(v3 + 2336) = 0;
              }
              v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 2312LL);
            }
          }
          else
          {
            *i = 0;
            *(_DWORD *)(v3 + 2332) = v29;
          }
          goto LABEL_10;
        }
      }
      else if ( !v14 )
      {
        goto LABEL_10;
      }
    }
  }
  if ( v5 != v12 )
  {
    for ( i = *(__int64 **)(v3 + 2320); v12 != i; i += 2 )
    {
      v27 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v27 + 12) == v8 && v6 == v27 )
          goto LABEL_39;
      }
      else if ( !v27 )
      {
        break;
      }
    }
  }
LABEL_10:
  result = 0x7FFFFFFF8LL;
  if ( v4 )
    result = 8LL * (unsigned int)(*(_DWORD *)(v4 - 4) - 1);
  v16 = *(_QWORD **)(v4 + result);
  if ( v16 )
  {
    v17 = v16[2];
    if ( v17 && (v18 = v16[3], v19 = *(_DWORD *)(v17 + 8) == 1, --*(_DWORD *)(v17 + 8), v19) )
    {
      sub_15D7BC0(v18, v17);
      v20 = (__int64 *)v16[1];
      if ( v20 )
        goto LABEL_16;
    }
    else
    {
      v20 = (__int64 *)v16[1];
      if ( v20 )
      {
LABEL_16:
        v21 = *((unsigned int *)v20 - 1);
        if ( (_DWORD)v21 )
        {
          v22 = &v20[5 * v21];
          do
          {
            v25 = v20[2];
            if ( v25 )
            {
              v26 = v20[3];
              v19 = (*(_DWORD *)(v25 + 8))-- == 1;
              if ( v19 )
                sub_15D7BC0(v26, v25);
            }
            v23 = *v20;
            if ( *v20 )
            {
              v24 = v20[1];
              v19 = (*(_DWORD *)(v23 + 8))-- == 1;
              if ( v19 )
                sub_15D7BC0(v24, v23);
            }
            v20 += 5;
          }
          while ( v20 != v22 );
          v20 = (__int64 *)v16[1];
        }
        sub_186B220(v20 - 1);
      }
    }
    sub_186B220(v16);
    result = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(result + 2312);
  }
  --*(_DWORD *)(v4 - 4);
  return result;
}

