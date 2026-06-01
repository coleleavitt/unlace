__int64 __fastcall sub_4626C0(int a1, int a2, const __m128i *a3)
{
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v7; // rax
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __int64 v9; // rbx
  __int64 (__fastcall ***v10)(); // rax
  __int64 (__fastcall ***v11)(); // rax
  __int64 v12; // rbx
  void *v14; // rax
  const void *v15; // rsi
  __int64 v16; // [rsp+0h] [rbp-98h] BYREF
  void *ptr; // [rsp+8h] [rbp-90h]
  __int128 v18; // [rsp+10h] [rbp-88h]
  __m128i v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h]
  __int64 v25; // [rsp+58h] [rbp-40h]
  unsigned __int64 v26; // [rsp+68h] [rbp-30h]

  v4 = a3->m128i_i64[0];
  v5 = a3[1].m128i_u64[0];
  v26 = __readfsqword(0x28u);
  v18 = 0;
  v16 = v4;
  ptr = nullptr;
  if ( v5 )
  {
    v14 = (void *)qalloc_or_throw(v5);
    v15 = (const void *)a3->m128i_i64[1];
    *((_QWORD *)&v18 + 1) = v5;
    ptr = v14;
    memcpy(v14, v15, v5);
    *(_QWORD *)&v18 = v5;
  }
  v20 = a3[3].m128i_i64[0];
  v7 = a3[3].m128i_i64[1];
  v19 = _mm_loadu_si128(a3 + 2);
  v21 = v7;
  v22 = a3[4].m128i_i64[0];
  v23 = a3[4].m128i_i64[1];
  v24 = a3[5].m128i_i64[0];
  v25 = a3[5].m128i_i64[1];
  if ( (unsigned int)(v19.m128i_i32[3] - 1) > 2 )
  {
    switch_dbctx(a1);
  }
  else
  {
    switch_dbctx(a2);
    bpt_kernel_interface = get_bpt_kernel_interface();
    v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD))(*bpt_kernel_interface)[10])(
           bpt_kernel_interface,
           v19.m128i_u32[2]);
    switch_dbctx(a1);
    v10 = get_bpt_kernel_interface();
    v19.m128i_i32[2] = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v10)[9])(v10, v9);
  }
  v25 = 0;
  v11 = get_bpt_kernel_interface();
  v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), __int64 *, _QWORD))(*v11)[39])(v11, &v16, 0);
  if ( !v12 )
  {
    if ( !under_debugger )
      interr(2660);
    BUG();
  }
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  return v12;
}
