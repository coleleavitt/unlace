__int64 __fastcall sub_B0CA60(__int64 a1)
{
  char **exception; // rbx
  __int64 i; // rax
  int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // ecx
  __int64 result; // rax
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  unsigned int v14; // r12d
  __int64 v15; // r9
  unsigned int v16; // r10d
  __int64 v17; // rdx
  unsigned int v18; // r11d
  _BYTE *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // r13d
  size_t v25; // rsi
  unsigned int *v26; // rax
  char *v27; // rdi
  char *v28; // rdx
  __int64 v29; // [rsp+0h] [rbp-78h]
  unsigned int v30; // [rsp+8h] [rbp-70h]
  __int64 v31; // [rsp+8h] [rbp-70h]
  __int64 v32; // [rsp+8h] [rbp-70h]
  __int64 v33; // [rsp+10h] [rbp-68h]
  unsigned int v34; // [rsp+1Ch] [rbp-5Ch]
  __int64 v35[11]; // [rsp+20h] [rbp-58h] BYREF

  for ( i = *(_QWORD *)(a1 + 896); i; i = *(_QWORD *)(a1 + 896) )
  {
    v4 = *(_DWORD *)(i - 4);
    if ( !v4 )
      break;
    v5 = v4 - 1;
    v6 = *(_DWORD *)(i + 4LL * v5);
    *(_DWORD *)(i - 4) = v5;
    *(_BYTE *)(*(_QWORD *)(a1 + 888) + v6) = 0;
  }
  result = *(_QWORD *)(a1 + 864);
  if ( !result )
    return result;
  v8 = *(_DWORD *)(result - 4);
  if ( !v8 )
    goto LABEL_28;
  v9 = v8;
  v10 = 0;
  v8 = 0;
  v29 = v9;
  do
  {
    while ( 1 )
    {
      v13 = *(_DWORD **)(a1 + 888);
      v14 = *(_DWORD *)(result + 4 * v10);
      v15 = 4 * v10;
      if ( !v13 )
        break;
      v16 = *(v13 - 1);
      if ( v14 >= v16 )
        break;
      v11 = v14;
      if ( !*((_BYTE *)v13 + v14) )
      {
        v12 = *(_QWORD *)(a1 + 856);
        if ( v12 )
        {
          if ( v14 < *(_DWORD *)(v12 - 4) && *(_DWORD *)(v12 + 4LL * v14) )
          {
            v18 = v14 + 1;
LABEL_19:
            if ( v16 >= v18 )
              goto LABEL_20;
            v23 = *(v13 - 2);
            if ( v23 >= v18 )
            {
              *(v13 - 1) = v18;
              v27 = (char *)v13 + v16;
              v28 = (char *)v13 + v18;
LABEL_35:
              v31 = v15;
              memset(v27, 0, v28 - v27);
              v13 = *(_DWORD **)(a1 + 888);
              v15 = v31;
              goto LABEL_20;
            }
            goto LABEL_31;
          }
        }
      }
LABEL_11:
      if ( v29 == ++v10 )
        goto LABEL_27;
    }
    v17 = *(_QWORD *)(a1 + 856);
    if ( !v17 )
      goto LABEL_11;
    if ( v14 >= *(_DWORD *)(v17 - 4) )
      goto LABEL_11;
    v11 = v14;
    if ( !*(_DWORD *)(v17 + 4LL * v14) )
      goto LABEL_11;
    v18 = v14 + 1;
    if ( v13 )
    {
      v16 = *(v13 - 1);
      goto LABEL_19;
    }
    v22 = sub_186B270(0xAu);
    v18 = v14 + 1;
    v23 = 2;
    v16 = 0;
    v13 = (_DWORD *)(v22 + 8);
    *(_QWORD *)v22 = 2;
    v15 = 4 * v10;
    *(_QWORD *)(a1 + 888) = v22 + 8;
    if ( v14 + 1 <= 2 )
    {
      *(_DWORD *)(v22 + 4) = v18;
      v27 = (char *)(v22 + 8);
      v28 = (char *)v13 + v18;
      goto LABEL_35;
    }
    do
    {
LABEL_31:
      v24 = (3 * v23 + 1) >> 1;
      v25 = v24 + 8;
      if ( v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B035D0(v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = v16;
      v33 = v15;
      v30 = v18;
      v26 = (unsigned int *)sub_186B300(v13 - 2, v25);
      v18 = v30;
      v15 = v33;
      v23 = v24;
      v13 = v26 + 2;
      *v26 = v24;
      v16 = v34;
      *(_QWORD *)(a1 + 888) = v26 + 2;
    }
    while ( v24 < v30 );
    v26[1] = v30;
    v27 = (char *)v13 + v34;
    v28 = (char *)v13 + v30;
    if ( v34 != v30 )
      goto LABEL_35;
LABEL_20:
    v19 = (char *)v13 + v11;
    if ( !*v19 )
    {
      *v19 = 1;
      v20 = *(_QWORD *)(a1 + 896);
      if ( !v20 || (v21 = *(unsigned int *)(v20 - 4), (_DWORD)v21 == *(_DWORD *)(v20 - 8)) )
      {
        v32 = v15;
        sub_2FD3F0((unsigned int **)(a1 + 896));
        v20 = *(_QWORD *)(a1 + 896);
        v15 = v32;
        v21 = *(unsigned int *)(v20 - 4);
      }
      *(_DWORD *)(v20 + 4 * v21) = v14;
      ++*(_DWORD *)(v20 - 4);
    }
    result = *(_QWORD *)(a1 + 864);
    if ( v8 != (_DWORD)v10 )
      *(_DWORD *)(result + 4LL * v8) = *(_DWORD *)(result + v15);
    ++v8;
    ++v10;
  }
  while ( v29 != v10 );
LABEL_27:
  if ( result )
LABEL_28:
    *(_DWORD *)(result - 4) = v8;
  return result;
}

