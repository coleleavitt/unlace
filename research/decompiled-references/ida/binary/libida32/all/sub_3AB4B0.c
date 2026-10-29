__int64 __fastcall sub_3AB4B0(_DWORD *a1, __int64 *a2)
{
  unsigned int v3; // eax
  unsigned __int64 v5; // r12
  int v6; // edx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // ebp
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v14; // r14
  unsigned int v15; // r13d
  unsigned __int64 v16; // rbp
  __int64 (__fastcall *v17)(__int64, __int64 *, const char *, _QWORD); // r12
  __int64 v18; // rdi
  const char *(__fastcall *v19)(__int64, int); // rax
  const char *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r12
  __int64 bpt_kernel_interface; // rdi
  const char *(__fastcall *v25)(__int64, int); // rax
  const char *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  int name_ea; // eax
  __int64 v30; // r14
  __int64 (__fastcall *v31)(__int64, const char *); // r13
  __int64 v32; // rdi
  const char *(__fastcall *v33)(__int64, int); // rax
  const char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax

  v3 = a1[10];
  if ( v3 == 2 )
  {
    v23 = (int)a1[9];
    bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
    v25 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)bpt_kernel_interface + 80LL);
    if ( v25 == sub_3A4F10 )
    {
      v26 = &byte_22CD811;
      if ( (int)v23 > 0 )
      {
        v27 = *(_QWORD *)(qword_2CA1698 + 1384);
        if ( v23 < *(_QWORD *)(v27 + 224) )
        {
          v26 = haystack;
          v28 = *(_QWORD *)(v27 + 216) + 24 * v23;
          if ( *(_QWORD *)(v28 + 8) )
            v26 = *(const char **)v28;
        }
      }
    }
    else
    {
      v26 = v25(bpt_kernel_interface, v23);
    }
    name_ea = get_name_ea(0xFFFFFFFFLL, v26);
    if ( name_ea != -1 )
    {
      v8 = a2[2];
      v10 = a1[8] + name_ea;
      v7 = a2[1];
      v9 = *a2;
      v11 = v7 + 1;
LABEL_7:
      if ( v8 >= v11 )
      {
LABEL_11:
        *(_DWORD *)(v9 + 4 * v7) = v10;
        ++a2[1];
        return 1;
      }
LABEL_10:
      v12 = qvector_reserve(a2, v9, v11, 4);
      *a2 = v12;
      v9 = v12;
      v7 = a2[1];
      goto LABEL_11;
    }
    return 0;
  }
  if ( v3 <= 2 )
  {
    if ( !v3 )
    {
      v10 = a1[8];
      v11 = 1;
      v9 = 0;
      goto LABEL_10;
    }
    v5 = (int)a1[9];
    if ( (_DWORD)v5 )
    {
      v30 = qword_2C57988;
      v31 = **(__int64 (__fastcall ***)(__int64, const char *))qword_2C57988;
      v32 = get_bpt_kernel_interface(a1, a2);
      v33 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)v32 + 80LL);
      if ( v33 == sub_3A4F10 )
      {
        v34 = &byte_22CD811;
        if ( (int)v5 > 0 )
        {
          v35 = *(_QWORD *)(qword_2CA1698 + 1384);
          if ( v5 < *(_QWORD *)(v35 + 224) )
          {
            v34 = haystack;
            v36 = *(_QWORD *)(v35 + 216) + 24 * v5;
            if ( *(_QWORD *)(v36 + 8) )
              v34 = *(const char **)v36;
          }
        }
      }
      else
      {
        v34 = v33(v32, v5);
      }
      v37 = v31(v30, v34);
      if ( v37 )
      {
        v6 = *(_DWORD *)(v37 + 24);
        goto LABEL_6;
      }
    }
    else
    {
      v6 = sub_614FB0(qword_2CA1698, 93);
      if ( v6 != -1 )
      {
LABEL_6:
        v7 = a2[1];
        v8 = a2[2];
        v9 = *a2;
        v10 = a1[8] + v6;
        v11 = v7 + 1;
        goto LABEL_7;
      }
    }
    return 0;
  }
  if ( v3 != 3 )
  {
    if ( !under_debugger )
      interr(40036);
    BUG();
  }
  v14 = qword_2C57988;
  v15 = a1[8];
  v16 = (int)a1[9];
  v17 = *(__int64 (__fastcall **)(__int64, __int64 *, const char *, _QWORD))(*(_QWORD *)qword_2C57988 + 8LL);
  v18 = get_bpt_kernel_interface(a1, a2);
  v19 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)v18 + 80LL);
  if ( v19 == sub_3A4F10 )
  {
    v20 = &byte_22CD811;
    if ( (int)v16 > 0 )
    {
      v21 = *(_QWORD *)(qword_2CA1698 + 1384);
      if ( v16 < *(_QWORD *)(v21 + 224) )
      {
        v22 = *(_QWORD *)(v21 + 216) + 24 * v16;
        v20 = haystack;
        if ( *(_QWORD *)(v22 + 8) )
          v20 = *(const char **)v22;
      }
    }
  }
  else
  {
    v20 = v19(v18, v16);
  }
  return v17(v14, a2, v20, v15);
}

