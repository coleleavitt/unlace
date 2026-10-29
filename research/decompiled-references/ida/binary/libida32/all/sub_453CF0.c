unsigned __int64 __fastcall sub_453CF0(__int64 a1, __int64 *a2, const char *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  _QWORD *v8; // rax
  const char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 *v13; // r12
  __int64 v14; // rax
  __int64 bpt_kernel_interface; // rax
  __int64 *v16; // rbp
  __int64 *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned int *v22; // r14
  __int64 v23; // rax
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v25; // [rsp+8h] [rbp-70h]
  _QWORD v26[5]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]

  v5 = *(int *)(a1 + 8);
  v27 = __readfsqword(0x28u);
  switch_dbctx(v5);
  v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL);
  if ( v7 == sub_3D58E0 )
    v8 = (_QWORD *)(a1 + 16);
  else
    v8 = (_QWORD *)v7(a1);
  if ( (unsigned __int64)a3 >= *v8 && (unsigned __int64)a3 < v8[1] )
  {
    v10 = a3;
    if ( a3 == (const char *)(*(__int64 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 40LL))(
                               a1,
                               a3,
                               0) )
    {
      v11 = *(int *)(a1 + 8);
      v12 = **(_QWORD **)(a1 + 40);
      ptr = nullptr;
      v25 = 0;
      v13 = (__int64 *)(v12 + 8LL * (_QWORD)a3);
      switch_dbctx(v11);
      v14 = *v13;
      v26[3] = &ptr;
      v26[2] = 0;
      v26[0] = &off_2AFEE18;
      v26[1] = v14;
      bpt_kernel_interface = get_bpt_kernel_interface(v11, v10);
      (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)bpt_kernel_interface + 384LL))(
        bpt_kernel_interface,
        v26,
        1);
      v16 = (__int64 *)ptr;
      v17 = (__int64 *)((char *)ptr + 8 * v25);
      if ( ptr != v17 )
      {
        do
        {
          v19 = *v16;
          v20 = a2[1];
          v21 = *a2;
          v22 = (unsigned int *)(*v16 + 32);
          if ( a2[2] < (unsigned __int64)(v20 + 1) )
          {
            v23 = qvector_reserve(a2, v21, v20 + 1, 24);
            *a2 = v23;
            v20 = a2[1];
            v21 = v23;
          }
          v18 = v21 + 24 * v20;
          *(_QWORD *)v18 = 0;
          *(_OWORD *)(v18 + 8) = 0;
          ++a2[1];
          sub_3B0010(v22, (__int64 *)v18);
          sub_453720(a2, v19, 4);
          ++v16;
        }
        while ( v17 != v16 );
        v17 = (__int64 *)ptr;
      }
      if ( v17 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v17);
      }
    }
  }
  return v27 - __readfsqword(0x28u);
}

