__int64 __fastcall sub_8D76A0(__int64 a1, char *a2, char a3)
{
  __int64 v4; // r14
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // rbx
  void *v8; // rax
  const char *v9; // r13
  __int64 v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  bool v13; // al
  __int64 **v14; // rbx
  char *v15; // r14
  char v16; // bl
  void *v17; // rdi
  _BYTE *v18; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  bool v22; // al
  __int64 **v23; // rbx
  char *v24; // r13
  char v25; // bl
  __int64 *v26; // rbx
  size_t v27; // rax
  __int64 v28; // r13
  size_t v29; // rbp
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  void *v32; // rbp
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  void *v38; // rdi
  void *v39; // rdi
  __int64 v40; // rax
  size_t v41; // rax
  __int64 v42; // r13
  size_t v43; // rbp
  unsigned __int64 v44; // rdx
  void *v45; // rbp
  __m128i v46; // xmm0
  __m128i v47; // xmm1
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __m128i v56; // [rsp+0h] [rbp-98h] BYREF
  char v57; // [rsp+1Fh] [rbp-79h] BYREF
  void *v58; // [rsp+20h] [rbp-78h] BYREF
  __int128 v59; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __m128i v61; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+58h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 0x20) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v20 + 16) && (*(unsigned __int8 (__fastcall **)(_QWORD))(v20 + 24))(*(_QWORD *)(a1 + 16)) )
        return 1;
      if ( !(unsigned __int8)sub_8D9DF0(a2) )
      {
        v21 = *(_QWORD *)(a1 + 8);
        if ( v21 )
        {
          ptr = nullptr;
          v61 = 0;
          v22 = sub_8D6100(v21, (__int64 *)&ptr, a2);
          v23 = (__int64 **)ptr;
          if ( v22 )
          {
            LOBYTE(v58) = 0;
            v24 = (char *)ptr + 8 * v61.m128i_i64[0];
            if ( v24 == ptr )
            {
              if ( v24 )
              {
                v61.m128i_i64[0] = 0;
                qfree(v24);
              }
            }
            else
            {
              v56.m128i_i64[0] = (__int64)&v58;
              do
              {
                sub_8D35A0((char *)v56.m128i_i64[0], (__int64)a2, *v23, (*v23)[9]);
                ++v23;
              }
              while ( v24 != (char *)v23 );
              v25 = (char)v58;
              if ( ptr )
              {
                v61.m128i_i64[0] = 0;
                qfree(ptr);
              }
              if ( v25 )
                return 0;
            }
          }
          else if ( ptr )
          {
            v61.m128i_i64[0] = 0;
            qfree(ptr);
          }
        }
        v26 = *(__int64 **)a1;
        ptr = nullptr;
        v61 = 0;
        if ( a2 )
        {
          v27 = strlen(a2);
          v28 = v27 + 1;
          v29 = v27;
          ptr = (void *)qvector_reserve(&ptr, 0, v27 + 1, 1);
          v61.m128i_i64[0] = v28;
          memmove(ptr, a2, v29);
          *((_BYTE *)ptr + v29) = 0;
        }
        v30 = *v26;
        v31 = v26[2];
        if ( (unsigned __int64)&ptr >= *v26 && (unsigned __int64)&ptr < v30 + 24 * v31 )
        {
          v32 = ptr;
          v33 = _mm_loadl_epi64(&v61);
          ptr = nullptr;
          v34 = _mm_loadl_epi64((const __m128i *)&v61.m128i_u64[1]);
          v61 = 0;
          v35 = v26[1];
          v36 = *v26;
          if ( v26[2] < (unsigned __int64)(v35 + 1) )
          {
            v56.m128i_i64[1] = v34.m128i_i64[0];
            v56.m128i_i64[0] = v33.m128i_i64[0];
            v54 = qvector_reserve(v26, v36, v35 + 1, 24);
            v35 = v26[1];
            v33 = _mm_loadl_epi64(&v56);
            *v26 = v54;
            v36 = v54;
            v34 = _mm_loadl_epi64((const __m128i *)&v56.m128i_u64[1]);
          }
          v37 = v36 + 24 * v35;
          *(_QWORD *)v37 = v32;
          *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v33, v34);
          v38 = ptr;
          ++v26[1];
          if ( !v38 )
            return 0;
LABEL_40:
          v61.m128i_i64[0] = 0;
          qfree(v38);
          return 0;
        }
        v51 = v26[1];
        if ( v31 < v51 + 1 )
        {
          v53 = qvector_reserve(v26, v30, v51 + 1, 24);
          goto LABEL_67;
        }
