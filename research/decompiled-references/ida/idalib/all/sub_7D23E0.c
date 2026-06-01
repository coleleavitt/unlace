__int64 __fastcall sub_7D23E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  const char *v4; // r13
  __int64 (__fastcall ***bpt_kernel_interface)(); // rax
  int v6; // eax

  v2 = sub_7D1970((__int64)a1);
  if ( v2 )
  {
    v3 = a1[9];
    v4 = haystack;
    if ( a1[6] )
      v4 = (const char *)a1[5];
    bpt_kernel_interface = get_bpt_kernel_interface();
    v6 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(), const char *))(*bpt_kernel_interface)[9])(
           bpt_kernel_interface,
           v4);
    *(_QWORD *)(v2 + 32) = v3;
    *(_DWORD *)(v2 + 40) = v6;
    *(_DWORD *)(v2 + 44) = 2;
    *(_QWORD *)(v2 + 56) = -1;
  }
  *(_BYTE *)a2 = 2;
  *(_QWORD *)(a2 + 8) = v2 != 0;
  return 0;
}
