__int64 __fastcall sub_435200(__int64 a1, unsigned int a2, __int64 *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v6; // r13
  __int64 v8; // rax
  unsigned int v9; // ebp
  unsigned __int64 v10; // r15
  __int64 *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rbx
  __int64 *v18; // r15
  _QWORD *v19; // rax
  int v20; // eax
  _QWORD *v21; // rcx
  unsigned int v22; // eax
  char v23; // al
  __int64 v24; // rdx
  std::ios_base *v25; // rdi
  int v26; // esi
  __int64 result; // rax
  unsigned int v28; // r13d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  __int64 v32[11]; // [rsp+0h] [rbp-58h] BYREF

  v6 = a2;
  v8 = *(_QWORD *)(a1 + 216);
  if ( v8 )
  {
    v9 = *(_DWORD *)(a1 + 224);
    v10 = v8 + 8LL * *(unsigned int *)(v8 - 4);
    v11 = (__int64 *)(v8 + 8LL * v9);
    if ( (unsigned __int64)v11 >= v10 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 )
        {
          v13 = *(_QWORD *)(a1 + 208);
          if ( (*(_DWORD *)(v12 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v11 >= v10 )
          goto LABEL_8;
      }
      sub_15D7BC0(v13, v12);
      ++v11;
    }
    while ( (unsigned __int64)v11 < v10 );
LABEL_8:
    v8 = *(_QWORD *)(a1 + 216);
    if ( v8 )
LABEL_9:
      *(_DWORD *)(v8 - 4) = v9;
  }
  sub_4334D0(a1, (__int64 *)(a1 + 208), 0);
  v15 = *(_QWORD **)(a1 + 216);
  if ( v15 )
    v16 = *((_DWORD *)v15 - 1);
  else
    v16 = 0;
  *(_DWORD *)(a1 + 224) = v16;
  if ( (_DWORD)v6 )
  {
    v17 = *a3;
    v18 = &a3[v6];
    if ( *a3 )
      ++*(_DWORD *)(v17 + 8);
    if ( v15 )
      goto LABEL_20;
    v19 = (_QWORD *)sub_186B270(0x18u);
    v15 = v19 + 1;
    *v19 = 2;
    v20 = 1;
    *(_QWORD *)(a1 + 216) = v15;
    v21 = v15;
    while ( 1 )
    {
      ++a3;
      *v21 = v17;
      *((_DWORD *)v15 - 1) = v20;
      if ( v18 == a3 )
        break;
      while ( 1 )
      {
        v17 = *a3;
        if ( *a3 )
          ++*(_DWORD *)(v17 + 8);
LABEL_20:
        v22 = *((_DWORD *)v15 - 1);
        if ( v22 == *((_DWORD *)v15 - 2) )
          break;
        ++a3;
        v15[v22] = v17;
        *((_DWORD *)v15 - 1) = v22 + 1;
        if ( v18 == a3 )
          goto LABEL_22;
      }
      v28 = (3 * v22 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v29 || v22 >= v28 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D0F44(v32, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v30 = (unsigned int *)sub_186B300(v15 - 1, v29);
      v31 = v30[1];
      v15 = v30 + 2;
      *v30 = v28;
      *(_QWORD *)(a1 + 216) = v30 + 2;
      LODWORD(v30) = v31;
      v21 = &v15[v31];
      v20 = (_DWORD)v30 + 1;
    }
LABEL_22:
    v16 = *(_DWORD *)(a1 + 224);
  }
  v23 = sub_4334D0(a1, (__int64 *)(a1 + 208), v16);
  v24 = *(_QWORD *)(a1 + 216);
  v25 = *(std::ios_base **)(a1 + 96);
  *(_BYTE *)(a1 + 228) = v23;
  if ( v24 )
    v26 = *(_DWORD *)(v24 - 4);
  else
    v26 = 0;
  result = sub_E60CB0(v25, v26, v24);
  *(_DWORD *)(a1 + 52) = result;
  return result;
}

