__int64 __fastcall sub_7C00D0(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  unsigned int v5; // r14d
  char v6; // r12
  unsigned int v7; // ebp
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // rbx
  __int64 v11; // r13
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // cf
  unsigned int v16; // edx
  size_t v17; // rsi
  unsigned int v18; // r13d
  unsigned int *v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  unsigned int v29; // [rsp+Ch] [rbp-5Ch]
  __int64 v30[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = a2 >> 1;
  v6 = a2;
  v7 = (a2 >> 1) + 1;
  v8 = *(_QWORD **)(a1 + 792);
  if ( v8 )
  {
    v29 = *((_DWORD *)v8 - 1);
    if ( v29 >= v7 )
      goto LABEL_3;
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x18u);
    v29 = 0;
    v8 = v26 + 1;
    *v26 = 2;
    *(_QWORD *)(a1 + 792) = v26 + 1;
  }
  while ( 1 )
  {
    v20 = *((_DWORD *)v8 - 2);
    if ( v20 >= v7 )
      break;
    v16 = (3 * v20 + 1) >> 1;
    v17 = 8 * v16 + 8;
    v18 = v16;
    if ( 8 * v20 + 8 >= (unsigned int)v17 || v20 >= v16 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_113C8C(v30, "Overflow encountered when expanding vector", v4);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v30);
      sub_233E40((__int64)v30);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v19 = (unsigned int *)sub_186B300(v8 - 1, v17);
    v8 = v19 + 2;
    *v19 = v18;
    *(_QWORD *)(a1 + 792) = v19 + 2;
  }
  *((_DWORD *)v8 - 1) = v7;
  v21 = 8LL * v7;
  v22 = 8LL * v29;
  if ( v22 != v21 )
    memset(&v8[(unsigned __int64)v22 / 8], 0, v21 - v22);
LABEL_3:
  v9 = v5;
  v10 = &v8[v9];
  v11 = *v10;
  if ( !*v10 )
  {
    v24 = *(_QWORD *)(a1 + 800);
    if ( !v24 || (v25 = *(unsigned int *)(v24 - 4), (_DWORD)v25 == *(_DWORD *)(v24 - 8)) )
    {
      sub_2FD3F0((unsigned int **)(a1 + 800));
      v27 = *(_QWORD *)(a1 + 800);
      v10 = (__int64 *)(v9 * 8 + *(_QWORD *)(a1 + 792));
      *(_DWORD *)(v27 + 4LL * (unsigned int)(*(_DWORD *)(v27 - 4))++) = v5;
    }
    else
    {
      *(_DWORD *)(v24 + 4 * v25) = v5;
      ++*(_DWORD *)(v24 - 4);
    }
  }
  if ( (v6 & 1) != 0 )
  {
    result = v11 - a3;
    *v10 = result;
    if ( (unsigned __int64)(result + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v13 = *(unsigned int *)(a1 + 808);
      if ( v11 > 0 && a3 )
      {
        v14 = 0;
        if ( result >= 0 )
          v14 = v11 - a3;
        v13 += v14 - v11;
        v15 = v13 > 0xFFFFFFFF;
        *(_DWORD *)(a1 + 808) = v13;
        v13 = (unsigned int)v13;
        *(_BYTE *)(a1 + 996) |= v15;
      }
LABEL_11:
      if ( (__int64)v13 < result )
      {
LABEL_26:
        *v10 = v13;
        return result;
      }
      goto LABEL_12;
    }
LABEL_27:
    *(_BYTE *)(a1 + 996) = 1;
    return result;
  }
  result = v11 + a3;
  *v10 = result;
  if ( (unsigned __int64)(result + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_27;
  v13 = *(unsigned int *)(a1 + 808);
  if ( v11 >= 0 || !a3 )
    goto LABEL_11;
  v23 = 0;
  if ( result <= 0 )
    v23 = v11 + a3;
  v13 += v11 - v23;
  v15 = v13 > 0xFFFFFFFF;
  *(_DWORD *)(a1 + 808) = v13;
  v13 = (unsigned int)v13;
  *(_BYTE *)(a1 + 996) |= v15;
  if ( (unsigned int)v13 < result )
    goto LABEL_26;
LABEL_12:
  if ( result < 0 )
  {
    result = -result;
    if ( result > (__int64)v13 )
    {
      v13 = -(__int64)v13;
      goto LABEL_26;
    }
  }
  return result;
}

