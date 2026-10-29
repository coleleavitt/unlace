void __fastcall sub_13C69E0(__int64 a1, __int64 *a2, int a3, int a4, __int64 *a5)
{
  void *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rsi
  _BYTE *v14; // rdi
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  bool v19; // sf
  __int64 v20; // rcx
  __int64 v21; // rax
  char *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rdx

  v9 = *(void **)(a1 + 48);
  v10 = *a2;
  v11 = a2[1];
  v12 = a2[2];
  *(_OWORD *)a2 = 0;
  *(_QWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 56) = v11;
  *(_QWORD *)(a1 + 64) = v12;
  a2[2] = 0;
  if ( v9 )
  {
    operator delete(v9);
    v10 = *(_QWORD *)(a1 + 48);
    v11 = *(_QWORD *)(a1 + 56);
  }
  v13 = *(__int64 **)(a1 + 88);
  v14 = *(_BYTE **)(a1 + 72);
  v15 = (v11 - v10) >> 4;
  v16 = *(unsigned int *)(a1 + 80);
  v17 = *(unsigned int *)(a1 + 96);
  v18 = v17 + 8 * ((char *)v13 - v14) - v16;
  if ( v15 > v18 )
  {
    if ( v14 )
    {
      memset(v14, 0, *(_QWORD *)(a1 + 104) - (_QWORD)v14);
      v13 = *(__int64 **)(a1 + 88);
      v17 = *(unsigned int *)(a1 + 96);
      v18 = v17 + 8LL * ((_QWORD)v13 - *(_QWORD *)(a1 + 72)) - *(unsigned int *)(a1 + 80);
    }
    sub_13C4990(a1 + 72, v13, v17, v15 - v18, 0);
  }
  else
  {
    v19 = (__int64)(v15 + v16) < 0;
    v20 = v15 + v16;
    v21 = v20 + 63;
    if ( !v19 )
      v21 = v20;
    v22 = &v14[8 * (v21 >> 6)];
    v23 = v20 % 64;
    if ( v23 < 0 )
    {
      *(_QWORD *)(a1 + 88) = v22 - 8;
      *(_DWORD *)(a1 + 96) = v23 + 64;
      if ( !v14 )
        goto LABEL_9;
      goto LABEL_8;
    }
    *(_QWORD *)(a1 + 88) = v22;
    *(_DWORD *)(a1 + 96) = v23;
    if ( v14 )
LABEL_8:
      memset(v14, 0, *(_QWORD *)(a1 + 104) - (_QWORD)v14);
  }
LABEL_9:
  v24 = *(unsigned int *)(a1 + 24);
  v25 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 112) = a3;
  *(_DWORD *)(a1 + 116) = a4;
  operator delete(v25, 8 * v24, 4);
  v26 = *a5;
  v27 = *((_DWORD *)a5 + 4);
  *a5 = 0;
  *(_QWORD *)(a1 + 8) = v26;
  v28 = a5[1];
  *(_DWORD *)(a1 + 24) = v27;
  *(_QWORD *)(a1 + 16) = v28;
  a5[1] = 0;
  *((_DWORD *)a5 + 4) = 0;
  sub_13C6060(a1);
}
