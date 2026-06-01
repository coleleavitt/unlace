__int64 __fastcall sub_79D790(_QWORD *a1, unsigned int *a2)
{
  char **exception; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r12
  unsigned __int8 (*v8)(void); // rax
  unsigned int v9; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  double v13; // xmm0_8
  unsigned int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned int **v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r13d
  unsigned int v20; // ecx
  unsigned int *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a1[215];
  if ( v4 && (v5 = *a2, (unsigned int)v5 < *(_DWORD *)(v4 - 4)) )
  {
    v6 = a1[19];
    v7 = *(_QWORD *)(v4 + 8 * v5);
    v8 = *(unsigned __int8 (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( v7 )
    {
      if ( v8() )
        return 1;
      v11 = sub_7CF0A0(a1, a2);
      if ( !v11 )
        return 1;
      v12 = v7 + 88;
      if ( *(int *)(v7 + 88) >> 8 != -1 )
      {
        while ( *(_DWORD *)(v11 + 12) != *(char *)v12 )
        {
          v12 = *(_QWORD *)(v12 + 8);
          if ( !v12 )
            goto LABEL_19;
        }
        v12 = (unsigned int)(*(int *)v12 >> 8);
        if ( (_DWORD)v12 != -1 )
          return 1;
      }
LABEL_19:
      (*(void (__fastcall **)(__int64, unsigned int *, unsigned __int64))(*(_QWORD *)(v11 + 48) + 48LL))(
        v11 + 48,
        a2,
        v12);
      return 1;
    }
  }
  else
  {
    v6 = a1[19];
    v8 = *(unsigned __int8 (**)(void))(*(_QWORD *)v6 + 16LL);
  }
  v9 = ((__int64 (__fastcall *)(__int64, unsigned int *))v8)(v6, a2);
  if ( (_BYTE)v9 )
  {
    v13 = (*(double (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)a1[19] + 24LL))(a1[19], a2);
    sub_79B540((__int64)a1, v14, a2, v13);
    return 1;
  }
  if ( *((_WORD *)a2 + 2) || !a2[6] )
  {
    v11 = sub_7CF0A0(a1, a2);
    if ( !v11 )
    {
      v18 = sub_79AF20((__int64)a1, (__int64)a2, 0, nullptr);
      sub_79D5A0(a1, v18);
      return 1;
    }
    goto LABEL_19;
  }
  v15 = (_QWORD *)a1[6];
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
    {
      v19 = (unsigned int)(3 * v16 + 1) >> 1;
      v20 = 16 * v19 + 8;
      if ( 16 * (int)v16 + 8 >= v20 || (unsigned int)v16 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v24, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v24);
        sub_233E40((__int64)v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v15 - 1, v20);
      v15 = v21 + 2;
      *v21 = v19;
      v22 = v21[1];
      a1[6] = v15;
      v17 = (unsigned int **)&v15[2 * v22];
    }
    else
    {
      v17 = (unsigned int **)&v15[2 * v16];
    }
  }
  else
  {
    v23 = (_QWORD *)sub_186B270(0x28u);
    *v23 = 2;
    v15 = v23 + 1;
    a1[6] = v23 + 1;
    v17 = (unsigned int **)(v23 + 1);
  }
  *v17 = a2;
  *((_DWORD *)v17 + 2) = 0;
  ++*((_DWORD *)v15 - 1);
  return v9;
}

