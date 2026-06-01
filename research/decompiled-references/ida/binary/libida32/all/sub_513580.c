unsigned __int64 __fastcall sub_513580(const char **a1, __int64 a2, unsigned int *a3)
{
  const char *v4; // rdi
  unsigned int v6; // eax
  __int64 *v7; // rdx
  __int64 v8; // rbp
  const char *v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  const char *v12; // rsi
  __int64 bpt_kernel_interface; // rdi
  const char *v14; // rdx
  char *v15; // r14
  char *v16; // rbx
  __int64 v17; // rbp
  const char *v18; // rsi
  void *v19; // rbx
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v25; // rbx
  void *v26; // rdi
  __m128i v28; // [rsp+10h] [rbp-C8h] BYREF
  int v29; // [rsp+2Bh] [rbp-ADh] BYREF
  char v30; // [rsp+2Fh] [rbp-A9h]
  int v31; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+38h] [rbp-A0h]
  void *v33; // [rsp+40h] [rbp-98h] BYREF
  __m128i v34; // [rsp+48h] [rbp-90h]
  void *v35; // [rsp+60h] [rbp-78h] BYREF
  __int128 v36; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __m128i v38; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+98h] [rbp-40h]

  v4 = *a1;
  v39 = __readfsqword(0x28u);
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
  v29 = a2;
  v8 = *v7;
  v30 = 0;
  ptr = (void *)0xFFFFFFFFLL;
  v38.m128i_i64[0] = -1;
  dirtree_find_entry(&ptr, a1, &v29);
  v9 = *a1;
  v10 = (int)ptr;
  ptr = (void *)0xFFFFFFFFLL;
  v31 = v10;
  v11 = v38.m128i_i64[0];
  v38.m128i_i64[0] = -1;
  v32 = v11;
  dirtree_get_parent_cursor(&ptr, v9, &v31);
  v12 = *a1;
  v34 = 0;
  v33 = nullptr;
  dirtree_get_abspath_by_cursor(&v33, v12, &ptr, 0);
  v35 = nullptr;
  v36 = 0;
  bpt_kernel_interface = get_bpt_kernel_interface(&v33, v12);
  v14 = haystack;
  if ( v34.m128i_i64[0] )
    v14 = (const char *)v33;
  (*(void (__fastcall **)(__int64, void **, const char *))(*(_QWORD *)bpt_kernel_interface + 368LL))(
    bpt_kernel_interface,
    &v35,
    v14);
  v15 = (char *)v35;
  v16 = (char *)v35 + 88 * v36;
  if ( v16 != v35 )
  {
    v17 = v8 + 32;
    while ( (int)compare_bpt_locs(v17, v15 + 32) >= 0 )
    {
      v15 += 88;
      if ( v15 == v16 )
        goto LABEL_13;
    }
    v18 = *a1;
    v38 = 0;
    ptr = nullptr;
    dirtree_get_abspath_by_cursor(&ptr, v18, &v31, 0);
    v19 = ptr;
    ptr = nullptr;
    v20 = _mm_loadu_si128(&v38);
    v38 = 0;
    if ( v33 )
    {
      v28 = v20;
      v34.m128i_i64[0] = 0;
      qfree(v33);
      v21 = _mm_load_si128(&v28);
      v33 = v19;
      v34 = v21;
      if ( ptr )
      {
        v38.m128i_i64[0] = 0;
        qfree(ptr);
      }
    }
    else
    {
      v33 = v19;
      v34 = v20;
    }
    v22 = *((_DWORD *)v15 + 20);
    v38.m128i_i64[0] = -1;
    v29 = v22;
    ptr = (void *)0xFFFFFFFFLL;
    dirtree_find_entry(&ptr, a1, &v29);
    dirtree_change_rank();
LABEL_13:
    v15 = (char *)v35;
  }
  if ( v15 )
  {
    v23 = v36;
    if ( (_QWORD)v36 )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = *(void **)&v15[v24 + 8];
        if ( v26 )
        {
          *(_QWORD *)&v15[v24 + 16] = 0;
          qfree(v26);
          v15 = (char *)v35;
        }
        ++v25;
        v24 += 88;
      }
      while ( v23 != v25 );
    }
    *(_QWORD *)&v36 = 0;
    qfree(v15);
  }
  if ( v33 )
  {
    v34.m128i_i64[0] = 0;
    qfree(v33);
  }
  return v39 - __readfsqword(0x28u);
}

