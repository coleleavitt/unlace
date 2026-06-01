__int64 __fastcall sub_388E0(__int64 a1, __int64 a2, const char *a3, unsigned int a4, unsigned int a5)
{
  size_t v9; // r14
  char *v10; // rsi
  __int64 v11; // rdx
  char *v12; // rdi
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  char *v15; // rax
  unsigned int v16; // r12d
  char *v17; // rbp
  unsigned __int64 v18; // r13
  char *v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rbx
  char *v22; // rdx
  void *v23; // rax
  char *v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdi
  const char *v30; // rsi
  size_t v31; // r8
  const void *v32; // r9
  void *v33; // rdi
  void *v34; // r15
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  char *v37; // rax
  void *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rax
  __m128i v42; // [rsp+8h] [rbp-A8h] BYREF
  void *v43; // [rsp+18h] [rbp-98h] BYREF
  __int128 v44; // [rsp+20h] [rbp-90h]
  void *v45; // [rsp+38h] [rbp-78h] BYREF
  __int128 v46; // [rsp+40h] [rbp-70h]
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  __m128i v48; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v44 = 0;
  v43 = nullptr;
  v45 = nullptr;
  ptr = nullptr;
  v46 = 0;
  v48 = 0;
  if ( !a3 )
  {
    v10 = nullptr;
    v13 = 1;
    goto LABEL_34;
  }
  v9 = strlen(a3);
  v42.m128i_i64[0] = v9 + 1;
  ptr = (void *)sub_96080(&ptr, 0, v9 + 1, 1);
  v48.m128i_i64[0] = v9 + 1;
  memmove(ptr, a3, v9);
  *((_BYTE *)ptr + v9) = 0;
  v10 = (char *)v45;
  v11 = v46;
  v12 = (char *)v45;
  v13 = v46 + 1;
  if ( &ptr < v45 || &ptr >= (void **)((char *)v45 + 24 * *((_QWORD *)&v46 + 1)) )
  {
    if ( *((_QWORD *)&v46 + 1) >= v13 )
    {
LABEL_4:
      v14 = _mm_loadu_si128(&v48);
      v15 = &v12[24 * v11];
      *(_QWORD *)v15 = ptr;
      *(__m128i *)(v15 + 8) = v14;
      *(_QWORD *)&v46 = v46 + 1;
      goto LABEL_5;
    }
LABEL_34:
    v45 = (void *)sub_96080(&v45, v10, v13, 24);
    v11 = v46;
    v12 = (char *)v45;
    goto LABEL_4;
  }
  v34 = ptr;
  v35 = _mm_loadl_epi64(&v48);
  ptr = nullptr;
  v36 = _mm_loadl_epi64((const __m128i *)&v48.m128i_u64[1]);
  v48 = 0;
  if ( *((_QWORD *)&v46 + 1) < v13 )
  {
    v42.m128i_i64[1] = v36.m128i_i64[0];
    v42.m128i_i64[0] = v35.m128i_i64[0];
    v45 = (void *)sub_96080(&v45, v45, v46 + 1, 24);
    v11 = v46;
    v10 = (char *)v45;
    v36 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
    v35 = _mm_loadl_epi64(&v42);
  }
  v37 = &v10[24 * v11];
  *(_QWORD *)v37 = v34;
  *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v35, v36);
  *(_QWORD *)&v46 = v46 + 1;
  if ( ptr )
  {
    v48.m128i_i64[0] = 0;
    j__free(ptr);
  }
LABEL_5:
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, void **, void **, _QWORD, _QWORD))(*(_QWORD *)a2 + 208LL))(
          a2,
          0,
          &v43,
          &v45,
          a4,
          a5);
  if ( !v16 )
  {
    if ( (_QWORD)v44 == 1 )
    {
      v17 = (char *)v43;
      if ( v43 != (void *)a1 )
      {
        v18 = *((_QWORD *)v43 + 1);
        if ( !v18 || (v31 = v18 - 1, v18 == 1) )
        {
          *(_QWORD *)(a1 + 8) = 0;
        }
        else
        {
          v32 = *(const void **)v43;
          v33 = *(void **)a1;
          if ( *(_QWORD *)(a1 + 16) < v18 )
          {
            v38 = *(void **)a1;
            v39 = *((_QWORD *)v43 + 1);
            v42.m128i_i64[0] = *(_QWORD *)v43;
            v40 = sub_96080(a1, v38, v39, 1);
            v32 = (const void *)v42.m128i_i64[0];
            v31 = v18 - 1;
            *(_QWORD *)a1 = v40;
            v33 = (void *)v40;
          }
          *(_QWORD *)(a1 + 8) = v18;
          memmove(v33, v32, v31);
          *(_BYTE *)(*(_QWORD *)a1 + v18 - 1) = 0;
        }
      }
      if ( v17 + 24 != (char *)(a1 + 24) )
        *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(v17 + 24));
      *(_QWORD *)(a1 + 40) = *((_QWORD *)v17 + 5);
      *(_QWORD *)(a1 + 48) = *((_QWORD *)v17 + 6);
      *(_DWORD *)(a1 + 56) = *((_DWORD *)v17 + 14);
      *(_DWORD *)(a1 + 60) = *((_DWORD *)v17 + 15);
      *(_DWORD *)(a1 + 64) = *((_DWORD *)v17 + 16);
      *(_DWORD *)(a1 + 68) = *((_DWORD *)v17 + 17);
      *(_BYTE *)(a1 + 72) = v17[72];
    }
    else
    {
      v48 = 0;
      ptr = nullptr;
      sub_17D80((char **)&ptr);
      v30 = haystack;
      if ( v48.m128i_i64[0] )
        v30 = (const char *)ptr;
      sub_8F890(0, v30);
      if ( ptr )
      {
        v48.m128i_i64[0] = 0;
        j__free(ptr);
      }
      v16 = 33;
    }
  }
  v19 = (char *)v45;
  if ( v45 )
  {
    v20 = v46;
    if ( (_QWORD)v46 )
    {
      v21 = 0;
      do
      {
        v22 = &v19[24 * v21];
        v23 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          j__free(v23);
          v19 = (char *)v45;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v46 = 0;
    j__free(v19);
  }
  v24 = (char *)v43;
  if ( v43 )
  {
    v25 = v44;
    if ( (_QWORD)v44 )
    {
      v26 = 0;
      do
      {
        v27 = &v24[80 * v26];
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          j__free(v28);
          v24 = (char *)v43;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v44 = 0;
    j__free(v24);
  }
  return v16;
}

