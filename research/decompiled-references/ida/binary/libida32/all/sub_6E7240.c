unsigned __int64 __fastcall sub_6E7240(_QWORD *a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // rsi
  char *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  char *v10; // rdi
  char *v11; // rbp
  size_t v12; // rax
  size_t v13; // r15
  size_t v14; // r13
  char *v15; // rax
  const char *v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // r15
  const char *v20; // rdi
  size_t v21; // rax
  size_t v22; // r13
  char *v23; // rsi
  __int64 *v24; // rax
  unsigned __int64 v25; // rsi
  char *v26; // rcx
  char *v27; // rsi
  const char *numbered_type_name; // rax
  const char *v29; // rbp
  size_t v30; // rax
  size_t v31; // r13
  unsigned __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // r14
  size_t v35; // rax
  size_t v36; // r15
  size_t v37; // rax
  size_t v38; // rbp
  char *v39; // rdi
  size_t v40; // r14
  char *v41; // rdi
  size_t v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  char *v45; // r15
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rsi
  __m128i v49; // xmm0
  __int64 v50; // rsi
  __m128i v51; // xmm0
  void *v52; // rdi
  void *v53; // rdi
  void *v55; // rdi
  size_t v56; // r15
  void *v57; // rdi
  size_t v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // [rsp+0h] [rbp-B8h]
  __int64 v62; // [rsp+0h] [rbp-B8h]
  size_t v63; // [rsp+0h] [rbp-B8h]
  char *v65; // [rsp+10h] [rbp-A8h]
  __int64 v66; // [rsp+20h] [rbp-98h]
  __int64 v67; // [rsp+20h] [rbp-98h]
  __int64 v68; // [rsp+28h] [rbp-90h]
  unsigned int v69; // [rsp+3Ch] [rbp-7Ch] BYREF
  char *s; // [rsp+40h] [rbp-78h] BYREF
  __int128 v71; // [rsp+48h] [rbp-70h]
  char *v72; // [rsp+60h] [rbp-58h] BYREF
  __int128 v73; // [rsp+68h] [rbp-50h]
  unsigned __int64 v74; // [rsp+78h] [rbp-40h]

  v5 = *a2;
  v74 = __readfsqword(0x28u);
  v71 = 0;
  s = nullptr;
  if ( (v5 & 0x100) == 0 )
    goto LABEL_2;
  if ( !get_tinfo_pdata(&s, v5, 0) )
  {
LABEL_35:
    if ( (_QWORD)v71 )
    {
      v6 = s;
LABEL_3:
      v7 = sub_6E6D70(a1, a2, (__int64)v6, a3);
      if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
        v7 = sub_6D3D30((__int64)a1, a2, v7);
      goto LABEL_5;
    }
LABEL_2:
    v6 = (char *)haystack;
    goto LABEL_3;
  }
  v10 = (char *)haystack;
  if ( (_QWORD)v71 )
    v10 = s;
  if ( !(unsigned __int8)is_ordinal_name(v10, &v69) )
  {
LABEL_12:
    v11 = s;
    if ( (_QWORD)v71 )
      goto LABEL_13;
    goto LABEL_47;
  }
  numbered_type_name = (const char *)get_numbered_type_name(0, v69);
  v29 = numbered_type_name;
  if ( numbered_type_name )
  {
    v30 = strlen(numbered_type_name);
    v31 = v30;
    if ( v30 )
    {
      v41 = s;
      v42 = v30 + 1;
      if ( *((_QWORD *)&v71 + 1) < v30 + 1 )
      {
        s = (char *)qvector_reserve(&s, s, v30 + 1, 1);
        v41 = s;
      }
      *(_QWORD *)&v71 = v42;
      memmove(v41, v29, v31);
      s[v31] = 0;
      goto LABEL_12;
    }
  }
  *(_QWORD *)&v71 = 0;
LABEL_47:
  v11 = (char *)haystack;
LABEL_13:
  v72 = nullptr;
  v73 = 0;
  if ( v11 )
  {
    v12 = strlen(v11);
    v13 = v12 + 1;
    v14 = v12;
    v15 = (char *)qvector_reserve(&v72, 0, v12 + 1, 1);
    *(_QWORD *)&v73 = v13;
    v72 = v15;
    memmove(v15, v11, v14);
    v72[v14] = 0;
  }
  sub_4B67F0((__int64)&v72);
  v65 = v72;
  v16 = v72;
  if ( !(_QWORD)v73 )
    v16 = haystack;
  if ( strcmp(v16, v11) )
  {
    v17 = a1[71];
    if ( v17 )
    {
      v18 = a1[70];
      v19 = 0;
      while ( 1 )
      {
        v61 = v18;
        v20 = haystack;
        if ( *(_QWORD *)(v18 + 8) )
          v20 = *(const char **)v18;
        if ( !strcmp(v20, v11) )
          break;
        ++v19;
        v18 += 56;
        if ( v19 == v17 )
          goto LABEL_48;
      }
    }
    else
    {
LABEL_48:
      v32 = a1[72];
      if ( v32 < v17 + 1 )
      {
        v43 = qvector_reserve(a1 + 70, 0, v17 + 1, 56);
        v44 = a1[72];
        v45 = (char *)a1[70];
        a1[72] = v32;
        v62 = v43;
        v68 = v44;
        v46 = a1[71] - 1LL;
        if ( v46 >= 0 )
        {
          v47 = v43;
          do
          {
            v48 = *(_QWORD *)v45;
            v49 = _mm_loadu_si128((const __m128i *)(v45 + 8));
            *(_QWORD *)v45 = 0;
            *(_OWORD *)(v45 + 8) = 0;
            *(_QWORD *)v47 = v48;
            *(__m128i *)(v47 + 8) = v49;
            v50 = *((_QWORD *)v45 + 3);
            v51 = _mm_loadu_si128((const __m128i *)v45 + 2);
            *((_QWORD *)v45 + 3) = 0;
            *(_QWORD *)(v47 + 24) = v50;
            *(__m128i *)(v47 + 32) = v51;
            LODWORD(v50) = *((_DWORD *)v45 + 12);
            *((_QWORD *)v45 + 5) = 0;
            *(_DWORD *)(v47 + 48) = v50;
            v52 = *((void **)v45 + 3);
            if ( v52 )
            {
              *((_QWORD *)v45 + 4) = 0;
              v66 = v46;
              qfree(v52);
              v46 = v66;
            }
            v53 = *(void **)v45;
            if ( *(_QWORD *)v45 )
            {
              *((_QWORD *)v45 + 1) = 0;
              v67 = v46;
              qfree(v53);
              v46 = v67;
            }
            v45 += 56;
            v47 += 56;
          }
          while ( v46-- != 0 );
          v45 = (char *)a1[70];
        }
        qfree(v45);
        a1[70] = v62;
        a1[72] = v68;
        v33 = a1[71];
      }
      else
      {
        v62 = a1[70];
        v33 = v17;
      }
      v34 = v62 + 56 * v33;
      *(_QWORD *)v34 = 0;
      *(_QWORD *)(v34 + 24) = 0;
      *(_DWORD *)(v34 + 48) = 0;
      *(_OWORD *)(v34 + 8) = 0;
      *(_OWORD *)(v34 + 32) = 0;
      ++a1[71];
      if ( v11 && (v35 = strlen(v11), (v36 = v35) != 0) )
      {
        v57 = *(void **)v34;
        v58 = v35 + 1;
        if ( *(_QWORD *)(v34 + 16) < v35 + 1 )
        {
          v63 = v35 + 1;
          v60 = qvector_reserve(v34, *(_QWORD *)v34, v58, 1);
          v58 = v63;
          *(_QWORD *)v34 = v60;
          v57 = (void *)v60;
        }
        *(_QWORD *)(v34 + 8) = v58;
        memmove(v57, v11, v36);
        *(_BYTE *)(*(_QWORD *)v34 + v36) = 0;
      }
      else
      {
        *(_QWORD *)(v34 + 8) = 0;
      }
      if ( v65 && (v37 = strlen(v65), (v38 = v37) != 0) )
      {
        v55 = *(void **)(v34 + 24);
        v56 = v37 + 1;
        if ( *(_QWORD *)(v34 + 40) < v37 + 1 )
        {
          v59 = qvector_reserve(v34 + 24, *(_QWORD *)(v34 + 24), v56, 1);
          *(_QWORD *)(v34 + 24) = v59;
          v55 = (void *)v59;
        }
        *(_QWORD *)(v34 + 32) = v56;
        memmove(v55, v65, v38);
        *(_BYTE *)(*(_QWORD *)(v34 + 24) + v38) = 0;
      }
      else
      {
        *(_QWORD *)(v34 + 32) = 0;
      }
      *(_DWORD *)(v34 + 48) = 0;
      v61 = a1[70] + 56 * v17;
      v65 = v72;
    }
    v11 = *(char **)(v61 + 24);
  }
  if ( v65 )
  {
    *(_QWORD *)&v73 = 0;
    qfree(v65);
  }
  if ( v11 && (v21 = strlen(v11), (v22 = v21) != 0) )
  {
    v39 = s;
    v40 = v21 + 1;
    if ( *((_QWORD *)&v71 + 1) < v21 + 1 )
    {
      s = (char *)qvector_reserve(&s, s, v21 + 1, 1);
      v39 = s;
    }
    *(_QWORD *)&v71 = v40;
    memmove(v39, v11, v22);
    s[v22] = 0;
    if ( (_QWORD)v71 )
    {
      v23 = s;
      goto LABEL_31;
    }
  }
  else
  {
    *(_QWORD *)&v71 = 0;
  }
  v23 = (char *)haystack;
LABEL_31:
  v24 = sub_6D3920(a1, v23);
  if ( !v24 )
    goto LABEL_35;
  if ( *((_DWORD *)v24 + 2) == 1 && a3 == 2 )
  {
    v25 = *v24;
    if ( (*(_BYTE *)(*v24 + 28) & 0x7Fu) - 59 > 2 || !v25 )
    {
      if ( !under_debugger )
        interr(3406);
      BUG();
    }
    v26 = (char *)haystack;
    if ( (_QWORD)v71 )
      v26 = s;
    sub_6E54E0(a1, v25, a2, v26);
    v27 = (char *)haystack;
    if ( (_QWORD)v71 )
      v27 = s;
    v24 = sub_6D3920(a1, v27);
  }
  v7 = sub_6D3C30((__int64)a1, v24);
  if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    goto LABEL_35;
LABEL_5:
  v8 = v7;
  if ( s )
  {
    *(_QWORD *)&v71 = 0;
    qfree(s);
  }
  return v8;
}

