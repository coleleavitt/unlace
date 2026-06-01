__int64 __fastcall sub_47B650(__int64 *a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  char **exception; // r12
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  _QWORD *v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int *v25; // rax
  __int64 v26; // rax
  int v27; // esi
  __int64 result; // rax
  __int64 v29; // rsi
  bool v30; // zf
  __int64 *v31; // rbp
  __int64 *v32; // r13
  __int64 v33; // rsi
  __int64 v35[11]; // [rsp+30h] [rbp-58h] BYREF

  v7 = *a1;
  v8 = (__int64 *)a1[10];
  if ( !v8 )
    goto LABEL_15;
  v9 = &v8[17 * *((unsigned int *)v8 - 1)];
  if ( v8 == v9 )
  {
    v8 = nullptr;
LABEL_15:
    v19 = 0;
    goto LABEL_16;
  }
  v10 = (__int64 *)a1[10];
  v11 = sub_407E90((_QWORD *)*v8, (__int64)a2, *((unsigned int *)v8 - 1), a4, a5, a6);
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v13 = (_QWORD *)sub_186B270(0x18u);
  *v13 = 2;
  v18 = v13 + 1;
  v19 = 1;
  v8 = v18;
  while ( 1 )
  {
    v10 += 17;
    *v18 = v12;
    *((_DWORD *)v8 - 1) = v19;
    if ( v10 == v9 )
      break;
    v20 = sub_407E90((_QWORD *)*v10, v19, v14, v15, v16, v17);
    v12 = v20;
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v21 = *((_DWORD *)v8 - 1);
    if ( v21 == *((_DWORD *)v8 - 2) )
    {
      v23 = (3 * v21 + 1) >> 1;
      v24 = 8 * v23 + 8;
      if ( 8 * v21 + 8 >= v24 || v21 >= v23 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int *)sub_186B300(v8 - 1, v24);
      v8 = (__int64 *)(v25 + 2);
      *v25 = (3 * v21 + 1) >> 1;
      v26 = v25[1];
      v27 = v26;
      v18 = &v8[v26];
      v19 = (unsigned int)(v27 + 1);
    }
    else
    {
      v22 = v21;
      v19 = v21 + 1;
      v18 = &v8[v22];
    }
  }
LABEL_16:
  result = sub_15EC1C0(v7, v19);
  if ( result )
    ++*(_DWORD *)(result + 8);
  v29 = *a2;
  *a2 = result;
  if ( v29 )
  {
    v30 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v30 )
      result = sub_15D7BC0(v7, v29);
  }
  if ( v8 )
  {
    v31 = v8;
    v32 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 < v32 )
    {
      do
      {
        while ( 1 )
        {
          v33 = *v31;
          if ( *v31 )
          {
            v30 = (*(_DWORD *)(v33 + 8))-- == 1;
            if ( v30 )
              break;
          }
          if ( ++v31 >= v32 )
            return sub_186B220(v8 - 1);
        }
        ++v31;
        sub_15D7BC0(v7, v33);
      }
      while ( v31 < v32 );
    }
    return sub_186B220(v8 - 1);
  }
  return result;
}

