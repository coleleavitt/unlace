_QWORD *__fastcall sub_7FCAF0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 *v8; // r12
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 *v12; // r13
  int v13; // edx
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  _QWORD *v22; // r13
  _QWORD *v24; // r12
  __int64 v25; // rcx
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r14
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // r15d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  char **exception; // r12
  char **v38; // r12
  __int64 v39[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a3 + 24);
  a1[1] = 0;
  v6 = *(_QWORD *)(a3 + 16);
  *a1 = v4;
  v7 = 8 * v5;
  if ( *(_QWORD *)(a2 + 80) == *(_QWORD *)(v6 + 16) )
  {
    v22 = (_QWORD *)(a3 + 32);
    v24 = (_QWORD *)(a3 + 32 + v7);
    if ( v7 )
    {
      while ( 1 )
      {
        v28 = sub_15EC2C0(v4, *v22);
        v29 = v28;
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        v30 = (_QWORD *)a1[1];
        if ( v30 )
        {
          v31 = *((_DWORD *)v30 - 1);
          if ( v31 == *((_DWORD *)v30 - 2) )
          {
            v32 = (3 * v31 + 1) >> 1;
            v33 = 8 * v32 + 8;
            if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v39, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v39);
              sub_233E40((__int64)v39);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (unsigned int *)sub_186B300(v30 - 1, v33);
            v35 = v34[1];
            v30 = v34 + 2;
            *v34 = v32;
            a1[1] = v34 + 2;
            LODWORD(v34) = v35;
            v27 = &v30[v35];
            v26 = (_DWORD)v34 + 1;
          }
          else
          {
            v25 = v31;
            v26 = v31 + 1;
            v27 = &v30[v25];
          }
        }
        else
        {
          v36 = (_QWORD *)sub_186B270(0x18u);
          v30 = v36 + 1;
          *v36 = 2;
          v26 = 1;
          a1[1] = v30;
          v27 = v30;
        }
        ++v22;
        *v27 = v29;
        *((_DWORD *)v30 - 1) = v26;
        if ( v24 == v22 )
          break;
        v4 = *(_QWORD *)(a2 + 8);
      }
    }
  }
  else
  {
    v8 = (__int64 *)(a3 + 32);
    if ( v7 )
    {
      v9 = *(_QWORD *)(a3 + 32);
      if ( v9 )
        ++*(_DWORD *)(v9 + 8);
      v10 = (_QWORD *)sub_186B270(0x18u);
      *v10 = 2;
      v11 = v10 + 1;
      v12 = &v8[(unsigned __int64)v7 / 8];
      v13 = 1;
      a1[1] = v11;
      v14 = v11;
      while ( 1 )
      {
        ++v8;
        *v11 = v9;
        *(v14 - 1) = v13;
        if ( v12 == v8 )
          break;
        while ( 1 )
        {
          v9 = *v8;
          if ( *v8 )
            ++*(_DWORD *)(v9 + 8);
          v15 = *(v14 - 1);
          if ( v15 == *(v14 - 2) )
            break;
          ++v8;
          *(_QWORD *)&v14[2 * v15] = v9;
          *(v14 - 1) = v15 + 1;
          if ( v12 == v8 )
            return a1;
        }
        v17 = (3 * v15 + 1) >> 1;
        v18 = 8 * v17 + 8;
        if ( 8 * v15 + 8 >= (unsigned int)v18 || v15 >= v17 )
        {
          v38 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v39, "Overflow encountered when expanding vector");
          *v38 = (char *)off_1C63128;
          sub_2333C0(v38 + 1, v39);
          sub_233E40((__int64)v39);
          __cxa_throw(v38, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v19 = (unsigned int *)sub_186B300(v14 - 2, v18);
        v14 = v19 + 2;
        *v19 = v17;
        v20 = v19[1];
        a1[1] = v14;
        v21 = v20;
        v11 = &v14[2 * v20];
        v13 = v21 + 1;
      }
    }
  }
  return a1;
}

