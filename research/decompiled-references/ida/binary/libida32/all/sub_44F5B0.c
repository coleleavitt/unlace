__int64 __fastcall sub_44F5B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 bpt_kernel_interface; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  void *v15; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v16; // [rsp+8h] [rbp-A0h]
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int128 v18; // [rsp+28h] [rbp-80h]
  _QWORD v19[4]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v20[9]; // [rsp+60h] [rbp-48h] BYREF

  v3 = *(__int64 **)(a1 + 40);
  v4 = *(int *)(a1 + 8);
  v20[5] = __readfsqword(0x28u);
  v5 = *v3;
  v15 = nullptr;
  ptr = nullptr;
  v6 = (__int64 *)(v5 + 8 * a3);
  v16 = 0;
  v18 = 0;
  switch_dbctx(v4);
  v7 = *v6;
  v19[3] = &v15;
  v19[2] = 0;
  v19[0] = &off_2AFEE18;
  v19[1] = v7;
  bpt_kernel_interface = get_bpt_kernel_interface(v4, a2);
  (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)bpt_kernel_interface + 384LL))(
    bpt_kernel_interface,
    v19,
    1);
  v9 = *(int *)(a2 + 8);
  switch_dbctx(v9);
  v10 = *v6;
  v20[0] = &off_2AFEE18;
  v20[2] = 0;
  v20[3] = &ptr;
  v20[1] = v10;
  v11 = get_bpt_kernel_interface(v9, v19);
  (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v11 + 384LL))(v11, v20, 1);
  if ( (_QWORD)v16 == (_QWORD)v18 )
  {
    v12 = 0;
    if ( (_QWORD)v16 )
    {
      while ( sub_44F4B0(*((_QWORD *)v15 + v12), *((_QWORD *)ptr + v12)) )
      {
        if ( ++v12 >= (unsigned __int64)v16 )
          goto LABEL_3;
      }
      v13 = 2;
    }
    else
    {
LABEL_3:
      v13 = 0;
    }
  }
  else
  {
    v13 = 1;
  }
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v13;
}

