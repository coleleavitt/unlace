/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4C90
// Address: 0x00000000000E4C90

//----- (00000000000E4C90) ----------------------------------------------------
char __fastcall sub_E4C90(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  _BYTE *v6; // rax
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
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  char *v25; // rax
  size_t v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rsi
  _BYTE *v29; // rax
  size_t v30; // rsi
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  _BYTE *v33; // rax
  size_t v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rsi
  char *v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rsi
  _BYTE *v41; // rax
  size_t v42; // rsi
  size_t v43; // rsi
  _BYTE *v44; // r14
  _QWORD *v46; // [rsp+8h] [rbp-40h]
  int v47; // [rsp+14h] [rbp-34h]

  v2 = a2;
  v3 = a1;
  v4 = a2[1];
  v5 = a2[2];
  v46 = v2;
  if ( v4 + 1 >= v5 )
  {
    v7 = 2 * v5;
    if ( v7 < v4 + 1 )
      v7 = v4 + 1;
    v2[2] = v7;
    v6 = realloc((void *)*v2, v7);
    *v2 = v6;
    v4 = v2[1];
  }
  else
  {
    v6 = (_BYTE *)*v2;
  }
  v6[v4] = 40;
  v8 = v2[1] + 1LL;
  v2[1] = v8;
  if ( *(_QWORD *)(a1 + 40) )
  {
    LOBYTE(v6) = 1;
    v9 = 0;
    do
    {
      v10 = v8;
      v47 = (int)v6;
      if ( ((unsigned __int8)v6 & 1) == 0 )
      {
        v11 = v2[2];
        if ( v8 + 2 >= v11 )
        {
          v14 = 2 * v11;
          if ( v14 < v8 + 2 )
            v14 = v8 + 2;
          v2[2] = v14;
          v12 = (char *)realloc((void *)*v2, v14);
          v2 = v46;
          *v46 = v12;
          v13 = v46[1];
        }
        else
        {
          v12 = (char *)*v2;
          v13 = v8;
        }
        *(_WORD *)&v12[v13] = 8236;
        v10 = v2[1] + 2LL;
        v2[1] = v10;
      }
      v15 = v3;
      v16 = *(_BYTE **)(*(_QWORD *)(v3 + 32) + 8 * v9);
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v16 + 24LL))(v16, v2);
      if ( v16[9] != 1 )
        (*(void (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v16 + 32LL))(v16, v2);
      v17 = v2[1];
      if ( v10 == v17 )
      {
        v2[1] = v8;
        v17 = v8;
        v3 = v15;
        LODWORD(v6) = v47;
      }
      else
      {
        LODWORD(v6) = 0;
        v8 = v2[1];
        v3 = v15;
      }
      ++v9;
    }
    while ( v9 != *(_QWORD *)(v3 + 40) );
  }
  else
  {
    v17 = v8;
  }
  v18 = v2[2];
  if ( v17 + 1 >= v18 )
  {
    v20 = 2 * v18;
    if ( v20 < v17 + 1 )
      v20 = v17 + 1;
    v2[2] = v20;
    v19 = realloc((void *)*v2, v20);
    v2 = v46;
    *v46 = v19;
    v17 = v46[1];
  }
  else
  {
    v19 = (_BYTE *)*v2;
  }
  v19[v17] = 41;
  ++v2[1];
  v21 = *(_QWORD *)(v3 + 16);
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 32LL))(v21, v2);
    v2 = v46;
  }
  v22 = *(_DWORD *)(v3 + 56);
  if ( (v22 & 1) != 0 )
  {
    v23 = v2[1];
    v24 = v2[2];
    if ( v23 + 6 >= v24 )
    {
      v26 = 2 * v24;
      if ( v26 < v23 + 6 )
        v26 = v23 + 6;
      v2[2] = v26;
      v25 = (char *)realloc((void *)*v2, v26);
      v2 = v46;
      *v46 = v25;
      v23 = v46[1];
    }
    else
    {
      v25 = (char *)*v2;
    }
    *(_WORD *)&v25[v23 + 4] = 29811;
    *(_DWORD *)&v25[v23] = 1852793632;
    v2[1] += 6LL;
    v22 = *(_DWORD *)(v3 + 56);
    if ( (v22 & 2) == 0 )
    {
LABEL_32:
      if ( (v22 & 4) == 0 )
        goto LABEL_52;
      goto LABEL_46;
    }
  }
  else if ( (v22 & 2) == 0 )
  {
    goto LABEL_32;
  }
  v27 = v2[1];
  v28 = v2[2];
  if ( v27 + 9 >= v28 )
  {
    v30 = 2 * v28;
    if ( v30 < v27 + 9 )
      v30 = v27 + 9;
    v2[2] = v30;
    v29 = realloc((void *)*v2, v30);
    v2 = v46;
    *v46 = v29;
    v27 = v46[1];
  }
  else
  {
    v29 = (_BYTE *)*v2;
  }
  *(_QWORD *)&v29[v27] = 0x6C6974616C6F7620LL;
  v29[v27 + 8] = 101;
  v2[1] += 9LL;
  if ( (*(_DWORD *)(v3 + 56) & 4) != 0 )
  {
LABEL_46:
    v31 = v2[1];
    v32 = v2[2];
    if ( v31 + 9 >= v32 )
    {
      v34 = 2 * v32;
      if ( v34 < v31 + 9 )
        v34 = v31 + 9;
      v2[2] = v34;
      v33 = realloc((void *)*v2, v34);
      v2 = v46;
      *v46 = v33;
      v31 = v46[1];
    }
    else
    {
      v33 = (_BYTE *)*v2;
    }
    *(_QWORD *)&v33[v31] = 0x6369727473657220LL;
    v33[v31 + 8] = 116;
    v2[1] += 9LL;
  }
LABEL_52:
  LOBYTE(v35) = *(_BYTE *)(v3 + 60);
  if ( (_BYTE)v35 == 2 )
  {
    v39 = v2[1];
    v40 = v2[2];
    if ( v39 + 3 >= v40 )
    {
      v43 = 2 * v40;
      if ( v43 < v39 + 3 )
        v43 = v39 + 3;
      v2[2] = v43;
      v41 = realloc((void *)*v2, v43);
      v2 = v46;
      *v46 = v41;
      v39 = v46[1];
    }
    else
    {
      v41 = (_BYTE *)*v2;
    }
    v41[v39 + 2] = 38;
    *(_WORD *)&v41[v39] = 9760;
    v35 = 3;
    goto LABEL_66;
  }
  if ( (_BYTE)v35 == 1 )
  {
    v36 = v2[1];
    v37 = v2[2];
    if ( v36 + 2 >= v37 )
    {
      v42 = 2 * v37;
      if ( v42 < v36 + 2 )
        v42 = v36 + 2;
      v2[2] = v42;
      v38 = (char *)realloc((void *)*v2, v42);
      v2 = v46;
      *v46 = v38;
      v36 = v46[1];
    }
    else
    {
      v38 = (char *)*v2;
    }
    *(_WORD *)&v38[v36] = 9760;
    v35 = 2;
LABEL_66:
    v2[1] += v35;
  }
  v44 = *(_BYTE **)(v3 + 48);
  if ( v44 )
  {
    LOBYTE(v35) = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v44 + 24LL))(*(_QWORD *)(v3 + 48), v2);
    if ( v44[9] != 1 )
      LOBYTE(v35) = (*(__int64 (__fastcall **)(_BYTE *, _QWORD *))(*(_QWORD *)v44 + 32LL))(v44, v46);
  }
  return v35;
}
