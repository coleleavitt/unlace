__int64 ***__fastcall sub_E6A2C0(_QWORD *a1, __int64 ***a2, __int64 a3, __int64 a4, _BYTE *a5, int a6)
{
  __int64 **v6; // rbp
  unsigned __int64 v7; // rdx
  __int64 **v8; // rcx
  unsigned __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *i; // r15
  __int64 v12; // rsi
  char v13; // al
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  __int64 *v19; // rsi
  __int64 **v20; // rbx
  __int64 *v21; // rdi
  unsigned int v23; // r9d
  size_t v24; // rsi
  unsigned int v25; // r13d
  unsigned int *v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rax
  char **exception; // rbx
  __int64 **v30; // [rsp+0h] [rbp-68h]
  __int64 v32[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = *a2;
  if ( !*a2 )
    goto LABEL_23;
  v7 = *((unsigned int *)v6 - 1);
  v8 = &v6[v7];
  v9 = v7;
  v30 = v8;
  if ( v8 == v6 )
    goto LABEL_17;
  do
  {
    v10 = *v6;
    if ( *v6 )
    {
      for ( i = &v10[*((unsigned int *)v10 - 1)]; i != v10; *(_DWORD *)(v7 - 4) = v18 )
      {
        while ( 1 )
        {
          v12 = *v10;
          v13 = *(_BYTE *)(*v10 + 7);
          if ( (v13 & 0x40) == 0 )
            break;
          if ( i == ++v10 )
            goto LABEL_14;
        }
        *(_BYTE *)(v12 + 7) = v13 | 0x40;
        v14 = sub_E691A0(a1, v12, v7, (int)v8, a5, a6);
        v15 = v14;
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        v7 = a1[88];
        if ( v7 )
        {
          v16 = *(_DWORD *)(v7 - 4);
          if ( v16 == *(_DWORD *)(v7 - 8) )
          {
            v23 = (3 * v16 + 1) >> 1;
            v24 = 8 * v23 + 8;
            v25 = v23;
            if ( 8 * v16 + 8 >= (unsigned int)v24 || v16 >= v23 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_E65BE0(v32, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v32);
              sub_233E40((__int64)v32);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v26 = (unsigned int *)sub_186B300((void *)(v7 - 8), v24);
            v27 = v26[1];
            v7 = (unsigned __int64)(v26 + 2);
            *v26 = v25;
            a1[88] = v26 + 2;
            LODWORD(v26) = v27;
            v19 = (__int64 *)(v7 + 8 * v27);
            v18 = (_DWORD)v26 + 1;
          }
          else
          {
            v17 = v16;
            v18 = v16 + 1;
            v19 = (__int64 *)(v7 + 8 * v17);
          }
        }
        else
        {
          v28 = (_QWORD *)sub_186B270(0x18u);
          LODWORD(v8) = 2;
          v7 = (unsigned __int64)(v28 + 1);
          *v28 = 2;
          v19 = (__int64 *)v7;
          v18 = 1;
          a1[88] = v7;
        }
        ++v10;
        *v19 = v15;
      }
    }
LABEL_14:
    ++v6;
  }
  while ( v30 != v6 );
  v6 = *a2;
  if ( *a2 )
  {
    v9 = *((unsigned int *)v6 - 1);
LABEL_17:
    if ( (_DWORD)v9 )
    {
      v20 = &v6[v9];
      do
      {
        while ( *v6 )
        {
          v21 = *v6++ - 1;
          sub_186B220(v21);
          if ( v20 == v6 )
          {
            v6 = *a2;
            goto LABEL_22;
          }
        }
        ++v6;
      }
      while ( v6 != v20 );
      v6 = *a2;
    }
LABEL_22:
    sub_186B220(v6 - 1);
  }
LABEL_23:
  *a2 = nullptr;
  return a2;
}

