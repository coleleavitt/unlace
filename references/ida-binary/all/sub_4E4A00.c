unsigned __int64 __fastcall sub_4E4A00(__int64 a1)
{
  char **p_s2; // rsi
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rbx
  __m128i *v6; // rbp
  unsigned __int64 v7; // r14
  _BYTE *v8; // r14
  size_t v9; // r12
  __m128i si128; // xmm0
  __int64 v11; // r14
  size_t v12; // r12
  __int64 v13; // rdi
  __m128i v14; // xmm0
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  char **v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  char *v21; // r12
  _BYTE *v22; // r12
  size_t v23; // r13
  __m128i v24; // xmm0
  _DWORD *v25; // rdi
  char *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 v30; // rdi
  char *v32; // r12
  size_t v33; // rax
  size_t v34; // r13
  __int64 v35; // rdx
  _BYTE *v36; // rcx
  size_t v37; // r12
  void *v38; // r13
  void *v39; // r14
  void *v40; // rax
  __int64 v41; // rax
  void (__fastcall ***v42)(void *); // rbx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int8 *v45; // r10
  __int32 v46; // eax
  __int32 v47; // eax
  __m128i v48; // xmm0
  __int64 v49; // rax
  void (__fastcall *v50)(void *); // rdx
  void (__fastcall *v51)(void *); // rax
  void (__fastcall ***v52)(void *); // r12
  void (__fastcall *v53)(void *); // rdx
  void (__fastcall *v54)(void *); // rax
  char **v55; // r8
  void *v56; // rdi
  _BYTE *v57; // rax
  _BYTE *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rbx
  char *v63; // rdi
  char *v64; // rdi
  const char *v65; // rsi
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rbp
  __int64 v69; // rbx
  __int64 v70; // rdi
  char *v71; // rdx
  char *v72; // rdi
  char *v73; // rdi
  void *v74; // rax
  void (__fastcall ***v75)(void *); // r12
  void (__fastcall *v76)(void *); // rdx
  void (__fastcall *v77)(void *); // rax
  __int64 v78; // rdx
  const char *v79; // rdi
  __int64 v80; // rax
  void *v81; // rdi
  size_t v82; // rbp
  __int64 v83; // rsi
  __int64 v84; // rdx
  __int64 v85; // rax
  void *src[2]; // [rsp+0h] [rbp-148h] BYREF
  char *v87; // [rsp+10h] [rbp-138h]
  __int32 v88; // [rsp+18h] [rbp-130h]
  __int32 v89; // [rsp+1Ch] [rbp-12Ch]
  __int64 v90; // [rsp+20h] [rbp-128h]
  __int8 *v91; // [rsp+28h] [rbp-120h]
  void *dest; // [rsp+30h] [rbp-118h] BYREF
  __int128 v93; // [rsp+38h] [rbp-110h]
  __int64 v94; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v95; // [rsp+58h] [rbp-F0h]
  __int64 v96; // [rsp+68h] [rbp-E0h]
  __int128 v97; // [rsp+70h] [rbp-D8h]
  char v98; // [rsp+80h] [rbp-C8h]
  char *s2; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v100; // [rsp+98h] [rbp-B0h]
  __int64 v101; // [rsp+A8h] [rbp-A0h]
  _BYTE *v102; // [rsp+B0h] [rbp-98h]
  __m128i v103; // [rsp+B8h] [rbp-90h]
  void *ptr; // [rsp+D0h] [rbp-78h] BYREF
  char *s[2]; // [rsp+D8h] [rbp-70h]
  __int64 v106; // [rsp+E8h] [rbp-60h]
  _BYTE *v107; // [rsp+F0h] [rbp-58h]
  __m128i v108; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v109; // [rsp+108h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 1680) & 4) != 0 )
    return v109 - __readfsqword(0x28u);
  v94 = 0;
  v87 = (char *)&v94;
  p_s2 = (char **)&v94;
  v3 = *(_QWORD *)a1;
  v96 = 0;
  v98 = 0;
  v95 = 0;
  v97 = 0;
  (*(void (__fastcall **)(__int64, __int64 *, __int64))(v3 + 208))(a1, &v94, 7);
  v4 = *(_BYTE *)(a1 + 1120) == 0;
  dest = nullptr;
  v93 = 0;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 1112);
    if ( v5 )
    {
      sub_51D560(&s2, *(_QWORD *)(a1 + 1112));
      p_s2 = &s2;
      QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)&s2);
      v32 = s[0];
      if ( (s[0] || (v32 = (char *)&QT::QByteArray::_empty) != nullptr) && (v33 = strlen(v32), (v34 = v33) != 0) )
      {
        v81 = dest;
        v82 = v33 + 1;
        if ( *((_QWORD *)&v93 + 1) < v33 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v82, 1);
          v81 = dest;
        }
        p_s2 = (char **)v32;
        *(_QWORD *)&v93 = v82;
        memmove(v81, v32, v34);
        *((_BYTE *)dest + v34) = 0;
      }
      else
      {
        *(_QWORD *)&v93 = 0;
      }
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( s2 && !_InterlockedSub((volatile signed __int32 *)s2, 1u) )
        free(s2);
    }
  }
  else
  {
    v5 = 0;
  }
  v6 = *(__m128i **)(a1 + 1848);
  if ( *(_QWORD *)(a1 + 1856) && v6->m128i_i32[0] < 0 )
  {
    s2 = nullptr;
    v101 = 0;
    v102 = nullptr;
    v100 = 0;
    v103 = 0;
    if ( v6 )
    {
      if ( &v6[2].m128i_u64[1] != (unsigned __int64 *)&s2 )
      {
        v7 = v6[3].m128i_u64[0];
        if ( v7 > 1 )
        {
          v78 = v6[3].m128i_i64[0];
          src[0] = (void *)v6[2].m128i_i64[1];
          p_s2 = (char **)src[0];
          s2 = (char *)qvector_reserve(&s2, 0, v78, 1);
          *(_QWORD *)&v100 = v7;
          memmove(s2, src[0], v7 - 1);
          s2[v7 - 1] = 0;
        }
      }
      v8 = nullptr;
      LODWORD(v101) = v6->m128i_i32[0] & 0xFFFFFFBF;
      v9 = v6[1].m128i_u64[0];
      if ( v9 )
      {
        v57 = (_BYTE *)qalloc_or_throw(v6[1].m128i_i64[0]);
        p_s2 = (char **)v6->m128i_i64[1];
        v8 = v57;
        memcpy(v57, p_s2, v9);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
      if ( v102 )
      {
        *(__m128i *)src = si128;
        v103.m128i_i64[0] = 0;
        qfree(v102, (const char *)p_s2);
        si128 = _mm_load_si128((const __m128i *)src);
      }
      v102 = v8;
      v103 = si128;
      if ( (v6->m128i_i8[0] & 0x40) != 0 && s2 )
      {
        *(_QWORD *)&v100 = 0;
        qfree(s2, (const char *)p_s2);
        s2 = nullptr;
        *((_QWORD *)&v100 + 1) = 0;
      }
      v11 = 0;
      v6->m128i_i32[0] = *(_DWORD *)(v5 + 104);
      v12 = *(_QWORD *)(v5 + 120);
      if ( v12 )
      {
        v74 = (void *)qalloc_or_throw(*(_QWORD *)(v5 + 120));
        p_s2 = *(char ***)(v5 + 112);
        v11 = (__int64)v74;
        memcpy(v74, p_s2, v12);
      }
      v13 = v6->m128i_i64[1];
      v14 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
      if ( v13 )
      {
        v6[1].m128i_i64[0] = 0;
        *(__m128i *)src = v14;
        qfree(v13, (const char *)p_s2);
        v14 = _mm_load_si128((const __m128i *)src);
      }
      v6->m128i_i64[1] = v11;
      v6[1] = v14;
      v6[2].m128i_i32[0] = *(_DWORD *)(v5 + 136);
      if ( &v6[2].m128i_u64[1] != (unsigned __int64 *)(v5 + 144) )
      {
        v15 = *(_QWORD *)(v5 + 152);
        if ( v15 > 1 )
        {
          v55 = *(char ***)(v5 + 144);
          v56 = (void *)v6[2].m128i_i64[1];
          if ( v6[3].m128i_i64[1] < v15 )
          {
            v83 = v6[2].m128i_i64[1];
            v84 = *(_QWORD *)(v5 + 152);
            src[0] = *(void **)(v5 + 144);
            v85 = qvector_reserve(&v6[2].m128i_u64[1], v83, v84, 1);
            v6[2].m128i_i64[1] = v85;
            v55 = (char **)src[0];
            v56 = (void *)v85;
          }
          v6[3].m128i_i64[0] = v15;
          p_s2 = v55;
          memmove(v56, v55, v15 - 1);
          *(_BYTE *)(v6[2].m128i_i64[1] + v15 - 1) = 0;
        }
        else
        {
          v6[3].m128i_i64[0] = 0;
        }
      }
      v16 = v6[4].m128i_i64[1];
      v6[4].m128i_i64[0] = *(_QWORD *)(v5 + 168);
      if ( v16 )
      {
        v4 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v4 )
        {
          v52 = (void (__fastcall ***)(void *))v6[4].m128i_i64[1];
          v53 = **v52;
          if ( v53 == refcnted_regex_t__::vfunc_0 )
          {
            if ( v52 )
            {
              v54 = (*v52)[2];
              if ( (char *)v54 == (char *)refcnted_regex_t__::vfunc_2 )
              {
                *v52 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
                qregfree(v52 + 2);
                p_s2 = (char **)&dword_30;
                operator delete(v52, 0x30u);
              }
              else
              {
                v54((void *)v6[4].m128i_i64[1]);
              }
            }
          }
          else
          {
            v53((void *)v6[4].m128i_i64[1]);
          }
        }
      }
      v17 = *(_QWORD *)(v5 + 176);
      v6[4].m128i_i64[1] = v17;
      if ( v17 )
        ++*(_DWORD *)(v17 + 8);
      goto LABEL_26;
    }
  }
  else
  {
    s2 = nullptr;
    v101 = 0;
    v102 = nullptr;
    v100 = 0;
    v103 = 0;
  }
  v37 = *(_QWORD *)(v5 + 120);
  v38 = nullptr;
  v88 = *(_DWORD *)(v5 + 104);
  if ( v37 )
  {
    v38 = (void *)qalloc_or_throw(v37);
    memcpy(v38, *(const void **)(v5 + 112), v37);
  }
  v39 = nullptr;
  v89 = *(_DWORD *)(v5 + 136);
  v40 = *(void **)(v5 + 152);
  src[0] = v40;
  if ( v40 )
  {
    v39 = (void *)qalloc_or_throw(v40);
    memcpy(v39, *(const void **)(v5 + 144), (size_t)src[0]);
  }
  v41 = *(_QWORD *)(v5 + 168);
  v42 = *(void (__fastcall ****)(void *))(v5 + 176);
  v90 = v41;
  if ( v42 )
    ++*((_DWORD *)v42 + 2);
  v43 = *(_QWORD *)(a1 + 1848);
  v44 = *(_QWORD *)(a1 + 1856);
  v45 = &v6->m128i_i8[-v43];
  if ( *(_QWORD *)(a1 + 1864) < (unsigned __int64)(v44 + 1) )
  {
    v91 = &v6->m128i_i8[-v43];
    v80 = qvector_reserve(a1 + 1848, v43, v44 + 1, 80);
    v45 = &v6->m128i_i8[-v43];
    *(_QWORD *)(a1 + 1848) = v80;
    v6 = (__m128i *)((char *)v6 + v80 - v43);
    v44 = *(_QWORD *)(a1 + 1856);
  }
  p_s2 = (char **)v6;
  memmove(&v6[5], v6, 80 * v44 - (_QWORD)v45);
  v46 = v88;
  v6->m128i_i64[1] = (__int64)v38;
  v6[2].m128i_i64[1] = (__int64)v39;
  v6->m128i_i32[0] = v46;
  v47 = v89;
  v6[1] = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
  v48 = _mm_loadl_epi64((const __m128i *)src);
  v6[2].m128i_i32[0] = v47;
  v49 = v90;
  v14 = _mm_unpacklo_epi64(v48, v48);
  v6[4].m128i_i64[1] = (__int64)v42;
  v6[4].m128i_i64[0] = v49;
  v6[3] = v14;
  if ( v42 )
  {
    ++*((_DWORD *)v42 + 2);
    ++*(_QWORD *)(a1 + 1856);
    v4 = (*((_DWORD *)v42 + 2))-- == 1;
    if ( v4 )
    {
      v50 = **v42;
      if ( v50 == refcnted_regex_t__::vfunc_0 )
      {
        v51 = (*v42)[2];
        if ( (char *)v51 == (char *)refcnted_regex_t__::vfunc_2 )
        {
          *v42 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
          qregfree(v42 + 2);
          p_s2 = (char **)&dword_30;
          operator delete(v42, 0x30u);
        }
        else
        {
          v51(v42);
        }
      }
      else
      {
        v50(v42);
      }
    }
  }
  else
  {
    ++*(_QWORD *)(a1 + 1856);
  }
