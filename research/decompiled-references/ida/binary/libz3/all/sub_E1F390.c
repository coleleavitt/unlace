__int64 __fastcall sub_E1F390(std::ios_base *a1, __int64 a2, _QWORD *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  _QWORD *v6; // r12
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r13
  _QWORD *v11; // r15
  _QWORD *v12; // rax
  int v13; // eax
  _QWORD *v14; // rcx
  unsigned int v15; // eax
  char *v16; // r12
  int v17; // esi
  unsigned int v19; // ecx
  size_t v20; // rsi
  unsigned int v21; // ebp
  unsigned int *v22; // rax
  __int64 v23; // rcx
  void (__noreturn *v24)(); // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r13
  __int64 *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned int v31; // r12d
  unsigned int v32; // [rsp+Ch] [rbp-5Ch]
  __int64 v33[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *(_QWORD **)(a2 + 8);
  if ( !*a3 || !*(_DWORD *)(*a3 - 4LL) )
  {
    if ( v6 )
      v17 = *((_DWORD *)v6 - 1);
    else
      v17 = 0;
    return sub_E60CB0(a1, v17, (int)v6);
  }
  v8 = *((_QWORD **)a1 + 13);
  if ( v6 )
  {
    v9 = *((unsigned int *)v6 - 1);
    if ( v8 )
    {
      v32 = *((_DWORD *)v8 - 1);
      if ( (_DWORD)v9 )
      {
        v10 = *v6;
        v11 = &v6[v9];
        if ( !*v6 )
          goto LABEL_12;
LABEL_7:
        ++*(_DWORD *)(v10 + 8);
        if ( v8 )
          goto LABEL_12;
LABEL_8:
        v12 = (_QWORD *)sub_186B270(0x18u);
        v8 = v12 + 1;
        *v12 = 2;
        v13 = 1;
        *((_QWORD *)a1 + 13) = v8;
        v14 = v8;
        while ( 1 )
        {
          ++v6;
          *v14 = v10;
          *((_DWORD *)v8 - 1) = v13;
          if ( v11 == v6 )
            break;
          while ( 1 )
          {
            v10 = *v6;
            if ( *v6 )
              ++*(_DWORD *)(v10 + 8);
LABEL_12:
            v15 = *((_DWORD *)v8 - 1);
            if ( v15 == *((_DWORD *)v8 - 2) )
              break;
            ++v6;
            v8[v15] = v10;
            *((_DWORD *)v8 - 1) = v15 + 1;
            if ( v11 == v6 )
              goto LABEL_14;
          }
          v19 = (3 * v15 + 1) >> 1;
          v20 = 8 * v19 + 8;
          v21 = v19;
          if ( 8 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_180760(v33, "Overflow encountered when expanding vector", v4);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v33);
            sub_233E40((__int64)v33);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v8 - 1, v20);
          v23 = v22[1];
          v8 = v22 + 2;
          *v22 = v21;
          *((_QWORD *)a1 + 13) = v22 + 2;
          LODWORD(v22) = v23;
          v14 = &v8[v23];
          v13 = (_DWORD)v22 + 1;
        }
      }
    }
    else
    {
      if ( (_DWORD)v9 )
      {
        v10 = *v6;
        v32 = 0;
        v11 = &v6[v9];
        if ( !*v6 )
          goto LABEL_8;
        goto LABEL_7;
      }
      v32 = 0;
    }
LABEL_14:
    v16 = (char *)a1 + 96;
    goto LABEL_24;
  }
  v16 = (char *)a1 + 96;
  if ( v8 )
    v32 = *((_DWORD *)v8 - 1);
  else
    v32 = 0;
LABEL_24:
  v24 = *(void (__noreturn **)())(*(_QWORD *)a1 + 392LL);
  if ( v24 == sub_3430A0 )
  {
    sub_1872CE0("");
    sub_1873130(107, 49);
  }
  v31 = ((__int64 (__fastcall *)(std::ios_base *, char *, _QWORD *))v24)(a1, v16, a3);
  v25 = *((_QWORD *)a1 + 13);
  if ( v25 )
  {
    v26 = v25 + 8LL * *(unsigned int *)(v25 - 4);
    v27 = (__int64 *)(v25 + 8LL * v32);
    if ( (unsigned __int64)v27 >= v26 )
      goto LABEL_34;
    do
    {
      while ( 1 )
      {
        v28 = *v27;
        if ( *v27 )
        {
          v29 = *((_QWORD *)a1 + 12);
          if ( (*(_DWORD *)(v28 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v27 >= v26 )
          goto LABEL_33;
      }
      sub_15D7BC0(v29, v28);
      ++v27;
    }
    while ( (unsigned __int64)v27 < v26 );
LABEL_33:
    v25 = *((_QWORD *)a1 + 13);
    if ( v25 )
LABEL_34:
      *(_DWORD *)(v25 - 4) = v32;
  }
  return v31;
}

