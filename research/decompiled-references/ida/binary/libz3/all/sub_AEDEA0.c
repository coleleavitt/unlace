__int64 __fastcall sub_AEDEA0(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edx
  _DWORD *v7; // rsi
  __int64 v8; // rdi
  int v9; // ebp
  unsigned int v10; // ebp
  __int64 v11; // r8
  int *v12; // r9
  __int64 result; // rax
  unsigned int v14; // edx
  unsigned int v15; // r10d
  __int64 v16; // rcx
  unsigned int *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  int v20; // edx
  int v21; // r14d
  __int64 v22; // rdx
  int v23; // r14d
  unsigned int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // r12
  int v33; // ebp
  int v34; // r13d
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned int *v38; // rdx
  unsigned int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rax

  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    v6 = *(_DWORD *)(v4 - 4) - a2;
    v7 = (_DWORD *)(v4 + 8LL * v6);
    if ( v5 )
      *(_DWORD *)(v5 - 4) = *v7;
    v8 = *(_QWORD *)(a1 + 128);
    *(_DWORD *)(a1 + 48) = v7[1];
    *(_DWORD *)(v4 - 4) = v6;
    if ( v8 )
    {
LABEL_5:
      v9 = *(_DWORD *)(v8 - 4);
      goto LABEL_6;
    }
  }
  else
  {
    v43 = (unsigned int)-a2;
    if ( v5 )
      *(_DWORD *)(v5 - 4) = *(_DWORD *)(8 * v43);
    v8 = *(_QWORD *)(a1 + 128);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)&byte_4[8 * v43];
    if ( v8 )
      goto LABEL_5;
  }
  v9 = 0;
LABEL_6:
  v10 = v9 - a2;
  v11 = *(_QWORD *)(a1 + 200);
  v12 = (int *)(v8 + 12LL * v10);
  result = *(_QWORD *)(a1 + 104);
  if ( v11 )
  {
    v14 = *(_DWORD *)(v11 - 4);
    v15 = v12[1];
    if ( v15 < v14 )
    {
      v16 = v14 - 1 - v15;
      v17 = (unsigned int *)(v11 + 4LL * (v14 - 1));
      v18 = (__int64)&v17[-v16 - 1];
      do
      {
        v19 = *v17--;
        *(_BYTE *)(result + 32 * v19 + 24) = 0;
      }
      while ( (unsigned int *)v18 != v17 );
    }
    *(_DWORD *)(v11 - 4) = v15;
  }
  v20 = *v12;
  *(_DWORD *)(a1 + 192) = v12[2];
  if ( result )
  {
    v21 = *(_DWORD *)(result - 4) - v20;
    if ( v21 )
    {
      v34 = 0;
      do
      {
        v35 = *(_QWORD *)(a1 + 112);
        v36 = *(_QWORD *)(a1 + 120);
        while ( 1 )
        {
          v37 = 32LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
LABEL_32:
          v38 = (unsigned int *)(result + v37);
          v39 = v38[1];
          v40 = *(_QWORD *)(v35 + 8LL * *v38);
          --*(_DWORD *)(v40 - 4);
          --*(_DWORD *)(*(_QWORD *)(v36 + 8LL * v39) - 4LL);
          v41 = 0x1FFFFFFFE0LL;
          if ( result )
            v41 = 32LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
          v42 = *(_QWORD *)(result + v41 + 16);
          if ( v42 )
            break;
          ++v34;
          --*(_DWORD *)(result - 4);
          if ( v34 == v21 )
            goto LABEL_36;
        }
        ++v34;
        sub_186B220((void *)(v42 - 8));
        result = *(_QWORD *)(a1 + 104);
        --*(_DWORD *)(result - 4);
      }
      while ( v34 != v21 );
LABEL_36:
      v8 = *(_QWORD *)(a1 + 128);
    }
  }
  else
  {
    v21 = -v20;
    if ( v20 )
    {
      v35 = *(_QWORD *)(a1 + 112);
      v36 = *(_QWORD *)(a1 + 120);
      v34 = 0;
      v37 = 0x1FFFFFFFE0LL;
      goto LABEL_32;
    }
  }
  if ( v8 )
    *(_DWORD *)(v8 - 4) = v10;
  if ( a2 )
  {
    v22 = *(_QWORD *)(a1 + 440);
    if ( v22 )
      v23 = *(_DWORD *)(v22 - 4);
    else
      v23 = 0;
    v24 = v23 - a2;
    v25 = *(_QWORD *)(a1 + 432);
    v26 = *(unsigned int *)(v22 + 4LL * v24);
    v27 = 8 * v26;
    v28 = v25 + 8 * v26;
    if ( v25 )
    {
      v29 = 8LL * *(unsigned int *)(v25 - 4);
      v30 = v25 + v29;
      if ( v29 == v27 )
        goto LABEL_22;
    }
    else
    {
      v30 = 0;
      if ( !v27 )
        goto LABEL_23;
    }
    do
    {
      v31 = *(_QWORD *)(v30 - 8);
      v30 -= 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    while ( v28 != v30 );
    v25 = *(_QWORD *)(a1 + 432);
    v22 = *(_QWORD *)(a1 + 440);
    if ( !v25 )
    {
LABEL_23:
      if ( v22 )
        *(_DWORD *)(v22 - 4) = v24;
      v32 = a1 + 448;
      v33 = 0;
      do
      {
        ++v33;
        result = sub_180C2E0(v32);
      }
      while ( a2 != v33 );
      return result;
    }
LABEL_22:
    *(_DWORD *)(v25 - 4) = v26;
    goto LABEL_23;
  }
  return result;
}

