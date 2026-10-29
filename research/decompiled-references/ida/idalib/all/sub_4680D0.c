unsigned __int64 __fastcall sub_4680D0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  unsigned __int64 *v8; // rax
  __int64 v10; // rdi
  const __m128i *v11; // r12
  __m128i v12; // xmm0
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __int64 *v14; // rbp
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 *v20; // r14
  __int64 v21; // rax
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v23; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v24)(); // [rsp+20h] [rbp-58h] BYREF
  __m128i v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  void **p_ptr; // [rsp+40h] [rbp-38h]
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  v5 = *(int *)(a1 + 8);
  v28 = __readfsqword(0x28u);
  switch_dbctx(v5);
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_3DB7B0 )
    v8 = (unsigned __int64 *)(a1 + 16);
  else
    v8 = (unsigned __int64 *)v7(a1);
  if ( a3 >= *v8
    && a3 < v8[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    v10 = *(int *)(a1 + 8);
    v11 = (const __m128i *)(**(_QWORD **)(a1 + 40) + 16 * a3);
    ptr = nullptr;
    v23 = 0;
    switch_dbctx(v10);
    v12 = _mm_loadu_si128(v11);
    p_ptr = &ptr;
    v26 = 0;
    v24 = &off_2B28DD8;
    v25 = v12;
    bpt_kernel_interface = get_bpt_kernel_interface();
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64))(*bpt_kernel_interface)[48])(
      bpt_kernel_interface,
      &v24,
      1);
    v14 = (__int64 *)ptr;
    v15 = (__int64 *)((char *)ptr + 8 * v23);
    if ( ptr != v15 )
    {
      do
      {
        v17 = *v14;
        v18 = a2[1];
        v19 = *a2;
        v20 = (__int64 *)(*v14 + 32);
        if ( a2[2] < (unsigned __int64)(v18 + 1) )
        {
          v21 = qvector_reserve(a2, v19, v18 + 1, 24);
          *a2 = v21;
          v18 = a2[1];
          v19 = v21;
        }
        v16 = v19 + 24 * v18;
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = 0;
        ++a2[1];
        sub_3B4800(v20, (__int64 *)v16);
        sub_467B00(a2, v17, 4);
        ++v14;
      }
      while ( v15 != v14 );
      v15 = (__int64 *)ptr;
    }
    if ( v15 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v15);
    }
  }
  return v28 - __readfsqword(0x28u);
}
