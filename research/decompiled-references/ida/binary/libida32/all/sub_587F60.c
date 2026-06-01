__int64 __fastcall sub_587F60(__int64 *a1, int a2, unsigned int a3)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rbp
  __int64 i; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  size_t v17; // r10
  __int64 v18; // r9
  void *v19; // r11
  __int64 v20; // rsi
  char v21; // r15
  unsigned int v22; // ebx
  char **v24; // rax
  char *v25; // rdi
  char *v26; // rbp
  void **v27; // r14
  void *v28; // rdi
  __int64 v29; // r15
  char *v30; // r12
  __int64 v31; // rdi
  _QWORD *v32; // r14
  void *v33; // rdi
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r9
  size_t v38; // r10
  unsigned __int64 v39; // r11
  __int64 v40; // rsi
  __int64 v41; // rbx
  unsigned __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  char *j; // [rsp+8h] [rbp-60h]
  char *v48; // [rsp+10h] [rbp-58h]
  size_t v49; // [rsp+10h] [rbp-58h]
  unsigned __int64 v50; // [rsp+10h] [rbp-58h]
  unsigned __int64 v51; // [rsp+10h] [rbp-58h]
  __int64 v52; // [rsp+18h] [rbp-50h]
  __int64 v53; // [rsp+18h] [rbp-50h]
  __int64 v54; // [rsp+18h] [rbp-50h]
  size_t v55; // [rsp+18h] [rbp-50h]
  char **ptr; // [rsp+20h] [rbp-48h]
  void *ptra; // [rsp+20h] [rbp-48h]
  void *ptrb; // [rsp+20h] [rbp-48h]
  char *v59; // [rsp+28h] [rbp-40h]
  unsigned __int64 v60; // [rsp+28h] [rbp-40h]

  v6 = a1[1];
  if ( !v6 )
  {
    v9 = *a1;
    v7 = 2;
    v8 = 1;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
LABEL_50:
    v35 = qvector_reserve(a1, v9, v7, 1);
    *a1 = v35;
    v9 = v35;
    goto LABEL_3;
  }
  v7 = v6 + 1;
  v8 = a1[1];
  v9 = *a1;
  --v6;
  if ( a1[2] < v7 )
    goto LABEL_50;
LABEL_3:
  a1[1] = v7;
  *(_BYTE *)(v9 + v8) = 0;
  *(_BYTE *)(*a1 + v6) = 123;
  if ( (a2 & 0x80) == 0 || (unsigned __int8)sub_587E70(a1, 32, a3) )
  {
    v10 = (__int64 *)a1[4];
    v11 = *v10;
    for ( i = *v10; ; i = *v10 )
    {
      if ( v11 == i + 56 * v10[1] )
      {
LABEL_26:
        if ( (a2 & 0x80) == 0 )
          goto LABEL_27;
        goto LABEL_59;
      }
      v21 = 1;
      if ( v11 != i )
      {
        v21 = sub_587E70(a1, 44, a3);
        if ( (a2 & 0x80) != 0 )
          v21 = sub_587E70(a1, 32, a3);
      }
      if ( (a2 & 0x100) != 0 )
      {
        v13 = *(_QWORD *)(v11 + 40);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 24);
          if ( v14 > 1 )
            break;
        }
      }
