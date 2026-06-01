__int64 __fastcall sub_4F98E0(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  char *v9; // rsi
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int64 v13; // rax
  __int64 v14; // rbp
  char *v15; // rsi
  unsigned __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r12
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  const char *v21; // rsi
  __int64 ph; // rax
  int v23; // edx
  int v24; // ecx
  const char **v25; // rcx
  const char *v26; // r12
  size_t v27; // rax
  __int64 v28; // rbp
  size_t v29; // r13
  size_t v30; // r14
  char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rbp
  unsigned __int64 v34; // r12
  __int64 v35; // r13
  char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = *a2;
  if ( a3 == 2 )
  {
    sub_35A790((char **)a1);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(char **)a1;
    if ( v7 )
      goto LABEL_5;
    goto LABEL_17;
  }
  if ( a3 == 3 )
  {
    if ( v6 != 0xFFFFFFFFLL )
      goto LABEL_4;
  }
  else if ( a3 == 1 || v6 != -1 )
  {
LABEL_4:
    sub_35A790((char **)a1);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 16);
    v9 = *(char **)a1;
    if ( v7 )
    {
LABEL_5:
      v10 = v7 - 1;
      v11 = v7 + 1;
      goto LABEL_6;
    }
LABEL_17:
    v10 = 0;
    v11 = 2;
    v7 = 1;
LABEL_6:
    if ( v8 >= v11 )
      goto LABEL_7;
    goto LABEL_12;
  }
  v7 = 1;
  v11 = 2;
  v10 = 0;
  v9 = nullptr;
LABEL_12:
  v13 = qvector_reserve(a1, v9, v11, 1);
  *(_QWORD *)a1 = v13;
  v9 = (char *)v13;
LABEL_7:
  *(_QWORD *)(a1 + 8) = v11;
  v9[v7] = 0;
  *(_BYTE *)(v10 + *(_QWORD *)a1) = 64;
  if ( a2[1] == -1 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    if ( v14 )
    {
      v17 = v14 + 1;
      v16 = v14 + 2;
      v15 = *(char **)a1;
      --v14;
      if ( *(_QWORD *)(a1 + 16) >= v16 )
        goto LABEL_15;
    }
    else
    {
      v15 = *(char **)a1;
      v16 = 3;
      v17 = 2;
      if ( *(_QWORD *)(a1 + 16) >= 3u )
      {
LABEL_15:
        *(_QWORD *)(a1 + 8) = v16;
        v15[v17] = 0;
        *(_WORD *)(*(_QWORD *)a1 + v14) = 16191;
        return a1;
      }
    }
    v32 = qvector_reserve(a1, v15, v16, 1);
    *(_QWORD *)a1 = v32;
    v15 = (char *)v32;
    goto LABEL_15;
  }
  sub_35A910((__int64 *)a1);
  if ( *((_WORD *)a2 + 8) )
  {
    v18 = *(_QWORD *)(a1 + 8);
    if ( v18 )
    {
      v19 = v18 + 1;
      v20 = *(_QWORD *)(a1 + 8);
      --v18;
    }
    else
    {
      v19 = 2;
      v20 = 1;
    }
    v21 = *(const char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v19 )
    {
      v38 = qvector_reserve(a1, v21, v19, 1);
      *(_QWORD *)a1 = v38;
      v21 = (const char *)v38;
    }
    *(_QWORD *)(a1 + 8) = v19;
    v21[v20] = 0;
    *(_BYTE *)(*(_QWORD *)a1 + v18) = 40;
    if ( a4 )
      ph = *(_QWORD *)(a4 + 16);
    else
      ph = get_ph(a1, v21);
    v23 = *((unsigned __int16 *)a2 + 8);
    if ( ph
      && (v24 = *(_DWORD *)(ph + 104), v23 >= v24)
      && v23 < *(_DWORD *)(ph + 108)
      && (v25 = (const char **)(*(_QWORD *)(ph + 112) + 16LL * (v23 - v24)), (v26 = *v25) != nullptr) )
    {
      v27 = strlen(*v25);
      v28 = *(_QWORD *)(a1 + 8);
      v29 = v27;
      v30 = v27;
      if ( v28 )
      {
        --v28;
        v30 = v27 + v28;
      }
      v31 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v30 + 1 )
      {
        v39 = qvector_reserve(a1, v31, v30 + 1, 1);
        *(_QWORD *)a1 = v39;
        v31 = (char *)v39;
      }
      *(_QWORD *)(a1 + 8) = v30 + 1;
      v31[v30] = 0;
      memmove((void *)(v28 + *(_QWORD *)a1), v26, v29);
    }
    else
    {
      sub_35A910((__int64 *)a1);
    }
    v33 = *(_QWORD *)(a1 + 8);
    if ( v33 )
    {
      v34 = v33 + 1;
      v35 = *(_QWORD *)(a1 + 8);
      --v33;
    }
    else
    {
      v34 = 2;
      v35 = 1;
    }
    v36 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v34 )
    {
      v37 = qvector_reserve(a1, v36, v34, 1);
      *(_QWORD *)a1 = v37;
      v36 = (char *)v37;
    }
    *(_QWORD *)(a1 + 8) = v34;
    v36[v35] = 0;
    *(_BYTE *)(*(_QWORD *)a1 + v33) = 41;
  }
  return a1;
}
