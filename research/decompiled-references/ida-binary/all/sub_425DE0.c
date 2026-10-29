__int64 __fastcall sub_425DE0(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rbx
  const char *v6; // rsi
  void *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rax
  char *v10; // rax
  const char *v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  size_t v15; // r9
  char *v16; // rax
  char *v17; // rbx
  __int64 v18; // rsi
  size_t v19; // r8
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rsi
  size_t v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned __int64 v30; // r12
  size_t v31; // r15
  __int64 v32; // r13
  size_t v33; // r8
  __int64 v34; // rsi
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v39; // rbx
  __int64 v40; // r12
  __int64 *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  size_t v45; // [rsp+0h] [rbp-70h]
  size_t v46; // [rsp+0h] [rbp-70h]
  size_t v47; // [rsp+0h] [rbp-70h]
  size_t v48; // [rsp+8h] [rbp-68h]
  size_t v49; // [rsp+10h] [rbp-60h]
  __int64 v50; // [rsp+18h] [rbp-58h] BYREF
  __int128 v51; // [rsp+20h] [rbp-50h]
  unsigned __int64 v52; // [rsp+30h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 8);
  v52 = __readfsqword(0x28u);
  v51 = 0;
  v50 = 0;
  if ( v4 )
  {
    v7 = (void *)qalloc_or_throw(v4);
    memcpy(v7, *(const void **)a3, v4);
    v9 = v51;
    v6 = (const char *)v50;
    v8 = v51 + 1;
    if ( *((_QWORD *)&v51 + 1) >= (unsigned __int64)(v51 + 1) )
      goto LABEL_4;
  }
  else
  {
    v6 = nullptr;
    v7 = nullptr;
    v8 = 1;
  }
  v50 = qvector_reserve(&v50, v6, v8, 24);
  v6 = (const char *)v50;
  v9 = v51;
LABEL_4:
  v10 = (char *)&v6[24 * v9];
  *(_QWORD *)v10 = v7;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  v11 = *(const char **)a2;
  v12 = v51 + 1;
  v13 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)&v51 = v51 + 1;
  if ( v13 )
  {
    v14 = (unsigned __int64)&v11[v13 - 1];
    if ( (unsigned __int64)v11 < v14 )
    {
      do
      {
        v6 = (_BYTE *)(&qword_28 + 7);
        v16 = strchr(v11, 47);
        v17 = v16;
        v15 = v14 - (_QWORD)v11;
        if ( !v16 || (v15 = v16 - v11, v16 != v11) )
        {
          v18 = v50;
          if ( *((_QWORD *)&v51 + 1) < (unsigned __int64)(v12 + 1) )
          {
            v45 = v15;
            v50 = qvector_reserve(&v50, v50, v12 + 1, 24);
            v12 = v51;
            v18 = v50;
            v15 = v45;
          }
          v19 = v15;
          v20 = v18 + 24 * v12;
          *(_OWORD *)(v20 + 8) = 0;
          *(_QWORD *)v20 = 0;
          *(_QWORD *)&v51 = v51 + 1;
          v21 = *(_QWORD *)(v20 + 8);
          if ( v21 )
            v19 = --v21 + v15;
          v22 = *(_QWORD *)v20;
          v23 = v19 + 1;
          if ( v19 != -1 )
          {
            v49 = v15;
            v48 = v19;
            v46 = v19 + 1;
            v37 = qvector_reserve(v20, v22, v23, 1);
            *(_QWORD *)v20 = v37;
            v15 = v49;
            v22 = v37;
            v19 = v48;
            v23 = v46;
          }
          *(_QWORD *)(v20 + 8) = v23;
          *(_BYTE *)(v22 + v19) = 0;
          v6 = v11;
          memmove((void *)(v21 + *(_QWORD *)v20), v11, v15);
          v12 = v51;
          if ( !v17 )
            break;
        }
        v11 = v17 + 1;
      }
      while ( (unsigned __int64)(v17 + 1) < v14 );
    }
  }
  *(_QWORD *)a1 = 0;
  v24 = v50;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v12 )
  {
    v25 = v12 - 1;
    v26 = v24 + 24 * v12;
    if ( v26 == v24 )
    {
      if ( v12 == 1 )
        goto LABEL_40;
    }
    else
    {
      v27 = v24;
      do
      {
        v28 = *(_QWORD *)(v27 + 8);
        v6 = (const char *)(v28 + v25 - 1);
        if ( v28 )
          v25 = v28 + v25 - 1;
        v27 += 24;
      }
      while ( v26 != v27 );
      if ( !v25 )
      {
LABEL_24:
        v29 = v24;
        do
        {
          v35 = *(_QWORD *)(a1 + 8);
          if ( v35 > 1 )
          {
            v6 = *(const char **)a1;
            if ( *(_QWORD *)(a1 + 16) < v35 + 1 )
            {
              v36 = qvector_reserve(a1, v6, v35 + 1, 1);
              *(_QWORD *)a1 = v36;
              v6 = (const char *)v36;
            }
            *(_QWORD *)(a1 + 8) = v35 + 1;
            v6[v35] = 0;
            *(_BYTE *)(*(_QWORD *)a1 + v35 - 1) = 47;
          }
          v30 = *(_QWORD *)(v29 + 8);
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v30 != 1 )
            {
              v32 = *(_QWORD *)(a1 + 8);
              v33 = v30 - 1;
              if ( v32 )
              {
                --v32;
                v33 = v31 + v32;
                v30 += v32;
              }
              v34 = *(_QWORD *)a1;
              if ( *(_QWORD *)(a1 + 16) < v30 )
              {
                v47 = v33;
                v43 = qvector_reserve(a1, v34, v30, 1);
                *(_QWORD *)a1 = v43;
                v33 = v47;
                v34 = v43;
              }
              *(_QWORD *)(a1 + 8) = v30;
              *(_BYTE *)(v34 + v33) = 0;
              v6 = *(const char **)v29;
              memcpy((void *)(v32 + *(_QWORD *)a1), *(const void **)v29, v31);
            }
          }
          v29 += 24;
        }
        while ( v26 != v29 );
        v24 = v50;
LABEL_40:
        if ( v24 )
        {
          v39 = v51;
          if ( (_QWORD)v51 )
          {
            v40 = 0;
            do
            {
              v41 = (__int64 *)(v24 + 24 * v40);
              v42 = *v41;
              if ( *v41 )
              {
                v41[1] = 0;
                qfree(v42, v6);
                v24 = v50;
              }
              ++v40;
            }
            while ( v39 != v40 );
          }
          goto LABEL_46;
        }
        return a1;
      }
    }
    v6 = nullptr;
    *(_QWORD *)a1 = qvector_reserve(a1, 0, v25, 1);
    v24 = v50;
    v26 = v50 + 24 * v51;
    if ( v50 == v26 )
      goto LABEL_40;
    goto LABEL_24;
  }
  if ( v24 )
  {
LABEL_46:
    *(_QWORD *)&v51 = 0;
    qfree(v24, v6);
  }
  return a1;
}
