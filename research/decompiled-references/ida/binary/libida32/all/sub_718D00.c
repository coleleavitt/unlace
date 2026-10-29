__int64 __fastcall sub_718D00(_DWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  __int16 v9; // r14
  __int16 *v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rbp
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  unsigned int **v16; // rdx
  int v17; // eax
  unsigned int *v18; // rdx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 result; // rax
  unsigned int *v23; // r15
  int v24; // r12d
  unsigned int *v25; // rbp
  __int64 v26; // rdx
  unsigned int *v27; // rsi
  __int16 v28; // cx
  __int64 v29; // rsi
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  unsigned int *v34; // rbp
  int v35; // r12d
  __int64 v36; // rdx
  unsigned int *v37; // rsi
  int v38; // r12d
  __int64 v39; // rdx
  int v40; // [rsp+Ch] [rbp-3Ch]

  v7 = (__int64)a1;
  v8 = *((_QWORD *)a1 + 333);
  v9 = *((_WORD *)a1 + 817);
  v10 = *(__int16 **)(v8 + 8);
  if ( v10 )
  {
    v11 = *((_QWORD *)a1 + 333);
    if ( **(_DWORD **)v10 )
    {
      v12 = *(__int16 *)(*(_QWORD *)v10 + 4LL);
      v13 = (__int16)v12;
      v14 = (__int16)v12;
      goto LABEL_4;
    }
LABEL_19:
    sub_718BC0(v7);
LABEL_20:
    v29 = (unsigned int)v9;
    sub_724BA0(v7, v29);
    if ( v10[4] < 0 )
      return sub_719540(v7, v29, v30, v31, v32, v33, a7);
    sub_71A620(v7, v10);
    return 1;
  }
  if ( v9 <= 0 )
  {
    a2 = (_QWORD *)MEMORY[0x10102464C457F];
    if ( !MEMORY[0x10102464C457F] )
      goto LABEL_19;
    v12 = MEMORY[0x10102464C4583];
    v13 = MEMORY[0x10102464C4583];
    goto LABEL_35;
  }
  v23 = a1 + 410;
  v24 = 0;
  v25 = a1 + 410;
  do
  {
    v26 = *v25;
    v27 = v25;
    ++v24;
    v25 += 8;
    sub_724B00(a1, v27, v26);
    v28 = *((_WORD *)a1 + 817);
  }
  while ( v24 < v28 );
  v11 = *((_QWORD *)a1 + 333);
  a2 = *(_QWORD **)(v11 + 8);
  v8 = v11;
  a1 = (_DWORD *)*a2;
  if ( !*(_DWORD *)*a2 )
  {
    v10 = *(__int16 **)(v11 + 8);
    goto LABEL_19;
  }
  v13 = *((__int16 *)a1 + 2);
  v12 = *((__int16 *)a1 + 2);
  if ( a2 )
  {
    v14 = (__int16)v13;
    v10 = *(__int16 **)(v11 + 8);
    goto LABEL_4;
  }
  if ( v28 <= 0 )
  {
LABEL_35:
    v11 = v8;
    v14 = *(__int16 *)(**(_QWORD **)(v8 + 8) + 4LL);
    goto LABEL_4;
  }
  v38 = 0;
  do
  {
    v39 = *v23;
    a2 = v23;
    a1 = (_DWORD *)v7;
    v40 = v13;
    ++v38;
    v23 += 8;
    sub_724B00(v7, a2, v39);
    v13 = v40;
  }
  while ( v38 < *(__int16 *)(v7 + 1634) );
  v11 = *(_QWORD *)(v7 + 2664);
  v10 = nullptr;
  v14 = *(__int16 *)(**(_QWORD **)(v11 + 8) + 4LL);
LABEL_4:
  if ( v13 < 0 || v12 >= (__int16)v14 && v14 != v13 )
    sub_718B20(a1, a2, v11, (__int16)v14);
  *(_DWORD *)(v11 + 24) = v13;
  *(_BYTE *)(v11 + 28) = 0;
  *(_WORD *)(v11 + 30) = 0;
  v15 = *(_QWORD *)(v7 + 2664);
  v16 = *(unsigned int ***)(v15 + 8);
  if ( !v16 && *(__int16 *)(v7 + 1634) > 0 )
  {
    v34 = (unsigned int *)(v7 + 1640);
    v35 = 0;
    do
    {
      v36 = *v34;
      v37 = v34;
      ++v35;
      v34 += 8;
      sub_724B00(v7, v37, v36);
    }
    while ( v35 < *(__int16 *)(v7 + 1634) );
    v15 = *(_QWORD *)(v7 + 2664);
    v16 = *(unsigned int ***)(v15 + 8);
  }
  v17 = *(_DWORD *)(v15 + 24);
  v18 = *v16;
  if ( v17 )
    v19 = *(unsigned int *)((char *)v18 + 6 * v17);
  else
    v19 = *v18;
  if ( !v19 )
    sub_722BF0();
  v20 = *(__int16 *)(v7 + 1634);
  if ( v20 > 0x1E )
    sub_722BC0(24, 0, v20);
  v21 = v7 + 32 * v20 + 1640;
  *(_WORD *)(v7 + 1634) = v20 + 1;
  *(_QWORD *)(v7 + 2664) = v21;
  sub_724B00(v7, v21, v19);
  result = sub_718D00(v7);
  if ( (_BYTE)result )
    goto LABEL_20;
  return result;
}

