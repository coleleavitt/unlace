__int64 __fastcall sub_81CF00(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned __int8 (*v3)(void); // rax
  __int64 v4; // rax
  char *v5; // rdx
  int *v7; // rax
  int v8; // eax
  __int64 v9; // r12
  int v10; // eax
  _DWORD *v11; // rdx
  void (__fastcall *v12)(__int64, __int64); // r12
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned int v17; // r12d
  unsigned int v18; // ecx
  unsigned int *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 544LL);
  if ( (char *)v3 == (char *)sub_81B200 )
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
    v9 = sub_15D1F10(a2);
    v10 = sub_15F0200(a1 + 112);
    v11 = *(_DWORD **)(v9 + 24);
    if ( v11 && v10 == *v11 && !v11[1] )
    {
      v12 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 528LL);
      v13 = sub_7E4F00(a1, (unsigned int *)a2);
      v12(a1, v13);
    }
    return 1;
  }
  v14 = *(_QWORD **)(a1 + 64);
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
    {
      v17 = (unsigned int)(3 * v15 + 1) >> 1;
      v18 = 16 * v17 + 8;
      if ( 16 * (int)v15 + 8 >= v18 || (unsigned int)v15 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v22, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v22);
        sub_233E40((__int64)v22);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = (unsigned int *)sub_186B300(v14 - 1, v18);
      v14 = v19 + 2;
      *v19 = v17;
      v20 = v19[1];
      *(_QWORD *)(a1 + 64) = v14;
      v16 = &v14[2 * v20];
    }
    else
    {
      v16 = &v14[2 * v15];
    }
  }
  else
  {
    v21 = (_QWORD *)sub_186B270(0x28u);
    *v21 = 2;
    v14 = v21 + 1;
    *(_QWORD *)(a1 + 64) = v21 + 1;
    v16 = v21 + 1;
  }
  *v16 = a2;
  *((_DWORD *)v16 + 2) = 0;
  ++*((_DWORD *)v14 - 1);
  return 0;
}

