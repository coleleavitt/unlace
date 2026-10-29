__int64 __fastcall sub_7D2030(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  char **exception; // rbp
  __int64 v5; // rdx
  char **v6; // rbp
  __int64 v7; // rdx
  int v12; // eax
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  bool v18; // zf
  _QWORD *v19; // rdi
  __int64 v20; // rax
  unsigned int *v21; // rax
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // ebx
  size_t v27; // rsi
  unsigned int *v28; // rax
  char *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34[9]; // [rsp+0h] [rbp-48h] BYREF

  v12 = *(_DWORD *)(a2 + 28);
  if ( v12 == 0x7FFFFFFF )
  {
    v29 = (char *)(a2 + 88);
    if ( *(int *)(a2 + 88) >> 8 != -1 )
    {
      while ( 1 )
      {
        v30 = a1[300];
        v31 = (unsigned int)*v29;
        if ( v30 )
        {
          if ( (unsigned int)v31 < *(_DWORD *)(v30 - 4) )
          {
            v32 = *(_QWORD *)(v30 + 8 * v31);
            if ( v32 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD *))(*(_QWORD *)v32 + 432LL))(
                     v32,
                     (unsigned int)(*(int *)v29 >> 8),
                     a3,
                     a4) )
              {
                break;
              }
            }
          }
        }
        v29 = *((char **)v29 + 1);
        if ( !v29 )
          return 0;
      }
      return 1;
    }
  }
  else
  {
    v13 = (unsigned int)(2 * v12);
    v14 = *(_DWORD *)(*(_QWORD *)(a1[3] + 3288LL) + 4 * v13);
    if ( v14 == -1 )
    {
      v23 = *(_QWORD *)(a1[18] + 864LL);
      if ( v23 )
        ++*(_DWORD *)(v23 + 8);
      v24 = *a3;
      if ( *a3 )
      {
        v25 = a3[1];
        v18 = (*(_DWORD *)(v24 + 8))-- == 1;
        if ( v18 )
        {
          sub_15D7BC0(v25, v24);
          LODWORD(v13) = 2 * *(_DWORD *)(a2 + 28);
        }
      }
      v19 = (_QWORD *)*a4;
      *a3 = v23;
      LODWORD(v13) = v13 ^ 1;
      if ( v19 )
      {
        v20 = *((unsigned int *)v19 - 1);
        if ( (_DWORD)v20 != *((_DWORD *)v19 - 2) )
          goto LABEL_11;
        v26 = (unsigned int)(3 * v20 + 1) >> 1;
        v27 = 4 * v26 + 8;
        if ( 4 * (int)v20 + 8 >= (unsigned int)v27 || (unsigned int)v20 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_116834(v34, "Overflow encountered when expanding vector", v5);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v34);
          sub_233E40((__int64)v34);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_23;
      }
LABEL_34:
      v33 = (_QWORD *)sub_186B270(0x10u);
      v19 = v33 + 1;
      *v33 = 2;
      *a4 = v33 + 1;
      v21 = (unsigned int *)(v33 + 1);
      goto LABEL_12;
    }
    if ( v14 == 1 )
    {
      v15 = *(_QWORD *)(a1[18] + 856LL);
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v16 = *a3;
      if ( *a3 )
      {
        v17 = a3[1];
        v18 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v18 )
        {
          sub_15D7BC0(v17, v16);
          LODWORD(v13) = 2 * *(_DWORD *)(a2 + 28);
        }
      }
      v19 = (_QWORD *)*a4;
      *a3 = v15;
      if ( v19 )
      {
        v20 = *((unsigned int *)v19 - 1);
        if ( (_DWORD)v20 != *((_DWORD *)v19 - 2) )
        {
LABEL_11:
          v21 = (unsigned int *)v19 + v20;
LABEL_12:
          *v21 = v13;
          ++*((_DWORD *)v19 - 1);
          return 1;
        }
        v26 = (unsigned int)(3 * v20 + 1) >> 1;
        v27 = 4 * v26 + 8;
        if ( 4 * (int)v20 + 8 >= (unsigned int)v27 || (unsigned int)v20 >= v26 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_116834(v34, "Overflow encountered when expanding vector", v7);
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v34);
          sub_233E40((__int64)v34);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_23:
        v28 = (unsigned int *)sub_186B300(v19 - 1, v27);
        v19 = v28 + 2;
        *a4 = v28 + 2;
        *v28 = v26;
        v21 = &v28[v28[1] + 2];
        goto LABEL_12;
      }
      goto LABEL_34;
    }
  }
  return 0;
}

