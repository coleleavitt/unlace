__int64 __fastcall sub_B25CF0(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // r12
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r13
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  _QWORD *v28; // rax
  unsigned int v29; // r13d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD v34[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v35[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  if ( !*(_BYTE *)(*(_QWORD *)(v5 + 16) + 80LL) )
  {
    result = *(_QWORD *)(a1 + 96);
    if ( !result )
      return result;
    result = *(unsigned int *)(result - 4);
    if ( !(_DWORD)result )
      return result;
  }
  sub_162E810(v34, v5, *(unsigned int *)(a1 + 192));
  v7 = v34[0];
  if ( v34[0] )
    ++*(_DWORD *)(v34[0] + 8LL);
  v8 = *(_QWORD **)(a2 + 8);
  if ( v8 )
  {
    v9 = *((_DWORD *)v8 - 1);
    if ( v9 == *((_DWORD *)v8 - 2) )
    {
      v29 = (3 * v9 + 1) >> 1;
      v30 = 8 * v29 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v30 || v9 >= v29 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (unsigned int *)sub_186B300(v8 - 1, v30);
      v32 = v31[1];
      v8 = v31 + 2;
      *v31 = v29;
      *(_QWORD *)(a2 + 8) = v31 + 2;
      LODWORD(v31) = v32;
      v11 = &v8[v32];
      result = (unsigned int)((_DWORD)v31 + 1);
    }
    else
    {
      v10 = v9;
      result = v9 + 1;
      v11 = &v8[v10];
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x18u);
    v8 = v33 + 1;
    *v33 = 2;
    result = 1;
    *(_QWORD *)(a2 + 8) = v8;
    v11 = v8;
  }
  v12 = *(_QWORD *)(a1 + 96);
  *v11 = v7;
  *((_DWORD *)v8 - 1) = result;
  if ( v12 )
  {
    result = *(unsigned int *)(v12 - 4);
    v13 = v12 + 8 * result;
    if ( v13 != v12 )
    {
      while ( 1 )
      {
        v16 = sub_15E1A70(*(_QWORD *)(a1 + 24));
        v17 = v16;
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v18 = *(_QWORD **)(a2 + 8);
        if ( !v18 )
          break;
        v19 = *((_DWORD *)v18 - 1);
        if ( v19 == *((_DWORD *)v18 - 2) )
        {
          v20 = (3 * v19 + 1) >> 1;
          v21 = 8 * v20 + 8;
          if ( 8 * v19 + 8 >= (unsigned int)v21 || v19 >= v20 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v35, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v35);
            sub_233E40((__int64)v35);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v22 = (unsigned int *)sub_186B300(v18 - 1, v21);
          v23 = v22[1];
          v24 = v22 + 2;
          *v22 = v20;
          v12 += 8;
          *(_QWORD *)(a2 + 8) = v22 + 2;
          result = (unsigned int)(v23 + 1);
          *(_QWORD *)&v24[2 * v23] = v17;
          *(v24 - 1) = result;
          if ( v13 == v12 )
            goto LABEL_22;
        }
        else
        {
          v14 = v19;
          result = v19 + 1;
          v15 = &v18[v14];
LABEL_14:
          v12 += 8;
          *v15 = v17;
          *((_DWORD *)v18 - 1) = result;
          if ( v13 == v12 )
            goto LABEL_22;
        }
      }
      v28 = (_QWORD *)sub_186B270(0x18u);
      v18 = v28 + 1;
      *v28 = 2;
      result = 1;
      *(_QWORD *)(a2 + 8) = v18;
      v15 = v18;
      goto LABEL_14;
    }
  }
LABEL_22:
  v25 = v34[0];
  if ( v34[0] )
  {
    v26 = v34[1];
    if ( (*(_DWORD *)(v34[0] + 8LL))-- == 1 )
      return sub_15D7BC0(v26, v25);
  }
  return result;
}

