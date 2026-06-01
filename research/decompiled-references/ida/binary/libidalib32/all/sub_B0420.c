__int64 __fastcall sub_B0420(__m128i *a1, __int64 a2, signed int a3, unsigned int a4, int a5)
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
  size_t v17; // r8
  __m128i si128; // xmm0
  int v19; // eax
  void (__fastcall *v20)(__m128i *, __int64); // rax
  size_t v22; // r15
  void *v23; // rax
  void *v24; // rax
  void *v25; // rax
  _DWORD *v26; // rsi
  int v27; // r14d
  _QWORD *v28; // rbp
  __int64 v29; // rax
  __int64 v30; // r13
  _DWORD *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // r8
  _DWORD *v34; // rax
  _DWORD *v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // eax
  const void *v38; // rbx
  size_t v39; // r15
  __int64 v40; // rdi
  __int64 v41; // rbp
  __int64 i; // r14
  __int64 v43; // rax
  void *v44; // r15
  __int64 v45; // rax
  __int64 v46; // rsi
  __m128i v47; // xmm0
  __m128i *v48; // rax
  __int64 v49; // rax
  size_t n[2]; // [rsp+10h] [rbp-88h] BYREF
  __m128i v52; // [rsp+20h] [rbp-78h] BYREF
  __int64 v53; // [rsp+30h] [rbp-68h]
  _QWORD *v54; // [rsp+38h] [rbp-60h]
  __int64 v55; // [rsp+40h] [rbp-58h] BYREF
  __int128 v56; // [rsp+48h] [rbp-50h]
  unsigned __int64 v57; // [rsp+58h] [rbp-40h]

  v6 = a2;
  v57 = __readfsqword(0x28u);
  v53 = sub_AEF10(a1, 1u, a3, a4);
  if ( !v53 )
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
    v40 = v9[2].m128i_i64[1];
    if ( v40 )
    {
      v41 = v9[3].m128i_i64[0];
      if ( v41 )
      {
        for ( i = 0; i != v41; ++i )
        {
          v43 = v40 + 32 * i;
          if ( *(int *)v43 >= -1 && *(_QWORD *)(v43 + 8) )
          {
            *(_QWORD *)(v43 + 16) = 0;
            qfree();
            v40 = v9[2].m128i_i64[1];
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
    sub_A6890(v12, v9[2].m128i_i64[1], a2, a5 == 0);
  }
  else
  {
    v12 = operator new(0x60u);
    sub_A8300(v12, a2);
  }
  *(_QWORD *)(v53 + 24) = v12;
  if ( !v12 )
    return 0;
  v13 = 0;
  v14 = *(int *)(dbg + 64LL);
  sub_A7EC0(&v9[2].m128i_i64[1], v14);
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
            si128 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
            if ( v16 )
            {
              *(__m128i *)n = si128;
              v24 = (void *)qalloc_or_throw();
              v25 = memcpy(v24, *(const void **)(v6 + 8), v16);
              si128 = _mm_load_si128((const __m128i *)n);
              v17 = (size_t)v25;
            }
            if ( *(_QWORD *)(v15 + 8) )
            {
              *(_QWORD *)(v15 + 16) = 0;
              n[0] = v17;
              v52 = si128;
              qfree();
              si128 = _mm_load_si128(&v52);
              v17 = n[0];
            }
            *(_QWORD *)(v15 + 8) = v17;
            *(__m128i *)(v15 + 16) = si128;
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
  if ( dword_250A50 )
  {
    v26 = nullptr;
    v27 = 0;
    v56 = 0;
    v28 = *(_QWORD **)(v53 + 24);
    v52.m128i_i64[0] = (__int64)&v55;
    v55 = 0;
    v54 = v28 + 9;
    v29 = 0;
    if ( v9[3].m128i_i64[0] )
    {
      while ( 1 )
      {
        v30 = *(_QWORD *)(v9[2].m128i_i64[1] + 32 * v29 + 8);
        if ( (_DWORD)v30 == -1 )
          goto LABEL_48;
        v31 = &v26[v56];
        v32 = (4 * (__int64)v56) >> 4;
        v33 = (4 * (__int64)v56) >> 2;
        if ( v32 > 0 )
        {
          v34 = v26;
          v35 = &v26[4 * v32];
          while ( (_DWORD)v30 != *v34 )
          {
            if ( (_DWORD)v30 == v34[1] )
            {
              ++v34;
              goto LABEL_47;
            }
            if ( (_DWORD)v30 == v34[2] )
            {
              v34 += 2;
              goto LABEL_47;
            }
            if ( (_DWORD)v30 == v34[3] )
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
          if ( (_DWORD)v30 != *v34 )
          {
LABEL_56:
            if ( *((_QWORD *)&v56 + 1) < (unsigned __int64)(v56 + 1) )
            {
              v55 = qvector_reserve();
              v31 = (_DWORD *)(v55 + 4 * v56);
            }
            *v31 = v30;
            *(_QWORD *)&v56 = v56 + 1;
            v36 = getseg();
            if ( v36 )
            {
              v37 = *(_DWORD *)(v36 + 4) - v30;
              if ( v37 > dword_250A50 )
                v37 = dword_250A50;
              n[0] = v37;
              if ( v37 > 0x400 )
              {
                if ( !under_debugger )
                  interr();
                BUG();
              }
              v38 = (const void *)qalloc();
              if ( v38 )
              {
                v39 = n[0];
                if ( v39 == get_bytes() )
                {
                  v44 = nullptr;
                  if ( n[0] )
                  {
                    v44 = (void *)qalloc_or_throw();
                    memcpy(v44, v38, n[0]);
                  }
                  v45 = v28[10];
                  v46 = v28[9];
                  if ( v28[11] < (unsigned __int64)(v45 + 1) )
                  {
                    v49 = qvector_reserve();
                    v28[9] = v49;
                    v46 = v49;
                    v45 = v28[10];
                  }
                  v47 = _mm_loadl_epi64((const __m128i *)n);
                  v48 = (__m128i *)(v46 + 32 * v45);
                  v48->m128i_i32[0] = v30;
                  v48->m128i_i64[1] = (__int64)v44;
                  v48[1] = _mm_unpacklo_epi64(v47, v47);
                  ++v28[10];
                  qfree();
                }
                else
                {
                  qfree();
                }
              }
            }
            v26 = (_DWORD *)v55;
            goto LABEL_48;
          }
          goto LABEL_47;
        }
        if ( (_DWORD)v30 != *v34 )
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
            *(_QWORD *)&v56 = 0;
            qfree();
          }
          goto LABEL_31;
        }
      }
      ++v34;
LABEL_71:
      if ( (_DWORD)v30 != *v34 )
      {
        ++v34;
        goto LABEL_55;
      }
      goto LABEL_47;
    }
  }
LABEL_31:
  v20 = (void (__fastcall *)(__m128i *, __int64))a1[14].m128i_i64[0];
  if ( v20 )
    v20(a1, v53);
  return 1;
}

