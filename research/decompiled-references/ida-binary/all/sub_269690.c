__int64 __fastcall sub_269690(__int64 a1, __int64 a2, char a3)
{
  char v4; // r13
  unsigned __int8 v5; // al
  const char *v6; // rdi
  size_t v7; // rbp
  __int64 v8; // r14
  size_t v9; // r14
  const char *v10; // r15
  const char *v11; // rbp
  char *v12; // rax
  char *v13; // r12
  const char *v14; // rax
  size_t v15; // r12
  const char *v16; // r14
  __int64 v17; // rdx
  const char *v18; // rsi
  char *v19; // r13
  char v20; // r15
  size_t v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  size_t v24; // r9
  __int64 v25; // rbp
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  double v32; // xmm0_8
  __int64 v33; // rdi
  void *v35; // rdi
  __int64 v36; // rax
  void *v37; // rdi
  size_t v38; // rdx
  __int64 v39; // rax
  size_t v41; // [rsp+10h] [rbp-68h]
  size_t v42; // [rsp+10h] [rbp-68h]
  size_t v43; // [rsp+18h] [rbp-60h]
  __int64 v44; // [rsp+20h] [rbp-58h] BYREF
  __int128 v45; // [rsp+28h] [rbp-50h]
  unsigned __int64 v46; // [rsp+38h] [rbp-40h]

  v4 = *(_BYTE *)(a1 + 209);
  v46 = __readfsqword(0x28u);
  v5 = *(_BYTE *)(a1 + 208);
  if ( v4 && a3 )
  {
    if ( (unsigned __int8)(v5 - 3) <= 1u )
      return 0;
    v6 = "XXX";
    v7 = 3;
    if ( v5 > 3u )
    {
LABEL_8:
      v8 = *(_QWORD *)(a2 + 8);
      if ( v8 )
        goto LABEL_9;
      return 0;
    }
LABEL_5:
    v6 = "$DIS$";
    v7 = 5;
    if ( v5 != 1 )
    {
      v6 = "XXX";
      v7 = 3;
      if ( v5 == 2 )
      {
        v6 = "$DBG$";
        v7 = 5;
      }
    }
    goto LABEL_8;
  }
  if ( v5 == 3 )
  {
    v6 = "$MERGE$";
    v7 = 7;
    goto LABEL_8;
  }
  if ( v5 <= 3u )
    goto LABEL_5;
  if ( v5 != 4 )
  {
    v6 = "XXX";
    v7 = 3;
    goto LABEL_8;
  }
  v8 = *(_QWORD *)(a2 + 8);
  v6 = "$DIFF$";
  v7 = 6;
  if ( !v8 )
    return 0;
LABEL_9:
  v9 = v8 - 1;
  if ( v9 < v7 )
    return 0;
  v10 = *(const char **)a2;
  if ( strncmp(*(const char **)a2, v6, v7) )
    return 0;
  v11 = &v10[v7];
  v12 = strchr(v11, 36);
  v13 = v12;
  if ( !v12 || v11 == v12 || (v14 = v12 + 1, v14 == &v10[v9]) )
  {
    v15 = 0;
    v16 = nullptr;
  }
  else
  {
    v15 = v13 - v11;
    v16 = v11;
    v11 = v14;
  }
  if ( v4 && (!strcmp(v11, "Default") || !strcmp(v11, "Live")) )
    return 0;
  v17 = *(_QWORD *)(a1 + 192);
  v18 = *(const char **)(a1 + 184);
  if ( *(_QWORD *)(a1 + 200) < (unsigned __int64)(v17 + 1) )
  {
    v36 = qvector_reserve(a1 + 184, v18, v17 + 1, 56);
    v17 = *(_QWORD *)(a1 + 192);
    *(_QWORD *)(a1 + 184) = v36;
    v18 = (const char *)v36;
  }
  v19 = (char *)&v18[56 * v17];
  *(_QWORD *)v19 = 0;
  *((_QWORD *)v19 + 3) = 0;
  *((_QWORD *)v19 + 4) = 0;
  *(_OWORD *)(v19 + 8) = 0;
  *(_OWORD *)(v19 + 40) = 0;
  v20 = *(_BYTE *)(a1 + 208);
  ++*(_QWORD *)(a1 + 192);
  v21 = strlen(v11);
  v24 = v21;
  if ( v21 )
  {
    v37 = *(void **)v19;
    v38 = v21 + 1;
    if ( *((_QWORD *)v19 + 2) < v21 + 1 )
    {
      v42 = v21 + 1;
      v43 = v21;
      v39 = qvector_reserve(v19, *(_QWORD *)v19, v38, 1);
      v24 = v43;
      v38 = v42;
      *(_QWORD *)v19 = v39;
      v37 = (void *)v39;
    }
    *((_QWORD *)v19 + 1) = v38;
    v18 = v11;
    v41 = v24;
    memmove(v37, v11, v24);
    v24 = v41;
    *(_BYTE *)(*(_QWORD *)v19 + v41) = 0;
  }
  else
  {
    *((_QWORD *)v19 + 1) = 0;
  }
  v19[25] = v20;
  v19[24] = a3;
  if ( v16 )
  {
    v25 = 0;
    v26 = 0;
    v44 = 0;
    v45 = 0;
    if ( v15 )
    {
      v35 = nullptr;
      if ( v15 != -1 )
      {
        v44 = qvector_reserve(&v44, 0, v15 + 1, 1);
        v35 = (void *)v44;
      }
      v18 = v16;
      *(_QWORD *)&v45 = v15 + 1;
      memmove(v35, v16, v15);
      *(_BYTE *)(v44 + v15) = 0;
      v26 = v44;
      v25 = *((_QWORD *)&v45 + 1);
      v15 = v45;
    }
    v27 = *(_QWORD *)(a1 + 192);
    v44 = 0;
    v45 = 0;
    v28 = 7 * v27;
    v29 = *(_QWORD *)(a1 + 184);
    v30 = (_QWORD *)(v29 + 8 * v28 - 56);
    v31 = v30[4];
    if ( v31 )
    {
      v30[5] = 0;
      v32 = qfree(v31, v18, v29, v22, v23, v24);
      v33 = v44;
      v30[4] = v26;
      v30[5] = v15;
      v30[6] = v25;
      if ( v33 )
      {
        *(_QWORD *)&v45 = 0;
        qfree(v33, v18, v32);
      }
    }
    else
    {
      v30[4] = v26;
      v30[5] = v15;
      v30[6] = v25;
    }
  }
  return 1;
}
