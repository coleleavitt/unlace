__int64 __fastcall sub_B40FB0(_QWORD *a1, unsigned int a2)
{
  char **exception; // rbp
  char **v3; // rbp
  int v4; // r15d
  _QWORD *v7; // rbp
  __int64 v8; // r13
  _DWORD *v9; // r9
  unsigned int v10; // r13d
  unsigned int *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned int *v15; // rdx
  unsigned int *v16; // rsi
  __int64 result; // rax
  __int64 v18; // r11
  __int64 *v19; // rdx
  __int64 v20; // r10
  double v21; // xmm0_8
  unsigned int *v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // ebp
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ebx
  size_t v29; // rsi
  unsigned int *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // r13
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = a2 + 1;
  v7 = (_QWORD *)a1[5];
  if ( v7 )
  {
    v8 = *((unsigned int *)v7 - 1);
    if ( v4 <= (int)v8 )
      goto LABEL_3;
    if ( (unsigned int)v8 >= v4 )
    {
      *((_DWORD *)v7 - 1) = v4;
      goto LABEL_3;
    }
  }
  else
  {
    if ( v4 <= 0 )
      goto LABEL_3;
    v8 = 0;
    v34 = (_QWORD *)sub_186B270(0x10u);
    v7 = v34 + 1;
    *v34 = 2;
    a1[5] = v34 + 1;
  }
  while ( 1 )
  {
    v31 = *((_DWORD *)v7 - 2);
    if ( v31 >= v4 )
      break;
    v28 = (3 * v31 + 1) >> 1;
    v29 = 4 * v28 + 8;
    if ( 4 * v31 + 8 >= (unsigned int)v29 || v31 >= v28 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v35, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v35);
      sub_233E40((__int64)v35);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v30 = (unsigned int *)sub_186B300(v7 - 1, v29);
    v7 = v30 + 2;
    *v30 = v28;
    a1[5] = v30 + 2;
  }
  v32 = 4 * v8;
  *((_DWORD *)v7 - 1) = v4;
  v33 = 4LL * (unsigned int)v4;
  if ( v32 != v33 )
    memset((char *)v7 + v32, 0, v33 - v32);
LABEL_3:
  v9 = (_DWORD *)a1[4];
  v10 = a2;
  v11 = (unsigned int *)v7 + a2;
  if ( v9 )
  {
    v12 = *(v9 - 1);
    *v11 = v12;
    v13 = (unsigned int)*(v9 - 1);
    if ( (_DWORD)v13 == *(v9 - 2) )
    {
      v24 = (unsigned int)(3 * v13 + 1) >> 1;
      v25 = 4 * v24 + 8;
      if ( 4 * (int)v13 + 8 >= (unsigned int)v25 || (unsigned int)v13 >= v24 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v26 = (unsigned int *)sub_186B300(v9 - 2, v25);
      v14 = v12;
      v9 = v26 + 2;
      *v26 = v24;
      v27 = v26[1];
      a1[4] = v9;
      v7 = (_QWORD *)a1[5];
      v16 = &v9[v12];
      v15 = &v9[v27];
      result = (unsigned int)((int)v12 >> 1);
    }
    else
    {
      v14 = v12;
      v15 = &v9[v13];
      v16 = &v9[v12];
      result = (unsigned int)((int)v12 >> 1);
    }
    *v15 = a2;
    ++*(v9 - 1);
    v18 = *v16;
    v10 = *v16;
    if ( (_DWORD)result )
    {
      v19 = (__int64 *)a1[3];
      v20 = *v19;
      v21 = *(double *)(*v19 + 8 * v18);
      while ( 1 )
      {
        v16 = &v9[v14];
        v22 = &v9[(unsigned int)result];
        v23 = *v22;
        if ( v21 <= *(double *)(v20 + 8 * v23) )
          break;
        *v16 = v23;
        *((_DWORD *)v7 + v23) = v12;
        v12 = result;
        result = (unsigned int)((int)result >> 1);
        if ( !(_DWORD)result )
        {
          v16 = v22;
          v12 = 1;
          break;
        }
        v14 = v12;
      }
    }
  }
  else
  {
    *v11 = 0;
    result = sub_186B270(0x10u);
    v18 = a2;
    v7 = (_QWORD *)a1[5];
    v12 = 0;
    v16 = (unsigned int *)(result + 8);
    *(_QWORD *)result = 2;
    a1[4] = result + 8;
    ++*(_DWORD *)(result + 4);
    *(_DWORD *)(result + 8) = a2;
  }
  *v16 = v10;
  *((_DWORD *)v7 + v18) = v12;
  return result;
}

