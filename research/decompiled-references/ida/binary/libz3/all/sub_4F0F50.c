__int64 __fastcall sub_4F0F50(__int64 a1, __int64 *a2)
{
  char **exception; // r13
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // r15
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbp
  unsigned int v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 result; // rax
  __int64 *v21; // rbp
  unsigned __int64 v22; // r12
  __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // [rsp+0h] [rbp-98h]
  __int64 v27; // [rsp+30h] [rbp-68h] BYREF
  __int64 v28[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a2[1];
  v4 = *(unsigned int *)(a1 + 48);
  v25 = v3;
  if ( (_DWORD)v4 )
  {
    v5 = 0;
    v6 = nullptr;
    while ( 1 )
    {
      sub_4F0CE0(&v27, (_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v5));
      v9 = v27;
      if ( !v6 )
        break;
      v10 = *((_DWORD *)v6 - 1);
      if ( v10 == *((_DWORD *)v6 - 2) )
      {
        v11 = (3 * v10 + 1) >> 1;
        v12 = 8 * v11 + 8;
        if ( 8 * v10 + 8 >= v12 || v10 >= v11 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v28, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
        *v13 = (3 * v10 + 1) >> 1;
        v6 = v13 + 2;
        v14 = v13[1];
        ++v5;
        v4 = (unsigned int)(v14 + 1);
        v6[v14] = v9;
        *((_DWORD *)v6 - 1) = v4;
        if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 48) )
          goto LABEL_10;
      }
      else
      {
        v7 = v10;
        v4 = v10 + 1;
        v8 = &v6[v7];
LABEL_4:
        *v8 = v9;
        ++v5;
        *((_DWORD *)v6 - 1) = v4;
        if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 48) )
          goto LABEL_10;
      }
    }
    v24 = (_QWORD *)sub_186B270(0x18u);
    v6 = v24 + 1;
    *v24 = 2;
    v4 = 1;
    v8 = v24 + 1;
    goto LABEL_4;
  }
  v6 = nullptr;
LABEL_10:
  v15 = sub_15EC240(v25, v4);
  v16 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v17 = *a2;
  if ( *a2 )
  {
    v18 = a2[1];
    v19 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v19 )
      sub_15D7BC0(v18, v17);
  }
  result = (__int64)a2;
  *a2 = v16;
  if ( v6 )
  {
    v21 = v6;
    v22 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
    if ( (unsigned __int64)v6 < v22 )
    {
      do
      {
        while ( 1 )
        {
          v23 = *v21;
          if ( *v21 )
          {
            v19 = (*(_DWORD *)(v23 + 8))-- == 1;
            if ( v19 )
              break;
          }
          if ( (unsigned __int64)++v21 >= v22 )
            return sub_186B220(v6 - 1);
        }
        ++v21;
        sub_15D7BC0(v25, v23);
      }
      while ( (unsigned __int64)v21 < v22 );
    }
    return sub_186B220(v6 - 1);
  }
  return result;
}

