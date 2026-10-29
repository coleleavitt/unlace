__int64 __fastcall sub_B34B80(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v5; // rcx
  unsigned int **v6; // rbx
  unsigned int **v7; // r12
  _DWORD *v8; // rax
  int v9; // eax
  int v10; // r13d
  __int64 v11; // rax
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // esi
  int v18; // edx
  _QWORD *v20; // rax
  __int64 v21[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *(_QWORD **)(a1 + 416);
  if ( !v5 )
  {
    v6 = *(unsigned int ***)(a2 + 8);
    if ( !v6 || (v7 = &v6[*((unsigned int *)v6 - 1)], v6 == v7) )
    {
      v16 = *(_QWORD *)(a1 + 16);
      v17 = *(_DWORD *)(a1 + 8);
      v18 = 0;
      return sub_B69FE0(v16, v17, v18, (_DWORD)v5, 0, 0, 1);
    }
LABEL_7:
    while ( 1 )
    {
      v9 = sub_966440(a1, *v6);
      v5 = *(_QWORD **)(a1 + 416);
      v10 = v9;
      if ( !v5 )
        break;
      v11 = *((unsigned int *)v5 - 1);
      if ( (_DWORD)v11 == *((_DWORD *)v5 - 2) )
      {
        v12 = (unsigned int)(3 * v11 + 1) >> 1;
        v13 = 4 * v12 + 8;
        if ( 4 * (int)v11 + 8 >= (unsigned int)v13 || (unsigned int)v11 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_147B96(v21, "Overflow encountered when expanding vector", v3);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v21);
          sub_233E40((__int64)v21);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v6;
        v14 = (unsigned int *)sub_186B300(v5 - 1, v13);
        v5 = v14 + 2;
        *v14 = v12;
        v15 = v14[1];
        *(_QWORD *)(a1 + 416) = v5;
        *((_DWORD *)v5 + v15) = v10;
        ++*((_DWORD *)v5 - 1);
        if ( v7 == v6 )
          goto LABEL_12;
      }
      else
      {
        v8 = (_DWORD *)v5 + v11;
LABEL_6:
        ++v6;
        *v8 = v10;
        ++*((_DWORD *)v5 - 1);
        if ( v7 == v6 )
          goto LABEL_12;
      }
    }
    v20 = (_QWORD *)sub_186B270(0x10u);
    v5 = v20 + 1;
    *v20 = 2;
    *(_QWORD *)(a1 + 416) = v20 + 1;
    v8 = v20 + 1;
    goto LABEL_6;
  }
  v6 = *(unsigned int ***)(a2 + 8);
  *((_DWORD *)v5 - 1) = 0;
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v7 != v6 )
      goto LABEL_7;
  }
LABEL_12:
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(_DWORD *)(a1 + 8);
  v18 = *((_DWORD *)v5 - 1);
  return sub_B69FE0(v16, v17, v18, (_DWORD)v5, 0, 0, 1);
}

