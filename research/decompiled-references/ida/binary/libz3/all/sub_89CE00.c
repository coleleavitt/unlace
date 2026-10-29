__int64 __fastcall sub_89CE00(__int64 a1, int a2, char a3)
{
  __int64 v6; // rax
  char *v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rcx
  char *v10; // rsi
  __int64 v11; // rcx
  char *v12; // r8
  char *v13; // rax
  int v14; // ecx
  __int64 v15; // rbp
  _QWORD *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 result; // rax
  _QWORD *v20; // rdx
  int v21; // eax
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rdx
  _DWORD *v26; // rdi
  _QWORD *v27; // rax
  char **exception; // rbx
  __int64 v29; // rdx
  __int64 v30[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = *(unsigned int *)(a1 + 696);
  v7 = *(char **)(a1 + 688);
  ++*(_DWORD *)(a1 + 196);
  v8 = v6 - 1;
  v6 *= 24;
  v9 = 3LL * (a2 & v8);
  v10 = &v7[v6];
  v11 = 8 * v9;
  v12 = &v7[v11];
  if ( v11 == v6 )
  {
LABEL_12:
    while ( v12 != v7 )
    {
      v21 = *((_DWORD *)v7 + 1);
      if ( v21 == 2 )
      {
        if ( a2 == *(_DWORD *)v7 && a2 == *((_DWORD *)v7 + 2) )
        {
          v13 = v7;
          goto LABEL_8;
        }
      }
      else if ( !v21 )
      {
        break;
      }
      v7 += 24;
    }
LABEL_25:
    sub_1872CE0("");
    sub_1873130(114, 317);
  }
  v13 = &v7[v11];
  while ( 1 )
  {
    v14 = *((_DWORD *)v13 + 1);
    if ( v14 != 2 )
    {
      if ( !v14 )
        goto LABEL_25;
      goto LABEL_4;
    }
    if ( a2 == *(_DWORD *)v13 && a2 == *((_DWORD *)v13 + 2) )
      break;
LABEL_4:
    v13 += 24;
    if ( v10 == v13 )
      goto LABEL_12;
  }
LABEL_8:
  v15 = *((_QWORD *)v13 + 2);
  v16 = *(_QWORD **)(a1 + 672);
  *(_BYTE *)(v15 + 4) = a3;
  if ( v16 )
  {
    v17 = *((_DWORD *)v16 - 1);
    if ( v17 != *((_DWORD *)v16 - 2) )
    {
      v18 = v17;
      result = v17 + 1;
      v20 = &v16[v18];
      goto LABEL_11;
    }
    v22 = (3 * v17 + 1) >> 1;
    v23 = 8 * v22 + 8;
    if ( 8 * v17 + 8 >= (unsigned int)v23 || v17 >= v22 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_12D192(v30, "Overflow encountered when expanding vector", v29);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v30);
      sub_233E40((__int64)v30);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v24 = (unsigned int *)sub_186B300(v16 - 1, v23);
    v25 = v24[1];
    *v24 = v22;
    v26 = v24 + 2;
    *(_QWORD *)(a1 + 672) = v24 + 2;
    result = (unsigned int)(v25 + 1);
    *(_QWORD *)&v26[2 * v25] = v15;
    *(v26 - 1) = result;
  }
  else
  {
    v27 = (_QWORD *)sub_186B270(0x18u);
    v16 = v27 + 1;
    *v27 = 2;
    result = 1;
    *(_QWORD *)(a1 + 672) = v16;
    v20 = v16;
LABEL_11:
    *v20 = v15;
    *((_DWORD *)v16 - 1) = result;
  }
  return result;
}

