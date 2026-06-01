char *__fastcall sub_529F40(_QWORD *a1)
{
  __m128i **v2; // r12
  void **v3; // rax
  void *v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r13
  int v9; // eax
  __m128i *v10; // rdx
  __m128i *v11; // r15
  __m128i *v12; // rax
  __m128i *v13; // r8
  __m128i si128; // xmm0
  __m128i *v15; // rcx
  __int64 v16; // rcx
  __m128i *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // eax
  unsigned __int64 *v21; // rbx
  void *v22; // rdi
  __m128i *v24; // rcx
  __m128i *v25; // rax
  __int64 v26; // rax
  __m128i *v27; // rdx
  __m128i *v28; // rsi
  __m128i *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __m128i v32; // xmm0
  bool v33; // cf
  __int64 v34; // rax
  __m128i *v35; // rdx
  __m128i *v36; // rsi
  __m128i *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __m128i v40; // xmm0
  __m128i *v41; // [rsp+0h] [rbp-F8h]
  __int64 v42; // [rsp+0h] [rbp-F8h]
  __m128i *v43; // [rsp+0h] [rbp-F8h]
  __int64 v44; // [rsp+0h] [rbp-F8h]
  int v45[4]; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v46; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v47; // [rsp+30h] [rbp-C8h] BYREF
  int v48[2]; // [rsp+40h] [rbp-B8h] BYREF
  void *v49; // [rsp+48h] [rbp-B0h]
  _BYTE v50[48]; // [rsp+50h] [rbp-A8h] BYREF
  char v51; // [rsp+80h] [rbp-78h] BYREF
  void *ptr; // [rsp+98h] [rbp-60h] BYREF
  int v53[4]; // [rsp+A0h] [rbp-58h]
  int v54[2]; // [rsp+B0h] [rbp-48h]
  void *v55; // [rsp+B8h] [rbp-40h]

  v55 = (void *)__readfsqword(0x28u);
  v2 = (__m128i **)v50;
  v3 = (void **)v50;
  v4 = (void *)a1[22];
  v5 = a1[1];
  v49 = v4;
  *(_QWORD *)v48 = v5;
  do
  {
    *v3 = nullptr;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != &ptr );
  ptr = nullptr;
  *(_QWORD *)v54 = 0;
  *(_OWORD *)v53 = 0;
  if ( v4 )
  {
    v6 = 0;
    v7 = *(int *)(v5 + 16);
    if ( (_DWORD)v7 == -1 )
      goto LABEL_21;
    while ( 1 )
    {
      v8 = *(_QWORD *)(switch_dbctx(v7) + 1784);
      v9 = *(_DWORD *)(v8 + 64);
      if ( !v9 )
        break;
      while ( 1 )
      {
        v10 = v2[1];
        if ( v9 != 3 )
        {
LABEL_7:
          v11 = *(__m128i **)(v8 + 24);
          if ( v11 != v10 )
          {
            *(_QWORD *)v45 = 0;
            *(_QWORD *)&v45[2] = -1;
            if ( v11 >= v10 )
            {
              v12 = *v2;
              v13 = v2[2];
              if ( v45 < (int *)*v2 || v45 >= v12[(_QWORD)v13].m128i_i32 )
              {
                if ( v13 >= v11 )
                  goto LABEL_11;
                v41 = v2[2];
                v26 = qvector_reserve(v2, 0, v11, 16);
                v27 = v2[1];
                v28 = v2[2];
                v29 = *v2;
                v2[2] = v41;
                v30 = (__int64)&v27[-1].m128i_i64[1] + 7;
                if ( v30 >= 0 )
                {
                  v31 = v26;
                  do
                  {
                    v32 = _mm_loadu_si128(v29);
                    v31 += 16;
                    ++v29;
                    *(__m128i *)(v31 - 16) = v32;
                    v33 = v30-- == 0;
                  }
                  while ( !v33 );
                  v29 = *v2;
                }
                v42 = v26;
                qfree(v29);
                v12 = (__m128i *)v42;
                v10 = v2[1];
                *v2 = (__m128i *)v42;
                v2[2] = v28;
                if ( v10 < v11 )
                {
LABEL_11:
                  si128 = _mm_load_si128((const __m128i *)v45);
                  while ( 1 )
                  {
                    v15 = v10;
                    v10 = (__m128i *)((char *)v10 + 1);
                    v12[(_QWORD)v15] = si128;
                    if ( v11 == v10 )
                      break;
                    v12 = *v2;
                  }
                }
LABEL_14:
                v2[1] = v11;
              }
              else
              {
                if ( v13 < v11 )
                {
                  v43 = v2[2];
                  v34 = qvector_reserve(v2, 0, v11, 16);
                  v35 = v2[1];
                  v36 = v2[2];
                  v37 = *v2;
                  v2[2] = v43;
                  v38 = (__int64)&v35[-1].m128i_i64[1] + 7;
                  if ( v38 >= 0 )
                  {
                    v39 = v34;
                    do
                    {
                      v40 = _mm_loadu_si128(v37);
                      v39 += 16;
                      ++v37;
                      *(__m128i *)(v39 - 16) = v40;
                      v33 = v38-- == 0;
                    }
                    while ( !v33 );
                    v37 = *v2;
                  }
                  v44 = v34;
                  qfree(v37);
                  v12 = (__m128i *)v44;
                  v10 = v2[1];
                  *v2 = (__m128i *)v44;
                  v2[2] = v36;
                  if ( v10 >= v11 )
                    goto LABEL_14;
                }
                while ( 1 )
                {
                  v24 = v10;
                  v10 = (__m128i *)((char *)v10 + 1);
                  v25 = &v12[(_QWORD)v24];
                  v25->m128i_i64[0] = 0;
                  v25->m128i_i64[1] = -1;
                  if ( v11 == v10 )
                    break;
                  v12 = *v2;
                }
                v2[1] = v11;
              }
LABEL_17:
              v16 = 0;
              v17 = nullptr;
              do
              {
                v18 = (__int64)v17;
                v17 = (__m128i *)((char *)v17 + 1);
                v19 = v16 + *(_QWORD *)(v8 + 16);
                v16 += 72;
                (*v2)[v18].m128i_i64[0] = v19;
              }
              while ( v17 != v11 );
              goto LABEL_19;
            }
            v2[1] = v11;
          }
          if ( !v11 )
            goto LABEL_19;
          goto LABEL_17;
        }
LABEL_23:
        if ( v10 )
          v2[1] = nullptr;
LABEL_19:
        ++v6;
        v2 += 3;
        if ( v6 >= a1[22] )
          goto LABEL_25;
        v7 = *(int *)(a1[1] + 4 * v6 + 16);
        if ( (_DWORD)v7 != -1 )
          break;
LABEL_21:
        v8 = 0;
        v9 = 1;
      }
    }
    v20 = sub_524CE0((__int64 *)v8);
    *(_DWORD *)(v8 + 64) = v20;
    v10 = v2[1];
    if ( v20 != 3 )
      goto LABEL_7;
    goto LABEL_23;
  }
LABEL_25:
  v47 = 0u;
  v46 = 0;
  if ( sub_51FCD0 )
  {
    v46.m128i_i64[0] = (__int64)sub_51FCD0;
    v47 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2DD08), (__m128i)(unsigned __int64)sub_51F4E0);
  }
  sub_527D40(v48, &v46, 1);
  if ( v47.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v47.m128i_i64[0])(&v46, &v46, 3);
  sub_523F00(v48, a1 + 19, 1);
  if ( ptr )
  {
    *(_QWORD *)v53 = 0;
    qfree(ptr);
  }
  v21 = (unsigned __int64 *)&v51;
  do
  {
    v22 = (void *)*v21;
    if ( *v21 )
    {
      v21[1] = 0;
      qfree(v22);
    }
    v21 -= 3;
  }
  while ( v21 != &v47.m128i_u64[1] );
  return (char *)v55 - __readfsqword(0x28u);
}
