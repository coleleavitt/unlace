__int64 __fastcall sub_B0B20(__m128i *a1, __int64 a2, signed int a3, unsigned __int64 a4, int a5)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __m128i *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r14
  unsigned __int64 v14; // rbp
  __int64 v15; // r13
  size_t v16; // r15
  __int64 v17; // r8
  __m128i v18; // xmm0
  int v19; // eax
  void (__fastcall *v20)(__m128i *, int *); // rax
  size_t v22; // r15
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax
  _QWORD *v26; // rsi
  int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  _QWORD *v34; // rax
  _QWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r11
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r11
  size_t v40; // r14
  const void *v41; // r13
  __int64 v42; // rdi
  __int64 v43; // rbp
  __int64 i; // r14
  __int64 v45; // rax
  void *v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rsi
  __m128i *v49; // rax
  __int64 v50; // rax
  __m128i v52; // [rsp+10h] [rbp-88h] BYREF
  __m128i v53; // [rsp+20h] [rbp-78h] BYREF
  int *v54; // [rsp+30h] [rbp-68h]
  __int64 v55; // [rsp+38h] [rbp-60h]
  __int64 v56; // [rsp+40h] [rbp-58h] BYREF
  __int128 v57; // [rsp+48h] [rbp-50h]
  unsigned __int64 v58; // [rsp+58h] [rbp-40h]

  v6 = a2;
  v58 = __readfsqword(0x28u);
  v54 = sub_AF5F0(a1, 1u, a3, a4);
  if ( !v54 )
    return 0;
  if ( !a2 )
    goto LABEL_31;
  v8 = a1[12].m128i_i64[0];
  if ( !v8 )
    return 0;
  v9 = (__m128i *)((char *)a1 + 184);
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v8 + 16);
      v11 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v8 + 32) >= a3 )
        break;
      v8 = *(_QWORD *)(v8 + 24);
      if ( !v11 )
        goto LABEL_8;
    }
    v9 = (__m128i *)v8;
    v8 = *(_QWORD *)(v8 + 16);
  }
  while ( v10 );
