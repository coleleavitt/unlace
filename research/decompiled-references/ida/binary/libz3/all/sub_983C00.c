char *__fastcall sub_983C00(_QWORD *a1, unsigned int a2)
{
  char **exception; // rbp
  char **v3; // rbp
  unsigned int v4; // r13d
  __int64 v6; // r12
  __int64 v8; // rcx
  char *result; // rax
  unsigned int *v10; // rdx
  __int64 v11; // rax
  unsigned int *v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // r12d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r14d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r12
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a2 >> 1;
  v6 = 16LL * (a2 >> 1);
  v8 = v6 + *(_QWORD *)(a1[3] + 8872LL);
  result = (char *)*(unsigned __int8 *)(v8 + 11);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( ((unsigned __int8)result & 2) == 0 )
      return result;
    goto LABEL_8;
  }
  *(_BYTE *)(v8 + 11) = (unsigned __int8)result | 1;
  v10 = (unsigned int *)a1[42];
  if ( v10 )
  {
    v11 = *(v10 - 1);
    if ( (_DWORD)v11 == *(v10 - 2) )
    {
      v19 = (unsigned int)(3 * v11 + 1) >> 1;
      v20 = 4 * v19 + 8;
      if ( 4 * (int)v11 + 8 >= (unsigned int)v20 || (unsigned int)v11 >= v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v29, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v29);
        sub_233E40((__int64)v29);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v21 = (unsigned int *)sub_186B300(v10 - 2, v20);
      v22 = a1[3];
      v10 = v21 + 2;
      *v21 = v19;
      v23 = v21[1];
      v24 = *(_QWORD *)(v22 + 8872) + v6;
      a1[42] = v10;
      v12 = &v10[v23];
      v8 = v24;
    }
    else
    {
      v12 = &v10[v11];
    }
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x10u);
    v10 = (unsigned int *)(v26 + 1);
    *v26 = 2;
    v27 = a1[3];
    a1[42] = v10;
    v28 = *(_QWORD *)(v27 + 8872);
    v12 = v10;
    v8 = v6 + v28;
  }
  *v12 = v4;
  result = (char *)*(unsigned __int8 *)(v8 + 11);
  ++*(v10 - 1);
  if ( ((unsigned __int8)result & 2) != 0 )
  {
LABEL_8:
    v13 = (_QWORD *)a1[40];
    if ( v13 )
    {
      v14 = *((unsigned int *)v13 - 1);
      if ( (_DWORD)v14 == *((_DWORD *)v13 - 2) )
      {
        v15 = (unsigned int)(3 * v14 + 1) >> 1;
        v16 = 4 * v15 + 8;
        if ( 4 * (int)v14 + 8 >= (unsigned int)v16 || (unsigned int)v14 >= v15 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v29, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v29);
          sub_233E40((__int64)v29);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v13 - 1, v16);
        v13 = v17 + 2;
        *v17 = v15;
        v18 = v17[1];
        a1[40] = v13;
        result = (char *)v13 + 4 * v18;
      }
      else
      {
        result = (char *)v13 + 4 * v14;
      }
    }
    else
    {
      v25 = (_QWORD *)sub_186B270(0x10u);
      v13 = v25 + 1;
      *v25 = 2;
      a1[40] = v25 + 1;
      result = (char *)(v25 + 1);
    }
    *(_DWORD *)result = a2;
    ++*((_DWORD *)v13 - 1);
  }
  return result;
}

