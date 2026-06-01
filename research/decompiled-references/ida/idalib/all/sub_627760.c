unsigned __int64 __fastcall sub_627760(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // r15
  __int64 v13; // rcx
  const char *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  const char *v17; // rdi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // r12
  void *v22; // rcx
  unsigned __int64 v23; // r13
  __int64 v24; // rax
  const char *v25; // rsi
  const char *v27; // rdi
  size_t v28; // r8
  __int64 v29; // rbp
  char v30; // al
  __int64 v31; // r8
  int v32; // eax
  unsigned __int64 v33; // r12
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // rbp
  __int64 v37; // rax
  unsigned __int64 v38; // rbx
  const void *v39; // r15
  void *v40; // rax
  void *v41; // rax
  const void *v42; // r15
  int v43; // [rsp+0h] [rbp-68h]
  __int64 v44; // [rsp+8h] [rbp-60h]
  __int64 v45; // [rsp+10h] [rbp-58h] BYREF
  __int64 v46; // [rsp+18h] [rbp-50h] BYREF
  __int64 v47; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v48; // [rsp+28h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a1 + 56);
  if ( !v3 )
    goto LABEL_57;
  v7 = (_QWORD *)(a1 + 48);
  do
  {
    while ( 1 )
    {
      v8 = v3[2];
      v9 = v3[3];
      if ( v3[4] < a3 )
        break;
      v7 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v8 )
        goto LABEL_6;
    }
    v3 = (_QWORD *)v3[3];
  }
  while ( v9 );
LABEL_6:
  if ( (_QWORD *)(a1 + 48) == v7 || a3 < v7[4] )
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
      v13 = v10[2];
      v9 = v10[3];
      if ( v10[4] < a3 )
        break;
      v12 = v10;
      v10 = (_QWORD *)v10[2];
      if ( !v13 )
        goto LABEL_13;
    }
    v10 = (_QWORD *)v10[3];
  }
  while ( v9 );
LABEL_13:
  if ( (_QWORD *)v11 == v12 || a3 < v12[4] )
LABEL_15:
    sub_622410(a1, v11, v9);
  v14 = haystack;
  v15 = switch_dbctx(*(int *)(a1 + 8));
  v16 = *(_QWORD *)(a2 + 88) + 24LL * *((unsigned int *)v12 + 18);
  if ( *(_QWORD *)(v16 + 8) )
    v14 = *(const char **)v16;
  v17 = haystack;
  v18 = *(_QWORD *)(a1 + 88) + 24LL * *((unsigned int *)v7 + 18);
  if ( *(_QWORD *)(v18 + 8) )
    v17 = *(const char **)v18;
  v43 = *((_DWORD *)v7 + 18);
  v19 = strcasecmp(v17, v14);
  v20 = *(_QWORD *)(v15 + 1672) + 2328LL;
  if ( !v19 )
  {
    v21 = -1;
    if ( (unsigned __int8)sub_7BEFD0(v20, v15, &v47, v43, 65) )
      v21 = v47;
    v22 = (void *)v12[5];
    if ( (void *)v7[5] == v22 )
    {
      v23 = v12[7];
      v24 = v7[7];
      if ( !v23 )
        goto LABEL_25;
    }
    else
    {
      v7[5] = v22;
      sub_623C90(v15, v21, a3, v22);
      v23 = v12[7];
      v24 = v7[7];
      if ( !v23 )
      {
LABEL_25:
        v25 = haystack;
        if ( !v24 )
          return v48 - __readfsqword(0x28u);
LABEL_37:
        v27 = (const char *)v7[6];
LABEL_28:
        if ( strcmp(v27, v25) )
        {
          if ( v7 + 6 != v12 + 6 )
          {
            if ( v23 && (v28 = v23 - 1, v23 != 1) )
            {
              v41 = (void *)v7[6];
              v42 = (const void *)v12[6];
              if ( v7[8] < v23 )
              {
                v41 = (void *)qvector_reserve(v7 + 6, v7[6], v23, 1);
                v28 = v23 - 1;
                v7[6] = v41;
              }
              v7[7] = v23;
              memmove(v41, v42, v28);
              *(_BYTE *)(v7[6] + v23 - 1) = 0;
            }
            else
            {
              v7[7] = 0;
            }
          }
          v29 = v7[6];
          v47 = v21;
          sub_622EE0((_QWORD *)(*(_QWORD *)(v15 + 1672) + 2336LL), a3);
          if ( v29 )
            sub_7BE7C0(&v47, v15, a3, v29, 0, 339);
          else
            sub_7BE850(&v47, v15, a3, 339);
        }
        return v48 - __readfsqword(0x28u);
      }
    }
    v25 = (const char *)v12[6];
    v27 = haystack;
    if ( !v24 )
      goto LABEL_28;
    goto LABEL_37;
  }
  v30 = sub_7BEFD0(v20, v15, &v47, v43, 65);
  v31 = -1;
  if ( v30 )
    v31 = v47;
  if ( v7[6] )
  {
    v47 = v31;
    v44 = v31;
    sub_622EE0((_QWORD *)(*(_QWORD *)(v15 + 1672) + 2336LL), a3);
    sub_7BE850(&v47, v15, a3, 339);
    v31 = v44;
  }
  if ( v7[5] != -1 )
    sub_623C90(v15, v31, a3, (void *)0xFFFFFFFFFFFFFFFFLL);
  v32 = sub_627240(*(_QWORD *)(a1 + 112), a1, *((_DWORD *)v12 + 18), a2);
  *((_DWORD *)v7 + 18) = v32;
  v7[5] = v12[5];
  if ( v7 + 6 != v12 + 6 )
  {
    v33 = v12[7];
    if ( v33 > 1 )
    {
      v39 = (const void *)v12[6];
      v40 = (void *)v7[6];
      if ( v7[8] < v33 )
      {
        v40 = (void *)qvector_reserve(v7 + 6, v7[6], v33, 1);
        v7[6] = v40;
      }
      v7[7] = v33;
      memmove(v40, v39, v33 - 1);
      *(_BYTE *)(v7[6] + v33 - 1) = 0;
      v32 = *((_DWORD *)v7 + 18);
    }
    else
    {
      v7[7] = 0;
    }
  }
  v34 = -1;
  if ( (unsigned __int8)sub_7BEFD0(*(_QWORD *)(v15 + 1672) + 2328LL, v15, &v47, v32, 65) )
    v34 = v47;
  v35 = v7[6];
  if ( v35 )
  {
    v47 = v34;
    sub_622EE0((_QWORD *)(*(_QWORD *)(v15 + 1672) + 2336LL), a3);
    sub_7BE7C0(&v47, v15, a3, v35, 0, 339);
  }
  v36 = v7[5];
  if ( v36 != -1 )
  {
    v37 = *(_QWORD *)(v15 + 1672);
    v45 = v34;
    sub_622EE0((_QWORD *)(v37 + 2336), a3);
    v38 = sub_3BDD60(*(_QWORD **)(v15 + 1672), a3);
    if ( (unsigned __int8)sub_7BEFD0(&v45, v15, &v46, v36, 65) )
    {
      if ( v38 != v46 )
      {
        v47 = v36;
        sub_7BE7C0(&v45, v15, v38, &v47, 8, 79);
      }
    }
    else
    {
      v47 = v38;
      sub_7BE7C0(&v45, v15, v36, &v47, 8, 65);
    }
  }
  return v48 - __readfsqword(0x28u);
}
