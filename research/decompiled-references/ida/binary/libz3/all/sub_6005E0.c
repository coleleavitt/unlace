__int64 __fastcall sub_6005E0(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v6; // rax
  _DWORD *v7; // rdi
  unsigned int v8; // r12d
  size_t v9; // rsi
  unsigned int *v10; // rax
  unsigned int v11; // eax
  _DWORD *v12; // rdi
  unsigned int v13; // r13d
  size_t v14; // rsi
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 result; // rax
  __int64 v18; // rdi
  char *v19; // r12
  int v20; // ecx
  unsigned int v21; // esi
  char *v22; // rdx
  char *v23; // rbp
  char *v24; // r13
  __int64 v25; // rdi
  unsigned int v26; // r12d
  size_t v27; // rbp
  _OWORD *v28; // rcx
  _OWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  unsigned int v33; // esi
  __int64 v34[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  v7 = *(_DWORD **)(a1 + 32);
  if ( v7 )
  {
    *(v7 - 1) = 0;
    if ( !a2 )
    {
LABEL_39:
      v31 = *(_QWORD *)(a1 + 40);
      if ( v31 )
      {
        *(_DWORD *)(v31 - 4) = 0;
        *(_DWORD *)(v31 - 4) = 0;
      }
      goto LABEL_17;
    }
  }
  else
  {
    if ( !a2 )
      goto LABEL_39;
    v32 = (_QWORD *)sub_186B270(0xAu);
    v7 = v32 + 1;
    *v32 = 2;
    *(_QWORD *)(a1 + 32) = v32 + 1;
  }
  while ( 1 )
  {
    v11 = *(v7 - 2);
    if ( v11 >= a2 )
      break;
    v8 = (3 * v11 + 1) >> 1;
    v9 = v8 + 8;
    if ( v11 + 8 >= (unsigned int)v9 || v11 >= v8 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v34, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v34);
      sub_233E40((__int64)v34);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v10 = (unsigned int *)sub_186B300(v7 - 2, v9);
    v7 = v10 + 2;
    *v10 = v8;
    *(_QWORD *)(a1 + 32) = v10 + 2;
  }
  *(v7 - 1) = a2;
  memset(v7, 1, a2);
  v12 = *(_DWORD **)(a1 + 40);
  if ( v12 )
  {
    *(v12 - 1) = 0;
  }
  else
  {
    v30 = (_QWORD *)sub_186B270(0xAu);
    v12 = v30 + 1;
    *v30 = 2;
    *(_QWORD *)(a1 + 40) = v30 + 1;
  }
  while ( 1 )
  {
    v16 = *(v12 - 2);
    if ( v16 >= a2 )
      break;
    v13 = (3 * v16 + 1) >> 1;
    v14 = v13 + 8;
    if ( v16 + 8 >= (unsigned int)v14 || v16 >= v13 )
    {
      v2 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v34, "Overflow encountered when expanding vector");
      *v2 = (char *)off_1C63128;
      sub_2333C0(v2 + 1, v34);
      sub_233E40((__int64)v34);
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v15 = (unsigned int *)sub_186B300(v12 - 2, v14);
    v12 = v15 + 2;
    *v15 = v13;
    *(_QWORD *)(a1 + 40) = v15 + 2;
  }
  *(v12 - 1) = a2;
  memset(v12, 1, a2);
LABEL_17:
  if ( *(_DWORD *)(a1 + 60) || (result = *(unsigned int *)(a1 + 64), (_DWORD)result) )
  {
    v18 = *(unsigned int *)(a1 + 56);
    v19 = *(char **)(a1 + 48);
    v20 = 0;
    v21 = *(_DWORD *)(a1 + 56);
    result = (__int64)v19;
    v22 = &v19[16 * v18];
    if ( v19 == v22 )
      goto LABEL_35;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( v22 == (char *)result )
          goto LABEL_24;
      }
      result += 16;
      ++v20;
    }
    while ( v22 != (char *)result );
LABEL_24:
    if ( v21 <= 0x10 )
      goto LABEL_35;
    result = 3 * v21;
    if ( (unsigned int)result >= 4 * v20 )
      goto LABEL_35;
    if ( v19 )
    {
      v23 = v19;
      v24 = &v19[16 * v18];
      do
      {
        while ( 1 )
        {
          v25 = *((_QWORD *)v23 + 1);
          if ( !v25 )
            break;
          v23 += 16;
          sub_186B220((void *)(v25 - 8));
          if ( v24 == v23 )
            goto LABEL_30;
        }
        v23 += 16;
      }
      while ( v23 != v24 );
LABEL_30:
      sub_186B220(v19);
      v26 = *(_DWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      v26 >>= 1;
      *(_DWORD *)(a1 + 56) = v26;
      v27 = 16LL * v26;
      result = sub_186B270(v27);
      if ( !v26 )
        goto LABEL_34;
    }
    else
    {
      v33 = v21 >> 1;
      *(_QWORD *)(a1 + 48) = 0;
      *(_DWORD *)(a1 + 56) = v33;
      v27 = 16LL * v33;
      result = sub_186B270(v27);
    }
    v28 = (_OWORD *)(v27 + result);
    v29 = (_OWORD *)result;
    if ( (v27 & 0x10) == 0 || (v29 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, v28 != (_OWORD *)(result + 16)) )
    {
      do
      {
        *v29 = 0;
        v29 += 2;
        *(v29 - 1) = 0;
      }
      while ( v28 != v29 );
    }
LABEL_34:
    *(_QWORD *)(a1 + 48) = result;
LABEL_35:
    *(_QWORD *)(a1 + 60) = 0;
  }
  return result;
}

