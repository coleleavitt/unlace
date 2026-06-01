unsigned __int64 __fastcall sub_3B0DB0(int a1, unsigned __int8 *a2, char a3)
{
  __int64 bpt_kernel_interface; // rax
  __int64 v5; // rdx
  int v6; // ecx
  _BYTE *v7; // rdi
  int v8; // r8d
  int v9; // r9d
  unsigned __int8 *v11[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v12; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+18h] [rbp-70h]
  __int128 v14; // [rsp+20h] [rbp-68h]
  _QWORD v15[6]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+60h] [rbp-28h]
  unsigned __int64 v17; // [rsp+68h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v15[0] = 0xFFFFFFFFLL;
  v11[0] = a2;
  v15[1] = 0xFFFFFFFF00000000LL;
  v15[2] = 0xFFFFFFFF00000000LL;
  v11[1] = &a2[a1];
  v12 = 88;
  ptr = nullptr;
  v15[3] = 4;
  v15[4] = 9;
  v15[5] = 0xFFFFFFFF00000000LL;
  v16 = 0;
  v14 = 0;
  sub_3AA4F0((__int64)&v12, v11, 0, 5);
  bpt_kernel_interface = get_bpt_kernel_interface(&v12, v11);
  v7 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)bpt_kernel_interface + 280LL))(
                  bpt_kernel_interface,
                  v15);
  if ( (v7 != nullptr) != a3 )
  {
    if ( !under_debugger )
      interr(40711);
    BUG();
  }
  if ( a3 )
    sub_3B0AC0(v7, 1, v5, v6, v8, v9);
  else
    sub_3AE3C0((__int64)&v12, 2, v5, v6, v8, v9);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  return v17 - __readfsqword(0x28u);
}

