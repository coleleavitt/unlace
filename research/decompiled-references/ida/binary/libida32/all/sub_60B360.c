unsigned __int64 __fastcall sub_60B360(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdi
  _QWORD *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rbp
  const char *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  const char *v16; // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdi
  int v20; // ebx
  unsigned int v21; // ecx
  unsigned __int64 v22; // r13
  __int64 v23; // rax
  const char *v24; // rsi
  const char *v26; // rdi
  size_t v27; // r8
  __int64 v28; // r12
  char v29; // al
  int v30; // r8d
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  int v34; // r13d
  __int64 v35; // rbx
  unsigned int v36; // ebx
  unsigned int v37; // ebp
  const void *v38; // rbp
  void *v39; // rax
  void *v40; // rax
  const void *v41; // rbp
  unsigned int v43; // [rsp+8h] [rbp-60h]
  int v44; // [rsp+8h] [rbp-60h]
  int v45; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v46; // [rsp+20h] [rbp-48h] BYREF
  int v47; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v4 = *(_QWORD **)(a1 + 56);
  if ( !v4 )
    goto LABEL_57;
  v5 = a1 + 48;
  v7 = (_QWORD *)v5;
  do
  {
    while ( 1 )
    {
      v8 = v4[2];
      v9 = v4[3];
      if ( v4[4] < (unsigned __int64)a3 )
        break;
      v7 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v8 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v9 );
LABEL_6:
  if ( (_QWORD *)v5 == v7 || (unsigned __int64)a3 < v7[4] )
  {
LABEL_57:
    if ( !under_debugger )
      interr(2452);
    BUG();
  }
  v10 = *(_QWORD **)(a2 + 56);
  v11 = a2 + 48;
  v12 = (_QWORD *)(a2 + 48);
  if ( !v10 )
    goto LABEL_15;
  do
  {
    while ( 1 )
    {
      v8 = v10[2];
      v9 = v10[3];
      if ( v10[4] < (unsigned __int64)a3 )
        break;
      v12 = v10;
      v10 = (_QWORD *)v10[2];
      if ( !v8 )
        goto LABEL_13;
    }
    v10 = (_QWORD *)v10[3];
  }
  while ( v9 );
LABEL_13:
  if ( (_QWORD *)v11 == v12 || (unsigned __int64)a3 < v12[4] )
LABEL_15:
    sub_606130(v11, v8, a3, v9);
  v13 = haystack;
  v14 = switch_dbctx(*(int *)(a1 + 8));
  v15 = *(_QWORD *)(a2 + 88) + 24LL * *((unsigned int *)v12 + 18);
  if ( *(_QWORD *)(v15 + 8) )
    v13 = *(const char **)v15;
  v16 = haystack;
  v17 = *(_QWORD *)(a1 + 88) + 24LL * *((unsigned int *)v7 + 18);
  if ( *(_QWORD *)(v17 + 8) )
    v16 = *(const char **)v17;
  v43 = *((_DWORD *)v7 + 18);
  v18 = strcasecmp(v16, v13);
  v19 = *(_QWORD *)(v14 + 1480) + 2240LL;
  if ( !v18 )
  {
    v20 = -1;
    if ( (unsigned __int8)sub_79BBD0(v19, v14, &v47, v43, 65) )
      v20 = v47;
    v21 = *((_DWORD *)v12 + 10);
    if ( *((_DWORD *)v7 + 10) == v21 )
    {
      v22 = v12[7];
      v23 = v7[7];
      if ( !v22 )
        goto LABEL_25;
    }
    else
    {
      *((_DWORD *)v7 + 10) = v21;
      sub_607990(v14, v20, a3, v21);
      v22 = v12[7];
      v23 = v7[7];
      if ( !v22 )
      {
LABEL_25:
        v24 = haystack;
        if ( !v23 )
          return v48 - __readfsqword(0x28u);
LABEL_37:
        v26 = (const char *)v7[6];
LABEL_28:
        if ( strcmp(v26, v24) )
        {
          if ( v7 + 6 != v12 + 6 )
          {
            if ( v22 && (v27 = v22 - 1, v22 != 1) )
            {
              v40 = (void *)v7[6];
              v41 = (const void *)v12[6];
              if ( v7[8] < v22 )
              {
                v40 = (void *)qvector_reserve(v7 + 6, v7[6], v22, 1);
                v27 = v22 - 1;
                v7[6] = v40;
              }
              v7[7] = v22;
              memmove(v40, v41, v27);
              *(_BYTE *)(v7[6] + v22 - 1) = 0;
            }
            else
            {
              v7[7] = 0;
            }
          }
          v28 = v7[6];
          v47 = v20;
          sub_606C20((_QWORD *)(*(_QWORD *)(v14 + 1480) + 2248LL), a3);
          if ( v28 )
            sub_79B440(&v47, v14, a3, v28, 0, 339);
          else
            sub_79B4D0(&v47, v14, a3, 339);
        }
        return v48 - __readfsqword(0x28u);
      }
    }
    v24 = (const char *)v12[6];
    v26 = haystack;
    if ( !v23 )
      goto LABEL_28;
    goto LABEL_37;
  }
  v29 = sub_79BBD0(v19, v14, &v47, v43, 65);
  v30 = -1;
  if ( v29 )
    v30 = v47;
  if ( v7[6] )
  {
    v47 = v30;
    v44 = v30;
    sub_606C20((_QWORD *)(*(_QWORD *)(v14 + 1480) + 2248LL), a3);
    sub_79B4D0(&v47, v14, a3, 339);
    v30 = v44;
  }
  if ( *((_DWORD *)v7 + 10) != -1 )
    sub_607990(v14, v30, a3, 0xFFFFFFFF);
  v31 = sub_60AE40(*(_QWORD *)(a1 + 112), a1, *((_DWORD *)v12 + 18), a2);
  *((_DWORD *)v7 + 18) = v31;
  v32 = v31;
  *((_DWORD *)v7 + 10) = *((_DWORD *)v12 + 10);
  if ( v7 + 6 != v12 + 6 )
  {
    v33 = v12[7];
    if ( v33 > 1 )
    {
      v38 = (const void *)v12[6];
      v39 = (void *)v7[6];
      if ( v7[8] < v33 )
      {
        v39 = (void *)qvector_reserve(v7 + 6, v7[6], v33, 1);
        v7[6] = v39;
      }
      v7[7] = v33;
      memmove(v39, v38, v33 - 1);
      *(_BYTE *)(v7[6] + v33 - 1) = 0;
      v32 = *((unsigned int *)v7 + 18);
    }
    else
    {
      v7[7] = 0;
    }
  }
  v34 = -1;
  if ( (unsigned __int8)sub_79BBD0(*(_QWORD *)(v14 + 1480) + 2240LL, v14, &v47, v32, 65) )
    v34 = v47;
  v35 = v7[6];
  if ( v35 )
  {
    v47 = v34;
    sub_606C20((_QWORD *)(*(_QWORD *)(v14 + 1480) + 2248LL), a3);
    sub_79B440(&v47, v14, a3, v35, 0, 339);
  }
  v36 = *((_DWORD *)v7 + 10);
  if ( v36 != -1 )
  {
    v45 = v34;
    sub_606C20((_QWORD *)(*(_QWORD *)(v14 + 1480) + 2248LL), a3);
    v37 = sub_3B90A0(*(_QWORD **)(v14 + 1480), a3);
    if ( (unsigned __int8)sub_79BBD0(&v45, v14, &v46, v36, 65) )
    {
      if ( v37 != v46 )
      {
        v47 = v36;
        sub_79B440(&v45, v14, v37, &v47, 4, 79);
      }
    }
    else
    {
      v47 = v37;
      sub_79B440(&v45, v14, v36, &v47, 4, 65);
    }
  }
  return v48 - __readfsqword(0x28u);
}

