__int64 __fastcall sub_3B08F0(int a1, char **a2, __int64 a3, double a4, __m128 a5)
{
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __int64 v8; // rbp
  _QWORD *std_dirtree; // r12
  __int64 v10; // rax
  __m128 si128; // xmm0
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v15; // [rsp+7h] [rbp-61h] BYREF
  char v16; // [rsp+Fh] [rbp-59h]
  __m128 v17; // [rsp+10h] [rbp-58h] BYREF
  _BYTE ptr[24]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*bpt_kernel_interface)[35])(
         bpt_kernel_interface,
         a3);
  if ( !v8 )
    return 0;
  v16 = 0;
  std_dirtree = (_QWORD *)get_std_dirtree(5);
  v10 = *(_QWORD *)(v8 + 88);
  *(_OWORD *)ptr = -1;
  v15 = v10;
  dirtree_find_entry(ptr, std_dirtree, &v15);
  si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
  v17 = si128;
  if ( si128.m128_u64[0] == -1 )
  {
    if ( _mm_movehl_ps(a5, si128).m128_u64[0] )
      return 0;
  }
  v12 = *std_dirtree;
  *(_OWORD *)ptr = -1;
  dirtree_get_parent_cursor(ptr, v12, &v17);
  v13 = _mm_load_si128((const __m128i *)ptr);
  memset(ptr, 0, sizeof(ptr));
  v17 = (__m128)v13;
  dirtree_get_abspath_by_cursor(ptr, *std_dirtree, &v17, 0);
  sub_35A790(a2);
  if ( *(_QWORD *)ptr )
  {
    *(_QWORD *)&ptr[8] = 0;
    qfree(*(void **)ptr);
  }
  return 1;
}
