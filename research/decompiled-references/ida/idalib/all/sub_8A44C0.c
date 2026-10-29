__int64 __fastcall sub_8A44C0(void **a1)
{
  unsigned int v1; // ebx
  char v3; // al
  void *v4; // rdi
  char *v5; // rax
  void **p_src; // r12
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // r15
  size_t v10; // r13
  char *v11; // rdi
  unsigned __int64 v12; // rdx
  void *v13; // rsi
  void *v14; // rax
  unsigned __int64 v15; // r13
  void *v16; // rdx
  __int64 v17; // rdi
  char v18; // al
  void *v19; // rdx
  __int64 *v20; // r14
  __int64 v21; // r13
  char *v22; // r12
  __int64 v23; // rax
  size_t v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  void *v27; // rsi
  __int64 v28; // rdx
  void *v29; // r14
  __int64 v30; // r12
  char *v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // xmm0
  char *v36; // rdi
  __int64 v37; // r14
  __int64 v38; // r13
  __int64 i; // rbx
  char *v40; // r15
  void *v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  void **v45; // [rsp+8h] [rbp-128h]
  void **v46; // [rsp+10h] [rbp-120h]
  unsigned __int8 v47; // [rsp+1Fh] [rbp-111h]
  __int64 v48; // [rsp+20h] [rbp-110h]
  __int64 v49; // [rsp+20h] [rbp-110h]
  size_t n; // [rsp+28h] [rbp-108h]
  __int64 v51; // [rsp+30h] [rbp-100h]
  __int64 v52; // [rsp+30h] [rbp-100h]
  void *v53; // [rsp+30h] [rbp-100h]
  unsigned __int64 v54; // [rsp+30h] [rbp-100h]
  __int64 v56; // [rsp+38h] [rbp-F8h]
  char *v57; // [rsp+38h] [rbp-F8h]
  void *src; // [rsp+40h] [rbp-F0h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-E8h]
  void *v60; // [rsp+50h] [rbp-E0h] BYREF
  __int128 v61; // [rsp+58h] [rbp-D8h]
  void *v62; // [rsp+70h] [rbp-C0h] BYREF
  __int128 v63; // [rsp+78h] [rbp-B8h]
  void *v64; // [rsp+90h] [rbp-A0h] BYREF
  __int128 v65; // [rsp+98h] [rbp-98h]
  void *ptr; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v67; // [rsp+B8h] [rbp-78h]
  char s[40]; // [rsp+D0h] [rbp-60h] BYREF
  unsigned __int64 v69; // [rsp+F8h] [rbp-38h]

  v69 = __readfsqword(0x28u);
  v61 = 0;
  v60 = nullptr;
  v1 = reg_bin_op("Offline", 0, &v60, 0, 0, 2);
  if ( !(_BYTE)v1 )
  {
LABEL_2:
    v1 = 0;
    goto LABEL_3;
  }
  if ( (debug & 0x200) != 0 )
    sub_3879F0();
  v62 = nullptr;
  v63 = 0;
  if ( (_QWORD)v61 )
  {
    v3 = sub_8A1E40((__int64 *)&v62, *(_BYTE *)v60 | 0x80u, (char *)v60 + 1, v61 - 1);
    v4 = v62;
    if ( !v3 )
    {
      if ( !v62 )
        goto LABEL_11;
      goto LABEL_10;
    }
    v5 = (char *)v62 + v63;
  }
  else
  {
    v5 = nullptr;
    v4 = nullptr;
  }
  p_src = &src;
  src = v4;
  v59 = (unsigned __int64)v5;
  if ( (unsigned int)sub_8A1720((__int64 *)&src) == -1 )
  {
LABEL_61:
    v4 = v62;
    if ( !v62 )
    {
LABEL_11:
      if ( (debug & 0x200) != 0 )
        sub_3879F0();
      goto LABEL_2;
    }
LABEL_10:
    *(_QWORD *)&v63 = 0;
    qfree(v4);
    goto LABEL_11;
  }
LABEL_15:
  v7 = v59;
  if ( (unsigned __int64)src < v59 )
  {
    while ( 1 )
    {
      ptr = nullptr;
      v67 = 0;
      v8 = unpack_dd(p_src);
      if ( v8 )
      {
        v9 = v67;
        v10 = v8;
        v11 = (char *)ptr;
        v12 = v67 + v8;
        if ( *((_QWORD *)&v67 + 1) < v12 )
        {
          v54 = v67 + v8;
          ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
          v12 = v54;
          v11 = (char *)ptr;
        }
        v13 = src;
        *(_QWORD *)&v67 = v12;
        if ( __CFADD__(v10, src) || v7 < (unsigned __int64)src + v10 )
          goto LABEL_59;
        src = (char *)src + v10;
        if ( !memcpy(&v11[v9], v13, v10) )
          break;
      }
      v14 = a1[1];
      v15 = (unsigned __int64)a1[2];
      if ( v15 < (unsigned __int64)v14 + 1 )
      {
        v26 = qvector_reserve(a1, 0, (char *)v14 + 1, 280);
        v27 = a1[2];
        v28 = v26;
        a1[2] = (void *)v15;
        v29 = *a1;
        v52 = (__int64)a1[1] - 1;
        if ( v52 >= 0 )
        {
          v49 = v26;
          v47 = v1;
          v46 = a1;
          v57 = (char *)*a1;
          v45 = p_src;
          v30 = v26;
          do
          {
            v31 = *(char **)v57;
            v32 = _mm_loadu_si128((const __m128i *)(v57 + 8));
            *(_QWORD *)v57 = 0;
            *(_OWORD *)(v57 + 8) = 0;
            *(_QWORD *)v30 = v31;
            *(__m128i *)(v30 + 8) = v32;
            *(__m128i *)(v30 + 24) = _mm_loadu_si128((const __m128i *)(v57 + 24));
            *(__m128i *)(v30 + 40) = _mm_loadu_si128((const __m128i *)(v57 + 40));
            *(__m128i *)(v30 + 56) = _mm_loadu_si128((const __m128i *)(v57 + 56));
            *(__m128i *)(v30 + 72) = _mm_loadu_si128((const __m128i *)(v57 + 72));
            *(__m128i *)(v30 + 88) = _mm_loadu_si128((const __m128i *)(v57 + 88));
            *(__m128i *)(v30 + 104) = _mm_loadu_si128((const __m128i *)(v57 + 104));
            *(__m128i *)(v30 + 120) = _mm_loadu_si128((const __m128i *)(v57 + 120));
            *(__m128i *)(v30 + 136) = _mm_loadu_si128((const __m128i *)(v57 + 136));
            *(__m128i *)(v30 + 152) = _mm_loadu_si128((const __m128i *)(v57 + 152));
            *(__m128i *)(v30 + 168) = _mm_loadu_si128((const __m128i *)(v57 + 168));
            *(__m128i *)(v30 + 184) = _mm_loadu_si128((const __m128i *)(v57 + 184));
            *(__m128i *)(v30 + 200) = _mm_loadu_si128((const __m128i *)(v57 + 200));
            *(__m128i *)(v30 + 216) = _mm_loadu_si128((const __m128i *)(v57 + 216));
            v33 = *(_QWORD *)(v57 + 246);
            *(__m128i *)(v30 + 232) = _mm_loadu_si128((const __m128i *)(v57 + 232));
            *(_QWORD *)(v30 + 246) = v33;
            v34 = *((_QWORD *)v57 + 32);
            v35 = _mm_loadu_si128((const __m128i *)(v57 + 264));
            *((_QWORD *)v57 + 32) = 0;
            *(_QWORD *)(v30 + 256) = v34;
            *(__m128i *)(v30 + 264) = v35;
            v36 = *(char **)v57;
            *((_QWORD *)v57 + 34) = 0;
            if ( v36 )
            {
              v37 = *((_QWORD *)v57 + 1);
              if ( v37 )
              {
                v38 = 0;
                for ( i = 0; i != v37; ++i )
                {
                  v40 = &v36[v38];
                  v41 = *(void **)&v36[v38 + 88];
                  if ( v41 )
                  {
                    *((_QWORD *)v40 + 12) = 0;
                    qfree(v41);
                  }
                  v42 = *((void **)v40 + 7);
                  if ( v42 )
                  {
                    *((_QWORD *)v40 + 8) = 0;
                    qfree(v42);
                  }
                  v43 = *((void **)v40 + 4);
                  if ( v43 )
                  {
                    *((_QWORD *)v40 + 5) = 0;
                    qfree(v43);
                  }
                  v44 = *((void **)v40 + 1);
                  if ( v44 )
                  {
                    *((_QWORD *)v40 + 2) = 0;
                    qfree(v44);
                  }
                  v38 += 112;
                  v36 = *(char **)v57;
                }
              }
              *((_QWORD *)v57 + 1) = 0;
              qfree(v36);
            }
            --v52;
            v30 += 280;
            v57 += 280;
          }
          while ( v52 != -1 );
          v28 = v49;
          v1 = v47;
          p_src = v45;
          a1 = v46;
          v29 = *v46;
        }
        v53 = (void *)v28;
        qfree(v29);
        v16 = v53;
        *a1 = v53;
        a1[2] = v27;
        v14 = a1[1];
      }
      else
      {
        v16 = *a1;
      }
      v17 = (__int64)v16 + 280 * (_QWORD)v14;
      *(_QWORD *)v17 = 0;
      *(_QWORD *)(v17 + 256) = 0;
      *(_OWORD *)(v17 + 8) = 0;
      *(_OWORD *)(v17 + 264) = 0;
      a1[1] = (char *)a1[1] + 1;
      v18 = sub_8A1870(v17, (unsigned __int64 *)&ptr);
      v11 = (char *)ptr;
      if ( !v18 )
        goto LABEL_59;
      if ( !ptr )
        goto LABEL_15;
      *(_QWORD *)&v67 = 0;
      qfree(ptr);
      v7 = v59;
      if ( (unsigned __int64)src >= v59 )
        goto LABEL_27;
    }
    v11 = (char *)ptr;
LABEL_59:
    if ( v11 )
    {
      *(_QWORD *)&v67 = 0;
      qfree(v11);
    }
    goto LABEL_61;
  }
LABEL_27:
  v19 = a1[1];
  if ( v19 )
  {
    if ( (debug & 0x200) != 0 )
      sub_3879F0();
    v20 = (__int64 *)*a1;
    v48 = (__int64)*a1 + 280 * (_QWORD)v19;
    if ( *a1 != (void *)v48 )
    {
      do
      {
        if ( (debug & 0x200) != 0 )
        {
          ptr = nullptr;
          v67 = 0;
          sub_35A790((char **)&ptr);
          sub_3879F0();
        }
        v21 = *v20;
        v51 = *v20 + 112 * v20[1];
        if ( *v20 != v51 )
        {
          do
          {
            if ( (debug & 0x200) != 0 )
            {
              v22 = s;
              v23 = qstrftime(s, 0x20u, "%F");
              ptr = nullptr;
              v24 = v23;
              v67 = 0;
              if ( v23 )
              {
                v24 = strlen(s);
                v25 = v24 + 1;
              }
              else
              {
                v25 = 1;
                v22 = (char *)&byte_22F0C30;
              }
              n = v24;
              v56 = v25;
              ptr = (void *)qvector_reserve(&ptr, 0, v25, 1);
              *(_QWORD *)&v67 = v56;
              memmove(ptr, v22, n);
              *((_BYTE *)ptr + n) = 0;
              v64 = nullptr;
              v65 = 0;
              sub_35A790((char **)&v64);
              sub_3879F0();
            }
            v21 += 112;
          }
          while ( v51 != v21 );
        }
        v20 += 35;
      }
      while ( (__int64 *)v48 != v20 );
    }
  }
  else if ( (debug & 0x200) != 0 )
  {
    sub_3879F0();
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
LABEL_3:
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  return v1;
}
