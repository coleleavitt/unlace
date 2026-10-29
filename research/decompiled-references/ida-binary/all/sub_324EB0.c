__int64 __fastcall segm_editor_t__::vfunc_11(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  double v14; // xmm0_8
  __int64 v15; // rdx
  __int64 **v17; // r15
  const char *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  int v26; // ebp
  __int64 i; // rax
  void *v28; // rax
  bool v29; // zf
  unsigned __int64 v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rax
  _QWORD *v33; // rsi
  __int64 v34; // rbp
  __int64 **v35; // rax
  char v36; // [rsp-8h] [rbp-78h]
  char v37; // [rsp-8h] [rbp-78h]
  __int16 v38; // [rsp+Ch] [rbp-64h] BYREF
  __int16 v39; // [rsp+Eh] [rbp-62h] BYREF
  __int64 v40; // [rsp+10h] [rbp-60h] BYREF
  void *src; // [rsp+18h] [rbp-58h] BYREF
  __int128 v42; // [rsp+20h] [rbp-50h]
  unsigned __int64 v43; // [rsp+30h] [rbp-40h]

  v14 = 0.0;
  v15 = *((_QWORD *)a2 + 1);
  v43 = __readfsqword(0x28u);
  v42 = 0;
  src = nullptr;
  if ( !v15 )
    goto LABEL_2;
  v28 = (void *)qvector_reserve(&src, 0, v15, 8);
  v29 = *((_QWORD *)a2 + 1) == 0;
  src = v28;
  if ( !v29 )
  {
    v30 = 0;
    do
    {
      v31 = getnseg(*(unsigned int *)(*(_QWORD *)a2 + 8 * v30));
      if ( v31 )
      {
        v32 = v42;
        v33 = src;
        if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)(v42 + 1) )
        {
          src = (void *)qvector_reserve(&src, src, v42 + 1, 8);
          v33 = src;
          v32 = v42;
        }
        v33[v32] = v31;
        *(_QWORD *)&v42 = v42 + 1;
      }
      ++v30;
    }
    while ( v30 < *((_QWORD *)a2 + 1) );
  }
  v34 = v42;
  if ( (_QWORD)v42 )
  {
    v35 = (__int64 **)qalloc_or_throw(8 * v42);
    v18 = (const char *)src;
    v17 = v35;
    memcpy(v35, src, 8 * v34);
    v40 = v34;
    if ( v34 == 1 )
    {
      sub_324D70(*v17, 0.0, a4, a5, a6, *(double *)a7.m128_u64, *(double *)a8.m128_u64, a9, a10);
      goto LABEL_7;
    }
  }
  else
  {
LABEL_2:
    v40 = 0;
    v17 = nullptr;
  }
  v38 = 0;
  v39 = 0;
  while ( 1 )
  {
    v18 = (const char *)&v40;
    if ( !(unsigned int)sub_1697D0(
                          (int)"@0:629[]\n"
                               "Delete Segment\n"
                               "CAUTION: ALL INFORMATION ABOUT THE SEGMENT WILL BE LOST!\n"
                               "Do you really want to delete %D segments?\n"
                               "<~C~ONFIRM DELETION:C>>\n"
                               "<~D~isable addresses:C>>",
                          (__int64)&v40,
                          (__int64)&v38,
                          (__int64)&v39,
                          a13,
                          a14,
                          (__m128)0LL,
                          a4,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          a10,
                          v36) )
      break;
    if ( v38 )
    {
      v26 = 0;
      for ( i = 0; v26 < v40; i = v26 )
      {
        v18 = (const char *)(v39 != 0);
        del_segm(*v17[i], v18);
        ++v26;
      }
      break;
    }
    sub_169630(
      (int)"Please check \"CONFIRM DELETION\" checkbox",
      (__int64)&v40,
      v19,
      v20,
      v21,
      v22,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v23,
      v24,
      a9,
      a10,
      v37);
  }
LABEL_7:
  if ( v17 )
    v14 = qfree(v17, v18);
  sub_49F270(a1, a2, **(_QWORD **)a2);
  if ( src )
  {
    *(_QWORD *)&v42 = 0;
    qfree(src, a2, v14);
  }
  return 1;
}
