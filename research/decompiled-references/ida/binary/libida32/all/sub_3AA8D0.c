__int64 __fastcall sub_3AA8D0(__int64 a1, _DWORD *a2, char *a3, int a4, char a5)
{
  __int64 v8; // rcx
  __int64 bpt_kernel_interface; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 (__fastcall *v12)(__int64, char *, void **, __int64, __int64, __int64); // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // edx
  __int64 result; // rax

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v12 = *(__int64 (__fastcall **)(__int64, char *, void **, __int64, __int64, __int64))(*(_QWORD *)bpt_kernel_interface
                                                                                      + 72LL);
  if ( v12 == sub_3A98B0 )
    v13 = sub_3A9350(a3, nullptr, (void **)sub_3A98B0, v8, v10, v11);
  else
    v13 = ((__int64 (__fastcall *)(__int64, char *))v12)(bpt_kernel_interface, a3);
  a2[9] = v13;
  a2[8] = a4;
  v14 = dbg;
  a2[10] = 3;
  a2[13] = -1;
  if ( v14 && (!*(_QWORD *)(v14 + 72) || !*(_BYTE *)(v14 + 80)) && (*(_BYTE *)(v14 + 37) & 2) != 0 || a5 )
  {
    v15 = 8;
    result = 1;
  }
  else
  {
    v15 = 4;
    result = 0;
  }
  a2[14] = v15;
  a2[18] = result;
  return result;
}

