__int64 __fastcall sub_46D960(__int64 a1, unsigned __int64 *a2, int a3, int a4, __int64 a5)
{
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  bool v13; // zf
  __int64 result; // rax
  void *v15; // rdi
  __int64 v16; // r15
  unsigned int v17; // [rsp+0h] [rbp-C8h]
  unsigned int v18; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v19; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v20; // [rsp+8h] [rbp-C0h]
  int v21; // [rsp+18h] [rbp-B0h] BYREF
  int v22; // [rsp+1Ch] [rbp-ACh] BYREF
  int v23; // [rsp+20h] [rbp-A8h] BYREF
  int v24; // [rsp+24h] [rbp-A4h] BYREF
  int v25; // [rsp+28h] [rbp-A0h] BYREF
  int v26; // [rsp+2Ch] [rbp-9Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int128 v28; // [rsp+38h] [rbp-90h]
  __int64 v29; // [rsp+48h] [rbp-80h]
  int v30; // [rsp+50h] [rbp-78h]
  void *v31; // [rsp+60h] [rbp-68h] BYREF
  __int128 v32; // [rsp+68h] [rbp-60h]
  __int64 v33; // [rsp+78h] [rbp-50h]
  int v34; // [rsp+80h] [rbp-48h]
  unsigned __int64 v35; // [rsp+88h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a5 + 16) )
    return 0;
  switch_dbctx(*(int *)(a1 + 4LL * a4 + 16));
  v8 = *a2;
  v9 = a2[1];
  ptr = nullptr;
  v29 = 0;
  v30 = -1;
  v28 = 0;
  if ( v8 < v9 )
  {
    v20 = v9;
    v19 = v8;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 16);
    *((__m128i *)ptr + v28) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v20);
    *(_QWORD *)&v28 = v28 + 1;
  }
  rangeset_t_sub2((int)&ptr);
  v10 = *a2;
  v11 = a2[1];
  v31 = nullptr;
  v33 = 0;
  v34 = -1;
  v32 = 0;
  if ( v10 < v11 )
  {
    v31 = (void *)qvector_reserve(&v31, 0, 1, 16);
    *((__m128i *)v31 + v32) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v11);
    *(_QWORD *)&v32 = v32 + 1;
  }
  rangeset_t_sub2((int)&v31);
  v12 = 0;
  if ( (_QWORD)v28 )
  {
    while ( 1 )
    {
      v21 = 0;
      v13 = *(_QWORD *)(a5 + 16) == 0;
      v23 = a4;
      v22 = a3;
      if ( v13 )
        std::__throw_bad_function_call();
      result = (*(__int64 (__fastcall **)(__int64, int *, char *, int *, int *))(a5 + 24))(
                 a5,
                 &v21,
                 (char *)ptr + 16 * (int)v12,
                 &v22,
                 &v23);
      if ( (_DWORD)result )
        break;
      if ( ++v12 >= (unsigned __int64)v28 )
        goto LABEL_16;
    }
LABEL_11:
    v15 = v31;
    if ( !v31 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_16:
  v16 = 0;
  if ( (_QWORD)v32 )
  {
    do
    {
      v24 = 1;
      v13 = *(_QWORD *)(a5 + 16) == 0;
      v26 = a4;
      v25 = a3;
      if ( v13 )
        std::__throw_bad_function_call();
      result = (*(__int64 (__fastcall **)(__int64, int *, char *, int *, int *))(a5 + 24))(
                 a5,
                 &v24,
                 (char *)v31 + 16 * (int)v16,
                 &v25,
                 &v26);
      if ( (_DWORD)result )
        goto LABEL_11;
    }
    while ( ++v16 < (unsigned __int64)v32 );
  }
  v15 = v31;
  result = 0;
  if ( v31 )
  {
LABEL_12:
    v17 = result;
    *(_QWORD *)&v32 = 0;
    qfree(v15);
    result = v17;
  }
LABEL_13:
  if ( ptr )
  {
    v18 = result;
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
    return v18;
  }
  return result;
}
