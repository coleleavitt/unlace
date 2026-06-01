unsigned __int64 __fastcall sub_44EB90(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 bpt_kernel_interface; // rdi
  _QWORD *v8; // rsi
  char *v9; // rbx
  char *v10; // rbp
  _QWORD *v11; // r12
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v14; // [rsp+8h] [rbp-60h]
  _QWORD v15[5]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 40);
  v3 = *(int *)(a1 + 8);
  v4 = *v2;
  ptr = nullptr;
  v14 = 0;
  v5 = (__int64 *)(v4 + 8 * a2);
  switch_dbctx(v3);
  v6 = *v5;
  v15[3] = &ptr;
  v15[2] = 0;
  v15[0] = &off_2AFEE18;
  v15[1] = v6;
  bpt_kernel_interface = get_bpt_kernel_interface(v3, a2);
  v8 = v15;
  (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)bpt_kernel_interface + 384LL))(
    bpt_kernel_interface,
    v15,
    1);
  v9 = (char *)ptr;
  v10 = (char *)ptr + 8 * v14;
  if ( v10 != ptr )
  {
    do
    {
      v11 = *(_QWORD **)v9;
      bpt_kernel_interface = get_bpt_kernel_interface(bpt_kernel_interface, v8);
      v8 = v11;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)bpt_kernel_interface + 120LL))(
              bpt_kernel_interface,
              v11) )
      {
        if ( !under_debugger )
          interr(2661);
        BUG();
      }
      v9 += 8;
    }
    while ( v10 != v9 );
    v9 = (char *)ptr;
  }
  if ( v9 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v9);
  }
  return v16 - __readfsqword(0x28u);
}

