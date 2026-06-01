__int64 __fastcall sub_6DF010(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  unsigned int v6; // r13d
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  _DWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  __int64 v18; // r14
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  unsigned int v21; // r15d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  unsigned int v26; // r14d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rcx
  __int64 result; // rax
  unsigned int v31; // r13d
  __int64 v32; // r14
  __int64 v33; // rax
  unsigned int v34; // edx
  _DWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  _DWORD *v39; // rcx
  unsigned int v40; // r14d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = 0;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v9 )
  {
    while ( 1 )
    {
      if ( v6 >= *(_DWORD *)(v9 - 4) )
        goto LABEL_20;
      v18 = *(_QWORD *)(v9 + 8LL * v6);
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      v19 = *(_QWORD **)(a1 + 32);
      if ( !v19 )
        break;
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 != *((_DWORD *)v19 - 2) )
      {
        v10 = v20;
        v11 = v20 + 1;
        v12 = &v19[v10];
        goto LABEL_4;
      }
      v21 = (3 * v20 + 1) >> 1;
      v22 = 8 * v21 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v22 || v20 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v46, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v46);
        sub_233E40((__int64)v46);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = (unsigned int *)sub_186B300(v19 - 1, v22);
      v24 = v23[1];
      *v23 = v21;
      *(_QWORD *)(a1 + 32) = v23 + 2;
      *(_QWORD *)&v23[2 * v24 + 2] = v18;
      v23[1] = v24 + 1;
      v13 = *(_DWORD **)(a1 + 40);
      if ( v13 )
      {
LABEL_5:
        v14 = *(v13 - 1);
        if ( v14 == *(v13 - 2) )
        {
          v26 = (3 * v14 + 1) >> 1;
          v27 = 4 * v26 + 8;
          if ( 4 * v14 + 8 >= (unsigned int)v27 || v14 >= v26 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v46, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v46);
            sub_233E40((__int64)v46);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(v13 - 2, v27);
          v29 = v28[1];
          v13 = v28 + 2;
          *v28 = v26;
          *(_QWORD *)(a1 + 40) = v28 + 2;
          LODWORD(v28) = v29;
          v17 = &v13[v29];
          v16 = (_DWORD)v28 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v13[v15];
        }
        goto LABEL_7;
      }
LABEL_16:
      v25 = (_QWORD *)sub_186B270(0x10u);
      v13 = v25 + 1;
      *v25 = 2;
      v16 = 1;
      *(_QWORD *)(a1 + 40) = v13;
      v17 = v13;
LABEL_7:
      *v17 = 1;
      ++v6;
      *(v13 - 1) = v16;
      v9 = *(_QWORD *)(a2 + 8);
      if ( !v9 )
        goto LABEL_20;
    }
    v44 = (_QWORD *)sub_186B270(0x18u);
    v19 = v44 + 1;
    *v44 = 2;
    v11 = 1;
    *(_QWORD *)(a1 + 32) = v19;
    v12 = v19;
LABEL_4:
    *v12 = v18;
    *((_DWORD *)v19 - 1) = v11;
    v13 = *(_DWORD **)(a1 + 40);
    if ( v13 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_20:
  result = *(_QWORD *)(a3 + 8);
  if ( result )
  {
    v31 = 0;
    do
    {
      if ( v31 >= *(_DWORD *)(result - 4) )
        break;
      v32 = *(_QWORD *)(result + 8LL * v31);
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      v33 = *(_QWORD *)(a1 + 32);
      if ( v33 )
      {
        v34 = *(_DWORD *)(v33 - 4);
        if ( v34 != *(_DWORD *)(v33 - 8) )
          continue;
      }
      sub_3A6B20((unsigned int **)(a1 + 32));
      v33 = *(_QWORD *)(a1 + 32);
      v34 = *(_DWORD *)(v33 - 4);
      *(_QWORD *)(v33 + 8LL * v34) = v32;
      *(_DWORD *)(v33 - 4) = v34 + 1;
      v35 = *(_DWORD **)(a1 + 40);
      if ( v35 )
      {
        v36 = *(v35 - 1);
        if ( v36 == *(v35 - 2) )
        {
          v40 = (3 * v36 + 1) >> 1;
          v41 = 4 * v40 + 8;
          if ( 4 * v36 + 8 >= (unsigned int)v41 || v36 >= v40 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v46, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v46);
            sub_233E40((__int64)v46);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v42 = (unsigned int *)sub_186B300(v35 - 2, v41);
          v43 = v42[1];
          v35 = v42 + 2;
          *v42 = v40;
          *(_QWORD *)(a1 + 40) = v42 + 2;
          LODWORD(v42) = v43;
          v39 = &v35[v43];
          v38 = (_DWORD)v42 + 1;
        }
        else
        {
          v37 = v36;
          v38 = v36 + 1;
          v39 = &v35[v37];
        }
      }
      else
      {
        v45 = (_QWORD *)sub_186B270(0x10u);
        v35 = v45 + 1;
        *v45 = 2;
        v38 = 1;
        *(_QWORD *)(a1 + 40) = v35;
        v39 = v35;
      }
      *v39 = 0;
      ++v31;
      *(v35 - 1) = v38;
      result = *(_QWORD *)(a3 + 8);
    }
    while ( result );
  }
  return result;
}

