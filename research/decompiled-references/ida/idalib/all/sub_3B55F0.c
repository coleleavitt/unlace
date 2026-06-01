unsigned __int64 __fastcall sub_3B55F0(int a1, unsigned __int8 *a2, char a3)
{
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  __int64 v5; // rdx
  int v6; // ecx
  _BYTE *v7; // rdi
  int v8; // r8d
  int v9; // r9d
  unsigned __int8 *v11[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v12; // [rsp+10h] [rbp-88h] BYREF
  void *ptr; // [rsp+18h] [rbp-80h]
  __int128 v14; // [rsp+20h] [rbp-78h]
  _QWORD v15[9]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v11[0] = a2;
  v15[2] = 0xFFFFFFFFLL;
  v11[1] = &a2[a1];
  v12 = 96;
  ptr = nullptr;
  v15[0] = -1;
  v15[1] = 0;
  v15[3] = -1;
  v15[4] = 4;
  v15[5] = 9;
  v15[6] = 0xFFFFFFFF00000000LL;
  v15[7] = 0;
  v14 = 0;
  sub_3AEC10((__int64)&v12, v11, 0, 5);
  bpt_kernel_interface = get_bpt_kernel_interface();
  v7 = (_BYTE *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD *))(*bpt_kernel_interface)[35])(
                  bpt_kernel_interface,
                  v15);
  if ( (v7 != nullptr) != a3 )
  {
    if ( !under_debugger )
      interr(40711);
    BUG();
  }
  if ( a3 )
    sub_3B5300(v7, 1u, v5, v6, v8, v9);
  else
    sub_3B2AC0((__int64)&v12, 2, v5, v6, v8, v9);
  if ( ptr )
  {
    *(_QWORD *)&v14 = 0;
    qfree(ptr);
  }
  return v16 - __readfsqword(0x28u);
}