LABEL_8:
  if ( &a1[11].m128i_u64[1] == (unsigned __int64 *)v9 || v9[2].m128i_i32[0] > a3 )
    return 0;
  if ( a5 == 2 )
  {
    v42 = v9[2].m128i_i64[1];
    if ( v42 )
    {
      v43 = v9[3].m128i_i64[0];
      if ( v43 )
      {
        for ( i = 0; i != v43; ++i )
        {
          v45 = v42 + 32 * i;
          if ( *(int *)v45 >= -1 && *(_QWORD *)(v45 + 8) )
          {
            *(_QWORD *)(v45 + 16) = 0;
            qfree();
            v42 = v9[2].m128i_i64[1];
          }
        }
      }
      v9[3].m128i_i64[0] = 0;
      qfree();
      v9[2].m128i_i64[1] = 0;
      v9[3].m128i_i64[1] = 0;
    }
  }
  if ( v9[3].m128i_i64[0] )
  {
    v12 = operator new(0x60u);
    sub_A6D90(v12, v9[2].m128i_i64[1], a2, a5 == 0);
  }
  else
  {
    v12 = operator new(0x60u);
    sub_A88C0(v12, a2);
  }
  *((_QWORD *)v54 + 3) = v12;
  if ( !v12 )
    return 0;
  v13 = 0;
  v14 = *(int *)(dbg + 64LL);
  sub_A8480(&v9[2].m128i_i64[1], v14);
  v15 = v9[2].m128i_i64[1];
  if ( v14 )
  {
    do
    {
      if ( v6 != v15 )
      {
        v19 = *(_DWORD *)v15;
        if ( *(int *)v6 >= -1 )
        {
          if ( v19 < -1 )
          {
            *(_QWORD *)(v15 + 8) = 0;
            *(_OWORD *)(v15 + 16) = 0;
            v22 = *(_QWORD *)(v6 + 16);
            if ( v22 )
            {
              v23 = (void *)qalloc_or_throw();
              *(_QWORD *)(v15 + 24) = v22;
              *(_QWORD *)(v15 + 8) = v23;
              memcpy(v23, *(const void **)(v6 + 8), v22);
              *(_QWORD *)(v15 + 16) = v22;
            }
          }
          else
          {
            v16 = *(_QWORD *)(v6 + 16);
            v17 = 0;
            v18 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
            if ( v16 )
            {
              v52 = v18;
              v24 = (void *)qalloc_or_throw();
              v25 = memcpy(v24, *(const void **)(v6 + 8), v16);
              v18 = _mm_load_si128(&v52);
              v17 = (__int64)v25;
            }
            if ( *(_QWORD *)(v15 + 8) )
            {
              *(_QWORD *)(v15 + 16) = 0;
              v52.m128i_i64[0] = v17;
              v53 = v18;
              qfree();
              v18 = _mm_load_si128(&v53);
              v17 = v52.m128i_i64[0];
            }
            *(_QWORD *)(v15 + 8) = v17;
            *(__m128i *)(v15 + 16) = v18;
          }
        }
        else
        {
          if ( v19 >= -1 && *(_QWORD *)(v15 + 8) )
          {
            *(_QWORD *)(v15 + 16) = 0;
            qfree();
          }
          *(_QWORD *)(v15 + 8) = *(_QWORD *)(v6 + 8);
        }
        *(_DWORD *)v15 = *(_DWORD *)v6;
      }
      ++v13;
      v6 += 32;
      v15 += 32;
    }
    while ( v14 != v13 );
  }
  if ( qword_251AD0 )
  {
    v26 = nullptr;
    v27 = 0;
    v57 = 0;
    v28 = *((_QWORD *)v54 + 3);
    v53.m128i_i64[0] = (__int64)&v56;
    v56 = 0;
    v52.m128i_i64[0] = v28;
    v55 = v28 + 72;
    v29 = 0;
    if ( v9[3].m128i_i64[0] )
    {
      while ( 1 )
      {
        v30 = *(_QWORD *)(v9[2].m128i_i64[1] + 32 * v29 + 8);
        if ( v30 == -1 )
          goto LABEL_48;
        v31 = &v26[v57];
        v32 = (8 * (__int64)v57) >> 5;
        v33 = (8 * (__int64)v57) >> 3;
        if ( v32 > 0 )
        {
          v34 = v26;
          v35 = &v26[4 * v32];
          while ( v30 != *v34 )
          {
            if ( v30 == v34[1] )
            {
              ++v34;
              goto LABEL_47;
            }
            if ( v30 == v34[2] )
            {
              v34 += 2;
              goto LABEL_47;
            }
            if ( v30 == v34[3] )
            {
              v34 += 3;
              goto LABEL_47;
            }
            v34 += 4;
            if ( v34 == v35 )
            {
              v33 = v31 - v34;
              goto LABEL_52;
            }
          }
          goto LABEL_47;
        }
        v34 = v26;
LABEL_52:
        if ( v33 == 2 )
          goto LABEL_71;
        if ( v33 != 3 )
        {
          if ( v33 != 1 )
            goto LABEL_56;
LABEL_55:
          if ( v30 != *v34 )
          {
LABEL_56:
            if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v57 + 1) )
            {
              v56 = qvector_reserve();
              v31 = (__int64 *)(v56 + 8 * v57);
            }
            *v31 = v30;
            *(_QWORD *)&v57 = v57 + 1;
            v36 = getseg();
            if ( v36 )
            {
              v37 = *(_QWORD *)(v36 + 8);
              v38 = qword_251AD0;
              v39 = v37 - v30;
              if ( v39 <= qword_251AD0 )
                v38 = v39;
              v40 = v38;
              if ( v38 > 0x400 )
              {
                if ( !under_debugger )
                  interr();
                BUG();
              }
              v41 = (const void *)qalloc();
              if ( v41 )
              {
                if ( v40 == get_bytes() )
                {
                  v46 = nullptr;
                  if ( v40 )
                  {
                    v46 = (void *)qalloc_or_throw();
                    memcpy(v46, v41, v40);
                  }
                  v47 = *(_QWORD *)(v52.m128i_i64[0] + 80);
                  v48 = *(_QWORD *)(v52.m128i_i64[0] + 72);
                  if ( *(_QWORD *)(v52.m128i_i64[0] + 88) < (unsigned __int64)(v47 + 1) )
                  {
                    v48 = qvector_reserve();
                    v50 = v52.m128i_i64[0];
                    *(_QWORD *)(v52.m128i_i64[0] + 72) = v48;
                    v47 = *(_QWORD *)(v50 + 80);
                  }
                  v49 = (__m128i *)(v48 + 32 * v47);
                  v49->m128i_i64[0] = v30;
                  v49->m128i_i64[1] = (__int64)v46;
                  v49[1] = _mm_unpacklo_epi64((__m128i)v40, (__m128i)v40);
                  ++*(_QWORD *)(v52.m128i_i64[0] + 80);
                  qfree();
                }
                else
                {
                  qfree();
                }
              }
            }
            v26 = (_QWORD *)v56;
            goto LABEL_48;
          }
          goto LABEL_47;
        }
        if ( v30 != *v34 )
          break;
LABEL_47:
        if ( v31 == v34 )
          goto LABEL_56;
LABEL_48:
        v29 = ++v27;
        if ( (unsigned __int64)v27 >= v9[3].m128i_i64[0] )
        {
          if ( v26 )
          {
            *(_QWORD *)&v57 = 0;
            qfree();
          }
          goto LABEL_31;
        }
      }
      ++v34;
LABEL_71:
      if ( v30 != *v34 )
      {
        ++v34;
        goto LABEL_55;
      }
      goto LABEL_47;
    }
  }
LABEL_31:
  v20 = (void (__fastcall *)(__m128i *, int *))a1[14].m128i_i64[0];
  if ( v20 )
    v20(a1, v54);
  return 1;
}

