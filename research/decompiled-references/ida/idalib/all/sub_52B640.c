__int64 __fastcall sub_52B640(_QWORD *a1, void *a2, char a3, double a4, __m128 a5)
{
  __m128 si128; // xmm0
  __int64 v9; // rsi
  const char *v10; // r15
  __int64 v11; // rdi
  char *v12; // rbx
  __int64 v13; // rsi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 result; // rax
  void *v19; // rdi
  int v20; // [rsp-Eh] [rbp-98h]
  int v21; // [rsp-6h] [rbp-90h]
  unsigned __int8 v22; // [rsp+1h] [rbp-89h]
  int v23; // [rsp+2h] [rbp-88h]
  int v24; // [rsp+Ah] [rbp-80h]
  int v25[2]; // [rsp+10h] [rbp-7Ah] BYREF
  char v26; // [rsp+18h] [rbp-72h]
  void *v27; // [rsp+19h] [rbp-71h] BYREF
  char v28; // [rsp+21h] [rbp-69h]
  void *v29[2]; // [rsp+22h] [rbp-68h] BYREF
  _BYTE ptr[24]; // [rsp+32h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+4Ah] [rbp-40h]

  v31 = __readfsqword(0x28u);
  *(_QWORD *)v25 = a2;
  *(_OWORD *)ptr = -1;
  v26 = 1;
  dirtree_find_entry(ptr, a1, v25);
  si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
  *(__m128 *)v29 = si128;
  if ( si128.m128_u64[0] == -1 && _mm_movehl_ps(a5, si128).m128_u64[0] )
    return 5;
  v9 = *a1;
  memset(ptr, 0, sizeof(ptr));
  dirtree_get_abspath_by_cursor(ptr, v9, v29, 0);
  v10 = haystack;
  if ( *(_QWORD *)&ptr[8] )
    v10 = *(const char **)ptr;
  dirtree_chdir(*a1, v10);
  v11 = *a1;
  v29[0] = a2;
  v12 = (char *)(dirtree_get_dir_size(v11, a2) - 1);
  if ( (__int64)v12 >= 0 )
  {
    while ( 1 )
    {
      v13 = *a1;
      v29[1] = v12;
      v27 = (void *)-1LL;
      v28 = 0;
      dirtree_resolve_cursor(&v27, v13, v29);
      if ( v27 != (void *)-1LL && v28 )
        result = sub_52B640(
                   (int)a1,
                   (int)v27,
                   1,
                   v14,
                   v15,
                   v16,
                   v20,
                   v21,
                   v23,
                   v24,
                   *(int *)((char *)v25 + 2),
                   *(int *)((char *)&v27 + 1),
                   v29[0],
                   (__int64)v29[1],
                   *(__int16 *)ptr,
                   *(__int64 *)&ptr[8]);
      else
        result = dirtree_link_inode(*a1, v27, 0);
      if ( (_BYTE)result )
        break;
      if ( v12-- == nullptr )
        goto LABEL_10;
    }
LABEL_11:
    v19 = *(void **)ptr;
    if ( !*(_QWORD *)ptr )
      return result;
    goto LABEL_12;
  }
LABEL_10:
  dirtree_chdir(*a1, "..");
  result = 0;
  if ( !a3 )
    goto LABEL_11;
  result = dirtree_rmdir(*a1, v10);
  v19 = *(void **)ptr;
  if ( !*(_QWORD *)ptr )
    return result;
LABEL_12:
  v22 = result;
  *(_QWORD *)&ptr[8] = 0;
  qfree(v19);
  return v22;
}
