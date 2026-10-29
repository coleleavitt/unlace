__int64 __fastcall sub_AF7690(_QWORD *a1, unsigned int a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // rax
  _DWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  _DWORD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // r15
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  _QWORD *v18; // rcx
  _DWORD *v19; // rdi
  __int64 v20; // r13
  _DWORD *v21; // rax
  unsigned int v22; // r14d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ecx
  size_t v27; // rsi
  unsigned int v28; // ebp
  unsigned int *v29; // rax
  __int64 v30; // rcx
  __int64 result; // rax
  unsigned int v32; // r14d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // r14d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44[11]; // [rsp+0h] [rbp-58h] BYREF

  do
  {
    while ( 1 )
    {
      v19 = (_DWORD *)a1[63];
      if ( v19 )
      {
        v20 = (unsigned int)*(v19 - 1);
        v21 = &v19[v20];
        if ( (_DWORD)v20 == *(v19 - 2) )
        {
          v22 = (unsigned int)(3 * v20 + 1) >> 1;
          v23 = 4 * v22 + 8;
          if ( 4 * (int)v20 + 8 >= (unsigned int)v23 || (unsigned int)v20 >= v22 )
          {
LABEL_34:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_140FB4(v44, "Overflow encountered when expanding vector", v3);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v44);
            sub_233E40((__int64)v44);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v24 = (unsigned int *)sub_186B300(v19 - 2, v23);
          v19 = v24 + 2;
          *v24 = v22;
          v25 = v24[1];
          a1[63] = v19;
          v21 = &v19[v25];
        }
      }
      else
      {
        LODWORD(v20) = 0;
        v40 = (_QWORD *)sub_186B270(0x10u);
        v19 = v40 + 1;
        *v40 = 2;
        v21 = v19;
        a1[63] = v19;
      }
      *v21 = v20;
      ++*(v19 - 1);
      v6 = (_QWORD *)a1[64];
      if ( v6 )
      {
        v7 = *((unsigned int *)v6 - 1);
        if ( (_DWORD)v7 == *((_DWORD *)v6 - 2) )
        {
          v36 = (unsigned int)(3 * v7 + 1) >> 1;
          v37 = 4 * v36 + 8;
          if ( 4 * (int)v7 + 8 >= (unsigned int)v37 || (unsigned int)v7 >= v36 )
            goto LABEL_34;
          v38 = (unsigned int *)sub_186B300(v6 - 1, v37);
          v6 = v38 + 2;
          *v38 = v36;
          v39 = v38[1];
          a1[64] = v6;
          v8 = (_DWORD *)v6 + v39;
        }
        else
        {
          v8 = (_DWORD *)v6 + v7;
        }
      }
      else
      {
        v41 = (_QWORD *)sub_186B270(0x10u);
        v6 = v41 + 1;
        *v41 = 2;
        a1[64] = v41 + 1;
        v8 = v41 + 1;
      }
      *v8 = 1;
      ++*((_DWORD *)v6 - 1);
      v9 = (_QWORD *)a1[65];
      if ( v9 )
      {
        v10 = *((unsigned int *)v9 - 1);
        if ( (_DWORD)v10 == *((_DWORD *)v9 - 2) )
        {
          v32 = (unsigned int)(3 * v10 + 1) >> 1;
          v33 = 4 * v32 + 8;
          if ( 4 * (int)v10 + 8 >= (unsigned int)v33 || (unsigned int)v10 >= v32 )
            goto LABEL_34;
          v34 = (unsigned int *)sub_186B300(v9 - 1, v33);
          v9 = v34 + 2;
          *v34 = v32;
          v35 = v34[1];
          a1[65] = v9;
          v11 = (_DWORD *)v9 + v35;
        }
        else
        {
          v11 = (_DWORD *)v9 + v10;
        }
      }
      else
      {
        v43 = (_QWORD *)sub_186B270(0x10u);
        v9 = v43 + 1;
        *v43 = 2;
        a1[65] = v43 + 1;
        v11 = v43 + 1;
      }
      v12 = (_QWORD *)a1[62];
      *v11 = v20;
      v13 = a1 + 66;
      ++*((_DWORD *)v9 - 1);
      v14 = (_QWORD *)*v12;
      if ( !*v12 )
      {
        v42 = (_QWORD *)sub_186B270(0x18u);
        v14 = v42 + 1;
        *v42 = 2;
        v17 = 1;
        *v12 = v14;
        v18 = v14;
        goto LABEL_11;
      }
      v15 = *((_DWORD *)v14 - 1);
      if ( v15 == *((_DWORD *)v14 - 2) )
        break;
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v14[v16];
LABEL_11:
      *v18 = v13;
      *((_DWORD *)v14 - 1) = v17;
      if ( (unsigned int)v20 >= a2 )
        goto LABEL_20;
    }
    v26 = (3 * v15 + 1) >> 1;
    v27 = 8 * v26 + 8;
    v28 = v26;
    if ( 8 * v15 + 8 >= (unsigned int)v27 || v15 >= v26 )
      goto LABEL_34;
    v29 = (unsigned int *)sub_186B300(v14 - 1, v27);
    v30 = v29[1];
    *v12 = v29 + 2;
    *v29 = v28;
    *(_QWORD *)&v29[2 * v30 + 2] = v13;
    v29[1] = v30 + 1;
  }
  while ( (unsigned int)v20 < a2 );
LABEL_20:
  result = a1[14];
  if ( !result || a2 >= *(_DWORD *)(result - 4) )
    return sub_AFBF00(a1 + 8, a2);
  return result;
}

