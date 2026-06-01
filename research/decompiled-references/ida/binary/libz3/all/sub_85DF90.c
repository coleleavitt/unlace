__int64 __fastcall sub_85DF90(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned __int8 (*v3)(void); // rax
  __int64 v4; // rax
  char *v5; // rdx
  int *v7; // rax
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  int *v11; // rbp
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned int v21; // r12d
  unsigned int v22; // ecx
  unsigned int *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 544LL);
  if ( (char *)v3 == (char *)sub_85CF40 )
  {
    v4 = sub_7E4F00(a1, (unsigned int *)a2);
    if ( v4 )
    {
      v5 = (char *)(v4 + 88);
      if ( *(int *)(v4 + 88) >> 8 != -1 )
      {
        while ( *(_DWORD *)(a1 + 12) != *v5 )
        {
          v5 = *((char **)v5 + 1);
          if ( !v5 )
            goto LABEL_10;
        }
        if ( *(int *)v5 >> 8 != -1 )
          return 1;
      }
    }
  }
  else if ( v3() )
  {
    return 1;
  }
LABEL_10:
  if ( *(_WORD *)(a2 + 4)
    || ((v7 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr ? (v8 = -1) : (v8 = *v7), *(_DWORD *)(a1 + 12) != v8) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 80) + 480LL))(*(_QWORD *)(a1 + 80), a2);
    v9 = sub_7E4F00(a1, (unsigned int *)a2);
    v10 = *(unsigned int *)(a1 + 12);
    v11 = (int *)v9;
    v12 = (char *)(v9 + 88);
    v13 = (unsigned int)(v11[22] >> 8);
    if ( (_DWORD)v13 == -1 )
      goto LABEL_19;
    while ( 1 )
    {
      v13 = (unsigned int)*v12;
      if ( (_DWORD)v10 == (_DWORD)v13 )
        break;
      v12 = *((char **)v12 + 1);
      if ( !v12 )
        goto LABEL_19;
    }
    if ( *(int *)v12 >> 8 == -1 )
    {
LABEL_19:
      (*(void (__fastcall **)(__int64, int *, __int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v11, v13, v10);
      if ( *(_WORD *)(*(_QWORD *)v11 + 4LL) == 2 && *(_DWORD *)(*(_QWORD *)v11 + 16LL) == 2 )
        sub_85D4B0(a1, (__int64)v11, v14, v15, v16, v17);
    }
    return 1;
  }
  v18 = *(_QWORD **)(a1 + 64);
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 - 1);
    if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
    {
      v21 = (unsigned int)(3 * v19 + 1) >> 1;
      v22 = 16 * v21 + 8;
      if ( 16 * (int)v19 + 8 >= v22 || (unsigned int)v19 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = (unsigned int *)sub_186B300(v18 - 1, v22);
      v18 = v23 + 2;
      *v23 = v21;
      v24 = v23[1];
      *(_QWORD *)(a1 + 64) = v18;
      v20 = &v18[2 * v24];
    }
    else
    {
      v20 = &v18[2 * v19];
    }
  }
  else
  {
    v25 = (_QWORD *)sub_186B270(0x28u);
    *v25 = 2;
    v18 = v25 + 1;
    *(_QWORD *)(a1 + 64) = v25 + 1;
    v20 = v25 + 1;
  }
  *v20 = a2;
  *((_DWORD *)v20 + 2) = 0;
  ++*((_DWORD *)v18 - 1);
  return 0;
}

