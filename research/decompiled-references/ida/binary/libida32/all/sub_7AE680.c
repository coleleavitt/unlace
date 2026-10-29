__int64 __fastcall sub_7AE680(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  int v3; // r14d
  const char *v4; // r13
  __int64 bpt_kernel_interface; // rax
  int v6; // eax

  v2 = (_DWORD *)sub_7AE510();
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 72);
    v4 = haystack;
    if ( *(_QWORD *)(a1 + 48) )
      v4 = *(const char **)(a1 + 40);
    bpt_kernel_interface = get_bpt_kernel_interface(a1, (const char *)a2);
    v6 = (*(__int64 (__fastcall **)(__int64, const char *))(*(_QWORD *)bpt_kernel_interface + 72LL))(
           bpt_kernel_interface,
           v4);
    v2[8] = v3;
    v2[9] = v6;
    v2[10] = 3;
    v2[13] = -1;
  }
  *(_BYTE *)a2 = 2;
  *(_DWORD *)(a2 + 8) = v2 != nullptr;
  return 0;
}

