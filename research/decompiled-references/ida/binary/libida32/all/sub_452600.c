__int64 __fastcall sub_452600(__int64 a1, __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  __int64 (__fastcall *v7)(__int64); // rax
  unsigned __int64 *v8; // rax
  unsigned __int64 *v10; // r12
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 bpt_kernel_interface; // rax
  char *v14; // r12
  char *v15; // r13
  __int64 v16; // r8
  unsigned __int64 v17; // r15
  char *v18; // rsi
  __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  size_t v21; // r8
  __int64 v22; // r15
  size_t v23; // r9
  char *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-98h]
  size_t v29; // [rsp+0h] [rbp-98h]
  size_t v30; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int128 v32; // [rsp+18h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-68h] BYREF
  __int128 v34; // [rsp+38h] [rbp-60h]
  void **p_ptr; // [rsp+48h] [rbp-50h]
  unsigned __int64 v36; // [rsp+58h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v7 == sub_3D58E0 )
    v8 = (unsigned __int64 *)(a2 + 16);
  else
    v8 = (unsigned __int64 *)v7(a2);
  if ( a3 < *v8
    || a3 >= v8[1]
    || a3 != (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, a3, 0) )
  {
    return a1;
  }
  v10 = (unsigned __int64 *)(**(_QWORD **)(a2 + 40) + 8 * a3);
  sub_3573A0((char **)a1);
  v11 = *(int *)(a2 + 8);
  ptr = nullptr;
  v32 = 0;
  switch_dbctx(v11);
  v12 = *v10;
  src = &off_2AFEE18;
  p_ptr = &ptr;
  v34 = v12;
  bpt_kernel_interface = get_bpt_kernel_interface(v11, "%0*a..%0*a", (int)&ptr, 0.0, (int)&off_2AFEE18, a5);
  (*(void (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)bpt_kernel_interface + 384LL))(
    bpt_kernel_interface,
    &src,
    1);
  v14 = (char *)ptr;
  v15 = (char *)ptr + 8 * v32;
  if ( v15 == ptr )
    goto LABEL_24;
  do
  {
    v25 = *(_QWORD *)v14;
    src = nullptr;
    v34 = 0;
    sub_3B0010((unsigned int *)(v25 + 32), (__int64 *)&src);
    v19 = *(_QWORD *)(a1 + 8);
    if ( v19 )
    {
      v16 = v19 + 1;
      v17 = v19 + 2;
      v18 = *(char **)a1;
      --v19;
      if ( *(_QWORD *)(a1 + 16) < v17 )
        goto LABEL_22;
    }
    else
    {
      v18 = *(char **)a1;
      v17 = 3;
      v16 = 2;
      if ( *(_QWORD *)(a1 + 16) < 3u )
      {
LABEL_22:
        v28 = v16;
        v26 = qvector_reserve(a1, v18, v17, 1);
        *(_QWORD *)a1 = v26;
        v16 = v28;
        v18 = (char *)v26;
      }
    }
    *(_QWORD *)(a1 + 8) = v17;
    v18[v16] = 0;
    *(_WORD *)(*(_QWORD *)a1 + v19) = 8236;
    v20 = v34;
    if ( (_QWORD)v34 )
    {
      v21 = v34 - 1;
      if ( (_QWORD)v34 != 1 )
      {
        v22 = *(_QWORD *)(a1 + 8);
        v23 = v34 - 1;
        if ( v22 )
        {
          --v22;
          v23 = v21 + v22;
          v20 = v34 + v22;
        }
        v24 = *(char **)a1;
        if ( *(_QWORD *)(a1 + 16) < v20 )
        {
          v30 = v34 - 1;
          v29 = v23;
          v27 = qvector_reserve(a1, v24, v20, 1);
          v21 = v30;
          v23 = v29;
          *(_QWORD *)a1 = v27;
          v24 = (char *)v27;
        }
        *(_QWORD *)(a1 + 8) = v20;
        v24[v23] = 0;
        memcpy((void *)(v22 + *(_QWORD *)a1), src, v21);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v34 = 0;
      qfree(src);
    }
    v14 += 8;
  }
  while ( v15 != v14 );
  v14 = (char *)ptr;
LABEL_24:
  if ( v14 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v14);
  }
  return a1;
}

