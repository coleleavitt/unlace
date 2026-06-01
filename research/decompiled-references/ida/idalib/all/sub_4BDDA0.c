unsigned __int64 __fastcall sub_4BDDA0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // r13
  int place_class_id; // eax
  __int64 place_class; // rax
  __int64 v7; // r12
  int v8; // r14d
  char **v10; // rax
  __int64 v11; // r13
  __int64 j; // rax
  __int64 v13; // rdx
  char *v14; // rsi
  const char *v15; // rcx
  char *v16; // rax
  size_t v17; // r14
  void *v18; // r12
  char *v19; // rbp
  __int64 v20; // rdx
  char *v21; // r12
  char *v22; // rax
  __int64 v23; // rcx
  char *v24; // rdx
  size_t v25; // r8
  char *v26; // r14
  char *v27; // r9
  void *v28; // rsi
  _BYTE *v29; // r14
  void *v30; // rsi
  char *v31; // r8
  char *v32; // rdx
  char **v33; // rbp
  int v34; // r8d
  int v35; // r9d
  char *v36; // rdx
  __int64 v37; // r12
  __int64 v38; // rbp
  char *v39; // rax
  void *v40; // rdi
  char **v41; // rbp
  int i; // r12d
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rsi
  char *v47; // [rsp+10h] [rbp-158h]
  char *v48; // [rsp+10h] [rbp-158h]
  char *v49; // [rsp+20h] [rbp-148h]
  size_t v50; // [rsp+20h] [rbp-148h]
  char *v51; // [rsp+38h] [rbp-130h]
  __int64 v52; // [rsp+48h] [rbp-120h] BYREF
  __int64 v53; // [rsp+50h] [rbp-118h] BYREF
  __int64 v54; // [rsp+58h] [rbp-110h] BYREF
  void *src; // [rsp+60h] [rbp-108h] BYREF
  size_t n[3]; // [rsp+68h] [rbp-100h]
  void *v57; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v58; // [rsp+88h] [rbp-E0h]
  void *v59[5]; // [rsp+A0h] [rbp-C8h] BYREF
  void *ptr; // [rsp+C8h] [rbp-A0h]
  _BYTE v61[88]; // [rsp+D0h] [rbp-98h] BYREF
  unsigned __int64 v62; // [rsp+128h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  v4 = sub_55C400(a2);
  sub_7BEFF0(&v54, a2, "$ BMARKS ", 0, 0);
  if ( v54 != -1 )
  {
    place_class_id = get_place_class_id("tiplace_t");
    place_class = get_place_class(nullptr, nullptr, place_class_id);
    v7 = place_class;
    if ( place_class )
    {
      v59[3] = (void *)-1LL;
      v59[4] = nullptr;
      ptr = nullptr;
      memset(v59, 0, 24);
      ptr = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
      v8 = bookmarks_t_size((__int64)v59, v4, 0.0);
      if ( v8 )
      {
        v41 = (char **)sub_498150(a3);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 120LL))(v7);
        sub_35A790(v41);
        for ( i = 0; i != v8; ++i )
        {
          LODWORD(v53) = i;
          src = nullptr;
          *(_OWORD *)n = 0;
          if ( (unsigned __int8)bookmarks_t_get(v59, &src, &v53, v4) )
          {
            v57 = nullptr;
            v58 = 0;
            (**(void (__fastcall ***)(void *, void **, __int64))ptr)(ptr, &v57, v4);
            v44 = a3[1];
            v45 = *a3;
            if ( a3[2] < (unsigned __int64)(v44 + 1) )
            {
              v45 = qvector_reserve(a3, v45, v44 + 1, 24);
              *a3 = v45;
              v44 = a3[1];
            }
            v43 = v45 + 24 * v44;
            *(_QWORD *)v43 = 0;
            *(_OWORD *)(v43 + 8) = 0;
            ++a3[1];
            sub_35A790((char **)v43);
            if ( v57 )
            {
              *(_QWORD *)&v58 = 0;
              qfree(v57);
            }
          }
          if ( src )
          {
            n[0] = 0;
            qfree(src);
          }
        }
        if ( ptr )
          qfree(ptr);
      }
      else if ( ptr )
      {
        qfree(ptr);
      }
    }
  }
  sub_7BEFF0(&v52, a2, "$ curlocs", 0, 0);
  if ( v52 != -1 )
  {
    sub_42D210((__int64)v61, *(_QWORD **)(a2 + 1672));
    v10 = (char **)sub_498150(a3);
    sub_35A790(v10);
    v11 = sub_7BEB80(&v52, a2, 65);
    if ( v11 != -1 )
    {
      while ( 1 )
      {
        v53 = v11;
        if ( (unsigned __int8)sub_7BE6E0(a2, &v53) )
          break;
LABEL_10:
        v11 = sub_7BEBF0(&v52, a2, v11, 65);
        if ( v11 == -1 )
          return v62 - __readfsqword(0x28u);
      }
      src = nullptr;
      v57 = nullptr;
      *(_OWORD *)n = 0;
      v58 = 0;
      for ( j = sub_7BF580(&v53, a2, &src, 72); j != -1; j = sub_7BF600(&v53, a2, &src, v15, 72) )
      {
        v17 = n[0];
        v18 = nullptr;
        if ( n[0] )
        {
          v18 = (void *)qalloc_or_throw(n[0]);
          memcpy(v18, src, v17);
        }
        v13 = v58;
        v14 = (char *)v57;
        if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
        {
          v57 = (void *)qvector_reserve(&v57, v57, v58 + 1, 24);
          v13 = v58;
          v14 = (char *)v57;
        }
        v15 = haystack;
        v16 = &v14[24 * v13];
        *(_QWORD *)v16 = v18;
        *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
        *(_QWORD *)&v58 = v58 + 1;
        if ( n[0] )
          v15 = (const char *)src;
      }
      memset(v59, 0, 24);
      if ( (_QWORD)v58 )
      {
        v19 = (char *)v57;
        v20 = 2 * v58 - 2;
        v21 = (char *)v57 + 24 * v58;
        if ( v57 != v21 )
        {
          v22 = (char *)v57;
          do
          {
            v23 = *((_QWORD *)v22 + 1);
            if ( v23 )
              v20 = v20 + v23 - 1;
            v22 += 24;
          }
          while ( v21 != v22 );
          if ( !v20 )
            goto LABEL_38;
          goto LABEL_64;
        }
        if ( 2LL * (_QWORD)v58 != 2 )
        {
LABEL_64:
          v59[0] = (void *)qvector_reserve(v59, 0, v20, 1);
          v19 = (char *)v57;
          v21 = (char *)v57 + 24 * v58;
          if ( v57 == v21 )
            goto LABEL_42;
          do
          {
LABEL_38:
            v29 = v59[1];
            if ( v59[1] > (char *)&dword_0 + 1 )
            {
              v30 = v59[0];
              v31 = (char *)v59[1] - 1;
              v32 = (char *)v59[1] + 2;
              if ( v59[2] < (char *)v59[1] + 2 )
              {
                v49 = (char *)v59[1] - 1;
                v47 = (char *)v59[1] + 2;
                v59[0] = (void *)qvector_reserve(v59, v59[0], v32, 1);
                v31 = v49;
                v30 = v59[0];
                v32 = v47;
              }
              v59[1] = v32;
              v29[(_QWORD)v30 + 1] = 0;
              *(_WORD *)((char *)v59[0] + (unsigned __int64)v31) = 8236;
            }
            v24 = *((char **)v19 + 1);
            if ( v24 )
            {
              v25 = (size_t)(v24 - 1);
              if ( v24 != (_BYTE *)&dword_0 + 1 )
              {
                v26 = (char *)v59[1];
                v27 = v24 - 1;
                if ( v59[1] )
                {
                  v26 = (char *)v59[1] - 1;
                  v27 = (char *)v59[1] + v25 - 1;
                  v24 += (unsigned __int64)v59[1] - 1;
                }
                v28 = v59[0];
                if ( v59[2] < v24 )
                {
                  v51 = v27;
                  v50 = v25;
                  v48 = v24;
                  v59[0] = (void *)qvector_reserve(v59, v59[0], v24, 1);
                  v27 = v51;
                  v28 = v59[0];
                  v25 = v50;
                  v24 = v48;
                }
                v59[1] = v24;
                v27[(_QWORD)v28] = 0;
                memcpy(&v26[(unsigned __int64)v59[0]], *(const void **)v19, v25);
              }
            }
            v19 += 24;
          }
          while ( v21 != v19 );
        }
      }
LABEL_42:
      v54 = v53;
      sub_7BE710(&v54, a2, 1, 65);
      v33 = (char **)sub_498150(a3);
      sub_42D250((__int64)v61, v11, nullptr, 1, v34, v35);
      sub_35A790(v33);
      if ( v59[0] )
      {
        v59[1] = nullptr;
        qfree(v59[0]);
      }
      v36 = (char *)v57;
      if ( v57 )
      {
        v37 = v58;
        if ( (_QWORD)v58 )
        {
          v38 = 0;
          do
          {
            v39 = &v36[24 * v38];
            v40 = *(void **)v39;
            if ( *(_QWORD *)v39 )
            {
              *((_QWORD *)v39 + 1) = 0;
              qfree(v40);
              v36 = (char *)v57;
            }
            ++v38;
          }
          while ( v37 != v38 );
        }
        *(_QWORD *)&v58 = 0;
        qfree(v36);
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      goto LABEL_10;
    }
  }
  return v62 - __readfsqword(0x28u);
}
