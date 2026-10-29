_QWORD *__fastcall sub_8EE1A0(_QWORD *a1, __int64 a2, int a3)
{
  char **exception; // rbp
  __int64 v4; // rax
  int *v5; // rbx
  int *v8; // r8
  __int64 v9; // r14
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  int v15; // ecx
  __int64 v16; // r13
  _QWORD *v17; // rax
  unsigned int v18; // ecx
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v22; // rax
  int *v23; // [rsp+0h] [rbp-68h]
  int *v24; // [rsp+0h] [rbp-68h]
  int *v25; // [rsp+0h] [rbp-68h]
  unsigned int v26; // [rsp+Ch] [rbp-5Ch]
  __int64 v27[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 104);
  v5 = *(int **)(a2 + 8920);
  a1[1] = 0;
  *a1 = v4;
  if ( v5 )
  {
    v8 = &v5[*(v5 - 1)];
    if ( v8 != v5 )
    {
      while ( 1 )
      {
        v15 = *v5;
        if ( a3 + *(_DWORD *)(a2 + 9468) < (*(_DWORD *)(*(_QWORD *)(a2 + 8872) + 16LL * ((unsigned int)*v5 >> 1) + 8)
                                          & 0xFFFFFFu) )
          goto LABEL_12;
        v16 = *(_QWORD *)(a2 + 104);
        if ( dword_1C7EC64 != v15 )
          break;
        v9 = *(_QWORD *)(v16 + 856);
        if ( v9 )
          goto LABEL_7;
        v10 = (_QWORD *)a1[1];
        if ( v10 )
        {
LABEL_9:
          v11 = *((_DWORD *)v10 - 1);
          if ( v11 == *((_DWORD *)v10 - 2) )
          {
            v18 = (3 * v11 + 1) >> 1;
            v19 = 8 * v18 + 8;
            if ( 8 * v11 + 8 >= (unsigned int)v19 || v11 >= v18 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_8E4EB0(v27, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v27);
              sub_233E40((__int64)v27);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = (3 * v11 + 1) >> 1;
            v24 = v8;
            v20 = (unsigned int *)sub_186B300(v10 - 1, v19);
            v10 = v20 + 2;
            v8 = v24;
            a1[1] = v20 + 2;
            *v20 = v26;
            LODWORD(v20) = v20[1];
            v14 = &v10[(unsigned int)v20];
            v13 = (_DWORD)v20 + 1;
          }
          else
          {
            v12 = v11;
            v13 = v11 + 1;
            v14 = &v10[v12];
          }
          goto LABEL_11;
        }
LABEL_17:
        v23 = v8;
        v17 = (_QWORD *)sub_186B270(0x18u);
        v10 = v17 + 1;
        *v17 = 2;
        v8 = v23;
        v13 = 1;
        a1[1] = v10;
        v14 = v10;
LABEL_11:
        *v14 = v9;
        *((_DWORD *)v10 - 1) = v13;
LABEL_12:
        if ( v8 == ++v5 )
          return a1;
      }
      if ( dword_1C7EC60 == v15 )
      {
        v9 = *(_QWORD *)(v16 + 864);
        if ( !v9 )
          goto LABEL_8;
      }
      else
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8840) + 8LL * ((unsigned int)*v5 >> 1));
        if ( (v15 & 1) == 0 )
        {
          if ( !v9 )
            goto LABEL_8;
          goto LABEL_7;
        }
        v25 = v8;
        v22 = sub_15E1A70(*(_QWORD *)(a2 + 104));
        v8 = v25;
        v9 = v22;
        if ( !v22 )
        {
LABEL_8:
          v10 = (_QWORD *)a1[1];
          if ( v10 )
            goto LABEL_9;
          goto LABEL_17;
        }
      }
LABEL_7:
      ++*(_DWORD *)(v9 + 8);
      goto LABEL_8;
    }
  }
  return a1;
}

