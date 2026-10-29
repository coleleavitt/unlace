__int64 __fastcall sub_CAC160(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // r13
  __int16 v6; // dx
  _DWORD *v7; // rax
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 v10; // r12
  int v11; // r13d
  int v13; // eax
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // edx
  unsigned __int8 v17; // dl
  __int64 v18; // rax
  int v19; // r12d
  int v20; // r14d
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  _DWORD *v26; // rax
  unsigned __int8 v27; // dl
  __int64 v28; // rax
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rax
  int v33; // edx
  __int64 v34; // rax
  _QWORD *v35; // rax
  char **exception; // rbx
  __int64 v37; // [rsp+8h] [rbp-60h] BYREF
  __int64 v38[11]; // [rsp+10h] [rbp-58h] BYREF

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
          v13 = v7[1];
          if ( v13 == 2 || v13 == 3 )
            goto LABEL_21;
        }
        goto LABEL_5;
      }
      if ( v7[1] == 2 )
      {
        v26 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a2 + 32)) + 24);
        if ( v26 && *v26 == 5 && v26[1] == 1 )
        {
LABEL_21:
          sub_CAA050(*(__int64 **)(v8 + 8), a2, (__int64 *)(v8 + 16), 1, 0);
          v14 = *(_QWORD *)(v8 + 16);
          v38[0] = v14;
          if ( v14 )
          {
            ++*(_DWORD *)(v14 + 8);
            sub_C9F390(a1 + 7, v38);
            if ( a2 == v14 )
            {
LABEL_26:
              v38[0] = 0;
              sub_C9F250(a1 + 11, v38);
              return 1;
            }
          }
          else
          {
            sub_C9F390(a1 + 7, v38);
          }
          v15 = a1[5];
          if ( v15 )
          {
            v16 = *(_DWORD *)(v15 - 4);
            if ( v16 )
              *(_BYTE *)(v15 + 16LL * (unsigned int)(v16 - 1) + 8) |= 2u;
          }
          goto LABEL_26;
        }
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
    v38[0] = a2;
    *(_DWORD *)(a2 + 8) = v9 + 1;
    sub_C9F390(a1 + 7, v38);
    v38[0] = 0;
    sub_C9F250(a1 + 11, v38);
    return 1;
  }
  if ( v9 <= 1 || a2 == a1[15] )
    goto LABEL_12;
  if ( !v5 )
  {
    if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_10:
      v10 = a1[1];
      *(_DWORD *)(a2 + 8) += 2;
      v38[0] = a2;
      sub_C9F390(a1 + 7, v38);
      v37 = 0;
      sub_C9F250(a1 + 11, &v37);
      sub_C9E920(a2, v10);
      return 1;
    }
    goto LABEL_35;
  }
  if ( v5 != 2 )
  {
LABEL_12:
    v11 = 0;
    goto LABEL_13;
  }
LABEL_35:
  v24 = sub_1680FB0(a1[4], a2, 0);
  v25 = v24;
  if ( v24 )
  {
    v38[0] = v24;
    ++*(_DWORD *)(v24 + 8);
    sub_C9F390(a1 + 7, v38);
    if ( a2 != v25 )
    {
      v32 = a1[5];
      if ( v32 )
      {
        v33 = *(_DWORD *)(v32 - 4);
        if ( v33 )
          *(_BYTE *)(v32 + 16LL * (unsigned int)(v33 - 1) + 8) |= 2u;
      }
    }
    v34 = sub_1680FB0(a1[9], a2, 0);
    v38[0] = v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    sub_C9F250(a1 + 11, v38);
    return 1;
  }
  v6 = *(_WORD *)(a2 + 4);
  v11 = 1;
LABEL_13:
  if ( v6 == 1 )
  {
    sub_CA79A0(a1, a2);
    return 1;
  }
  if ( v6 != 2 )
  {
    if ( v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_10;
    v27 = 3;
    if ( a3 != 3 )
      v27 = (a3 - 1) & 3;
    v28 = a1[7];
    v19 = v27;
    if ( v28 )
      v20 = *(_DWORD *)(v28 - 4);
    else
      v20 = 0;
    v21 = (_QWORD *)a1[5];
    if ( v21 )
    {
      v22 = *((unsigned int *)v21 - 1);
      if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
      {
        v29 = (unsigned int)(3 * v22 + 1) >> 1;
        v30 = 16 * v29 + 8;
        if ( 16 * (int)v22 + 8 < (unsigned int)v30 && (unsigned int)v22 < v29 )
        {
LABEL_54:
          v31 = (unsigned int *)sub_186B300(v21 - 1, v30);
          v21 = v31 + 2;
          a1[5] = v31 + 2;
          *v31 = v29;
          v23 = (__int64)&v31[4 * v31[1] + 2];
          goto LABEL_34;
        }
LABEL_71:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C9E960(v38, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      goto LABEL_33;
    }
LABEL_67:
    v35 = (_QWORD *)sub_186B270(0x28u);
    v21 = v35 + 1;
    *v35 = 2;
    a1[5] = v35 + 1;
    v23 = (__int64)(v35 + 1);
    goto LABEL_34;
  }
  v17 = 3;
  if ( a3 != 3 )
    v17 = (a3 - 1) & 3;
  v18 = a1[7];
  v19 = v17;
  if ( v18 )
    v20 = *(_DWORD *)(v18 - 4);
  else
    v20 = 0;
  v21 = (_QWORD *)a1[5];
  if ( !v21 )
    goto LABEL_67;
  v22 = *((unsigned int *)v21 - 1);
  if ( (_DWORD)v22 == *((_DWORD *)v21 - 2) )
  {
    v29 = (unsigned int)(3 * v22 + 1) >> 1;
    v30 = 16 * v29 + 8;
    if ( 16 * (int)v22 + 8 < (unsigned int)v30 && (unsigned int)v22 < v29 )
      goto LABEL_54;
    goto LABEL_71;
  }
LABEL_33:
  v23 = (__int64)&v21[2 * v22];
LABEL_34:
  *(_QWORD *)v23 = a2;
  *(_DWORD *)(v23 + 12) = v20;
  *(_DWORD *)(v23 + 8) = v11 | (16 * v19);
  ++*((_DWORD *)v21 - 1);
  return 0;
}

