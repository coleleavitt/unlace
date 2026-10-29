__int64 __fastcall sub_AEFF80(__int64 a1, int a2, char a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v8; // rax
  char *v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  char *v12; // rsi
  __int64 v13; // rcx
  char *v14; // r8
  char *v15; // rax
  int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // rbp
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 result; // rax
  _QWORD *v23; // rcx
  int v24; // eax
  unsigned int v25; // r12d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30[9]; // [rsp+0h] [rbp-48h] BYREF

  v8 = *(unsigned int *)(a1 + 128);
  v9 = *(char **)(a1 + 120);
  v10 = v8 - 1;
  v8 *= 24;
  v11 = 3LL * (a2 & v10);
  v12 = &v9[v8];
  v13 = 8 * v11;
  v14 = &v9[v13];
  if ( v13 == v8 )
  {
LABEL_12:
    while ( v14 != v9 )
    {
      v24 = *((_DWORD *)v9 + 1);
      if ( v24 == 2 )
      {
        if ( a2 == *(_DWORD *)v9 && a2 == *((_DWORD *)v9 + 2) )
        {
          v15 = v9;
          goto LABEL_8;
        }
      }
      else if ( !v24 )
      {
        break;
      }
      v9 += 24;
    }
LABEL_24:
    BUG();
  }
  v15 = &v9[v13];
  while ( 1 )
  {
    v16 = *((_DWORD *)v15 + 1);
    if ( v16 != 2 )
    {
      if ( !v16 )
        goto LABEL_24;
      goto LABEL_4;
    }
    if ( a2 == *(_DWORD *)v15 && a2 == *((_DWORD *)v15 + 2) )
      break;
LABEL_4:
    v15 += 24;
    if ( v12 == v15 )
      goto LABEL_12;
  }
LABEL_8:
  v17 = *((_QWORD *)v15 + 2);
  v18 = *(_QWORD *)(v17 + 8);
  *(_BYTE *)(v17 + 16) = a3;
  v19 = *(_QWORD **)(v18 + 40);
  if ( v19 )
  {
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 == *((_DWORD *)v19 - 2) )
    {
      v25 = (3 * v20 + 1) >> 1;
      v26 = 8 * v25 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v26 || v20 >= v25 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_140FB4(v30, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v30);
        sub_233E40((__int64)v30);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = (unsigned int *)sub_186B300(v19 - 1, v26);
      v28 = v27[1];
      v19 = v27 + 2;
      *(_QWORD *)(v18 + 40) = v27 + 2;
      *v27 = v25;
      LODWORD(v27) = v28;
      v23 = &v19[v28];
      result = (unsigned int)((_DWORD)v27 + 1);
    }
    else
    {
      v21 = v20;
      result = v20 + 1;
      v23 = &v19[v21];
    }
  }
  else
  {
    v29 = (_QWORD *)sub_186B270(0x18u);
    v19 = v29 + 1;
    *v29 = 2;
    result = 1;
    *(_QWORD *)(v18 + 40) = v19;
    v23 = v19;
  }
  *v23 = v17;
  *((_DWORD *)v19 - 1) = result;
  *(_BYTE *)(a1 + 144) = 1;
  return result;
}

