__int64 __fastcall compare_bpt_locs(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v4; // r12
  __int64 (__fastcall ***bpt_kernel_interface)(); // rdi
  const char *(__fastcall *v7)(__int64, int); // rax
  const char *v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 (__fastcall ***v11)(); // rdi
  const char *(__fastcall *v12)(__int64, int); // rax
  const char *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 < *(_DWORD *)(a2 + 12) )
    return 0xFFFFFFFFLL;
  if ( v2 > *(_DWORD *)(a2 + 12) )
    return 1;
  if ( !v2 )
    goto LABEL_5;
  v4 = *(int *)(a2 + 8);
  if ( *(_DWORD *)(a1 + 8) == (_DWORD)v4 )
    goto LABEL_5;
  bpt_kernel_interface = get_bpt_kernel_interface();
  v7 = (const char *(__fastcall *)(__int64, int))(*bpt_kernel_interface)[10];
  if ( v7 == sub_3A9640 )
  {
    v8 = &byte_22F0C30;
    if ( (int)v4 > 0 )
    {
      v9 = *(_QWORD *)(qword_2CCB598 + 1576);
      if ( v4 < *(_QWORD *)(v9 + 224) )
      {
        v8 = haystack;
        v17 = *(_QWORD *)(v9 + 216) + 24 * v4;
        if ( *(_QWORD *)(v17 + 8) )
          v8 = *(const char **)v17;
      }
    }
  }
  else
  {
    v8 = v7((__int64)bpt_kernel_interface, v4);
  }
  v10 = *(int *)(a1 + 8);
  v11 = get_bpt_kernel_interface();
  v12 = (const char *(__fastcall *)(__int64, int))(*v11)[10];
  if ( v12 == sub_3A9640 )
  {
    v13 = &byte_22F0C30;
    if ( (int)v10 > 0 )
    {
      v14 = *(_QWORD *)(qword_2CCB598 + 1576);
      if ( v10 < *(_QWORD *)(v14 + 224) )
      {
        v13 = haystack;
        v15 = *(_QWORD *)(v14 + 216) + 24 * v10;
        if ( *(_QWORD *)(v15 + 8) )
          v13 = *(const char **)v15;
      }
    }
  }
  else
  {
    v13 = v12((__int64)v11, v10);
  }
  v16 = strcmp(v13, v8);
  if ( v16 < 0 )
    return 0xFFFFFFFFLL;
  if ( !v16 )
  {
LABEL_5:
    if ( *(_QWORD *)a1 >= *(_QWORD *)a2 )
      return *(_QWORD *)a2 < *(_QWORD *)a1;
    return 0xFFFFFFFFLL;
  }
  return 1;
}
