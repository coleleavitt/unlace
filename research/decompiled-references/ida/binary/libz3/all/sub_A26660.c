__int64 __fastcall sub_A26660(__int64 a1, int a2, double a3)
{
  __int64 v5; // rax
  unsigned int *v6; // rdi
  size_t v7; // rdx
  _DWORD *v8; // rax
  int v9; // edx
  _DWORD *v10; // rdx
  __int64 v11; // rbx
  int v12; // r14d
  unsigned int v13; // r14d
  unsigned int *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // r15
  void (__fastcall ***v36)(_QWORD); // rbx
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 result; // rax
  unsigned int *v43; // rdi
  size_t v44; // rdx
  unsigned int v45; // [rsp+Ch] [rbp-3Ch]

  sub_9952A0(a1);
  v5 = *(_QWORD *)(a1 + 864);
  if ( !v5 || *(_DWORD *)(v5 - 4) != 1 )
  {
    v6 = *(unsigned int **)(a1 + 872);
    if ( v6 )
      v7 = 4LL * *(v6 - 1);
    else
      v7 = 0;
    memset(v6, 0, v7);
    v8 = *(_DWORD **)(a1 + 864);
    if ( v8 && (v9 = *(v8 - 2), *(v8 - 1) = 0, v9) )
    {
      v10 = v8;
    }
    else
    {
      sub_313C10((unsigned int **)(a1 + 864));
      v8 = *(_DWORD **)(a1 + 864);
      v10 = &v8[*(v8 - 1)];
    }
    *v10 = -1;
    ++*(v8 - 1);
  }
  v11 = *(_QWORD *)(a1 + 1064);
  if ( v11 )
    v12 = *(_DWORD *)(v11 - 4);
  else
    v12 = 0;
  v13 = v12 - a2;
  v14 = (unsigned int *)(32LL * v13 + v11);
  sub_A05840((_QWORD *)a1, v14[1]);
  v15 = *(_QWORD *)(a1 + 1048);
  v16 = v14[2];
  v17 = 4 * v16;
  if ( v15 )
  {
    v18 = 4LL * *(unsigned int *)(v15 - 4);
    v19 = v15 + v18;
    if ( v17 == v18 )
    {
LABEL_16:
      *(_DWORD *)(v15 - 4) = v16;
      goto LABEL_17;
    }
  }
  else
  {
    v19 = 0;
    if ( !v17 )
      goto LABEL_17;
  }
  v20 = *(_QWORD *)(a1 + 704);
  do
  {
    v21 = *(unsigned int *)(v19 - 4);
    v19 -= 4;
    ++*(_DWORD *)(v20 + 4 * v21);
  }
  while ( v15 + 4 * v16 != v19 );
  if ( v15 )
    goto LABEL_16;
LABEL_17:
  v22 = *(_QWORD *)(a1 + 736);
  if ( v22 )
    *(_DWORD *)(v22 - 4) = v14[3];
  v23 = *(_QWORD *)(a1 + 768);
  v24 = v14[7];
  v25 = 4 * v24;
  *(_DWORD *)(a1 + 744) = v14[4];
  if ( v23 )
  {
    v26 = 4LL * *(unsigned int *)(v23 - 4);
    v27 = v23 + v26;
    if ( v26 == v25 )
    {
LABEL_24:
      *(_DWORD *)(v23 - 4) = v24;
      goto LABEL_25;
    }
  }
  else
  {
    v27 = 0;
    if ( !v25 )
      goto LABEL_25;
  }
  v28 = *(_QWORD *)(a1 + 656);
  do
  {
    v29 = *(unsigned int *)(v27 - 4);
    v27 -= 4;
    *(_BYTE *)(v28 + 4 * v29 + 3) &= ~0x80u;
  }
  while ( v23 + 4 * v24 != v27 );
  if ( v23 )
    goto LABEL_24;
LABEL_25:
  v30 = *(_QWORD *)(a1 + 760);
  if ( v30 )
    *(_DWORD *)(v30 - 4) = v14[6];
  sub_995B30((_QWORD *)a1, *v14);
  v31 = *(_QWORD *)(a1 + 1056);
  v45 = v14[5];
  v32 = 8LL * v45;
  v33 = v31 + v32;
  if ( v31 )
  {
    v34 = 8LL * *(unsigned int *)(v31 - 4);
    v35 = v31 + v34;
    if ( v34 == v32 )
    {
LABEL_33:
      *(_DWORD *)(v31 - 4) = v45;
      goto LABEL_34;
    }
  }
  else
  {
    v35 = 0;
    if ( !v32 )
      goto LABEL_34;
  }
  do
  {
    v36 = *(void (__fastcall ****)(_QWORD))(v35 - 8);
    v35 -= 8;
    if ( v36 )
    {
      (**v36)(v36);
      sub_186B220(v36);
    }
  }
  while ( v33 != v35 );
  v31 = *(_QWORD *)(a1 + 1056);
  if ( v31 )
    goto LABEL_33;
LABEL_34:
  v37 = *(_QWORD *)(a1 + 40);
  if ( v37 )
    v38 = *(_DWORD *)(v37 - 4);
  else
    v38 = 0;
  sub_A148D0(a1, *(_DWORD *)(v37 + 4LL * (unsigned int)(v38 - a2)));
  v39 = *(_QWORD *)(a1 + 1064);
  if ( v39 )
    *(_DWORD *)(v39 - 4) = v13;
  sub_965AE0(a1, a2);
  if ( !(unsigned __int8)sub_A25FE0(a1, a3) )
  {
    sub_1872CE0("");
    sub_1873130(114, 3394);
  }
  v40 = *(_QWORD *)(a1 + 928);
  if ( v40 )
    *(_DWORD *)(v40 - 4) = 0;
  v41 = *(_DWORD *)(a1 + 936) + 1;
  *(_DWORD *)(a1 + 936) = v41;
  if ( v41 == -1 )
  {
    v43 = *(unsigned int **)(a1 + 944);
    if ( v43 )
    {
      v44 = 4LL * *(v43 - 1);
      if ( v44 )
        memset(v43, 0, v44);
    }
    *(_DWORD *)(a1 + 936) = 0;
  }
  result = *(_QWORD *)(a1 + 752);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