LABEL_8:
      v15 = *(_QWORD *)(v11 + 32);
      if ( v15 )
      {
        if ( *(_QWORD *)(v15 + 8) )
        {
          if ( (*(_BYTE *)(v11 + 48) & 1) == 0 )
          {
            v22 = sub_587F60(v11, (unsigned int)a2, a3);
            if ( !(_BYTE)v22 )
              return v22;
          }
        }
      }
      v16 = *(_QWORD *)(v11 + 8);
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v16 != 1 )
        {
          v18 = a1[1];
          v19 = (void *)(v16 - 1);
          if ( v18 )
          {
            --v18;
            v19 = (void *)(v17 + v18);
            v16 += v18;
          }
          v20 = *a1;
          if ( a1[2] < v16 )
          {
            ptra = v19;
            v53 = v18;
            v49 = v17;
            v36 = qvector_reserve(a1, v20, v16, 1);
            v19 = ptra;
            v18 = v53;
            *a1 = v36;
            v17 = v49;
            v20 = v36;
          }
          a1[1] = v16;
          *((_BYTE *)v19 + v20) = 0;
          memcpy((void *)(v18 + *a1), *(const void **)v11, v17);
        }
      }
      v11 += 56;
      if ( !v21 )
        goto LABEL_26;
      v10 = (__int64 *)a1[4];
    }
    v37 = a1[1];
    v38 = v14 - 1;
    v39 = v14 - 1;
    if ( v37 )
    {
      --v37;
      v39 = v38 + v37;
      v14 += v37;
    }
    v40 = *a1;
    if ( a1[2] < v14 )
    {
      v60 = v39;
      ptrb = (void *)v37;
      v55 = v38;
      v51 = v14;
      v46 = qvector_reserve(a1, v40, v14, 1);
      v39 = v60;
      v37 = (__int64)ptrb;
      *a1 = v46;
      v38 = v55;
      v40 = v46;
      v14 = v51;
    }
    a1[1] = v14;
    *(_BYTE *)(v40 + v39) = 0;
    memcpy((void *)(v37 + *a1), *(const void **)(v13 + 16), v38);
    v41 = a1[1];
    if ( v41 )
    {
      v42 = v41 + 1;
      v43 = a1[1];
      v44 = *a1;
      --v41;
      if ( a1[2] >= v42 )
      {
LABEL_57:
        a1[1] = v42;
        *(_BYTE *)(v44 + v41) = 61;
        *(_BYTE *)(*a1 + v43) = 0;
        goto LABEL_8;
      }
    }
    else
    {
      v44 = *a1;
      v43 = 1;
      v42 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
        goto LABEL_57;
    }
    v54 = v43;
    v50 = v42;
    v45 = qvector_reserve(a1, v44, v42, 1);
    v43 = v54;
    v42 = v50;
    *a1 = v45;
    v44 = v45;
    goto LABEL_57;
  }
LABEL_59:
  sub_587E70(a1, 32, a3);
LABEL_27:
  v22 = sub_587E70(a1, 125, a3);
  a1[3] = (a1[1] == 0) + a1[1] - 1;
  if ( a2 >= 0 )
  {
    v24 = (char **)a1[4];
    ptr = v24;
    if ( v24 )
    {
      v25 = *v24;
      if ( *v24 )
      {
        v59 = v24[1];
        if ( v59 )
        {
          v52 = 0;
          for ( j = nullptr; j != v59; ++j )
          {
            v26 = &v25[v52];
            v27 = *(void ***)&v25[v52 + 32];
            if ( v27 )
            {
              v28 = *v27;
              if ( *v27 )
              {
                v48 = (char *)v27[1];
                if ( v48 )
                {
                  v29 = 0;
                  v30 = nullptr;
                  do
                  {
                    v31 = (__int64)v28 + v29;
                    ++v30;
                    v29 += 56;
                    sub_378C80(v31);
                    v28 = *v27;
                  }
                  while ( v48 != v30 );
                }
                v27[1] = nullptr;
                qfree(v28);
              }
              qfree(v27);
            }
            v32 = *((_QWORD **)v26 + 5);
            if ( v32 )
            {
              clear_tinfo_t(v32 + 5);
              v33 = (void *)v32[2];
              if ( v33 )
              {
                v32[3] = 0;
                qfree(v33);
              }
              cleanup_argloc(v32);
              qfree(v32);
            }
            v34 = *(void **)v26;
            if ( *(_QWORD *)v26 )
            {
              *((_QWORD *)v26 + 1) = 0;
              qfree(v34);
            }
            v52 += 56;
            v25 = *ptr;
          }
        }
        ptr[1] = nullptr;
        qfree(v25);
      }
      qfree(ptr);
    }
    a1[4] = 0;
  }
  return v22;
}

