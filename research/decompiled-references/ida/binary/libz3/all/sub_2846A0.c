void __fastcall sub_2846A0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, unsigned int a5, __int64 a6)
{
  _QWORD *v8; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  _QWORD *v12; // rdx
  __int64 v13; // r13
  __int64 *v14; // r12
  __int64 *v15; // r14
  unsigned int v16; // eax
  unsigned int v17; // r9d
  size_t v18; // rsi
  unsigned int v19; // ebp
  unsigned int *v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // edx
  size_t v23; // rsi
  unsigned int v24; // r12d
  unsigned int *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  char **exception; // rbp
  __int64 v33[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v8 = *(_QWORD **)(a1 + 3088);
    if ( v8 )
    {
      v9 = *((_DWORD *)v8 - 1);
      if ( v9 == *((_DWORD *)v8 - 2) )
      {
        v22 = (3 * v9 + 1) >> 1;
        v23 = 8 * v22 + 8;
        v24 = v22;
        if ( 8 * v9 + 8 >= (unsigned int)v23 || v9 >= v22 )
        {
LABEL_23:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v33, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v33);
          sub_233E40((__int64)v33);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B300(v8 - 1, v23);
        v26 = v25[1];
        v8 = v25 + 2;
        *v25 = v24;
        *(_QWORD *)(a1 + 3088) = v25 + 2;
        LODWORD(v25) = v26;
        v12 = &v8[v26];
        v11 = (_DWORD)v25 + 1;
      }
      else
      {
        v10 = v9;
        v11 = v9 + 1;
        v12 = &v8[v10];
      }
    }
    else
    {
      v27 = (_QWORD *)sub_186B270(0x18u);
      v8 = v27 + 1;
      *v27 = 2;
      v11 = 1;
      *(_QWORD *)(a1 + 3088) = v8;
      v12 = v8;
    }
    *v12 = a2;
    *((_DWORD *)v8 - 1) = v11;
    if ( a3 )
    {
      v13 = *a4;
      v14 = a4;
      v15 = &a4[a3];
      if ( *a4 )
        goto LABEL_12;
      while ( 1 )
      {
        v16 = *((_DWORD *)v8 - 1);
        if ( v16 == *((_DWORD *)v8 - 2) )
        {
          v17 = (3 * v16 + 1) >> 1;
          v18 = 8 * v17 + 8;
          v19 = v17;
          if ( 8 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
            goto LABEL_23;
          ++v14;
          v20 = (unsigned int *)sub_186B300(v8 - 1, v18);
          v21 = v20[1];
          v8 = v20 + 2;
          *v20 = v19;
          *(_QWORD *)(a1 + 3088) = v20 + 2;
          *(_QWORD *)&v20[2 * v21 + 2] = v13;
          v20[1] = v21 + 1;
          if ( v15 == v14 )
            break;
        }
        else
        {
          ++v14;
          v8[v16] = v13;
          *((_DWORD *)v8 - 1) = v16 + 1;
          if ( v15 == v14 )
            break;
        }
        v13 = *v14;
        if ( *v14 )
LABEL_12:
          ++*(_DWORD *)(v13 + 8);
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *, _QWORD, __int64))(a1 + 24))(
      *(_QWORD *)(a1 + 8),
      a2,
      a3,
      a4,
      a5,
      a6);
  }
}

