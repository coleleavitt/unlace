_QWORD *__fastcall sub_AE1920(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  char **exception; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  _QWORD *v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // r12d
  __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rdi
  int v19; // eax
  _QWORD *v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rsi
  unsigned int v24; // eax
  _QWORD *v25; // rsi
  _QWORD *v26; // rdx
  __int64 v27; // rax
  _QWORD *result; // rax
  unsigned int v29; // r9d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rsi
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r15d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r15d
  size_t v42; // rsi
  unsigned int *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // [rsp+4h] [rbp-74h]
  int v48; // [rsp+8h] [rbp-70h]
  __int64 v50[11]; // [rsp+20h] [rbp-58h] BYREF

  v13 = *(_QWORD **)(a1 + 152);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a3 + 8);
    v48 = *((_DWORD *)v13 - 1);
    if ( !v14 )
    {
LABEL_11:
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      goto LABEL_13;
    }
  }
  else
  {
    v14 = *(_QWORD *)(a3 + 8);
    v48 = 0;
    if ( !v14 )
    {
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      v48 = 0;
      goto LABEL_38;
    }
  }
  v15 = 0;
  while ( v15 < *(_DWORD *)(v14 - 4) )
  {
    v16 = *(_QWORD *)(v14 + 8LL * v15);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    if ( v13 )
    {
      v17 = *((_DWORD *)v13 - 1);
      if ( v17 == *((_DWORD *)v13 - 2) )
      {
        v29 = (3 * v17 + 1) >> 1;
        v30 = 8 * v29 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v30 || v17 >= v29 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v50, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v50);
          sub_233E40((__int64)v50);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v47 = (3 * v17 + 1) >> 1;
        v31 = (unsigned int *)sub_186B300(v13 - 1, v30);
        v32 = v31[1];
        v13 = v31 + 2;
        *v31 = v47;
        LODWORD(v31) = v32;
        *(_QWORD *)(a1 + 152) = v13;
        v20 = &v13[v32];
        v14 = *(_QWORD *)(a3 + 8);
        v19 = (_DWORD)v31 + 1;
      }
      else
      {
        v18 = v17;
        v19 = v17 + 1;
        v20 = &v13[v18];
      }
    }
    else
    {
      v44 = (_QWORD *)sub_186B270(0x18u);
      v13 = v44 + 1;
      *v44 = 2;
      v19 = 1;
      *(_QWORD *)(a1 + 152) = v13;
      v20 = v13;
      v14 = *(_QWORD *)(a3 + 8);
    }
    *v20 = v16;
    ++v15;
    *((_DWORD *)v13 - 1) = v19;
    if ( !v14 )
      goto LABEL_11;
  }
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( v13 )
  {
LABEL_13:
    v21 = *((_DWORD *)v13 - 1);
    v22 = *((_DWORD *)v13 - 2);
    if ( v21 == v22 )
    {
      v33 = (3 * v22 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v34 || v22 >= v33 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v50, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = (unsigned int *)sub_186B300(v13 - 1, v34);
      v36 = v35[1];
      v13 = v35 + 2;
      *v35 = v33;
      *(_QWORD *)(a1 + 152) = v35 + 2;
      LODWORD(v35) = v36;
      v25 = &v13[v36];
      v22 = v33;
      v24 = (_DWORD)v35 + 1;
    }
    else
    {
      v23 = v21;
      v24 = v21 + 1;
      v25 = &v13[v23];
    }
    *v25 = a2;
    *((_DWORD *)v13 - 1) = v24;
    if ( !a5 )
      goto LABEL_17;
    goto LABEL_16;
  }
LABEL_38:
  v45 = (_QWORD *)sub_186B270(0x18u);
  v13 = v45 + 1;
  v45[1] = a2;
  *v45 = 0x100000002LL;
  v24 = 1;
  *(_QWORD *)(a1 + 152) = v13;
  if ( !a5 )
    goto LABEL_18;
LABEL_16:
  ++*(_DWORD *)(a5 + 8);
  v24 = *((_DWORD *)v13 - 1);
  v22 = *((_DWORD *)v13 - 2);
LABEL_17:
  if ( v24 == v22 )
  {
    v41 = (3 * v24 + 1) >> 1;
    v42 = 8 * v41 + 8;
    if ( 8 * v24 + 8 >= (unsigned int)v42 || v24 >= v41 )
    {
      v8 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v50, "Overflow encountered when expanding vector");
      *v8 = (char *)off_1C63128;
      sub_2333C0(v8 + 1, v50);
      sub_233E40((__int64)v50);
      __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v43 = (unsigned int *)sub_186B300(v13 - 1, v42);
    v13 = v43 + 2;
    *v43 = v41;
    v24 = v43[1];
    *(_QWORD *)(a1 + 152) = v13;
  }
LABEL_18:
  v13[v24] = a5;
  *((_DWORD *)v13 - 1) = v24 + 1;
  v26 = *(_QWORD **)(a1 + 136);
  if ( v26 )
  {
    v27 = *((unsigned int *)v26 - 1);
    if ( (_DWORD)v27 == *((_DWORD *)v26 - 2) )
    {
      v37 = (unsigned int)(3 * v27 + 1) >> 1;
      v38 = 32 * v37 + 8;
      if ( 32 * (int)v27 + 8 >= (unsigned int)v38 || (unsigned int)v27 >= v37 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v50, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v26 - 1, v38);
      v26 = v39 + 2;
      *v39 = v37;
      v40 = v39[1];
      *(_QWORD *)(a1 + 136) = v26;
      result = &v26[4 * v40];
    }
    else
    {
      result = &v26[4 * v27];
    }
  }
  else
  {
    v46 = (_QWORD *)sub_186B270(0x48u);
    v26 = v46 + 1;
    *v46 = 2;
    *(_QWORD *)(a1 + 136) = v46 + 1;
    result = v46 + 1;
  }
  result[2] = a5;
  *result = a2;
  *((_DWORD *)result + 2) = a4;
  *((_DWORD *)result + 6) = v48;
  ++*((_DWORD *)v26 - 1);
  return result;
}

