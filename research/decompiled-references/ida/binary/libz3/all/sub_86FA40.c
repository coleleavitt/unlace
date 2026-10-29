unsigned int *__fastcall sub_86FA40(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // rbx
  _QWORD *v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // r12
  unsigned int *v10; // rax
  unsigned int *v11; // rsi
  __int64 v12; // rax
  char *v13; // rdx
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  _QWORD *v18; // rax
  __int64 v19[11]; // [rsp+10h] [rbp-58h] BYREF

  v7 = (_QWORD *)(*(_QWORD *)(a1 + 600) + 8LL * a2);
  v8 = (_QWORD *)*v7;
  if ( *v7 )
  {
    v9 = *((unsigned int *)v8 - 1);
    v10 = (unsigned int *)v8 + v9;
    if ( (_DWORD)v9 == *((_DWORD *)v8 - 2) )
    {
      v15 = (unsigned int)(3 * v9 + 1) >> 1;
      v16 = 4 * v15 + 8;
      if ( 4 * (int)v9 + 8 >= (unsigned int)v16 || (unsigned int)v9 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v19, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v8 - 1, v16);
      v8 = v17 + 2;
      *v7 = v17 + 2;
      *v17 = v15;
      v10 = &v17[v17[1] + 2];
    }
  }
  else
  {
    LODWORD(v9) = 0;
    v18 = (_QWORD *)sub_186B270(0x10u);
    v8 = v18 + 1;
    *v18 = 2;
    *v7 = v18 + 1;
    v10 = (unsigned int *)(v18 + 1);
  }
  *v10 = a3;
  ++*((_DWORD *)v8 - 1);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24), a3 >> 1);
  v11 = (unsigned int *)sub_7E4F60(a1, a3 >> 1);
  if ( !v11 )
    BUG();
  v12 = sub_7E4F00(a1, v11);
  v13 = (char *)(v12 + 88);
  if ( *(int *)(v12 + 88) >> 8 == -1 )
    goto LABEL_13;
  while ( *(_DWORD *)(a1 + 12) != *v13 )
  {
    v13 = *((char **)v13 + 1);
    if ( !v13 )
      goto LABEL_13;
  }
  if ( *(int *)v13 >> 8 == -1 )
LABEL_13:
    (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a1 + 528LL))(a1, v12, v13);
  return sub_86F890(a1, a2, a3, v9);
}

