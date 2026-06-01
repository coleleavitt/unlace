unsigned __int64 __fastcall sub_44E530(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 bpt_kernel_interface; // rax
  __int64 **v10; // rbx
  char *v11; // r13
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+8h] [rbp-70h]
  _QWORD v15[5]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v4 = *(__int64 **)(a1 + 40);
  v16 = __readfsqword(0x28u);
  v5 = *v4;
  ptr = nullptr;
  v14 = 0;
  v6 = (__int64 *)(v5 + 8 * a3);
  v7 = *(int *)(a2 + 8);
  switch_dbctx(v7);
  v8 = *v6;
  v15[3] = &ptr;
  v15[2] = 0;
  v15[0] = &off_2AFEE18;
  v15[1] = v8;
  bpt_kernel_interface = get_bpt_kernel_interface(v7, a2);
  (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)bpt_kernel_interface + 384LL))(
    bpt_kernel_interface,
    v15,
    1);
  switch_dbctx(*(int *)(a1 + 8));
  v10 = (__int64 **)ptr;
  v11 = (char *)ptr + 8 * v14;
  if ( v11 != ptr )
  {
    do
      sub_44E340(*(unsigned int *)(a1 + 8), (const char *)*(unsigned int *)(a2 + 8), *v10++);
    while ( v11 != (char *)v10 );
    v10 = (__int64 **)ptr;
  }
  if ( v10 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v10);
  }
  return v16 - __readfsqword(0x28u);
}