LABEL_26:
  v18 = *(char ***)(a1 + 1848);
  if ( (unsigned __int64)v93 <= 1 )
  {
    v71 = v18[9];
    if ( v71 )
    {
      v4 = (*((_DWORD *)v71 + 2))-- == 1;
      if ( v4 )
      {
        v75 = (void (__fastcall ***)(void *))v18[9];
        v76 = **v75;
        if ( v76 == refcnted_regex_t__::vfunc_0 )
        {
          if ( v75 )
          {
            v77 = (*v75)[2];
            if ( (char *)v77 == (char *)refcnted_regex_t__::vfunc_2 )
            {
              *v75 = (void (__fastcall **)(void *))&refcnted_regex_t___vtable;
              qregfree(v75 + 2);
              p_s2 = (char **)&dword_30;
              operator delete(v75, 0x30u);
            }
            else
            {
              v77(v18[9]);
            }
          }
        }
        else
        {
          v76(v18[9]);
        }
      }
    }
    v72 = v18[5];
    if ( v72 )
    {
      v18[6] = nullptr;
      *(double *)v14.m128i_i64 = qfree(v72, (const char *)p_s2);
    }
    v73 = v18[1];
    if ( v73 )
    {
      v18[2] = nullptr;
      qfree(v73, (const char *)p_s2, *(double *)v14.m128i_i64);
    }
    p_s2 = v18 + 10;
    memmove(v18, v18 + 10, *(_QWORD *)(a1 + 1848) + 80LL * *(_QWORD *)(a1 + 1856) - (_QWORD)v18 - 80);
    v19 = *(_QWORD *)(a1 + 1856) - 1LL;
    *(_QWORD *)(a1 + 1856) = v19;
LABEL_30:
    if ( v19 && (v20 = *(_QWORD *)(a1 + 1848), *(int *)v20 < 0) )
    {
      ptr = nullptr;
      v106 = 0;
      v107 = nullptr;
      *(_OWORD *)s = 0;
      v108 = 0;
      if ( v20 )
      {
        if ( &ptr != (void **)(v20 + 40) )
        {
          v21 = *(char **)(v20 + 48);
          if ( (unsigned __int64)v21 >= 2 )
          {
            p_s2 = *(char ***)(v20 + 40);
            ptr = (void *)qvector_reserve(&ptr, 0, *(_QWORD *)(v20 + 48), 1);
            s[0] = v21;
            memmove(ptr, p_s2, (size_t)(v21 - 1));
            v21[(_QWORD)ptr - 1] = 0;
          }
        }
        v22 = nullptr;
        LODWORD(v106) = *(_DWORD *)v20 & 0xFFFFFFBF;
        v23 = *(_QWORD *)(v20 + 16);
        if ( v23 )
        {
          v58 = (_BYTE *)qalloc_or_throw(*(_QWORD *)(v20 + 16));
          p_s2 = *(char ***)(v20 + 8);
          v22 = v58;
          memcpy(v58, p_s2, v23);
        }
        v24 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
        if ( v107 )
        {
          *(__m128i *)src = v24;
          v108.m128i_i64[0] = 0;
          qfree(v107, (const char *)p_s2);
          v24 = _mm_load_si128((const __m128i *)src);
        }
        v107 = v22;
        v108 = v24;
        if ( (*(_DWORD *)v20 & 0x40) != 0 )
        {
          if ( ptr )
          {
            s[0] = nullptr;
            qfree(ptr, (const char *)p_s2);
            ptr = nullptr;
            s[1] = nullptr;
            if ( (_DWORD)v106 != (_DWORD)v101 )
              goto LABEL_114;
            v22 = v107;
            v23 = v108.m128i_i64[0];
          }
          else if ( (_DWORD)v106 != (_DWORD)v101 )
          {
            goto LABEL_43;
          }
        }
        else if ( (_DWORD)v106 != (_DWORD)v101 )
        {
          if ( (~(unsigned __int8)*(_DWORD *)v20 & 3) != 0 )
            goto LABEL_43;
LABEL_116:
          v60 = operator new(0x10u);
          v61 = *(_QWORD *)(a1 + 1872);
          *(_DWORD *)(v60 + 8) = 1;
          v62 = v60;
          *(_QWORD *)v60 = bucket_fuzzy_sorting_t___vtable;
          if ( v61 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 8LL))(v61);
          *(_QWORD *)(a1 + 1872) = v62;
          goto LABEL_46;
        }
        v35 = v103.m128i_i64[0];
        if ( v23 != v103.m128i_i64[0] )
          goto LABEL_114;
        v36 = v102;
LABEL_109:
        if ( v35 )
        {
          v59 = 0;
          while ( v22[v59] == v36[v59] )
          {
            if ( ++v59 == v35 )
              goto LABEL_152;
          }
          goto LABEL_113;
        }
LABEL_152:
        if ( (_QWORD)v100 )
        {
          v26 = s2;
          v79 = &s1;
          if ( !s[0] )
            goto LABEL_155;
        }
        else
        {
          v26 = (char *)&s1;
          if ( !s[0] )
            goto LABEL_47;
        }
        v79 = (const char *)ptr;
LABEL_155:
        if ( !strcmp(v79, v26) )
          goto LABEL_47;
LABEL_113:
        if ( !v20 )
          goto LABEL_43;
LABEL_114:
        if ( (~(unsigned __int8)*(_DWORD *)v20 & 3) == 0 && (*(_DWORD *)v20 & 0x40) == 0 )
          goto LABEL_116;
LABEL_43:
        v25 = *(_DWORD **)(a1 + 1872);
        if ( v25 && v25[2] == 1 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v25 + 8LL))(v25);
          *(_QWORD *)(a1 + 1872) = 0;
        }
