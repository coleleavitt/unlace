__int64 __fastcall _base_app_mixin_t::push_wait_dialog_request(
        __int64 a1,
        void *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  char v17; // r12
  const char *v18; // r13
  __int16 v19; // r15
  char v20; // r12
  size_t v21; // rax
  size_t v22; // r14
  size_t v23; // rbp
  size_t v24; // rbp
  void *v25; // rax
  void *v26; // r13
  size_t v27; // r14
  __m128 v28; // xmm0
  void *v29; // rbp
  __int64 v31; // rbp
  void *v32; // rax
  void *src; // [rsp+0h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+8h] [rbp-90h]
  void *v35; // [rsp+20h] [rbp-78h] BYREF
  __int128 v36; // [rsp+28h] [rbp-70h]
  void *v37; // [rsp+38h] [rbp-60h]
  __int128 v38; // [rsp+40h] [rbp-58h]
  __int16 v39; // [rsp+50h] [rbp-48h]
  char v40; // [rsp+52h] [rbp-46h]
  unsigned __int64 v41; // [rsp+58h] [rbp-40h]

  v10 = *(_BYTE *)(a1 + 90) == 0;
  v41 = __readfsqword(0x28u);
  if ( v10 )
  {
    v31 = *(_QWORD *)(a1 + 24);
    if ( !(unsigned __int8)QT::QTimer::isActive((QT::QTimer *)(*(_QWORD *)(v31 + 8) + 656LL))
      && !(unsigned __int8)sub_541D50(v31) )
    {
      return 0;
    }
  }
  else
  {
    sub_541E70();
  }
  v17 = *(_BYTE *)(a1 + 90);
  v18 = *(const char **)(a1 + 80);
  src = nullptr;
  v19 = *(_WORD *)(a1 + 88);
  *(_OWORD *)n = 0;
  v20 = v17 ^ 1;
  if ( !v18 )
  {
    v35 = nullptr;
    v36 = 0;
    goto LABEL_19;
  }
  v21 = strlen(v18);
  v22 = v21 + 1;
  v23 = v21;
  a2 = (void *)v18;
  src = (void *)qvector_reserve(&src, 0, v21 + 1, 1);
  n[0] = v22;
  memmove(src, v18, v23);
  v35 = nullptr;
  v36 = 0;
  *((_BYTE *)src + v23) = 0;
  v24 = n[0];
  if ( !n[0] )
  {
LABEL_19:
    v26 = nullptr;
    goto LABEL_6;
  }
  v25 = (void *)qalloc_or_throw(n[0]);
  a2 = src;
  v35 = v25;
  *((_QWORD *)&v36 + 1) = v24;
  v26 = v25;
  memcpy(v25, src, v24);
  *(_QWORD *)&v36 = v24;
LABEL_6:
  v27 = *(_QWORD *)(a1 + 64);
  v28 = 0;
  v29 = nullptr;
  v37 = nullptr;
  v38 = 0;
  if ( v27 )
  {
    v32 = (void *)qalloc_or_throw(v27);
    a2 = *(void **)(a1 + 56);
    v37 = v32;
    *((_QWORD *)&v38 + 1) = v27;
    v29 = v32;
    memcpy(v32, a2, v27);
    *(_QWORD *)&v38 = v27;
  }
  v39 = v19;
  v40 = v20;
  if ( src )
  {
    n[0] = 0;
    *(double *)v28.m128_u64 = qfree(src, (const char *)a2);
  }
  sub_542A20(*(_QWORD *)(a1 + 24), (__int64)&v35, v28, a4, a5, a6, v15, v16, a9, a10, v11, v12, v13, v14, (char)src);
  if ( v29 )
    *(double *)v28.m128_u64 = qfree(v29, (const char *)&v35);
  if ( v26 )
    qfree(v26, (const char *)&v35, *(double *)v28.m128_u64);
  return 1;
}
