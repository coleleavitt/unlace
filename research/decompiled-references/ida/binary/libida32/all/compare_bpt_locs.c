__int64 __fastcall compare_bpt_locs(_DWORD *a1, unsigned __int64 a2)
{
  int v2; // eax
  _DWORD *v3; // rbp
  unsigned __int64 v5; // r12
  __int64 bpt_kernel_interface; // rdi
  const char *(__fastcall *v8)(__int64, int); // rax
  const char *v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  const char *(__fastcall *v13)(__int64, int); // rax
  const char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax

  v2 = a1[2];
  if ( v2 < *(_DWORD *)(a2 + 8) )
    return 0xFFFFFFFFLL;
  if ( v2 > *(_DWORD *)(a2 + 8) )
    return 1;
  v3 = (_DWORD *)a2;
  if ( !v2 )
    goto LABEL_5;
  v5 = *(int *)(a2 + 4);
  if ( a1[1] == (_DWORD)v5 )
    goto LABEL_5;
  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v8 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)bpt_kernel_interface + 80LL);
  if ( v8 == sub_3A4F10 )
  {
    v9 = &byte_22CD811;
    if ( (int)v5 > 0 )
    {
      v10 = *(_QWORD *)(qword_2CA1698 + 1384);
      if ( v5 < *(_QWORD *)(v10 + 224) )
      {
        v9 = haystack;
        v18 = *(_QWORD *)(v10 + 216) + 24 * v5;
        if ( *(_QWORD *)(v18 + 8) )
          v9 = *(const char **)v18;
      }
    }
  }
  else
  {
    a2 = (unsigned int)v5;
    v9 = v8(bpt_kernel_interface, v5);
  }
  v11 = (int)a1[1];
  v12 = get_bpt_kernel_interface(bpt_kernel_interface, a2);
  v13 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)v12 + 80LL);
  if ( v13 == sub_3A4F10 )
  {
    v14 = &byte_22CD811;
    if ( (int)v11 > 0 )
    {
      v15 = *(_QWORD *)(qword_2CA1698 + 1384);
      if ( v11 < *(_QWORD *)(v15 + 224) )
      {
        v14 = haystack;
        v16 = *(_QWORD *)(v15 + 216) + 24 * v11;
        if ( *(_QWORD *)(v16 + 8) )
          v14 = *(const char **)v16;
      }
    }
  }
  else
  {
    v14 = v13(v12, v11);
  }
  v17 = strcmp(v14, v9);
  if ( v17 < 0 )
    return 0xFFFFFFFFLL;
  if ( !v17 )
  {
LABEL_5:
    if ( *a1 >= *v3 )
      return *v3 < *a1;
    return 0xFFFFFFFFLL;
  }
  return 1;
}

