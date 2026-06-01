__int64 __fastcall sub_459550(__int64 a1, __int64 *a2, int a3, int a4, __int64 a5)
{
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // r14
  unsigned int v11; // eax
  __int64 v12; // r15
  bool v13; // zf
  __int64 result; // rax
  void *v15; // rdi
  __int64 v16; // r15
  unsigned int v17; // [rsp+8h] [rbp-C0h]
  unsigned int v18; // [rsp+8h] [rbp-C0h]
  __int64 v19; // [rsp+8h] [rbp-C0h]
  int v20; // [rsp+18h] [rbp-B0h] BYREF
  int v21; // [rsp+1Ch] [rbp-ACh] BYREF
  int v22; // [rsp+20h] [rbp-A8h] BYREF
  int v23; // [rsp+24h] [rbp-A4h] BYREF
  int v24; // [rsp+28h] [rbp-A0h] BYREF
  int v25; // [rsp+2Ch] [rbp-9Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int128 v27; // [rsp+38h] [rbp-90h]
  __int64 v28; // [rsp+48h] [rbp-80h]
  int v29; // [rsp+50h] [rbp-78h]
  void *v30; // [rsp+60h] [rbp-68h] BYREF
  __int128 v31; // [rsp+68h] [rbp-60h]
  __int64 v32; // [rsp+78h] [rbp-50h]
  int v33; // [rsp+80h] [rbp-48h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a5 + 16) )
    return 0;
  switch_dbctx(*(int *)(a1 + 4LL * a4 + 16));
  v29 = -1;
  v8 = *a2;
  v27 = 0;
  v9 = *((_DWORD *)a2 + 1);
  ptr = nullptr;
  v28 = 0;
  if ( *(_DWORD *)a2 < v9 )
  {
    v19 = v8;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 8);
    *((_QWORD *)ptr + v27) = v19;
    *(_QWORD *)&v27 = v27 + 1;
  }
  rangeset_t_sub2((int)&ptr);
  v10 = *a2;
  v11 = *((_DWORD *)a2 + 1);
  v30 = nullptr;
  v32 = 0;
  v33 = -1;
  v31 = 0;
  if ( *(_DWORD *)a2 < v11 )
  {
    v30 = (void *)qvector_reserve(&v30, 0, 1, 8);
    *((_QWORD *)v30 + v31) = v10;
    *(_QWORD *)&v31 = v31 + 1;
  }
  rangeset_t_sub2((int)&v30);
  v12 = 0;
  if ( (_QWORD)v27 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a5 + 16) == 0;
      v20 = 0;
      v21 = a3;
      v22 = a4;
      if ( v13 )
        std::__throw_bad_function_call();
      result = (*(__int64 (__fastcall **)(__int64, int *, char *, int *, int *))(a5 + 24))(
                 a5,
                 &v20,
                 (char *)ptr + 8 * (int)v12,
                 &v21,
                 &v22);
      if ( (_DWORD)result )
        break;
      if ( ++v12 >= (unsigned __int64)v27 )
        goto LABEL_16;
    }
LABEL_11:
    v15 = v30;
    if ( !v30 )
      goto LABEL_13;
    goto LABEL_12;
  }
LABEL_16:
  v16 = 0;
  if ( (_QWORD)v31 )
  {
    do
    {
      v13 = *(_QWORD *)(a5 + 16) == 0;
      v23 = 1;
      v24 = a3;
      v25 = a4;
      if ( v13 )
        std::__throw_bad_function_call();
      result = (*(__int64 (__fastcall **)(__int64, int *, char *, int *, int *))(a5 + 24))(
                 a5,
                 &v23,
                 (char *)v30 + 8 * (int)v16,
                 &v24,
                 &v25);
      if ( (_DWORD)result )
        goto LABEL_11;
    }
    while ( ++v16 < (unsigned __int64)v31 );
  }
  v15 = v30;
  result = 0;
  if ( v30 )
  {
LABEL_12:
    v17 = result;
    *(_QWORD *)&v31 = 0;
    qfree(v15);
    result = v17;
  }
LABEL_13:
  if ( ptr )
  {
    v18 = result;
    *(_QWORD *)&v27 = 0;
    qfree(ptr);
    return v18;
  }
  return result;
}

