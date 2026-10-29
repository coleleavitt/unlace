/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E60F0
// Address: 0x00000000000E60F0

//----- (00000000000E60F0) ----------------------------------------------------
char __fastcall sub_E60F0(__int64 a1, char **a2)
{
  char **v2; // r15
  __int64 v3; // rbx
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  char *v12; // rax
  __int64 v13; // rcx
  size_t v14; // rsi
  __int64 v15; // rbp
  _BYTE *v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  _BYTE *v19; // rax
  size_t v20; // rsi
  void **v21; // rbp
  int v22; // eax
  char *v23; // rcx
  unsigned __int64 v24; // rsi
  char *v25; // rax
  size_t v26; // rsi
  char *v27; // rcx
  unsigned __int64 v28; // rsi
  void *v29; // rax
  size_t v30; // rsi
  char *v31; // rcx
  unsigned __int64 v32; // rsi
  void *v33; // rax
  size_t v34; // rsi
  __int64 v35; // rax
  char *v36; // rcx
  unsigned __int64 v37; // rsi
  char *v38; // rax
  char *v39; // rcx
  unsigned __int64 v40; // rsi
  void *v41; // rax
  size_t v42; // rsi
  size_t v43; // rsi
  char *v44; // rdx
  unsigned __int64 v45; // rsi
  size_t v46; // rcx
  void *v47; // rax
  size_t v48; // rsi
  _BYTE *v49; // rbx
  void **v51; // [rsp+8h] [rbp-40h]
  int v52; // [rsp+14h] [rbp-34h]

  v2 = a2;
  v3 = a1;
  v4 = a2[1];
  v5 = (unsigned __int64)a2[2];
  v51 = (void **)v2;
  if ( (unsigned __int64)(v4 + 1) >= v5 )
  {
    v7 = 2 * v5;
    if ( v7 < (unsigned __int64)(v4 + 1) )
      v7 = (size_t)(v4 + 1);
    v2[2] = (char *)v7;
    v6 = (char *)realloc(*v2, v7);
    *v2 = v6;
    v4 = v2[1];
  }
  else
  {
    v6 = *v2;
  }
  v4[(_QWORD)v6] = 40;
  v8 = (__int64)(v2[1] + 1);
  v2[1] = (char *)v8;
  if ( *(_QWORD *)(a1 + 32) )
  {
    LOBYTE(v6) = 1;
    v9 = 0;
    do
    {
      v10 = v8;
      v52 = (int)v6;
      if ( ((unsigned __int8)v6 & 1) == 0 )
      {
        v11 = (unsigned __int64)v2[2];
        if ( v8 + 2 >= v11 )
        {
          v14 = 2 * v11;
          if ( v14 < v8 + 2 )
            v14 = v8 + 2;
          v2[2] = (char *)v14;
          v12 = (char *)realloc(*v2, v14);
          v2 = (char **)v51;
          *v51 = v12;
          v13 = (__int64)v51[1];
        }
        else
        {
          v12 = *v2;
          v13 = v8;
        }
        *(_WORD *)&v12[v13] = 8236;
        v10 = (__int64)(v2[1] + 2);
        v2[1] = (char *)v10;
      }
      v15 = v3;
      v16 = *(_BYTE **)(*(_QWORD *)(v3 + 24) + 8 * v9);
      (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v16 + 24LL))(v16, v2);
      if ( v16[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v16 + 32LL))(v16, v2);
      v17 = (__int64)v2[1];
      if ( v10 == v17 )
      {
        v2[1] = (char *)v8;
        v17 = v8;
        v3 = v15;
        LODWORD(v6) = v52;
      }
      else
      {
        LODWORD(v6) = 0;
        v8 = (__int64)v2[1];
        v3 = v15;
      }
      ++v9;
    }
    while ( v9 != *(_QWORD *)(v3 + 32) );
  }
  else
  {
    v17 = v8;
  }
  v18 = (unsigned __int64)v2[2];
  if ( v17 + 1 >= v18 )
  {
    v20 = 2 * v18;
    if ( v20 < v17 + 1 )
      v20 = v17 + 1;
    v2[2] = (char *)v20;
    v19 = realloc(*v2, v20);
    v2 = (char **)v51;
    *v51 = v19;
    v17 = (__int64)v51[1];
  }
  else
  {
    v19 = *v2;
  }
  v19[v17] = 41;
  ++v2[1];
  (*(void (__fastcall **)(_QWORD, char **))(**(_QWORD **)(v3 + 16) + 32LL))(*(_QWORD *)(v3 + 16), v2);
  v21 = v51;
  v22 = *(_DWORD *)(v3 + 40);
  if ( (v22 & 1) != 0 )
  {
    v23 = (char *)v51[1];
    v24 = (unsigned __int64)v51[2];
    if ( (unsigned __int64)(v23 + 6) >= v24 )
    {
      v26 = 2 * v24;
      if ( v26 < (unsigned __int64)(v23 + 6) )
        v26 = (size_t)(v23 + 6);
      v51[2] = (void *)v26;
      v25 = (char *)realloc(*v51, v26);
      v21 = v51;
      *v51 = v25;
      v23 = (char *)v51[1];
    }
    else
    {
      v25 = (char *)*v51;
    }
    *(_WORD *)&v23[(_QWORD)v25 + 4] = 29811;
    *(_DWORD *)&v23[(_QWORD)v25] = 1852793632;
    v21[1] = (char *)v21[1] + 6;
    v22 = *(_DWORD *)(v3 + 40);
    if ( (v22 & 2) == 0 )
    {
LABEL_30:
      if ( (v22 & 4) == 0 )
        goto LABEL_50;
      goto LABEL_44;
    }
  }
  else if ( (v22 & 2) == 0 )
  {
    goto LABEL_30;
  }
  v27 = (char *)v21[1];
  v28 = (unsigned __int64)v21[2];
  if ( (unsigned __int64)(v27 + 9) >= v28 )
  {
    v30 = 2 * v28;
    if ( v30 < (unsigned __int64)(v27 + 9) )
      v30 = (size_t)(v27 + 9);
    v21[2] = (void *)v30;
    v29 = realloc(*v21, v30);
    v21 = v51;
    *v51 = v29;
    v27 = (char *)v51[1];
  }
  else
  {
    v29 = *v21;
  }
  *(_QWORD *)&v27[(_QWORD)v29] = 0x6C6974616C6F7620LL;
  v27[(_QWORD)v29 + 8] = 101;
  v21[1] = (char *)v21[1] + 9;
  if ( (*(_DWORD *)(v3 + 40) & 4) != 0 )
  {
LABEL_44:
    v31 = (char *)v21[1];
    v32 = (unsigned __int64)v21[2];
    if ( (unsigned __int64)(v31 + 9) >= v32 )
    {
      v34 = 2 * v32;
      if ( v34 < (unsigned __int64)(v31 + 9) )
        v34 = (size_t)(v31 + 9);
      v21[2] = (void *)v34;
      v33 = realloc(*v21, v34);
      v21 = v51;
      *v51 = v33;
      v31 = (char *)v51[1];
    }
    else
    {
      v33 = *v21;
    }
    *(_QWORD *)&v31[(_QWORD)v33] = 0x6369727473657220LL;
    v31[(_QWORD)v33 + 8] = 116;
    v21[1] = (char *)v21[1] + 9;
  }
