__int64 __fastcall sub_4669D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  unsigned __int64 *v6; // rax
  const __m128i *v8; // rbp
  __int64 v9; // rdi
  __m128i v10; // xmm0
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  char *v12; // r12
  char *v13; // r13
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  char *v16; // rsi
  __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  size_t v19; // r8
  __int64 v20; // r15
  __int64 v21; // r9
  char *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-98h]
  __int64 v27; // [rsp+0h] [rbp-98h]
  size_t v28; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int128 v30; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-68h] BYREF
  __m128i v32; // [rsp+38h] [rbp-60h]
  __int64 v33; // [rsp+48h] [rbp-50h]
  void **p_ptr; // [rsp+50h] [rbp-48h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v5 == sub_3DB7B0 )
    v6 = (unsigned __int64 *)(a2 + 16);
  else
    v6 = (unsigned __int64 *)v5(a2);
  if ( a3 < *v6
    || a3 >= v6[1]
    || a3 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
  {
    return a1;
  }
  v8 = (const __m128i *)(**(_QWORD **)(a2 + 40) + 16 * a3);
  sub_35A790((char **)a1);
  v9 = *(int *)(a2 + 8);
  ptr = nullptr;
  v30 = 0;
  switch_dbctx(v9);
  v10 = _mm_loadu_si128(v8);
  v33 = 0;
  src = &off_2B28DD8;
  p_ptr = &ptr;
  v32 = v10;
  bpt_kernel_interface = get_bpt_kernel_interface();
  ((void (__fastcall *)(__int64 (__fastcall ***)(), void **, __int64))(*bpt_kernel_interface)[48])(
    bpt_kernel_interface,
    &src,
    1);
  v12 = (char *)ptr;
  v13 = (char *)ptr + 8 * v30;
  if ( v13 == ptr )
    goto LABEL_24;
  do
  {
    v23 = *(_QWORD *)v12;
    src = nullptr;
    v32 = 0;
    sub_3B4800((__int64 *)(v23 + 32), (__int64 *)&src);
    v17 = *(_QWORD *)(a1 + 8);
    if ( v17 )
    {
      v14 = v17 + 1;
      v15 = v17 + 2;
      v16 = *(char **)a1;
      --v17;
      if ( *(_QWORD *)(a1 + 16) < v15 )
        goto LABEL_22;
    }
    else
    {
      v16 = *(char **)a1;
      v15 = 3;
      v14 = 2;
      if ( *(_QWORD *)(a1 + 16) < 3u )
      {
LABEL_22:
        v26 = v14;
        v24 = qvector_reserve(a1, v16, v15, 1);
        *(_QWORD *)a1 = v24;
        v14 = v26;
        v16 = (char *)v24;
      }
    }
    *(_QWORD *)(a1 + 8) = v15;
    v16[v14] = 0;
    *(_WORD *)(*(_QWORD *)a1 + v17) = 8236;
    v18 = v32.m128i_i64[0];
    if ( v32.m128i_i64[0] )
    {
      v19 = v32.m128i_i64[0] - 1;
      if ( v32.m128i_i64[0] != 1 )
      {
        v20 = *(_QWORD *)(a1 + 8);
        v21 = v32.m128i_i64[0] - 1;
        if ( v20 )
        {
          --v20;
          v21 = v19 + v20;
          v18 = v32.m128i_i64[0] + v20;
        }
        v22 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v18 )
        {
          v28 = v32.m128i_i64[0] - 1;
          v27 = v21;
          v25 = qvector_reserve(a1, v22, v18, 1);
          v19 = v28;
          v21 = v27;
          *(_QWORD *)a1 = v25;
          v22 = (char *)v25;
        }
        *(_QWORD *)(a1 + 8) = v18;
        v22[v21] = 0;
        memcpy((void *)(v20 + *(_QWORD *)a1), src, v19);
      }
    }
    if ( src )
    {
      v32.m128i_i64[0] = 0;
      qfree(src);
    }
    v12 += 8;
  }
  while ( v13 != v12 );
  v12 = (char *)ptr;
LABEL_24:
  if ( v12 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v12);
  }
  return a1;
}
