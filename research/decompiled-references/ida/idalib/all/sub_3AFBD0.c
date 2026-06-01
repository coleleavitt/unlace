__int64 __fastcall sub_3AFBD0(__int64 a1, __int64 *a2)
{
  unsigned int v3; // eax
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, const char *); // r13
  __int64 (__fastcall ***v8)(); // rdi
  const char *(__fastcall *v9)(__int64, int); // rax
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 name_ea; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // r14
  unsigned int v22; // r13d
  unsigned __int64 v23; // rbp
  __int64 (__fastcall *v24)(__int64, __int64 *, const char *, _QWORD); // r12
  __int64 (__fastcall ***v25)(); // rdi
  const char *(__fastcall *v26)(__int64, int); // rax
  const char *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __int64 (__fastcall ***bpt_kernel_interface)(); // rdi
  const char *(__fastcall *v32)(__int64, int); // rax
  const char *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax

  v3 = *(_DWORD *)(a1 + 44);
  if ( v3 == 2 )
  {
    v30 = *(int *)(a1 + 40);
    bpt_kernel_interface = get_bpt_kernel_interface();
    v32 = (const char *(__fastcall *)(__int64, int))(*bpt_kernel_interface)[10];
    if ( v32 == sub_3A9640 )
    {
      v33 = &byte_22F0C30;
      if ( (int)v30 > 0 )
      {
        v34 = *(_QWORD *)(qword_2CCB598 + 1576);
        if ( v30 < *(_QWORD *)(v34 + 224) )
        {
          v33 = haystack;
          v35 = *(_QWORD *)(v34 + 216) + 24 * v30;
          if ( *(_QWORD *)(v35 + 8) )
            v33 = *(const char **)v35;
        }
      }
    }
    else
    {
      v33 = v32((__int64)bpt_kernel_interface, v30);
    }
    name_ea = get_name_ea(-1, v33);
    if ( name_ea != -1 )
      goto LABEL_30;
    return 0;
  }
  if ( v3 <= 2 )
  {
    if ( !v3 )
    {
      v15 = *(_QWORD *)(a1 + 32);
      v16 = 1;
      v17 = 0;
LABEL_13:
      v18 = qvector_reserve(a2, v17, v16, 8);
      *a2 = v18;
      v17 = v18;
      v19 = a2[1];
LABEL_14:
      *(_QWORD *)(v17 + 8 * v19) = v15;
      ++a2[1];
      return 1;
    }
    v5 = *(int *)(a1 + 40);
    if ( (_DWORD)v5 )
    {
      v6 = qword_2C819A8;
      v7 = **(__int64 (__fastcall ***)(__int64, const char *))qword_2C819A8;
      v8 = get_bpt_kernel_interface();
      v9 = (const char *(__fastcall *)(__int64, int))(*v8)[10];
      if ( v9 == sub_3A9640 )
      {
        v10 = &byte_22F0C30;
        if ( (int)v5 > 0 )
        {
          v11 = *(_QWORD *)(qword_2CCB598 + 1576);
          if ( v5 < *(_QWORD *)(v11 + 224) )
          {
            v10 = haystack;
            v12 = *(_QWORD *)(v11 + 216) + 24 * v5;
            if ( *(_QWORD *)(v12 + 8) )
              v10 = *(const char **)v12;
          }
        }
      }
      else
      {
        v10 = v9((__int64)v8, v5);
      }
      v13 = v7(v6, v10);
      if ( v13 )
      {
        name_ea = *(_QWORD *)(v13 + 24);
        goto LABEL_30;
      }
      return 0;
    }
    name_ea = sub_631AD0(qword_2CCB598, 93);
    if ( name_ea != -1 )
    {
LABEL_30:
      v15 = *(_QWORD *)(a1 + 32) + name_ea;
      v19 = a2[1];
      v17 = *a2;
      v16 = v19 + 1;
      if ( a2[2] >= (unsigned __int64)(v19 + 1) )
        goto LABEL_14;
      goto LABEL_13;
    }
    return 0;
  }
  if ( v3 != 3 )
  {
    if ( !under_debugger )
      interr(40036);
    BUG();
  }
  v21 = qword_2C819A8;
  v22 = *(_DWORD *)(a1 + 32);
  v23 = *(int *)(a1 + 40);
  v24 = *(__int64 (__fastcall **)(__int64, __int64 *, const char *, _QWORD))(*(_QWORD *)qword_2C819A8 + 8LL);
  v25 = get_bpt_kernel_interface();
  v26 = (const char *(__fastcall *)(__int64, int))(*v25)[10];
  if ( v26 == sub_3A9640 )
  {
    v27 = &byte_22F0C30;
    if ( (int)v23 > 0 )
    {
      v28 = *(_QWORD *)(qword_2CCB598 + 1576);
      if ( v23 < *(_QWORD *)(v28 + 224) )
      {
        v29 = *(_QWORD *)(v28 + 216) + 24 * v23;
        v27 = haystack;
        if ( *(_QWORD *)(v29 + 8) )
          v27 = *(const char **)v29;
      }
    }
  }
  else
  {
    v27 = v26((__int64)v25, v23);
  }
  return v24(v21, a2, v27, v22);
}
