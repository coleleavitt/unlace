void __fastcall sub_5881D0(_QWORD *a1, unsigned int a2, _DWORD *a3)
{
  char **exception; // rbx
  _QWORD *v6; // rcx
  unsigned int v7; // r13d
  unsigned int v8; // eax
  bool v9; // cf
  unsigned int v10; // r11d
  unsigned int v11; // ebx
  _QWORD *v12; // r8
  unsigned int v13; // esi
  unsigned int v14; // r9d
  unsigned int v15; // r12d
  size_t v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v7 = *((_DWORD *)v6 - 1);
    v8 = *a3 + 1;
    v9 = v7 < a2;
    v10 = v7 - a2;
    v11 = v7 - a2;
    if ( v8 < v7 )
    {
      v12 = &v6[v8];
      v13 = 1;
      if ( a2 != 1 && a3[1] == v8 )
        goto LABEL_9;
      while ( 1 )
      {
        v14 = v8++;
        v6[v14 - v13] = *v12;
        if ( v8 >= v7 )
          break;
        if ( a2 == v13 )
        {
          v21 = v8;
          v22 = v8 - v13;
          v23 = &v6[v21];
          do
          {
            v24 = *v23;
            v25 = v22++;
            ++v23;
            v6[v25] = v24;
          }
          while ( v13 + v22 < v7 );
          break;
        }
        while ( 1 )
        {
          ++v12;
          if ( a2 == v13 || a3[v13] != v8 )
            break;
LABEL_9:
          ++v8;
          ++v13;
          if ( v8 >= v7 )
            goto LABEL_10;
        }
      }
    }
LABEL_10:
    if ( !v9 )
    {
      *((_DWORD *)v6 - 1) = v10;
      return;
    }
  }
  else
  {
    v11 = -a2;
    if ( !a2 )
      return;
    v7 = 0;
    v26 = (_QWORD *)sub_186B270(0x18u);
    v6 = v26 + 1;
    *v26 = 2;
    *a1 = v26 + 1;
  }
  while ( 1 )
  {
    v18 = *((_DWORD *)v6 - 2);
    if ( v18 >= v11 )
      break;
    v15 = (3 * v18 + 1) >> 1;
    v16 = 8 * v15 + 8;
    if ( 8 * v18 + 8 >= (unsigned int)v16 || v18 >= v15 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v27, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v27);
      sub_233E40((__int64)v27);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v17 = (unsigned int *)sub_186B300(v6 - 1, v16);
    v6 = v17 + 2;
    *v17 = v15;
    *a1 = v17 + 2;
  }
  *((_DWORD *)v6 - 1) = v11;
  v19 = 8LL * v7;
  v20 = 8LL * v11;
  if ( v19 != v20 )
    memset(&v6[(unsigned __int64)v19 / 8], 0, v20 - v19);
}