LABEL_62:
        v52 = v30 + 24 * v51;
        *(_QWORD *)v52 = ptr;
        *(__m128i *)(v52 + 8) = _mm_loadu_si128(&v61);
        v61 = 0;
        ++v26[1];
      }
    }
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    v58 = nullptr;
    v59 = 0;
    if ( a2 )
    {
      v5 = strlen(a2);
      v6 = v5 + 1;
      v7 = v5;
      v56.m128i_i64[0] = (__int64)&v58;
      v8 = (void *)qvector_reserve(&v58, 0, v5 + 1, 1);
      *(_QWORD *)&v59 = v6;
      v58 = v8;
      memmove(v8, a2, v7);
      *((_BYTE *)v58 + v7) = 0;
      v9 = (const char *)v58;
      if ( (_QWORD)v59 )
      {
        if ( (_QWORD)v59 != 1 && *((char *)v58 + v59 - 2) == 47 )
        {
LABEL_10:
          v61 = 0;
          ptr = nullptr;
          v13 = sub_8D6100(v4, (__int64 *)&ptr, v9);
          v14 = (__int64 **)ptr;
          if ( v13 )
          {
            v57 = 0;
            v15 = (char *)ptr + 8 * v61.m128i_i64[0];
            if ( v15 != ptr )
            {
              do
              {
                sub_8D35A0(&v57, (__int64)v9, *v14, (*v14)[9]);
                ++v14;
              }
              while ( v15 != (char *)v14 );
              v16 = v57;
              if ( ptr )
              {
                v61.m128i_i64[0] = 0;
                qfree(ptr);
              }
              v17 = v58;
              if ( !v58 )
              {
LABEL_17:
                if ( v16 )
                  goto LABEL_18;
                goto LABEL_43;
              }
LABEL_16:
              *(_QWORD *)&v59 = 0;
              qfree(v17);
              goto LABEL_17;
            }
            if ( v15 )
            {
              v61.m128i_i64[0] = 0;
              v16 = 0;
              qfree(v15);
              v17 = v58;
              if ( !v58 )
                goto LABEL_43;
              goto LABEL_16;
            }
          }
          else if ( ptr )
          {
            v61.m128i_i64[0] = 0;
            qfree(ptr);
            v39 = v58;
            if ( !v58 )
              goto LABEL_43;
LABEL_42:
            *(_QWORD *)&v59 = 0;
            qfree(v39);
            goto LABEL_43;
          }
          v39 = v58;
          if ( !v58 )
            goto LABEL_43;
          goto LABEL_42;
        }
        v10 = v59 - 1;
        v11 = v59 + 1;
        v12 = *((_QWORD *)&v59 + 1);
      }
      else
      {
        v12 = *((_QWORD *)&v59 + 1);
        v10 = 0;
        v11 = 2;
      }
      if ( v12 >= v11 )
      {
LABEL_9:
        *(_QWORD *)&v59 = v11;
        v9[v10] = 47;
        *((_BYTE *)v58 + v10 + 1) = 0;
        v9 = (const char *)v58;
        goto LABEL_10;
      }
    }
    else
    {
      v9 = nullptr;
      v11 = 2;
      v10 = 0;
      v56.m128i_i64[0] = (__int64)&v58;
    }
    v58 = (void *)qvector_reserve(v56.m128i_i64[0], v9, v11, 1);
    v9 = (const char *)v58;
    goto LABEL_9;
  }
LABEL_43:
  if ( (unsigned __int8)sub_8D9DF0(a2) )
  {
LABEL_18:
    v18 = *(_BYTE **)(a1 + 24);
    if ( v18 )
      *v18 = 1;
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 32) & 0x40) == 0 )
    return 0;
  v40 = *(_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(v40 + 16) || !(*(unsigned __int8 (__fastcall **)(_QWORD))(v40 + 24))(*(_QWORD *)(a1 + 16)) )
  {
    v26 = *(__int64 **)a1;
    ptr = nullptr;
    v61 = 0;
    if ( a2 )
    {
      v41 = strlen(a2);
      v42 = v41 + 1;
      v43 = v41;
      ptr = (void *)qvector_reserve(&ptr, 0, v41 + 1, 1);
      v61.m128i_i64[0] = v42;
      memmove(ptr, a2, v43);
      *((_BYTE *)ptr + v43) = 0;
    }
    v30 = *v26;
    v44 = v26[2];
    if ( (unsigned __int64)&ptr >= *v26 && (unsigned __int64)&ptr < v30 + 24 * v44 )
    {
      v45 = ptr;
      v46 = _mm_loadl_epi64(&v61);
      ptr = nullptr;
      v47 = _mm_loadl_epi64((const __m128i *)&v61.m128i_u64[1]);
      v61 = 0;
      v48 = v26[1];
      v49 = *v26;
      if ( v26[2] < (unsigned __int64)(v48 + 1) )
      {
        v56.m128i_i64[1] = v47.m128i_i64[0];
        v56.m128i_i64[0] = v46.m128i_i64[0];
        v55 = qvector_reserve(v26, v49, v48 + 1, 24);
        *v26 = v55;
        v49 = v55;
        v48 = v26[1];
        v47 = _mm_loadl_epi64((const __m128i *)&v56.m128i_u64[1]);
        v46 = _mm_loadl_epi64(&v56);
      }
      v50 = v49 + 24 * v48;
      *(_QWORD *)v50 = v45;
      *(__m128i *)(v50 + 8) = _mm_unpacklo_epi64(v46, v47);
      v38 = ptr;
      ++v26[1];
      if ( !v38 )
        return 0;
      goto LABEL_40;
    }
    v51 = v26[1];
    if ( v44 < v51 + 1 )
    {
      v53 = qvector_reserve(v26, v30, v51 + 1, 24);
LABEL_67:
      *v26 = v53;
      v30 = v53;
      v51 = v26[1];
      goto LABEL_62;
    }
    goto LABEL_62;
  }
  return 1;
}

