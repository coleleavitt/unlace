__int64 __fastcall sub_3B0010(unsigned int *a1, __int64 *a2)
{
  unsigned int v2; // eax
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi
  const char *(__fastcall *v6)(__int64, int); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebp
  __int64 bpt_kernel_interface; // rdi
  const char *(__fastcall *v11)(__int64, int); // rax
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rdi
  const char *(__fastcall *v16)(__int64, int); // rax
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // r12
  size_t v20; // rax
  size_t v21; // rbp
  char *v22; // rdi
  size_t v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v28; // [rsp+8h] [rbp-40h]
  unsigned __int64 v29; // [rsp+18h] [rbp-30h]

  v2 = a1[2];
  v29 = __readfsqword(0x28u);
  if ( v2 != 2 )
  {
    if ( v2 > 2 )
    {
      if ( v2 == 3 )
      {
        v9 = a1[1];
        bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
        v11 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)bpt_kernel_interface + 80LL);
        if ( v11 != sub_3A4F10 )
          v11(bpt_kernel_interface, v9);
        sub_3573A0((char **)a2);
      }
      else
      {
        v12 = (char *)*a2;
        if ( (unsigned __int64)a2[2] <= 1 )
        {
          v25 = qvector_reserve(a2, v12, 2, 1);
          *a2 = v25;
          v12 = (char *)v25;
        }
        a2[1] = 2;
        *v12 = 63;
        *(_BYTE *)(*a2 + 1) = 0;
      }
    }
    else
    {
      if ( v2 )
      {
        LODWORD(v4) = a1[1];
        goto LABEL_5;
      }
      sub_3573A0((char **)a2);
      v24 = *a1;
      ptr = nullptr;
      v28 = 0;
      if ( get_nice_colored_name(&ptr, v24, 2) > 0 )
        sub_357520(a2);
      if ( ptr )
      {
        *(_QWORD *)&v28 = 0;
        qfree(ptr);
      }
    }
LABEL_16:
    v13 = a2[1];
    v8 = v13 - 1;
    if ( v13 )
      return v8;
    return 0;
  }
  v4 = (int)a1[1];
  if ( !*a1 )
  {
    v15 = get_bpt_kernel_interface(a1, a2);
    v16 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)v15 + 80LL);
    if ( v16 == sub_3A4F10 )
    {
      if ( (int)v4 <= 0 )
        goto LABEL_33;
      v17 = *(_QWORD *)(qword_2CA1698 + 1384);
      if ( v4 >= *(_QWORD *)(v17 + 224) )
        goto LABEL_33;
      v18 = *(_QWORD *)(v17 + 216) + 24 * v4;
      if ( !*(_QWORD *)(v18 + 8) )
        goto LABEL_33;
      v19 = *(const char **)v18;
    }
    else
    {
      v19 = v16(v15, v4);
    }
    if ( v19 )
    {
      v20 = strlen(v19);
      v21 = v20;
      if ( v20 )
      {
        v22 = (char *)*a2;
        v23 = v20 + 1;
        if ( a2[2] < v20 + 1 )
        {
          v26 = qvector_reserve(a2, *a2, v20 + 1, 1);
          *a2 = v26;
          v22 = (char *)v26;
        }
        a2[1] = v23;
        memmove(v22, v19, v21);
        *(_BYTE *)(*a2 + v21) = 0;
        goto LABEL_16;
      }
    }
LABEL_33:
    a2[1] = 0;
    return 0;
  }
LABEL_5:
  v5 = get_bpt_kernel_interface(a1, a2);
  v6 = *(const char *(__fastcall **)(__int64, int))(*(_QWORD *)v5 + 80LL);
  if ( v6 != sub_3A4F10 )
    v6(v5, v4);
  sub_3573A0((char **)a2);
  v7 = a2[1];
  v8 = v7 - 1;
  if ( !v7 )
    return 0;
  return v8;
}

