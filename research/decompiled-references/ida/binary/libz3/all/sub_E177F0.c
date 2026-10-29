__int64 __fastcall sub_E177F0(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned int *v5; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // r12d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 result; // rax
  unsigned int *v17; // rcx
  _QWORD *exception; // rbx
  char **v19; // rbx
  __int64 v20[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( !a3 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid map declaration, empty sort list");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v5 = *(unsigned int **)(a1 + 40);
  v6 = a4;
  v7 = &a4[a3];
  if ( v5 )
    goto LABEL_6;
  v15 = (_QWORD *)sub_186B270(0x18u);
  v5 = (unsigned int *)(v15 + 1);
  *v15 = 2;
  result = 1;
  *(_QWORD *)(a1 + 40) = v5;
  v17 = v5;
  while ( 1 )
  {
    v9 = *v6++;
    *(_QWORD *)v17 = v9;
    *(v5 - 1) = result;
    if ( v7 == v6 )
      break;
LABEL_6:
    v10 = *(v5 - 1);
    if ( v10 == *(v5 - 2) )
    {
      v11 = (3 * v10 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * v10 + 8 >= (unsigned int)v12 || v10 >= v11 )
      {
        v19 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v20, "Overflow encountered when expanding vector");
        *v19 = (char *)off_1C63128;
        sub_2333C0(v19 + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(v19, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v5 - 2, v12);
      v14 = v13[1];
      v5 = v13 + 2;
      *v13 = v11;
      *(_QWORD *)(a1 + 40) = v13 + 2;
      v17 = &v13[2 * v14 + 2];
      result = (unsigned int)(v14 + 1);
    }
    else
    {
      v8 = v10;
      result = v10 + 1;
      v17 = &v5[2 * v8];
    }
  }
  return result;
}

