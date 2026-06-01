__int64 __fastcall sub_B36F10(__int64 a1, unsigned int *a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  unsigned int **v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned int **v10; // rdx
  unsigned int v11; // r12d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( !*(_BYTE *)(a1 + 408) )
    return sub_B35EF0(a1 - 56, a2, 1);
  if ( a2 )
    ++a2[2];
  v6 = *(unsigned int ***)(a1 + 424);
  if ( !v6 )
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    v6 = (unsigned int **)(v16 + 1);
    *v16 = 2;
    result = 1;
    *(_QWORD *)(a1 + 424) = v6;
    v10 = v6;
    goto LABEL_7;
  }
  v7 = *((_DWORD *)v6 - 1);
  if ( v7 != *((_DWORD *)v6 - 2) )
  {
    v8 = v7;
    result = v7 + 1;
    v10 = &v6[v8];
LABEL_7:
    *v10 = a2;
    *((_DWORD *)v6 - 1) = result;
    return result;
  }
  v11 = (3 * v7 + 1) >> 1;
  v12 = 8 * v11 + 8;
  if ( 8 * v7 + 8 >= (unsigned int)v12 || v7 >= v11 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_147B96(v17, "Overflow encountered when expanding vector", v3);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v17);
    sub_233E40((__int64)v17);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
  v14 = v13[1];
  *v13 = v11;
  v15 = v13 + 2;
  *(_QWORD *)(a1 + 424) = v13 + 2;
  result = (unsigned int)(v14 + 1);
  *(_QWORD *)&v15[2 * v14] = a2;
  *(v15 - 1) = result;
  return result;
}

