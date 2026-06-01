unsigned __int64 __fastcall sub_462F10(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __m128i v5; // xmm0
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  char *v7; // rbx
  char *v8; // rbp
  __int64 v9; // r12
  __int64 (__fastcall ***v10)(); // rax
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h]
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-48h] BYREF
  __m128i v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+38h] [rbp-30h]
  void **p_ptr; // [rsp+40h] [rbp-28h]
  unsigned __int64 v18; // [rsp+48h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 40);
  v3 = *(int *)(a1 + 8);
  v4 = *v2;
  ptr = nullptr;
  v13 = 0;
  switch_dbctx(v3);
  v5 = _mm_loadu_si128((const __m128i *)(16 * a2 + v4));
  p_ptr = &ptr;
  v16 = 0;
  v14 = &off_2B28DD8;
  v15 = v5;
  bpt_kernel_interface = get_bpt_kernel_interface();
  ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64))(*bpt_kernel_interface)[48])(
    bpt_kernel_interface,
    &v14,
    1);
  v7 = (char *)ptr;
  v8 = (char *)ptr + 8 * v13;
  if ( v8 != ptr )
  {
    do
    {
      v9 = *(_QWORD *)v7;
      v10 = get_bpt_kernel_interface();
      if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v10)[15])(v10, v9) )
      {
        if ( !under_debugger )
          interr(2661);
        BUG();
      }
      v7 += 8;
    }
    while ( v8 != v7 );
    v7 = (char *)ptr;
  }
  if ( v7 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v7);
  }
  return v18 - __readfsqword(0x28u);
}
