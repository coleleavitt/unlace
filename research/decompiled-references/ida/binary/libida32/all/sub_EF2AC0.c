unsigned __int64 __fastcall sub_EF2AC0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r12
  int v5; // r13d
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // r12
  __int64 v9; // rax
  _WORD *v10; // rsi
  __int64 v11; // r12
  int v12; // r13d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rdi
  __int64 v18; // rax
  _WORD *v19; // rsi
  __int64 v20; // r12
  int v21; // r13d
  __int64 v22; // rax
  int v23; // r13d
  int v24; // r12d
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r12
  int v29; // r13d
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r12
  __int64 v33; // r13
  _WORD *v34; // rsi
  __int64 v35; // r12
  int v36; // r13d
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 result; // rax
  __int64 v40; // rdx
  __int64 *v41; // rbx
  __int64 *i; // r12
  __int64 v43; // rax
  _WORD *v44; // rsi
  __int64 v45; // rdx

  sub_EF1D60(a1, (_WORD *)a2);
  v4 = a1[1];
  v5 = *(unsigned __int8 *)(a2 + 13);
  v6 = *(unsigned int *)(v4 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_22134E0(a1[1], v4 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(v4 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v4 + 4 * v6) = v5;
  v7 = *(unsigned __int8 *)(a2 + 12);
  ++*(_DWORD *)(v4 + 8);
  v8 = a1[1];
  v9 = *(unsigned int *)(v8 + 8);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(v8 + 12) )
  {
    sub_22134E0(a1[1], v8 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(v8 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v8 + 4 * v9) = v7;
  v10 = *(_WORD **)(a2 + 48);
  ++*(_DWORD *)(v8 + 8);
  sub_EF1D60(a1, v10);
  v11 = a1[1];
  v12 = *(_DWORD *)(a2 + 16);
  v13 = *(unsigned int *)(v11 + 8);
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 12) )
  {
    sub_22134E0(a1[1], v11 + 16, v13 + 1, 4);
    v13 = *(unsigned int *)(v11 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v11 + 4 * v13) = v12;
  ++*(_DWORD *)(v11 + 8);
  v14 = *(_DWORD *)(a2 + 16);
  if ( v14 )
  {
    v15 = 0;
    v16 = 8LL * (unsigned int)(v14 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v17 = a1[1];
        v18 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + v15);
        if ( !v18 )
          break;
        sub_21FEE70(v17, *(_QWORD *)(v18 + 16) + 16LL, **(unsigned int **)(v18 + 16));
        v19 = *(_WORD **)(*(_QWORD *)(a2 + 56) + v15);
        v15 += 8;
        sub_EF1D60(a1, v19);
        if ( v15 == v16 )
          goto LABEL_11;
      }
      sub_21FEE70(v17, 0, 0);
      v44 = *(_WORD **)(*(_QWORD *)(a2 + 56) + v15);
      v15 += 8;
      sub_EF1D60(a1, v44);
    }
    while ( v16 != v15 );
  }
LABEL_11:
  v20 = a1[1];
  v21 = *(_DWORD *)(a2 + 20);
  v22 = *(unsigned int *)(v20 + 8);
  if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(v20 + 12) )
  {
    sub_22134E0(a1[1], v20 + 16, v22 + 1, 4);
    v22 = *(unsigned int *)(v20 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v20 + 4 * v22) = v21;
  ++*(_DWORD *)(v20 + 8);
  v23 = *(_DWORD *)(a2 + 20);
  v24 = 0;
  if ( v23 )
  {
    do
    {
      while ( 1 )
      {
        v25 = a1[1];
        v26 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v24));
        if ( !v26 )
          break;
        sub_21FEE70(v25, *(_QWORD *)(v26 + 16) + 16LL, **(unsigned int **)(v26 + 16));
        v27 = (unsigned int)(*(_DWORD *)(a2 + 16) + v24++);
        sub_EF1D60(a1, *(_WORD **)(*(_QWORD *)(a2 + 56) + 8 * v27));
        if ( v23 == v24 )
          goto LABEL_16;
      }
      sub_21FEE70(v25, 0, 0);
      v45 = (unsigned int)(*(_DWORD *)(a2 + 16) + v24++);
      sub_EF1D60(a1, *(_WORD **)(*(_QWORD *)(a2 + 56) + 8 * v45));
    }
    while ( v24 != v23 );
  }
LABEL_16:
  v28 = a1[1];
  v29 = *(_DWORD *)(a2 + 24);
  v30 = *(unsigned int *)(v28 + 8);
  if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(v28 + 12) )
  {
    sub_22134E0(a1[1], v28 + 16, v30 + 1, 4);
    v30 = *(unsigned int *)(v28 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v28 + 4 * v30) = v29;
  ++*(_DWORD *)(v28 + 8);
  v31 = *(_DWORD *)(a2 + 24);
  if ( v31 )
  {
    v32 = 0;
    v33 = 8LL * (unsigned int)(v31 - 1) + 8;
    do
    {
      v34 = *(_WORD **)(*(_QWORD *)(a2 + 64) + v32);
      v32 += 8;
      sub_EF1D60(a1, v34);
    }
    while ( v33 != v32 );
  }
  v35 = a1[1];
  v36 = *(_DWORD *)(a2 + 80);
  v37 = *(unsigned int *)(v35 + 8);
  if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(v35 + 12) )
  {
    sub_22134E0(a1[1], v35 + 16, v37 + 1, 4);
    v37 = *(unsigned int *)(v35 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v35 + 4 * v37) = v36;
  v38 = *(_QWORD *)(a2 + 32);
  ++*(_DWORD *)(v35 + 8);
  result = *(unsigned int *)(a2 + 20) + (unsigned __int64)*(unsigned int *)(a2 + 16);
  v40 = *(unsigned int *)(a2 + 80);
  v41 = (__int64 *)(v38 + 8 * result);
  for ( i = (__int64 *)(v38 + 8 * (result + v40));
        i != v41;
        result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 24LL))(a1, *(_QWORD *)(v43 + 24)) )
  {
    v43 = *v41++;
  }
  return result;
}

