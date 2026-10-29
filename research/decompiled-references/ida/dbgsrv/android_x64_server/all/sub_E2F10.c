/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E2F10
// Address: 0x00000000000E2F10

//----- (00000000000E2F10) ----------------------------------------------------
char *__fastcall sub_E2F10(__int64 a1, char **a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  unsigned __int64 *v7; // rbp
  size_t v8; // rsi
  char *v9; // rax
  size_t v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  size_t v13; // rax
  char *v14; // rax
  size_t v15; // rsi
  size_t v16; // rdx
  char *v17; // rax
  size_t v18; // rsi
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  char *v21; // rax
  size_t v22; // rsi
  __int64 v23; // r12
  char v24; // r14
  __int64 v25; // r13
  __int64 v26; // rbp
  char *v27; // rax
  __int64 v28; // rcx
  size_t v29; // rsi
  _BYTE *v30; // rbx
  __int64 v31; // rcx
  char *v32; // rax
  size_t v33; // rsi
  _BYTE *v34; // rbx
  char *result; // rax
  __int64 *v36; // rbx
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  char *v39; // rax
  size_t v40; // rsi
  __int64 v41; // r13
  char v42; // r14
  __int64 v43; // r12
  __int64 v44; // rbp
  char *v45; // rax
  __int64 v46; // rcx
  size_t v47; // rsi
  _BYTE *v48; // rbx
  __int64 v49; // rcx
  size_t v50; // rsi
  unsigned __int64 *v51; // [rsp+8h] [rbp-40h]
  __int64 *v52; // [rsp+10h] [rbp-38h]

  v3 = (__int64 *)(a2 + 1);
  v4 = (__int64)a2[1];
  if ( *(_BYTE *)(a1 + 56) )
  {
    v5 = (unsigned __int64)a2[2];
    if ( v4 + 11 >= v5 )
    {
      v8 = 2 * v5;
      if ( v8 < v4 + 11 )
        v8 = v4 + 11;
      a2[2] = (char *)v8;
      v6 = (char *)realloc(*a2, v8);
      *a2 = v6;
      v4 = (__int64)a2[1];
    }
    else
    {
      v6 = *a2;
    }
    v7 = (unsigned __int64 *)(a2 + 2);
    qmemcpy(&v6[v4], "::operator ", 11);
    v4 = *v3 + 11;
    *v3 = v4;
  }
  else
  {
    v7 = (unsigned __int64 *)(a2 + 2);
  }
  if ( v4 + 3 >= *v7 )
  {
    v10 = 2 * *v7;
    if ( v10 < v4 + 3 )
      v10 = v4 + 3;
    a2[2] = (char *)v10;
    v9 = (char *)realloc(*a2, v10);
    *a2 = v9;
    v4 = (__int64)a2[1];
  }
  else
  {
    v9 = *a2;
  }
  v9[v4 + 2] = 119;
  *(_WORD *)&v9[v4] = 25966;
  v11 = *v3;
  v12 = *v3 + 3;
  *v3 = v12;
  if ( *(_BYTE *)(a1 + 57) )
  {
    v13 = v11 + 5;
    if ( v13 >= *v7 )
    {
      v15 = 2 * *v7;
      if ( v15 < v13 )
        v15 = v13;
      a2[2] = (char *)v15;
      v14 = (char *)realloc(*a2, v15);
      *a2 = v14;
      v12 = (__int64)a2[1];
    }
    else
    {
      v14 = *a2;
    }
    *(_WORD *)&v14[v12] = 23899;
    v12 = *v3 + 2;
    *v3 = v12;
  }
  v16 = v12 + 1;
  if ( v12 + 1 >= *v7 )
  {
    v18 = 2 * *v7;
    if ( v18 < v16 )
      v18 = v12 + 1;
    a2[2] = (char *)v18;
    v17 = (char *)realloc(*a2, v18);
    *a2 = v17;
    v12 = (__int64)a2[1];
    v16 = v12 + 1;
  }
  else
  {
    v17 = *a2;
  }
  *v3 = v16;
  v17[v12] = 32;
  v52 = v3;
  v51 = v7;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v19 = *v3;
    v20 = *v3 + 1;
    if ( v20 >= *v7 )
    {
      v22 = 2 * *v7;
      if ( v22 < v20 )
        v22 = *v3 + 1;
      a2[2] = (char *)v22;
      v21 = (char *)realloc(*a2, v22);
      *a2 = v21;
      v19 = (__int64)a2[1];
    }
    else
    {
      v21 = *a2;
    }
    v21[v19] = 40;
    v23 = *v3 + 1;
    *v3 = v23;
    if ( *(_QWORD *)(a1 + 24) )
    {
      v24 = 1;
      v25 = 0;
      do
      {
        v26 = v23;
        if ( (v24 & 1) == 0 )
        {
          if ( v23 + 2 >= *v51 )
          {
            v29 = 2 * *v51;
            if ( v29 < v23 + 2 )
              v29 = v23 + 2;
            a2[2] = (char *)v29;
            v27 = (char *)realloc(*a2, v29);
            *a2 = v27;
            v28 = (__int64)a2[1];
          }
          else
          {
            v27 = *a2;
            v28 = v23;
          }
          *(_WORD *)&v27[v28] = 8236;
          v26 = *v3 + 2;
          *v3 = v26;
        }
        v30 = *(_BYTE **)(*(_QWORD *)(a1 + 16) + 8 * v25);
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v30 + 24LL))(v30, a2);
        if ( v30[9] != 1 )
          (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v30 + 32LL))(v30, a2);
        v3 = v52;
        v31 = *v52;
        if ( v26 == *v52 )
        {
          *v52 = v23;
          v31 = v23;
        }
        else
        {
          v24 = 0;
          v23 = *v52;
        }
        ++v25;
      }
      while ( v25 != *(_QWORD *)(a1 + 24) );
    }
    else
    {
      v31 = v23;
    }
    v7 = v51;
    if ( v31 + 1 >= *v51 )
    {
      v33 = 2 * *v51;
      if ( v33 < v31 + 1 )
        v33 = v31 + 1;
      a2[2] = (char *)v33;
      v32 = (char *)realloc(*a2, v33);
      *a2 = v32;
      v31 = (__int64)a2[1];
    }
    else
    {
      v32 = *a2;
    }
    v32[v31] = 41;
    ++*v3;
  }
  v34 = *(_BYTE **)(a1 + 32);
  (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v34 + 24LL))(v34, a2);
  if ( v34[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v34 + 32LL))(v34, a2);
  result = (char *)a1;
  if ( *(_QWORD *)(a1 + 48) )
  {
    v36 = v52;
    v37 = *v52;
    v38 = *v52 + 1;
    if ( v38 >= *v7 )
    {
      v40 = 2 * *v7;
      if ( v40 < v38 )
        v40 = *v52 + 1;
      a2[2] = (char *)v40;
      v39 = (char *)realloc(*a2, v40);
      *a2 = v39;
      v37 = (__int64)a2[1];
    }
    else
    {
      v39 = *a2;
    }
    v39[v37] = 40;
    v41 = *v52 + 1;
    *v52 = v41;
    if ( *(_QWORD *)(a1 + 48) )
    {
      v42 = 1;
      v43 = 0;
      do
      {
        v44 = v41;
        if ( (v42 & 1) == 0 )
        {
          if ( v41 + 2 >= *v51 )
          {
            v47 = 2 * *v51;
            if ( v47 < v41 + 2 )
              v47 = v41 + 2;
            a2[2] = (char *)v47;
            v45 = (char *)realloc(*a2, v47);
            *a2 = v45;
            v46 = (__int64)a2[1];
          }
          else
          {
            v45 = *a2;
            v46 = v41;
          }
          *(_WORD *)&v45[v46] = 8236;
          v44 = *v36 + 2;
          *v36 = v44;
        }
        v48 = *(_BYTE **)(*(_QWORD *)(a1 + 40) + 8 * v43);
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v48 + 24LL))(v48, a2);
        if ( v48[9] != 1 )
          (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v48 + 32LL))(v48, a2);
        v36 = v52;
        v49 = *v52;
        if ( v44 == *v52 )
        {
          *v52 = v41;
          v49 = v41;
        }
        else
        {
          v42 = 0;
          v41 = *v52;
        }
        ++v43;
      }
      while ( v43 != *(_QWORD *)(a1 + 48) );
    }
    else
    {
      v49 = v41;
    }
    if ( v49 + 1 >= *v51 )
    {
      v50 = 2 * *v51;
      if ( v50 < v49 + 1 )
        v50 = v49 + 1;
      a2[2] = (char *)v50;
      result = (char *)realloc(*a2, v50);
      *a2 = result;
      v49 = (__int64)a2[1];
    }
    else
    {
      result = *a2;
    }
    result[v49] = 41;
    ++*v36;
  }
  return result;
}
