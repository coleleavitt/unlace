__m128i *__fastcall sub_536580(__m128i *a1, const char *a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  size_t v9; // rax
  __m128i si128; // xmm0
  __int64 v11; // rax
  void *v12; // r13
  void **v13; // rbp
  __int64 v14; // rdx
  void **i; // r14
  void **v16; // rbp
  void **v17; // r13
  __int64 v18; // rax
  void *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  void *v25; // rdx
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  void *v33; // rdi
  void *v34[4]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v36; // [rsp+30h] [rbp-38h]
  unsigned __int64 v37; // [rsp+38h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  if ( a2 && *a2 )
  {
    v9 = strlen(a2);
    QT::QString::fromUtf8(v34, v9, a2);
    QT::QString::split(ptr, v34, 47, 0, 1);
    si128 = _mm_load_si128((const __m128i *)ptr);
    v11 = v36;
    v36 = 0;
    v12 = (void *)a1->m128i_i64[0];
    v13 = (void **)a1->m128i_i64[1];
    *(_OWORD *)ptr = 0;
    v14 = a1[1].m128i_i64[0];
    *a1 = si128;
    a1[1].m128i_i64[0] = v11;
    if ( v12 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v12, 1u) )
      {
        for ( i = &v13[3 * v14]; i != v13; v13 += 3 )
        {
          if ( *v13 && !_InterlockedSub((volatile signed __int32 *)*v13, 1u) )
            free(*v13);
        }
        free(v12);
      }
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        v16 = (void **)ptr[1];
        v17 = (void **)((char *)ptr[1] + 24 * v36);
        if ( ptr[1] != v17 )
        {
          do
          {
            if ( *v16 && !_InterlockedSub((volatile signed __int32 *)*v16, 1u) )
              free(*v16);
            v16 += 3;
          }
          while ( v17 != v16 );
        }
        free(ptr[0]);
      }
    }
    if ( v34[0] && !_InterlockedSub((volatile signed __int32 *)v34[0], 1u) )
      free(v34[0]);
  }
  if ( a3 && a1[1].m128i_i64[0] )
  {
    if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
      sub_1B21C0(a1, 0, 0, 0, a5, a6);
    v18 = a1->m128i_i64[1];
    v19 = *(void **)(v18 + 8);
    if ( !v19 )
      v19 = &QT::QString::_empty;
    if ( (unsigned int)QT::QString::compare_helper(v19, *(_QWORD *)(v18 + 16), "Edit", 4, 1) )
    {
      if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
        sub_1B21C0(a1, 0, 0, 0, v20, v21);
      v28 = a1->m128i_i64[1];
      v29 = *(void **)(v28 + 8);
      if ( !v29 )
        v29 = &QT::QString::_empty;
      if ( (unsigned int)QT::QString::compare_helper(v29, *(_QWORD *)(v28 + 16), "Search", 6, 1) )
      {
        if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
          sub_1B21C0(a1, 0, 0, 0, v30, v31);
        v32 = a1->m128i_i64[1];
        v33 = *(void **)(v32 + 8);
        if ( !v33 )
          v33 = &QT::QString::_empty;
        if ( (unsigned int)QT::QString::compare_helper(v33, *(_QWORD *)(v32 + 16), "Jump", 4, 1) )
          return a1;
        QT::QString::fromUtf8(ptr, 12, "Default:Jump");
        if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
          goto LABEL_33;
      }
      else
      {
        QT::QString::fromUtf8(ptr, 14, "Default:Search");
        if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
          goto LABEL_33;
      }
    }
    else
    {
      QT::QString::fromUtf8(ptr, 12, "Default:Edit");
      if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
LABEL_33:
        sub_1B21C0(a1, 0, 0, 0, v22, v23);
    }
    v24 = a1->m128i_i64[1];
    v25 = *(void **)v24;
    *(void **)v24 = ptr[0];
    ptr[0] = v25;
    v26 = *(void **)(v24 + 8);
    *(void **)(v24 + 8) = ptr[1];
    ptr[1] = v26;
    v27 = *(_QWORD *)(v24 + 16);
    *(_QWORD *)(v24 + 16) = v36;
    v36 = v27;
    if ( v25 && !_InterlockedSub((volatile signed __int32 *)v25, 1u) )
      free(ptr[0]);
  }
  return a1;
}
