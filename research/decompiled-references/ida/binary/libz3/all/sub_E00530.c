__int64 __fastcall sub_E00530(__int64 a1)
{
  char **exception; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  _DWORD *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r12
  _DWORD *v9; // rax
  __int64 v10; // rsi
  void *v11; // rdi
  _DWORD *v12; // rdx
  int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rbp
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 result; // rax
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  _QWORD *v23; // rcx
  unsigned int v24; // r15d
  unsigned int v25; // ecx
  unsigned int *v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // esi
  _QWORD *v29; // rdx
  __int64 v30[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = *(_DWORD **)(a1 + 672);
  v4 = v3;
  v5 = &v3[6 * *(unsigned int *)(a1 + 680)];
  if ( v3 == v5 )
  {
    if ( *(_DWORD *)(a1 + 684) )
      goto LABEL_30;
  }
  else
  {
    while ( v4[1] != 2 )
    {
      v4 += 6;
      if ( v5 == v4 )
        goto LABEL_43;
    }
    if ( v5 == v4 )
    {
LABEL_43:
      if ( !*(_DWORD *)(a1 + 684) )
        goto LABEL_17;
      v11 = *(void **)(a1 + 672);
      v10 = *(unsigned int *)(a1 + 680);
      v12 = &v3[6 * v10];
      goto LABEL_19;
    }
    do
    {
      v6 = *(_QWORD *)(a1 + 312);
      v7 = *((_QWORD *)v4 + 2);
      if ( !v6 )
      {
        sub_DFBCB0(a1);
        v6 = *(_QWORD *)(a1 + 312);
      }
      if ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 16))-- == 1 )
        {
          v19 = *(_QWORD **)(v6 + 80);
          if ( v19 )
          {
            v20 = *((_DWORD *)v19 - 1);
            if ( v20 == *((_DWORD *)v19 - 2) )
            {
              v24 = (3 * v20 + 1) >> 1;
              v25 = 8 * v24 + 8;
              if ( 8 * v20 + 8 >= v25 || v20 >= v24 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_DF63A0(v30, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v30);
                sub_233E40((__int64)v30);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v26 = (unsigned int *)sub_186B300(v19 - 1, v25);
              v27 = v26[1];
              v19 = v26 + 2;
              *(_QWORD *)(v6 + 80) = v26 + 2;
              *v26 = v24;
              LODWORD(v26) = v27;
              v23 = &v19[v27];
              v22 = (_DWORD)v26 + 1;
            }
            else
            {
              v21 = v20;
              v22 = v20 + 1;
              v23 = &v19[v21];
            }
          }
          else
          {
            v29 = (_QWORD *)sub_186B270(0x18u);
            *v29 = 2;
            v22 = 1;
            v19 = v29 + 1;
            *(_QWORD *)(v6 + 80) = v19;
            v23 = v19;
          }
          *v23 = v7;
          *((_DWORD *)v19 - 1) = v22;
        }
        sub_DE3700(v6);
      }
      v9 = v4 + 6;
      if ( v5 == v4 + 6 )
        break;
      while ( 1 )
      {
        v4 = v9;
        if ( v9[1] == 2 )
          break;
        v9 += 6;
        if ( v5 == v9 )
          goto LABEL_16;
      }
    }
    while ( v9 != v5 );
LABEL_16:
    if ( *(_DWORD *)(a1 + 684) )
      goto LABEL_18;
  }
LABEL_17:
  if ( !*(_DWORD *)(a1 + 688) )
    goto LABEL_31;
LABEL_18:
  v3 = *(_DWORD **)(a1 + 672);
  v10 = *(unsigned int *)(a1 + 680);
  v11 = v3;
  v12 = &v3[6 * v10];
  if ( v3 != v12 )
  {
LABEL_19:
    v13 = 0;
    do
    {
      while ( v3[1] )
      {
        v3[1] = 0;
        v3 += 6;
        if ( v3 == v12 )
          goto LABEL_23;
      }
      v3 += 6;
      ++v13;
    }
    while ( v3 != v12 );
LABEL_23:
    if ( (unsigned int)v10 <= 0x10 || 3 * (int)v10 >= (unsigned int)(4 * v13) )
      goto LABEL_30;
    if ( v11 )
    {
      sub_186B220(v11);
      v14 = *(_DWORD *)(a1 + 680);
      *(_QWORD *)(a1 + 672) = 0;
      v14 >>= 1;
      *(_DWORD *)(a1 + 680) = v14;
      v15 = v14;
      v16 = sub_186B270(24LL * v14);
      if ( !v14 )
      {
LABEL_29:
        *(_QWORD *)(a1 + 672) = v16;
        goto LABEL_30;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 672) = 0;
      v28 = (unsigned int)v10 >> 1;
      v15 = v28;
      *(_DWORD *)(a1 + 680) = v28;
      v16 = sub_186B270(24LL * v28);
    }
    v17 = (_QWORD *)v16;
    do
    {
      *v17 = 0;
      v17 += 3;
      *(v17 - 2) = 0;
    }
    while ( (_QWORD *)(v16 + 24 * v15) != v17 );
    goto LABEL_29;
  }
LABEL_30:
  *(_QWORD *)(a1 + 684) = 0;
LABEL_31:
  result = *(_QWORD *)(a1 + 728);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

