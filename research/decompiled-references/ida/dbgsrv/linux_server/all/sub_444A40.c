/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_444A40
// Address: 0x0000000000444A40

//----- (0000000000444A40) ----------------------------------------------------
__int64 __fastcall sub_444A40(
        __m128i *a1,
        __int64 a2,
        const char *a3,
        char a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 *v17; // r14
  unsigned __int8 *v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // r13
  size_t v24; // r15
  unsigned __int8 *v25; // r15
  double v26; // xmm4_8
  double v27; // xmm5_8
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  __int32 v31; // r15d
  double v32; // xmm4_8
  double v33; // xmm5_8
  __m128i *v34; // rbx
  pthread_mutex_t *v35; // rdi
  __int32 v36; // ebp
  double v37; // xmm4_8
  double v38; // xmm5_8
  __m128i *v39; // rbx
  __int64 v40; // rax
  size_t v41; // r15
  const char *v42; // rsi
  size_t v43; // rax
  size_t v44; // r12
  size_t v45; // rbp
  double v46; // xmm4_8
  double v47; // xmm5_8
  double v48; // xmm4_8
  double v49; // xmm5_8
  __int64 v50; // rax
  const char *v51; // rdx
  const char *v52; // rsi
  void *v53; // [rsp+8h] [rbp-140h]
  void *v54; // [rsp+8h] [rbp-140h]
  __m128i *v55; // [rsp+18h] [rbp-130h] BYREF
  void *v56; // [rsp+20h] [rbp-128h] BYREF
  __int128 v57; // [rsp+28h] [rbp-120h]
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __int128 v59; // [rsp+48h] [rbp-100h]
  unsigned __int8 v60; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v61; // [rsp+E8h] [rbp-60h]
  __int64 v62; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+108h] [rbp-40h]

  v55 = a1;
  v63 = __readfsqword(0x28u);
  sub_482EC0((pthread_mutex_t *)qword_4C8210);
  v14 = sub_438630();
  if ( !a2 )
  {
    v17 = (__int64 *)v14;
    v18 = (unsigned __int8 *)sub_439A80(a3);
    if ( v18 )
    {
      if ( v55 )
      {
        v60 = 2;
        v61 = 0;
        v62 = 0;
        sub_4418C0(&v60, v18, 0.0, a6, a7, a8, v19, v20, a11, a12);
        sub_43CF00(v55, (__m128i *)&v60);
        sub_441540((__int64)&v60, 0.0, a6, a7, a8, v21, v22, a11, a12);
      }
    }
    else
    {
      v36 = sub_439F70(v17, a3);
      if ( v36 == 0x7FFFFFFF )
      {
        v42 = a3;
        v15 = 1538;
        sub_479F30(0, v42);
        sub_482F10((pthread_mutex_t *)qword_4C8210);
        goto LABEL_4;
      }
      v39 = v55;
      if ( v55 )
      {
        sub_441540((__int64)v55, a5, a6, a7, a8, v37, v38, a11, a12);
        v55->m128i_i8[0] = 6;
        v39->m128i_i32[2] = v36;
      }
    }
    goto LABEL_9;
  }
  if ( *(_BYTE *)a2 != 5 )
  {
    v15 = 1532;
    sub_482F10((pthread_mutex_t *)qword_4C8210);
LABEL_4:
    sub_479EB0(v15);
    return v15;
  }
  v23 = *(_QWORD *)(a2 + 8);
  ptr = nullptr;
  v59 = 0;
  if ( a3 )
  {
    v24 = strlen(a3);
    ptr = sub_481540((__int64)&ptr, nullptr, v24 + 1, 1u);
    *(_QWORD *)&v59 = v24 + 1;
    memmove(ptr, a3, v24);
    *((_BYTE *)ptr + v24) = 0;
    v53 = ptr;
    v25 = (unsigned __int8 *)sub_43D6F0(v23, (__int64)&ptr);
    if ( v53 )
    {
      *(_QWORD *)&v59 = 0;
      j__free(v53);
    }
    if ( v25 != (unsigned __int8 *)(v23 + 8) )
    {
LABEL_15:
      if ( v55 )
      {
        v60 = 2;
        v61 = 0;
        v62 = 0;
        sub_4418C0(&v60, v25 + 56, 0.0, a6, a7, a8, v26, v27, a11, a12);
        sub_43CF00(v55, (__m128i *)&v60);
        v15 = 0;
        sub_441540((__int64)&v60, 0.0, a6, a7, a8, v28, v29, a11, a12);
        sub_482F10((pthread_mutex_t *)qword_4C8210);
        return v15;
      }
      goto LABEL_9;
    }
    v40 = sub_439CD0(*(int *)(v23 + 52));
    ptr = nullptr;
    v54 = (void *)v40;
    v59 = 0;
    v41 = strlen(a3);
    ptr = sub_481540((__int64)&ptr, nullptr, v41 + 1, 1u);
    *(_QWORD *)&v59 = v41 + 1;
    memmove(ptr, a3, v41);
    *((_BYTE *)ptr + v41) = 0;
  }
  else
  {
    v25 = (unsigned __int8 *)sub_43D6F0(v23, (__int64)&ptr);
    if ( v25 != (unsigned __int8 *)(v23 + 8) )
      goto LABEL_15;
    v30 = sub_439CD0(*(int *)(v23 + 52));
    ptr = nullptr;
    v54 = (void *)v30;
    v59 = 0;
  }
  v31 = sub_43D490((__int64)v54, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v59 = 0;
    j__free(ptr);
  }
  if ( v31 != -1 )
  {
    v34 = v55;
    if ( v55 )
    {
      sub_441540((__int64)v55, 0.0, a6, a7, a8, v32, v33, a11, a12);
      v55->m128i_i8[0] = 6;
      v35 = (pthread_mutex_t *)qword_4C8210;
      v34->m128i_i32[2] = v31;
      v15 = 0;
      sub_482F10(v35);
      return v15;
    }
LABEL_9:
    sub_482F10((pthread_mutex_t *)qword_4C8210);
    return 0;
  }
  sub_482F10((pthread_mutex_t *)qword_4C8210);
  if ( a4 )
  {
    v56 = nullptr;
    v57 = 0;
    if ( a3 )
    {
      v43 = strlen(a3);
      v44 = v43 + 1;
      v45 = v43;
      v56 = sub_481540((__int64)&v56, nullptr, v43 + 1, 1u);
      *(_QWORD *)&v57 = v44;
      memmove(v56, a3, v45);
      *((_BYTE *)v56 + v45) = 0;
    }
    sub_442B60((__int64)&ptr, 0, 1u);
    if ( (unsigned __int8)sub_4448B0(&ptr, v23, (const char **)&v56, &v55, 0.0, a6, a7, a8, v46, v47, a11, a12) )
    {
      sub_442CC0((__int64)&ptr, 0.0, a6, a7, a8, v48, v49, a11, a12);
      if ( v56 )
      {
        v15 = 0;
        *(_QWORD *)&v57 = 0;
        j__free(v56);
        return v15;
      }
      return 0;
    }
    sub_442CC0((__int64)&ptr, 0.0, a6, a7, a8, v48, v49, a11, a12);
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      j__free(v56);
    }
  }
  ptr = nullptr;
  v59 = 0;
  v50 = sub_439CD0(*(int *)(v23 + 52));
  v51 = s1;
  if ( *(_QWORD *)(v50 + 64) )
    v51 = *(const char **)(v50 + 56);
  sub_4172B0((__int64)&ptr, "%s.%s", v51, a3);
  v52 = s1;
  if ( (_QWORD)v59 )
    v52 = (const char *)ptr;
  sub_479F30(0, v52);
  v15 = sub_479EB0(0x602u);
  if ( ptr )
  {
    *(_QWORD *)&v59 = 0;
    j__free(ptr);
  }
  return v15;
}
// 444B24: variable 'v19' is possibly undefined
// 444B24: variable 'v20' is possibly undefined
// 444B37: variable 'v21' is possibly undefined
// 444B37: variable 'v22' is possibly undefined
// 444C3B: variable 'v26' is possibly undefined
// 444C3B: variable 'v27' is possibly undefined
// 444C50: variable 'v28' is possibly undefined
// 444C50: variable 'v29' is possibly undefined
// 444CEB: variable 'v32' is possibly undefined
// 444CEB: variable 'v33' is possibly undefined
// 444D39: variable 'v37' is possibly undefined
// 444D39: variable 'v38' is possibly undefined
// 444E68: variable 'v46' is possibly undefined
// 444E68: variable 'v47' is possibly undefined
// 444E78: variable 'v48' is possibly undefined
// 444E78: variable 'v49' is possibly undefined