LABEL_46:
        v26 = v87;
        sub_4DF9D0(a1, (__int64)v87, 0);
LABEL_47:
        if ( v107 )
        {
          v108.m128i_i64[0] = 0;
          qfree(v107, v26);
        }
        if ( ptr )
        {
          s[0] = nullptr;
          qfree(ptr, v26);
        }
        if ( v102 )
        {
          v103.m128i_i64[0] = 0;
          qfree(v102, v26);
        }
        if ( s2 )
        {
          *(_QWORD *)&v100 = 0;
          qfree(s2, v26);
        }
        if ( dest )
        {
          *(_QWORD *)&v93 = 0;
          qfree(dest, v26);
        }
        if ( v96 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 8LL))(v96);
        v27 = v94;
        if ( v94 )
        {
          v28 = v95;
          if ( (_QWORD)v95 )
          {
            v29 = 0;
            do
            {
              v30 = *(_QWORD *)(v27 + 32 * v29);
              if ( v30 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
                v27 = v94;
              }
              ++v29;
            }
            while ( v28 != v29 );
          }
          *(_QWORD *)&v95 = 0;
          qfree(v27, v26);
        }
        return v109 - __readfsqword(0x28u);
      }
    }
    else
    {
      ptr = nullptr;
      v106 = 0;
      v107 = nullptr;
      *(_OWORD *)s = 0;
      v108 = 0;
    }
    if ( (_DWORD)v101 )
      goto LABEL_43;
    v35 = v103.m128i_i64[0];
    if ( v103.m128i_i64[0] != v108.m128i_i64[0] )
      goto LABEL_43;
    v22 = v107;
    v36 = v102;
    v20 = 0;
    goto LABEL_109;
  }
  if ( (*(_DWORD *)v18 & 3u) - 1 > 1 || v18[9] )
  {
    v19 = *(_QWORD *)(a1 + 1856);
    goto LABEL_30;
  }
  v63 = v18[5];
  if ( v63 )
  {
    v18[6] = nullptr;
    *(double *)v14.m128i_i64 = qfree(v63, (const char *)p_s2);
  }
  v64 = v18[1];
  if ( v64 )
  {
    v18[2] = nullptr;
    *(double *)v14.m128i_i64 = qfree(v64, (const char *)p_s2, *(double *)v14.m128i_i64);
  }
  v65 = (const char *)(v18 + 10);
  memmove(v18, v18 + 10, *(_QWORD *)(a1 + 1848) + 80LL * *(_QWORD *)(a1 + 1856) - (_QWORD)v18 - 80);
  v66 = v102;
  --*(_QWORD *)(a1 + 1856);
  if ( v66 )
  {
    v103.m128i_i64[0] = 0;
    *(double *)v14.m128i_i64 = qfree(v66, v65, *(double *)v14.m128i_i64);
  }
  if ( s2 )
  {
    *(_QWORD *)&v100 = 0;
    *(double *)v14.m128i_i64 = qfree(s2, v65, *(double *)v14.m128i_i64);
  }
  if ( dest )
  {
    *(_QWORD *)&v93 = 0;
    *(double *)v14.m128i_i64 = qfree(dest, v65, *(double *)v14.m128i_i64);
  }
  if ( v96 )
    (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v96 + 8LL))(v96, *(double *)v14.m128i_i64);
  v67 = v94;
  if ( v94 )
  {
    v68 = v95;
    if ( (_QWORD)v95 )
    {
      v69 = 0;
      do
      {
        v70 = *(_QWORD *)(v67 + 32 * v69);
        if ( v70 )
        {
          (*(void (__fastcall **)(__int64, double))(*(_QWORD *)v70 + 8LL))(v70, *(double *)v14.m128i_i64);
          v67 = v94;
        }
        ++v69;
      }
      while ( v68 != v69 );
    }
    *(_QWORD *)&v95 = 0;
    qfree(v67, v65, *(double *)v14.m128i_i64);
  }
  return v109 - __readfsqword(0x28u);
}
