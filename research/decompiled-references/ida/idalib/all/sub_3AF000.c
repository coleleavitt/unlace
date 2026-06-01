__int64 __fastcall sub_3AF000(__int64 a1, __int64 a2, char *a3, int a4, char a5)
{
  __int64 v7; // rbp
  __int64 (__fastcall ***bpt_kernel_interface)(); // rdi
  __int64 (__fastcall *v9)(__int64, char *); // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // edx
  __int64 result; // rax

  v7 = a4;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v9 = (__int64 (__fastcall *)(__int64, char *))(*bpt_kernel_interface)[9];
  if ( v9 == sub_3ADF90 )
    v10 = sub_3ADA30(a3, nullptr);
  else
    v10 = v9((__int64)bpt_kernel_interface, a3);
  *(_DWORD *)(a2 + 40) = v10;
  *(_QWORD *)(a2 + 32) = v7;
  v11 = dbg;
  *(_DWORD *)(a2 + 44) = 3;
  *(_QWORD *)(a2 + 56) = -1;
  if ( v11 && (!*(_QWORD *)(v11 + 72) || !*(_BYTE *)(v11 + 80)) && (*(_BYTE *)(v11 + 37) & 2) != 0 || a5 )
  {
    v12 = 8;
    result = 1;
  }
  else
  {
    v12 = 4;
    result = 0;
  }
  *(_DWORD *)(a2 + 64) = v12;
  *(_DWORD *)(a2 + 80) = result;
  return result;
}
