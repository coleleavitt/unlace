unsigned __int64 __fastcall sub_4628B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // rbx
  const __m128i *v5; // rbx
  __m128i v6; // xmm0
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  const __m128i **v8; // rbx
  char *v9; // r13
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v12; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v13)(); // [rsp+20h] [rbp-58h] BYREF
  __m128i v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  void **p_ptr; // [rsp+40h] [rbp-38h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v3 = *(__int64 **)(a1 + 40);
  v17 = __readfsqword(0x28u);
  v4 = *v3;
  ptr = nullptr;
  v12 = 0;
  v5 = (const __m128i *)(16 * a3 + v4);
  switch_dbctx(*(int *)(a2 + 8));
  v6 = _mm_loadu_si128(v5);
  p_ptr = &ptr;
  v15 = 0;
  v13 = &off_2B28DD8;
  v14 = v6;
  bpt_kernel_interface = get_bpt_kernel_interface();
  ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64))(*bpt_kernel_interface)[48])(
    bpt_kernel_interface,
    &v13,
    1);
  switch_dbctx(*(int *)(a1 + 8));
  v8 = (const __m128i **)ptr;
  v9 = (char *)ptr + 8 * v12;
  if ( v9 != ptr )
  {
    do
      sub_4626C0(*(_DWORD *)(a1 + 8), *(_DWORD *)(a2 + 8), *v8++);
    while ( v9 != (char *)v8 );
    v8 = (const __m128i **)ptr;
  }
  if ( v8 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v8);
  }
  return v17 - __readfsqword(0x28u);
}
