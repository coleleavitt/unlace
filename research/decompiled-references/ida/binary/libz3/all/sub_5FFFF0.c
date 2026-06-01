bool __fastcall sub_5FFFF0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v4; // rax
  __int64 *v5; // rdx
  int v6; // edi
  unsigned int v7; // r9d
  __int64 *v8; // rcx
  __int64 v9; // r9
  __int64 *v10; // r8
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  _DWORD *v14; // rcx
  _QWORD *v15; // rdx
  _DWORD *v16; // r14
  unsigned int v17; // ebp
  _QWORD *v18; // rax
  _DWORD *v19; // rsi
  __int64 v20; // rax
  unsigned int v21; // r13d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rax
  bool result; // al
  __int64 v26[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(unsigned int *)(a1 + 56);
  v5 = *(__int64 **)(a1 + 48);
  v6 = *(_DWORD *)(a2 + 12);
  v7 = v4 - 1;
  v4 *= 16;
  v8 = (__int64 *)((char *)v5 + v4);
  v9 = 16LL * (v6 & v7);
  v10 = &v5[(unsigned __int64)v9 / 8];
  if ( v9 == v4 )
  {
LABEL_9:
    while ( v10 != v5 )
    {
      v13 = *v5;
      if ( (unsigned __int64)*v5 > 1 )
      {
        if ( *(_DWORD *)(v13 + 12) == v6 && a2 == v13 )
        {
          v11 = v5;
          goto LABEL_18;
        }
      }
      else if ( !v13 )
      {
        break;
      }
      v5 += 2;
    }
LABEL_35:
    BUG();
  }
  v11 = &v5[(unsigned __int64)v9 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *v11;
      if ( (unsigned __int64)*v11 > 1 )
        break;
      if ( !v12 )
        goto LABEL_35;
      v11 += 2;
      if ( v8 == v11 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)(v12 + 12) == v6 && a2 == v12 )
      break;
    v11 += 2;
    if ( v8 == v11 )
      goto LABEL_9;
  }
LABEL_18:
  v14 = (_DWORD *)v11[1];
  v15 = *(_QWORD **)(a1 + 24);
  v16 = v14;
  if ( v14 && *(v14 - 1) )
  {
    if ( v15 )
    {
      v17 = 0;
      goto LABEL_25;
    }
    v17 = 0;
    v18 = (_QWORD *)sub_186B270(0x10u);
    v15 = v18 + 1;
    *v18 = 2;
    *(_QWORD *)(a1 + 24) = v18 + 1;
    v14 = (_DWORD *)v11[1];
    v19 = v18 + 1;
    while ( 1 )
    {
      ++v17;
      *v19 = *v16;
      ++*((_DWORD *)v15 - 1);
      if ( !v14 || v17 >= *(v14 - 1) )
        break;
      v16 = &v14[v17];
LABEL_25:
      v20 = *((unsigned int *)v15 - 1);
      v19 = (_DWORD *)v15 + v20;
      if ( (_DWORD)v20 == *((_DWORD *)v15 - 2) )
      {
        v21 = (unsigned int)(3 * v20 + 1) >> 1;
        v22 = 4 * v21 + 8;
        if ( 4 * (int)v20 + 8 >= (unsigned int)v22 || (unsigned int)v20 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v26, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v26);
          sub_233E40((__int64)v26);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v15 - 1, v22);
        v15 = v23 + 2;
        *v23 = v21;
        v24 = v23[1];
        *(_QWORD *)(a1 + 24) = v15;
        v14 = (_DWORD *)v11[1];
        v19 = (_DWORD *)v15 + v24;
      }
    }
  }
  else
  {
    result = 1;
    if ( !v15 )
      return result;
  }
  return *((_DWORD *)v15 - 1) <= 1u;
}

