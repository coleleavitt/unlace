__int64 __fastcall sub_CAE280(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // r13
  __int16 v6; // dx
  _DWORD *v7; // rax
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r13
  int v12; // r13d
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rax
  int v17; // edx
  unsigned __int8 v18; // dl
  __int64 v19; // rax
  int v20; // r12d
  int v21; // r14d
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v25; // rax
  unsigned __int8 v26; // dl
  __int64 v27; // rax
  unsigned int v28; // r15d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // r12
  _QWORD *v32; // rax
  char **exception; // rbp
  __int64 v34[11]; // [rsp+0h] [rbp-58h] BYREF

  v5 = *(_WORD *)(a2 + 4);
  v6 = v5;
  if ( !v5 )
  {
    v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v7 )
    {
      v8 = a1[18];
      if ( *v7 )
      {
LABEL_4:
        if ( *v7 == 5 )
        {
          v14 = v7[1];
          if ( v14 == 2 || v14 == 3 )
          {
LABEL_22:
            sub_CAA050(*(__int64 **)(v8 + 8), a2, (__int64 *)(v8 + 16), 1, 0);
            v15 = *(_QWORD *)(v8 + 16);
            v34[0] = v15;
            if ( !v15 )
            {
              sub_C9F390(a1 + 7, v34);
              goto LABEL_24;
            }
            ++*(_DWORD *)(v15 + 8);
            sub_C9F390(a1 + 7, v34);
            if ( a2 != v15 )
            {
LABEL_24:
              v16 = a1[5];
              if ( v16 )
              {
                v17 = *(_DWORD *)(v16 - 4);
                if ( v17 )
                  *(_BYTE *)(v16 + 16LL * (unsigned int)(v17 - 1) + 8) |= 2u;
              }
            }
            return 1;
          }
        }
        goto LABEL_5;
      }
      if ( v7[1] == 2 )
      {
        v25 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a2 + 32)) + 24);
        if ( v25 && *v25 == 5 && v25[1] == 1 )
          goto LABEL_22;
        v6 = *(_WORD *)(a2 + 4);
        if ( v6 )
        {
          v5 = *(_WORD *)(a2 + 4);
        }
        else
        {
          v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
          if ( v7 )
            goto LABEL_4;
        }
      }
    }
  }
LABEL_5:
  v9 = *(_DWORD *)(a2 + 8);
  if ( !a3 )
  {
    v34[0] = a2;
    *(_DWORD *)(a2 + 8) = v9 + 1;
    sub_C9F390(a1 + 7, v34);
    return 1;
  }
  if ( v9 <= 1 || a2 == a1[15] )
    goto LABEL_13;
  if ( !v5 )
  {
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_53;
    goto LABEL_10;
  }
  if ( v5 != 2 )
  {
LABEL_13:
    v12 = 0;
    goto LABEL_14;
  }
LABEL_10:
  v10 = sub_1680FB0(a1[4], a2, 0);
  v11 = v10;
  if ( v10 )
  {
    v34[0] = v10;
    ++*(_DWORD *)(v10 + 8);
    sub_C9F390(a1 + 7, v34);
    if ( a2 != v11 )
      goto LABEL_24;
    return 1;
  }
  v6 = *(_WORD *)(a2 + 4);
  v12 = 1;
LABEL_14:
  if ( v6 == 1 )
  {
    sub_CA7C50(a1, a2);
    return 1;
  }
  if ( v6 != 2 )
  {
    if ( v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
    if ( *(_DWORD *)(a2 + 24) )
    {
      v26 = 3;
      if ( a3 != 3 )
        v26 = (a3 - 1) & 3;
      v27 = a1[7];
      v20 = v26;
      if ( v27 )
        v21 = *(_DWORD *)(v27 - 4);
      else
        v21 = 0;
      v22 = (_QWORD *)a1[5];
      if ( v22 )
      {
        v23 = *((unsigned int *)v22 - 1);
        if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
        {
          v28 = (unsigned int)(3 * v23 + 1) >> 1;
          v29 = 16 * v28 + 8;
          if ( 16 * (int)v23 + 8 < (unsigned int)v29 && (unsigned int)v23 < v28 )
          {
LABEL_52:
            v30 = (unsigned int *)sub_186B300(v22 - 1, v29);
            v22 = v30 + 2;
            a1[5] = v30 + 2;
            *v30 = v28;
            v24 = (__int64)&v30[4 * v30[1] + 2];
            goto LABEL_34;
          }
LABEL_65:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C9E960(v34, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v34);
          sub_233E40((__int64)v34);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_33;
      }
LABEL_61:
      v32 = (_QWORD *)sub_186B270(0x28u);
      v22 = v32 + 1;
      *v32 = 2;
      a1[5] = v32 + 1;
      v24 = (__int64)(v32 + 1);
      goto LABEL_34;
    }
LABEL_53:
    v31 = a1[1];
    *(_DWORD *)(a2 + 8) += 2;
    v34[0] = a2;
    sub_C9F390(a1 + 7, v34);
    sub_C9E920(a2, v31);
    return 1;
  }
  v18 = 3;
  if ( a3 != 3 )
    v18 = (a3 - 1) & 3;
  v19 = a1[7];
  v20 = v18;
  if ( v19 )
    v21 = *(_DWORD *)(v19 - 4);
  else
    v21 = 0;
  v22 = (_QWORD *)a1[5];
  if ( !v22 )
    goto LABEL_61;
  v23 = *((unsigned int *)v22 - 1);
  if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
  {
    v28 = (unsigned int)(3 * v23 + 1) >> 1;
    v29 = 16 * v28 + 8;
    if ( 16 * (int)v23 + 8 < (unsigned int)v29 && (unsigned int)v23 < v28 )
      goto LABEL_52;
    goto LABEL_65;
  }
LABEL_33:
  v24 = (__int64)&v22[2 * v23];
LABEL_34:
  *(_QWORD *)v24 = a2;
  *(_DWORD *)(v24 + 12) = v21;
  *(_DWORD *)(v24 + 8) = v12 | (16 * v20);
  ++*((_DWORD *)v22 - 1);
  return 0;
}

