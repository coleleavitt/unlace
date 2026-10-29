__int64 __fastcall sub_E17040(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 result; // rax
  unsigned int *v7; // rdi
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // r12d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rdx
  unsigned int *v16; // rdi
  __int64 *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  unsigned int *v26; // rcx
  _QWORD *v27; // rax
  unsigned int *v28; // rcx
  char **exception; // rbp
  __int64 v30[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a4;
  result = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)result )
  {
    if ( a3 )
    {
      v7 = *(unsigned int **)(a1 + 32);
      v8 = &a4[a3];
      if ( v7 )
        goto LABEL_7;
      v25 = (_QWORD *)sub_186B270(0x18u);
      v7 = (unsigned int *)(v25 + 1);
      *v25 = 2;
      result = 1;
      *(_QWORD *)(a1 + 32) = v7;
      v26 = v7;
      while ( 1 )
      {
        v10 = *v5++;
        *(_QWORD *)v26 = v10;
        *(v7 - 1) = result;
        if ( v5 == v8 )
          break;
LABEL_7:
        v11 = *(v7 - 1);
        if ( v11 == *(v7 - 2) )
        {
          v12 = (3 * v11 + 1) >> 1;
          v13 = 8 * v12 + 8;
          if ( 8 * v11 + 8 >= (unsigned int)v13 || v11 >= v12 )
            goto LABEL_23;
          v14 = (unsigned int *)sub_186B300(v7 - 2, v13);
          v15 = v14[1];
          v7 = v14 + 2;
          *v14 = v12;
          *(_QWORD *)(a1 + 32) = v14 + 2;
          v26 = &v14[2 * v15 + 2];
          result = (unsigned int)(v15 + 1);
        }
        else
        {
          v9 = v11;
          result = v11 + 1;
          v26 = &v7[2 * v9];
        }
      }
    }
  }
  else
  {
    if ( a3 )
    {
      v16 = *(unsigned int **)(a1 + 24);
      v17 = &a4[a3];
      if ( v16 )
        goto LABEL_19;
      v27 = (_QWORD *)sub_186B270(0x18u);
      v16 = (unsigned int *)(v27 + 1);
      *v27 = 2;
      result = 1;
      *(_QWORD *)(a1 + 24) = v16;
      v28 = v16;
      while ( 1 )
      {
        v19 = *v5++;
        *(_QWORD *)v28 = v19;
        *(v16 - 1) = result;
        if ( v17 == v5 )
          break;
LABEL_19:
        v20 = *(v16 - 1);
        if ( v20 == *(v16 - 2) )
        {
          v21 = (3 * v20 + 1) >> 1;
          v22 = 8 * v21 + 8;
          if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
          {
LABEL_23:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v30, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v30);
            sub_233E40((__int64)v30);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v23 = (unsigned int *)sub_186B300(v16 - 2, v22);
          v24 = v23[1];
          v16 = v23 + 2;
          *v23 = v21;
          *(_QWORD *)(a1 + 24) = v23 + 2;
          v28 = &v23[2 * v24 + 2];
          result = (unsigned int)(v24 + 1);
        }
        else
        {
          v18 = v20;
          result = v20 + 1;
          v28 = &v16[2 * v18];
        }
      }
      a3 = *(_DWORD *)(a1 + 40);
    }
    *(_DWORD *)(a1 + 40) = a3 + 1;
  }
  return result;
}