LABEL_50:
  LOBYTE(v35) = *(_BYTE *)(v3 + 44);
  if ( (_BYTE)v35 == 2 )
  {
    v39 = (char *)v21[1];
    v40 = (unsigned __int64)v21[2];
    if ( (unsigned __int64)(v39 + 3) >= v40 )
    {
      v43 = 2 * v40;
      if ( v43 < (unsigned __int64)(v39 + 3) )
        v43 = (size_t)(v39 + 3);
      v21[2] = (void *)v43;
      v41 = realloc(*v21, v43);
      v21 = v51;
      *v51 = v41;
      v39 = (char *)v51[1];
    }
    else
    {
      v41 = *v21;
    }
    v39[(_QWORD)v41 + 2] = 38;
    *(_WORD *)&v39[(_QWORD)v41] = 9760;
    v35 = 3;
  }
  else
  {
    if ( (_BYTE)v35 != 1 )
      goto LABEL_65;
    v36 = (char *)v21[1];
    v37 = (unsigned __int64)v21[2];
    if ( (unsigned __int64)(v36 + 2) >= v37 )
    {
      v42 = 2 * v37;
      if ( v42 < (unsigned __int64)(v36 + 2) )
        v42 = (size_t)(v36 + 2);
      v21[2] = (void *)v42;
      v38 = (char *)realloc(*v21, v42);
      v21 = v51;
      *v51 = v38;
      v36 = (char *)v51[1];
    }
    else
    {
      v38 = (char *)*v21;
    }
    *(_WORD *)&v36[(_QWORD)v38] = 9760;
    v35 = 2;
  }
  v21[1] = (char *)v21[1] + v35;
LABEL_65:
  if ( *(_QWORD *)(v3 + 48) )
  {
    v44 = (char *)v21[1];
    v45 = (unsigned __int64)v21[2];
    v46 = (size_t)(v44 + 1);
    if ( (unsigned __int64)(v44 + 1) >= v45 )
    {
      v48 = 2 * v45;
      if ( v48 < v46 )
        v48 = (size_t)(v44 + 1);
      v21[2] = (void *)v48;
      v47 = realloc(*v21, v48);
      v21 = v51;
      *v51 = v47;
      v44 = (char *)v51[1];
      v46 = (size_t)(v44 + 1);
    }
    else
    {
      v47 = *v21;
    }
    v21[1] = (void *)v46;
    v44[(_QWORD)v47] = 32;
    v49 = *(_BYTE **)(v3 + 48);
    LOBYTE(v35) = (*(__int64 (__fastcall **)(_BYTE *, void **))(*(_QWORD *)v49 + 24LL))(v49, v21);
    if ( v49[9] != 1 )
      LOBYTE(v35) = (*(__int64 (__fastcall **)(_BYTE *, void **))(*(_QWORD *)v49 + 32LL))(v49, v51);
  }
  return v35;
}
