ClpPlusMinusOneMatrix *__fastcall ClpNetworkMatrix::reverseOrderedCopy(ClpNetworkMatrix *this)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  char *v5; // r15
  char *v6; // r14
  size_t v7; // rbx
  int v8; // esi
  int *v9; // rdx
  int *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  int *v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  int *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  int *v20; // r13
  int v21; // edx
  unsigned __int64 v22; // rax
  int v23; // ecx
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  char *v31; // rcx
  int v32; // edx
  char *v33; // rcx
  int v34; // edx
  ClpPlusMinusOneMatrix *v35; // r14

  v2 = *((int *)this + 28);
  if ( v2 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_18;
  v3 = operator new[](4 * v2);
  v4 = *((int *)this + 28);
  v5 = (char *)v3;
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_18;
  v6 = (char *)operator new[](4 * v4);
  v7 = 4LL * *((int *)this + 28);
  memset(v5, 0, v7);
  memset(v6, 0, v7);
  v8 = *((_DWORD *)this + 29);
  if ( v8 > 0 )
  {
    v9 = *((int **)this + 13);
    v10 = v9 + 2;
    v11 = (__int64)&v9[2 * (v8 - 1) + 2];
    while ( 1 )
    {
      ++*(_DWORD *)&v6[4 * *v9];
      ++*(_DWORD *)&v5[4 * v9[1]];
      v9 = v10;
      if ( (int *)v11 == v10 )
        break;
      v10 += 2;
    }
  }
  v12 = 2 * v8;
  if ( v12 > 0x1FFFFFFFFFFFFFFELL
    || (v13 = (int *)operator new[](4 * v12), v14 = *((_DWORD *)this + 28) + 1, v14 > 0x1FFFFFFFFFFFFFFELL)
    || (v15 = operator new[](4 * v14), v16 = *((int *)this + 28), v17 = (int *)v15, v16 > 0x1FFFFFFFFFFFFFFELL) )
  {
LABEL_18:
    __cxa_throw_bad_array_new_length();
  }
  v18 = operator new[](4 * v16);
  v19 = *((int *)this + 28);
  v20 = (int *)v18;
  if ( (int)v19 <= 0 )
  {
    v21 = 0;
  }
  else
  {
    v21 = 0;
    v22 = 0;
    do
    {
      v23 = *(_DWORD *)&v5[v22];
      v17[v22 / 4] = v21;
      *(_DWORD *)&v5[v22] = v21;
      v24 = v21 + v23;
      v25 = *(_DWORD *)&v6[v22];
      v20[v22 / 4] = v24;
      *(_DWORD *)&v6[v22] = v24;
      v22 += 4LL;
      v21 = v24 + v25;
    }
    while ( 4LL * (unsigned int)(v19 - 1) + 4 != v22 );
  }
  v26 = *((_DWORD *)this + 29);
  v17[v19] = v21;
  if ( v26 > 0 )
  {
    v27 = (unsigned int)(v26 - 1);
    v28 = *((_QWORD *)this + 13);
    v29 = 0;
    v30 = v27 + 1;
    do
    {
      v31 = &v6[4 * *(int *)(v28 + 8 * v29)];
      v32 = *(_DWORD *)v31;
      v13[*(int *)v31] = v29;
      *(_DWORD *)v31 = v32 + 1;
      v33 = &v5[4 * *(int *)(v28 + 8 * v29 + 4)];
      v34 = *(_DWORD *)v33;
      v13[*(int *)v33] = v29++;
      *(_DWORD *)v33 = v34 + 1;
    }
    while ( v30 != v29 );
  }
  operator delete[](v5);
  operator delete[](v6);
  v35 = (ClpPlusMinusOneMatrix *)operator new(0x90u);
  ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(v35);
  ClpPlusMinusOneMatrix::passInCopy(v35, *((_DWORD *)this + 28), *((_DWORD *)this + 29), 0, v13, v17, v20);
  return v35;
}

