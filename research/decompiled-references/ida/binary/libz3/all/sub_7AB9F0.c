__int64 __fastcall sub_7AB9F0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  char *v8; // rdx
  int *v9; // rax
  int v10; // eax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // r12d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = a1 - 48;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 48) + 544LL);
  if ( v6 == sub_7A7360 )
  {
    v7 = sub_7E4F00(v5);
    if ( v7 )
    {
      v8 = (char *)(v7 + 88);
      if ( *(int *)(v7 + 88) >> 8 != -1 )
      {
        while ( *(_DWORD *)(a1 - 36) != *v8 )
        {
          v8 = *((char **)v8 + 1);
          if ( !v8 )
            goto LABEL_8;
        }
        if ( *(int *)v8 >> 8 != -1 )
          return 1;
      }
    }
LABEL_8:
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_12;
  }
  else
  {
    if ( (unsigned __int8)v6(v5) )
      return 1;
    if ( *(_WORD *)(a2 + 4) )
    {
LABEL_12:
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 32) + 480LL))(*(_QWORD *)(a1 + 32), a2);
      return 1;
    }
  }
  v9 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v9 )
    v10 = *v9;
  else
    v10 = -1;
  if ( *(_DWORD *)(a1 - 36) != v10 )
    goto LABEL_12;
  v12 = *(_QWORD **)(a1 + 16);
  if ( v12 )
  {
    v13 = *((unsigned int *)v12 - 1);
    if ( (_DWORD)v13 == *((_DWORD *)v12 - 2) )
    {
      v15 = (unsigned int)(3 * v13 + 1) >> 1;
      v16 = 16 * v15 + 8;
      if ( 16 * (int)v13 + 8 >= (unsigned int)v16 || (unsigned int)v13 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v20, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v12 - 1, v16);
      v12 = v17 + 2;
      *v17 = v15;
      v18 = v17[1];
      *(_QWORD *)(a1 + 16) = v12;
      v14 = &v12[2 * v18];
    }
    else
    {
      v14 = &v12[2 * v13];
    }
  }
  else
  {
    v19 = (_QWORD *)sub_186B270(0x28u);
    *v19 = 2;
    v12 = v19 + 1;
    *(_QWORD *)(a1 + 16) = v19 + 1;
    v14 = v19 + 1;
  }
  *v14 = a2;
  *((_DWORD *)v14 + 2) = 0;
  ++*((_DWORD *)v12 - 1);
  return 0;
}

