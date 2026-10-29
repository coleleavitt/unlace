__int64 __fastcall sub_463930(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx
  const __m128i *v6; // rbx
  __m128i v7; // xmm0
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __m128i v9; // xmm0
  __int64 (__fastcall ***v10)(); // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  void *v14; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-B0h]
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __int128 v17; // [rsp+28h] [rbp-90h]
  __int64 (__fastcall **v18)(); // [rsp+40h] [rbp-78h] BYREF
  __m128i v19; // [rsp+48h] [rbp-70h]
  __int64 v20; // [rsp+58h] [rbp-60h]
  void **v21; // [rsp+60h] [rbp-58h]
  __int64 (__fastcall **v22)(); // [rsp+70h] [rbp-48h] BYREF
  __m128i v23; // [rsp+78h] [rbp-40h]
  __int64 v24; // [rsp+88h] [rbp-30h]
  void **p_ptr; // [rsp+90h] [rbp-28h]
  unsigned __int64 v26; // [rsp+98h] [rbp-20h]

  v3 = *(__int64 **)(a1 + 40);
  v4 = *(int *)(a1 + 8);
  v26 = __readfsqword(0x28u);
  v5 = *v3;
  v14 = nullptr;
  ptr = nullptr;
  v6 = (const __m128i *)(16 * a3 + v5);
  v15 = 0;
  v17 = 0;
  switch_dbctx(v4);
  v7 = _mm_loadu_si128(v6);
  v21 = &v14;
  v20 = 0;
  v18 = &off_2B28DD8;
  v19 = v7;
  bpt_kernel_interface = get_bpt_kernel_interface();
  ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64))(*bpt_kernel_interface)[48])(
    bpt_kernel_interface,
    &v18,
    1);
  switch_dbctx(*(int *)(a2 + 8));
  v9 = _mm_loadu_si128(v6);
  v22 = &off_2B28DD8;
  v24 = 0;
  p_ptr = &ptr;
  v23 = v9;
  v10 = get_bpt_kernel_interface();
  ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)(), __int64))(*v10)[48])(v10, &v22, 1);
  if ( (_QWORD)v15 == (_QWORD)v17 )
  {
    v11 = 0;
    if ( (_QWORD)v15 )
    {
      while ( sub_463830(*((_QWORD *)v14 + v11), *((_QWORD *)ptr + v11)) )
      {
        if ( ++v11 >= (unsigned __int64)v15 )
          goto LABEL_3;
      }
      v12 = 2;
    }
    else
    {
LABEL_3:
      v12 = 0;
    }
  }
  else
  {
    v12 = 1;
  }
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v12;
}
