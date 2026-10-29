__int64 __fastcall sub_AEDB10(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rcx
  _DWORD *v5; // rax
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // r9
  __int64 v11; // rax
  int *v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // r10d
  __int64 v15; // rcx
  unsigned int *v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rdi
  int v33; // r12d
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rdx
  unsigned int *v37; // rdx
  unsigned int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdi

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v4 = (unsigned int)(*(_DWORD *)(v2 - 4) - 1);
    v5 = (_DWORD *)(v2 + 8 * v4);
    if ( v3 )
      *(_DWORD *)(v3 - 4) = *v5;
    v6 = v5[1];
    goto LABEL_5;
  }
  if ( v3 )
  {
    LODWORD(v4) = -1;
    *(_DWORD *)(v3 - 4) = MEMORY[0x7FFFFFFF8];
    v6 = MEMORY[0x7FFFFFFFC];
LABEL_5:
    *(_DWORD *)(a1 + 48) = v6;
    *(_DWORD *)(v2 - 4) = v4;
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 48) = MEMORY[0x7FFFFFFFC];
LABEL_6:
  v7 = *(_QWORD *)(a1 + 128);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 - 4) - 1;
    v9 = 12LL * v8;
  }
  else
  {
    v9 = 0xBFFFFFFF4LL;
    v8 = -1;
  }
  v10 = *(_QWORD *)(a1 + 200);
  v11 = *(_QWORD *)(a1 + 104);
  v12 = (int *)(v7 + v9);
  if ( v10 )
  {
    v13 = *(_DWORD *)(v10 - 4);
    v14 = v12[1];
    if ( v14 < v13 )
    {
      v15 = v13 - 1 - v14;
      v16 = (unsigned int *)(v10 + 4LL * (v13 - 1));
      v17 = (__int64)&v16[-v15 - 1];
      do
      {
        v18 = *v16--;
        *(_BYTE *)(v11 + 32 * v18 + 24) = 0;
      }
      while ( v16 != (unsigned int *)v17 );
    }
    *(_DWORD *)(v10 - 4) = v14;
  }
  v19 = *v12;
  *(_DWORD *)(a1 + 192) = v12[2];
  if ( v11 )
  {
    v20 = *(_DWORD *)(v11 - 4) - v19;
    if ( v20 )
    {
      v33 = 0;
      do
      {
        v34 = *(_QWORD *)(a1 + 112);
        v35 = *(_QWORD *)(a1 + 120);
        while ( 1 )
        {
          v36 = 32LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
LABEL_31:
          v37 = (unsigned int *)(v11 + v36);
          v38 = v37[1];
          v39 = *(_QWORD *)(v34 + 8LL * *v37);
          --*(_DWORD *)(v39 - 4);
          --*(_DWORD *)(*(_QWORD *)(v35 + 8LL * v38) - 4LL);
          v40 = 0x1FFFFFFFE0LL;
          if ( v11 )
            v40 = 32LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
          v41 = *(_QWORD *)(v11 + v40 + 16);
          if ( v41 )
            break;
          ++v33;
          --*(_DWORD *)(v11 - 4);
          if ( v33 == v20 )
            goto LABEL_35;
        }
        ++v33;
        sub_186B220((void *)(v41 - 8));
        v11 = *(_QWORD *)(a1 + 104);
        --*(_DWORD *)(v11 - 4);
      }
      while ( v33 != v20 );
LABEL_35:
      v7 = *(_QWORD *)(a1 + 128);
    }
  }
  else
  {
    v20 = -v19;
    if ( v19 )
    {
      v34 = *(_QWORD *)(a1 + 112);
      v35 = *(_QWORD *)(a1 + 120);
      v33 = 0;
      v36 = 0x1FFFFFFFE0LL;
      goto LABEL_31;
    }
  }
  if ( v7 )
    *(_DWORD *)(v7 - 4) = v8;
  v21 = *(_QWORD *)(a1 + 440);
  if ( v21 )
  {
    v22 = (unsigned int)(*(_DWORD *)(v21 - 4) - 1);
    v23 = 4 * v22;
  }
  else
  {
    v23 = 0x3FFFFFFFCLL;
    LODWORD(v22) = -1;
  }
  v24 = *(unsigned int *)(v21 + v23);
  v25 = *(_QWORD *)(a1 + 432);
  v26 = v24;
  v27 = 8 * v24;
  v28 = v25 + v27;
  if ( v25 )
  {
    v29 = 8LL * *(unsigned int *)(v25 - 4);
    v30 = v25 + v29;
    if ( v29 == v27 )
    {
LABEL_23:
      *(_DWORD *)(v25 - 4) = v26;
      goto LABEL_24;
    }
    do
    {
LABEL_21:
      v31 = *(_QWORD *)(v30 - 8);
      v30 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    while ( v28 != v30 );
    v25 = *(_QWORD *)(a1 + 432);
    v21 = *(_QWORD *)(a1 + 440);
    if ( !v25 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v30 = 0;
  if ( v27 )
    goto LABEL_21;
LABEL_24:
  if ( v21 )
    *(_DWORD *)(v21 - 4) = v22;
  return sub_180C2E0(a1 + 448);
}

