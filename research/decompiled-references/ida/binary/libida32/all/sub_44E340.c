__int64 __fastcall sub_44E340(__int64 a1, const char *a2, __int64 *a3)
{
  int v3; // r12d
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 bpt_kernel_interface; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  void *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-88h] BYREF
  void *ptr; // [rsp+8h] [rbp-80h]
  __int128 v18; // [rsp+10h] [rbp-78h]
  __int64 v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+2Ch] [rbp-5Ch]
  __int64 v22; // [rsp+34h] [rbp-54h]
  __int64 v23; // [rsp+3Ch] [rbp-4Ch]
  __int64 v24; // [rsp+44h] [rbp-44h]
  __int64 v25; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v3 = (int)a2;
  v4 = *a3;
  v5 = a3[2];
  v26 = __readfsqword(0x28u);
  v18 = 0;
  v16 = v4;
  ptr = nullptr;
  if ( v5 )
  {
    v15 = (void *)qalloc_or_throw(v5, a2);
    a2 = (const char *)a3[1];
    *((_QWORD *)&v18 + 1) = v5;
    ptr = v15;
    memcpy(v15, a2, v5);
    *(_QWORD *)&v18 = v5;
  }
  v7 = a3[4];
  v21 = *(__int64 *)((char *)a3 + 44);
  v8 = *(__int64 *)((char *)a3 + 52);
  v19 = v7;
  LODWORD(v7) = *((_DWORD *)a3 + 10);
  v22 = v8;
  v9 = *(__int64 *)((char *)a3 + 60);
  v20 = v7;
  v23 = v9;
  v24 = *(__int64 *)((char *)a3 + 68);
  v25 = *(__int64 *)((char *)a3 + 76);
  if ( (unsigned int)(v7 - 1) > 2 )
  {
    a1 = (int)a1;
    switch_dbctx((int)a1);
  }
  else
  {
    switch_dbctx(v3);
    bpt_kernel_interface = get_bpt_kernel_interface(v3, a2);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 80LL))(
            bpt_kernel_interface,
            HIDWORD(v19));
    switch_dbctx((int)a1);
    a1 = get_bpt_kernel_interface((int)a1, HIDWORD(v19));
    a2 = (const char *)v11;
    HIDWORD(v19) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, v11);
  }
  HIDWORD(v25) = 0;
  v12 = get_bpt_kernel_interface(a1, a2);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v12 + 312LL))(v12, &v16, 0);
  if ( !v13 )
  {
    if ( !under_debugger )
      interr(2660);
    BUG();
  }
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  return v13;
}

