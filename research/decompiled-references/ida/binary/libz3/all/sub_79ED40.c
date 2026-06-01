__int64 __fastcall sub_79ED40(_QWORD *a1, unsigned int *a2)
{
  char **exception; // rbx
  __int64 v3; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r12
  unsigned __int8 (*v9)(void); // rax
  unsigned int v10; // r12d
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  double v14; // xmm0_8
  unsigned int v15; // eax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned int **v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r13d
  unsigned int v21; // ecx
  unsigned int *v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = (__int64)(a1 - 4);
  v5 = a1[211];
  if ( v5 && (v6 = *a2, (unsigned int)v6 < *(_DWORD *)(v5 - 4)) )
  {
    v7 = a1[15];
    v8 = *(_QWORD *)(v5 + 8 * v6);
    v9 = *(unsigned __int8 (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( v8 )
    {
      if ( v9() )
        return 1;
      v12 = sub_7CF0A0(v3, a2);
      if ( !v12 )
        return 1;
      v13 = v8 + 88;
      if ( *(int *)(v8 + 88) >> 8 != -1 )
      {
        while ( *(_DWORD *)(v12 + 12) != *(char *)v13 )
        {
          v13 = *(_QWORD *)(v13 + 8);
          if ( !v13 )
            goto LABEL_19;
        }
        v13 = (unsigned int)(*(int *)v13 >> 8);
        if ( (_DWORD)v13 != -1 )
          return 1;
      }
LABEL_19:
      (*(void (__fastcall **)(__int64, unsigned int *, unsigned __int64))(*(_QWORD *)(v12 + 48) + 48LL))(
        v12 + 48,
        a2,
        v13);
      return 1;
    }
  }
  else
  {
    v7 = a1[15];
    v9 = *(unsigned __int8 (**)(void))(*(_QWORD *)v7 + 16LL);
  }
  v10 = ((__int64 (__fastcall *)(__int64, unsigned int *))v9)(v7, a2);
  if ( (_BYTE)v10 )
  {
    v14 = (*(double (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)a1[15] + 24LL))(a1[15], a2);
    sub_79B540(v3, v15, a2, v14);
    return 1;
  }
  if ( *((_WORD *)a2 + 2) || !a2[6] )
  {
    v12 = sub_7CF0A0(v3, a2);
    if ( !v12 )
    {
      v19 = sub_79AF20(v3, (__int64)a2, 0, nullptr);
      sub_79D5A0(v3, v19);
      return 1;
    }
    goto LABEL_19;
  }
  v16 = (_QWORD *)a1[2];
  if ( v16 )
  {
    v17 = *((unsigned int *)v16 - 1);
    if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
    {
      v20 = (unsigned int)(3 * v17 + 1) >> 1;
      v21 = 16 * v20 + 8;
      if ( 16 * (int)v17 + 8 >= v21 || (unsigned int)v17 >= v20 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v25, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v25);
        sub_233E40((__int64)v25);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = (unsigned int *)sub_186B300(v16 - 1, v21);
      v16 = v22 + 2;
      *v22 = v20;
      v23 = v22[1];
      a1[2] = v16;
      v18 = (unsigned int **)&v16[2 * v23];
    }
    else
    {
      v18 = (unsigned int **)&v16[2 * v17];
    }
  }
  else
  {
    v24 = (_QWORD *)sub_186B270(0x28u);
    *v24 = 2;
    v16 = v24 + 1;
    a1[2] = v24 + 1;
    v18 = (unsigned int **)(v24 + 1);
  }
  *v18 = a2;
  *((_DWORD *)v18 + 2) = 0;
  ++*((_DWORD *)v16 - 1);
  return v10;
}

