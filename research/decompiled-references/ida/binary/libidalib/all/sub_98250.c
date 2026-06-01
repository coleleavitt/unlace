__int64 __fastcall sub_98250(__int64 a1, int a2)
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

  qword_251940 = -1;
  bpt_kernel_interface = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 16LL))(bpt_kernel_interface);
  sub_C8830(20, a2, v3, v4, v5, v6);
  v7 = get_bpt_kernel_interface();
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7);
  return sub_C8830(21, a2, v8, v9, v10, v11);
}

