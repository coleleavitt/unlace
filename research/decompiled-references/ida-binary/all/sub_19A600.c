__int64 __fastcall sub_19A600(__int64 a1, __int64 a2)
{
  __int64 bpt_kernel_interface; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d

  qword_8CACD0 = -1;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 16LL))(bpt_kernel_interface);
  sub_236E30(20, a2, v3, v4, v5, v6);
  v7 = get_bpt_kernel_interface(20, a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7);
  sub_236E30(21, a2, v8, v9, v10, v11);
  return sub_383E90();
}
