unsigned __int64 __fastcall sub_511CC0(_QWORD *a1)
{
  __m128i **v2; // r12
  void **v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r13
  int v9; // eax
  __m128i *v10; // rdx
  __m128i *v11; // r15
  __m128i *v12; // rax
  __m128i *v13; // r8
  __m128i v14; // xmm0
  __m128i *v15; // rcx
  __m128i *v16; // rax
  __m128i *v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 *v20; // rbx
  void *v21; // rdi
  __m128i *v23; // rcx
  __m128i *v24; // rax
  __int64 v25; // rax
  __m128i *v26; // rdx
  __m128i *v27; // rsi
  __m128i *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __m128i v31; // xmm0
  bool v32; // cf
  __int64 v33; // rax
  __m128i *v34; // rdx
  __m128i *v35; // rsi
  __m128i *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __m128i v39; // xmm0
  __m128i *v40; // [rsp+0h] [rbp-F8h]
  __int64 v41; // [rsp+0h] [rbp-F8h]
  __m128i *v42; // [rsp+0h] [rbp-F8h]
  __int64 v43; // [rsp+0h] [rbp-F8h]
  __m128i v44; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v45; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v46; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v47[2]; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v48[48]; // [rsp+50h] [rbp-A8h] BYREF
  char v49; // [rsp+80h] [rbp-78h] BYREF
  void *ptr; // [rsp+98h] [rbp-60h] BYREF
  __int128 v51; // [rsp+A0h] [rbp-58h]
  __int64 v52; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v53; // [rsp+B8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v2 = (__m128i **)v48;
  v3 = (void **)v48;
  v4 = a1[22];
  v5 = a1[1];
  v47[1] = v4;
  v47[0] = v5;
  do
  {
    *v3 = nullptr;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != &ptr );
  ptr = nullptr;
  v52 = 0;
  v51 = 0;
  if ( v4 )
  {
    v6 = 0;
    v7 = *(int *)(v5 + 16);
    if ( (_DWORD)v7 == -1 )
      goto LABEL_19;
    while ( 1 )
    {
      v8 = *(_QWORD *)(switch_dbctx(v7) + 1592);
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
            v44.m128i_i64[0] = 0;
            v44.m128i_i64[1] = -1;
            if ( v11 >= v10 )
            {
              v12 = *v2;
              v13 = v2[2];
              if ( &v44 < *v2 || &v44 >= &v12[(_QWORD)v13] )
              {
                if ( v13 >= v11 )
                  goto LABEL_11;
                v40 = v2[2];
                v25 = qvector_reserve(v2, 0, v11, 16);
                v26 = v2[1];
                v27 = v2[2];
                v28 = *v2;
                v2[2] = v40;
                v29 = (__int64)&v26[-1].m128i_i64[1] + 7;
                if ( v29 >= 0 )
                {
                  v30 = v25;
                  do
                  {
                    v31 = _mm_loadu_si128(v28);
                    v30 += 16;
                    ++v28;
                    *(__m128i *)(v30 - 16) = v31;
                    v32 = v29-- == 0;
                  }
                  while ( !v32 );
                  v28 = *v2;
                }
                v41 = v25;
                qfree(v28);
                v12 = (__m128i *)v41;
                v10 = v2[1];
                *v2 = (__m128i *)v41;
                v2[2] = v27;
                if ( v10 < v11 )
                {
LABEL_11:
                  v14 = _mm_load_si128(&v44);
                  while ( 1 )
                  {
                    v15 = v10;
                    v10 = (__m128i *)((char *)v10 + 1);
                    v12[(_QWORD)v15] = v14;
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
                  v42 = v2[2];
                  v33 = qvector_reserve(v2, 0, v11, 16);
                  v34 = v2[1];
                  v35 = v2[2];
                  v36 = *v2;
                  v2[2] = v42;
                  v37 = (__int64)&v34[-1].m128i_i64[1] + 7;
                  if ( v37 >= 0 )
                  {
                    v38 = v33;
                    do
                    {
                      v39 = _mm_loadu_si128(v36);
                      v38 += 16;
                      ++v36;
                      *(__m128i *)(v38 - 16) = v39;
                      v32 = v37-- == 0;
                    }
                    while ( !v32 );
                    v36 = *v2;
                  }
                  v43 = v33;
                  qfree(v36);
                  v12 = (__m128i *)v43;
                  v10 = v2[1];
                  *v2 = (__m128i *)v43;
                  v2[2] = v35;
                  if ( v10 >= v11 )
                    goto LABEL_14;
                }
                while ( 1 )
                {
                  v23 = v10;
                  v10 = (__m128i *)((char *)v10 + 1);
                  v24 = &v12[(_QWORD)v23];
                  v24->m128i_i64[0] = 0;
                  v24->m128i_i64[1] = -1;
                  if ( v11 == v10 )
                    break;
                  v12 = *v2;
                }
                v2[1] = v11;
              }
LABEL_15:
              v16 = nullptr;
              do
              {
                v17 = v16;
                v18 = (__int64)v16;
                v16 = (__m128i *)((char *)v16 + 1);
                (*v2)[(_QWORD)v17].m128i_i64[0] = *(_QWORD *)(v8 + 16) + (v18 << 6);
              }
              while ( v16 != v11 );
              goto LABEL_17;
            }
            v2[1] = v11;
          }
          if ( !v11 )
            goto LABEL_17;
          goto LABEL_15;
        }
LABEL_21:
        if ( v10 )
          v2[1] = nullptr;
LABEL_17:
        ++v6;
        v2 += 3;
        if ( v6 >= a1[22] )
          goto LABEL_26;
        v7 = *(int *)(a1[1] + 4 * v6 + 16);
        if ( (_DWORD)v7 != -1 )
          break;
LABEL_19:
        v8 = 0;
        v9 = 1;
      }
    }
    v19 = sub_50CCA0((__int64 *)v8);
    *(_DWORD *)(v8 + 64) = v19;
    v10 = v2[1];
    if ( v19 != 3 )
      goto LABEL_7;
    goto LABEL_21;
  }
LABEL_26:
  v46 = 0u;
  v45 = 0;
  if ( sub_507D10 )
  {
    v45.m128i_i64[0] = (__int64)sub_507D10;
    v46 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B03D48), (__m128i)(unsigned __int64)sub_507500);
  }
  sub_50FAC0(v47, &v45, 1);
  if ( v46.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v45, &v45, 3);
  sub_50BEC0(v47, a1 + 19, 1);
  if ( ptr )
  {
    *(_QWORD *)&v51 = 0;
    qfree(ptr);
  }
  v20 = (unsigned __int64 *)&v49;
  do
  {
    v21 = (void *)*v20;
    if ( *v20 )
    {
      v20[1] = 0;
      qfree(v21);
    }
    v20 -= 3;
  }
  while ( v20 != &v46.m128i_u64[1] );
  return v53 - __readfsqword(0x28u);
}

