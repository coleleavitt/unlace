unsigned __int64 __fastcall sub_52B840(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rdi
  unsigned int v6; // eax
  __int64 *v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rsi
  __m128i si128; // xmm1
  __int64 v11; // rsi
  __int64 (__fastcall ***bpt_kernel_interface)(); // rdi
  const char *v13; // rdx
  char *v14; // r14
  char *v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rsi
  void *v18; // rbx
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  __int64 v21; // rax
  const char *v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rbx
  char *v25; // rax
  void *v26; // rdi
  __m128i v28; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+27h] [rbp-B1h] BYREF
  char v30; // [rsp+2Fh] [rbp-A9h]
  __m128i v31; // [rsp+30h] [rbp-A8h] BYREF
  void *v32; // [rsp+40h] [rbp-98h] BYREF
  __m128i v33; // [rsp+48h] [rbp-90h]
  void *v34; // [rsp+60h] [rbp-78h] BYREF
  __int128 v35; // [rsp+68h] [rbp-70h]
  _BYTE ptr[24]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+98h] [rbp-40h]

  v4 = *a1;
  v37 = __readfsqword(0x28u);
  dirtree_link_inode(v4, a2, 1);
  v6 = *a3;
  if ( *a3 > 0x2F )
  {
    v7 = *((__int64 **)a3 + 1);
    *((_QWORD *)a3 + 1) = v7 + 1;
  }
  else
  {
    v7 = (__int64 *)(*((_QWORD *)a3 + 2) + v6);
    *a3 = v6 + 8;
  }
  v8 = *v7;
  v29 = a2;
  v30 = 0;
  *(_OWORD *)ptr = -1;
  dirtree_find_entry(ptr, a1, &v29);
  v9 = *a1;
  si128 = _mm_load_si128((const __m128i *)ptr);
  *(_OWORD *)ptr = -1;
  v31 = si128;
  dirtree_get_parent_cursor(ptr, v9, &v31);
  v11 = *a1;
  v33 = 0;
  v32 = nullptr;
  dirtree_get_abspath_by_cursor(&v32, v11, ptr, 0);
  v34 = nullptr;
  v35 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v13 = haystack;
  if ( v33.m128i_i64[0] )
    v13 = (const char *)v32;
  ((void (__fastcall *)(__int64 (__fastcall ***)(), void **, const char *))(*bpt_kernel_interface)[46])(
    bpt_kernel_interface,
    &v34,
    v13);
  v14 = (char *)v34;
  v15 = (char *)v34 + 96 * v35;
  if ( v15 != v34 )
  {
    v16 = v8 + 32;
    while ( (int)compare_bpt_locs(v16, (__int64)(v14 + 32)) >= 0 )
    {
      v14 += 96;
      if ( v14 == v15 )
        goto LABEL_15;
    }
    v17 = *a1;
    memset(ptr, 0, sizeof(ptr));
    dirtree_get_abspath_by_cursor(ptr, v17, &v31, 0);
    v18 = *(void **)ptr;
    memset(ptr, 0, sizeof(ptr));
    v19 = _mm_loadu_si128((const __m128i *)&ptr[8]);
    if ( v32 )
    {
      v28 = v19;
      v33.m128i_i64[0] = 0;
      qfree(v32);
      v20 = _mm_load_si128(&v28);
      v32 = v18;
      v33 = v20;
      if ( *(_QWORD *)ptr )
      {
        *(_QWORD *)&ptr[8] = 0;
        qfree(*(void **)ptr);
      }
    }
    else
    {
      v32 = v18;
      v33 = v19;
    }
    v21 = *((_QWORD *)v14 + 11);
    *(_OWORD *)ptr = -1;
    v29 = v21;
    dirtree_find_entry(ptr, a1, &v29);
    v22 = haystack;
    if ( v33.m128i_i64[0] )
      v22 = (const char *)v32;
    dirtree_change_rank(*a1, v22);
LABEL_15:
    v14 = (char *)v34;
  }
  if ( v14 )
  {
    v23 = v35;
    if ( (_QWORD)v35 )
    {
      v24 = 0;
      do
      {
        v25 = &v14[96 * v24];
        v26 = *((void **)v25 + 1);
        if ( v26 )
        {
          *((_QWORD *)v25 + 2) = 0;
          qfree(v26);
          v14 = (char *)v34;
        }
        ++v24;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v35 = 0;
    qfree(v14);
  }
  if ( v32 )
  {
    v33.m128i_i64[0] = 0;
    qfree(v32);
  }
  return v37 - __readfsqword(0x28u);
}
