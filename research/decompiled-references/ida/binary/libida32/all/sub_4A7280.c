unsigned __int64 __fastcall sub_4A7280(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rbp
  unsigned int place_class_id; // eax
  __int64 place_class; // rax
  __int64 v8; // rbx
  int v9; // r15d
  void *v10; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // ebp
  const char *v16; // rsi
  __int64 j; // rax
  __int64 v18; // rdx
  char *v19; // rsi
  const char *v20; // rcx
  char *v21; // rax
  size_t v22; // r15
  void *v23; // rbx
  char *v24; // rbx
  __int64 v25; // rdx
  char *v26; // r14
  char *v27; // rax
  __int64 v28; // rcx
  char *v29; // rdx
  size_t v30; // r9
  char *v31; // r8
  char *v32; // r10
  void *v33; // rsi
  _BYTE *v34; // r8
  void *v35; // rsi
  char *v36; // r9
  char *v37; // rdx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // r14
  char *v43; // rdx
  __int64 v44; // r14
  __int64 v45; // rbx
  char *v46; // rax
  void *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // r14
  unsigned int i; // ebx
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  char *v59; // [rsp+10h] [rbp-148h]
  char *v60; // [rsp+10h] [rbp-148h]
  _BYTE *v61; // [rsp+18h] [rbp-140h]
  size_t v62; // [rsp+18h] [rbp-140h]
  char *v63; // [rsp+20h] [rbp-138h]
  char *v64; // [rsp+20h] [rbp-138h]
  char *v65; // [rsp+38h] [rbp-120h]
  int v66; // [rsp+44h] [rbp-114h] BYREF
  unsigned int v67; // [rsp+48h] [rbp-110h] BYREF
  unsigned int v68; // [rsp+4Ch] [rbp-10Ch] BYREF
  void *src; // [rsp+50h] [rbp-108h] BYREF
  size_t n[3]; // [rsp+58h] [rbp-100h]
  void *v71; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v72; // [rsp+78h] [rbp-E0h]
  void *v73[5]; // [rsp+90h] [rbp-C8h] BYREF
  void *ptr; // [rsp+B8h] [rbp-A0h]
  _BYTE v75[88]; // [rsp+C0h] [rbp-98h] BYREF
  unsigned __int64 v76; // [rsp+118h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  v5 = sub_543260(a2);
  sub_79BBF0(&v67, a2, "$ BMARKS ", 0, 0);
  if ( v67 == -1 )
    goto LABEL_6;
  place_class_id = get_place_class_id("tiplace_t");
  place_class = get_place_class(0, 0, place_class_id);
  v8 = place_class;
  if ( !place_class )
    goto LABEL_6;
  v73[3] = (void *)-1LL;
  v73[4] = nullptr;
  ptr = nullptr;
  memset(v73, 0, 24);
  ptr = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
  v9 = bookmarks_t_size(v73, v5);
  if ( v9 )
  {
    v49 = a3[1];
    v50 = *a3;
    if ( a3[2] < (unsigned __int64)(v49 + 1) )
    {
      v57 = qvector_reserve(a3, v50, v49 + 1, 24);
      *a3 = v57;
      v49 = a3[1];
      v50 = v57;
    }
    v51 = v50 + 24 * v49;
    *(_QWORD *)v51 = 0;
    *(_OWORD *)(v51 + 8) = 0;
    ++a3[1];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
    sub_3573A0((char **)v51);
    for ( i = 0; i != v9; ++i )
    {
      v68 = i;
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( (unsigned __int8)bookmarks_t_get(v73, &src, &v68, v5) )
      {
        v71 = nullptr;
        v72 = 0;
        (**(void (__fastcall ***)(void *, void **, __int64))ptr)(ptr, &v71, v5);
        v54 = a3[1];
        v55 = *a3;
        if ( a3[2] < (unsigned __int64)(v54 + 1) )
        {
          v56 = qvector_reserve(a3, v55, v54 + 1, 24);
          *a3 = v56;
          v54 = a3[1];
          v55 = v56;
        }
        v53 = v55 + 24 * v54;
        *(_QWORD *)v53 = 0;
        *(_OWORD *)(v53 + 8) = 0;
        ++a3[1];
        sub_3573A0((char **)v53);
        if ( v71 )
        {
          *(_QWORD *)&v72 = 0;
          qfree(v71);
        }
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
    }
    v10 = ptr;
    if ( ptr )
      goto LABEL_5;
  }
  else
  {
    v10 = ptr;
    if ( ptr )
LABEL_5:
      qfree(v10);
  }
LABEL_6:
  sub_79BBF0(&v66, a2, "$ curlocs", 0, 0);
  if ( v66 != -1 )
  {
    sub_419620((__int64)v75, *(_QWORD **)(a2 + 1480));
    v12 = a3[1];
    v13 = *a3;
    if ( a3[2] < (unsigned __int64)(v12 + 1) )
    {
      v58 = qvector_reserve(a3, v13, v12 + 1, 24);
      v12 = a3[1];
      *a3 = v58;
      v13 = v58;
    }
    v14 = v13 + 24 * v12;
    *(_OWORD *)(v14 + 8) = 0;
    *(_QWORD *)v14 = 0;
    ++a3[1];
    sub_3573A0((char **)v14);
    v15 = sub_79B7E0(&v66, a2, 65);
    if ( v15 != -1 )
    {
      while ( 1 )
      {
        v67 = v15;
        if ( (unsigned __int8)sub_79B370(a2, &v67) )
          break;
LABEL_12:
        v15 = sub_79B840(&v66, a2, v15, 65);
        if ( v15 == -1 )
          return v76 - __readfsqword(0x28u);
      }
      v16 = (const char *)a2;
      src = nullptr;
      v71 = nullptr;
      *(_OWORD *)n = 0;
      v72 = 0;
      for ( j = sub_79C160(&v67, a2, &src, 72); j != -1; j = sub_79C1D0(&v67, a2, &src, v20, 72) )
      {
        v22 = n[0];
        v23 = nullptr;
        if ( n[0] )
        {
          v23 = (void *)qalloc_or_throw(n[0], v16);
          memcpy(v23, src, v22);
        }
        v18 = v72;
        v19 = (char *)v71;
        if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
        {
          v71 = (void *)qvector_reserve(&v71, v71, v72 + 1, 24);
          v18 = v72;
          v19 = (char *)v71;
        }
        v20 = haystack;
        v21 = &v19[24 * v18];
        *(_QWORD *)v21 = v23;
        *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
        *(_QWORD *)&v72 = v72 + 1;
        if ( n[0] )
          v20 = (const char *)src;
        v16 = (const char *)a2;
      }
      memset(v73, 0, 24);
      if ( (_QWORD)v72 )
      {
        v24 = (char *)v71;
        v25 = 2 * v72 - 2;
        v26 = (char *)v71 + 24 * v72;
        if ( v71 != v26 )
        {
          v27 = (char *)v71;
          do
          {
            v28 = *((_QWORD *)v27 + 1);
            if ( v28 )
              v25 = v25 + v28 - 1;
            v27 += 24;
          }
          while ( v27 != v26 );
          if ( !v25 )
            goto LABEL_40;
          goto LABEL_70;
        }
        if ( 2LL * (_QWORD)v72 != 2 )
        {
LABEL_70:
          v73[0] = (void *)qvector_reserve(v73, 0, v25, 1);
          v24 = (char *)v71;
          v26 = (char *)v71 + 24 * v72;
          if ( v71 == v26 )
            goto LABEL_44;
          do
          {
LABEL_40:
            v34 = v73[1];
            if ( v73[1] > (char *)&dword_0 + 1 )
            {
              v35 = v73[0];
              v36 = (char *)v73[1] - 1;
              v37 = (char *)v73[1] + 2;
              if ( v73[2] < (char *)v73[1] + 2 )
              {
                v63 = (char *)v73[1] - 1;
                v61 = v73[1];
                v59 = (char *)v73[1] + 2;
                v73[0] = (void *)qvector_reserve(v73, v73[0], v37, 1);
                v36 = v63;
                v35 = v73[0];
                v34 = v61;
                v37 = v59;
              }
              v73[1] = v37;
              v34[(_QWORD)v35 + 1] = 0;
              *(_WORD *)((char *)v73[0] + (unsigned __int64)v36) = 8236;
            }
            v29 = *((char **)v24 + 1);
            if ( v29 )
            {
              v30 = (size_t)(v29 - 1);
              if ( v29 != (_BYTE *)&dword_0 + 1 )
              {
                v31 = (char *)v73[1];
                v32 = v29 - 1;
                if ( v73[1] )
                {
                  v31 = (char *)v73[1] - 1;
                  v32 = (char *)v73[1] + v30 - 1;
                  v29 += (unsigned __int64)v73[1] - 1;
                }
                v33 = v73[0];
                if ( v73[2] < v29 )
                {
                  v65 = v32;
                  v64 = v31;
                  v62 = v30;
                  v60 = v29;
                  v73[0] = (void *)qvector_reserve(v73, v73[0], v29, 1);
                  v32 = v65;
                  v33 = v73[0];
                  v31 = v64;
                  v30 = v62;
                  v29 = v60;
                }
                v73[1] = v29;
                v32[(_QWORD)v33] = 0;
                memcpy(&v31[(unsigned __int64)v73[0]], *(const void **)v24, v30);
              }
            }
            v24 += 24;
          }
          while ( v26 != v24 );
        }
      }
LABEL_44:
      v68 = v67;
      sub_79B3A0(&v68, a2, 1, 65);
      v40 = a3[1];
      v41 = *a3;
      if ( a3[2] < (unsigned __int64)(v40 + 1) )
      {
        v48 = qvector_reserve(a3, v41, v40 + 1, 24);
        *a3 = v48;
        v40 = a3[1];
        v41 = v48;
      }
      v42 = v41 + 24 * v40;
      *(_QWORD *)v42 = 0;
      *(_OWORD *)(v42 + 8) = 0;
      ++a3[1];
      sub_419660((__int64)v75, v15, nullptr, 1, v38, v39);
      sub_3573A0((char **)v42);
      if ( v73[0] )
      {
        v73[1] = nullptr;
        qfree(v73[0]);
      }
      v43 = (char *)v71;
      if ( v71 )
      {
        v44 = v72;
        if ( (_QWORD)v72 )
        {
          v45 = 0;
          do
          {
            v46 = &v43[24 * v45];
            v47 = *(void **)v46;
            if ( *(_QWORD *)v46 )
            {
              *((_QWORD *)v46 + 1) = 0;
              qfree(v47);
              v43 = (char *)v71;
            }
            ++v45;
          }
          while ( v44 != v45 );
        }
        *(_QWORD *)&v72 = 0;
        qfree(v43);
      }
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      goto LABEL_12;
    }
  }
  return v76 - __readfsqword(0x28u);
}

