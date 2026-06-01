void __fastcall sub_9B1B50(_QWORD *a1, int *a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // r14
  __int64 *v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  int v18; // edi
  unsigned int *v19; // rdx
  unsigned int *j; // rsi
  __int64 v21; // rcx
  __int64 v22; // r13
  void (*v23)(); // r14
  char *v24; // r15
  __int64 v25; // rdx
  __int64 *v26; // rdi
  int v27; // eax
  unsigned int *v28; // rdx
  unsigned int *i; // rsi
  __int64 v30; // rcx
  __int64 v31; // r14
  void (*v32)(); // r15
  char *v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // rdi
  __int64 v36; // [rsp+0h] [rbp-98h]
  char *v37; // [rsp+0h] [rbp-98h]
  __int64 v38; // [rsp+8h] [rbp-90h]
  void *v39; // [rsp+10h] [rbp-88h]
  __int64 v40; // [rsp+18h] [rbp-80h]
  void *v41[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v42; // [rsp+30h] [rbp-68h] BYREF
  void *v43; // [rsp+40h] [rbp-58h] BYREF
  __int64 v44; // [rsp+48h] [rbp-50h]
  __int64 v45; // [rsp+50h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    return;
  v8 = sub_B8C3D0(a3);
  v9 = *(__int64 **)v8;
  v10 = *(_QWORD *)v8 + 8LL * *(unsigned int *)(v8 + 8);
  if ( (unsigned __int64)v9 < v10 )
  {
    v13 = v9;
    while ( *(_WORD *)(*v13 + 36) != 170 )
    {
      if ( (__int64 *)v10 == ++v13 )
        return;
    }
    if ( (__int64 *)v10 == v13 )
      return;
  }
  else
  {
    if ( v9 == (__int64 *)v10 )
      return;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) != 170 )
    {
      v11 = (__int64 *)(v10 + 8);
      while ( v11 != v9 )
      {
        v12 = *v11++;
        if ( *(_WORD *)(v12 + 36) == 170 )
          goto LABEL_13;
      }
      return;
    }
  }
LABEL_13:
  v14 = *v9;
  if ( *(_WORD *)(*v9 + 36) != 170 )
  {
    v15 = v9 + 1;
    do
      v14 = *v15++;
    while ( *(_WORD *)(v14 + 36) != 170 );
  }
  v16 = *a2;
  v17 = a1[1];
  if ( *a2 == 4 )
  {
    v27 = sub_9ADE40(v17, *((_QWORD *)a2 + 1));
    if ( !v27 )
      return;
    v28 = *(unsigned int **)(v14 + 48);
    for ( i = &v28[*(unsigned int *)(v14 + 40)]; i != v28; ++v28 )
    {
      v30 = *v28;
      if ( (unsigned int)v30 <= 2 && v27 == dword_23DAF78[v30] )
        return;
    }
    v31 = *(_QWORD *)(*a1 + 64LL);
    v32 = *(void (**)())(*(_QWORD *)v31 + 72LL);
    v33 = sub_9AA3A0(v27);
    v38 = v34;
    v37 = v33;
    sub_B86A00(&v43, *((_QWORD *)a2 + 1) + 40LL);
    v39 = v43;
    v40 = v44;
    sub_B86A00(v41, a3 + 40);
    v35 = (__int64 *)v41[0];
    if ( v32 != nullsub_357 )
    {
      ((void (__fastcall *)(__int64, void *, void *, void *, __int64, _QWORD, char *, __int64))v32)(
        v31,
        v41[0],
        v41[1],
        v39,
        v40,
        a4,
        v37,
        v38);
      v35 = (__int64 *)v41[0];
    }
    if ( v35 != &v42 )
      operator delete(v35);
    goto LABEL_42;
  }
  if ( v16 == 5 )
  {
    v18 = sub_9AFF80(v17, *((_QWORD *)a2 + 1));
  }
  else
  {
    if ( v16 != 1 )
      return;
    v18 = a2[2];
  }
  if ( v18 )
  {
    v19 = *(unsigned int **)(v14 + 48);
    for ( j = &v19[*(unsigned int *)(v14 + 40)]; j != v19; ++v19 )
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( (unsigned int)v21 <= 2 )
          break;
        if ( j == ++v19 )
          goto LABEL_27;
      }
      if ( dword_23DAF78[v21] == v18 )
        return;
    }
LABEL_27:
    v22 = *(_QWORD *)(*a1 + 64LL);
    v23 = *(void (**)())(*(_QWORD *)v22 + 64LL);
    v24 = sub_9AA3A0(v18);
    v36 = v25;
    sub_B86A00(&v43, a3 + 40);
    v26 = (__int64 *)v43;
    if ( v23 == nullsub_356 )
    {
LABEL_28:
      if ( v26 != &v45 )
        operator delete(v26);
      return;
    }
    ((void (__fastcall *)(__int64, void *, __int64, char *, __int64, _QWORD))v23)(v22, v43, v44, v24, v36, a4);
LABEL_42:
    v26 = (__int64 *)v43;
    goto LABEL_28;
  }
}
