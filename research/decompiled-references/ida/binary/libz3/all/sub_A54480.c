__int64 __fastcall sub_A54480(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // r13d
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  _QWORD *v15; // r13
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r15
  void *v23; // r14
  void *v24; // r14
  void *v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // r15
  void *v32; // r14
  void *v33; // r14
  void *v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rbp
  _QWORD *v40; // r13
  void *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    result = *(unsigned int *)(v4 - 4);
    v6 = result;
  }
  else
  {
    v6 = 0;
    result = 0;
  }
  if ( a2 == (_DWORD)result )
    return result;
  if ( (int)a2 < (int)v6 )
  {
    do
    {
      v9 = 4LL * --v6 + *(_QWORD *)(a1 + 720);
      v10 = (*(_BYTE *)(v9 + 3) >> 4) & 3;
      if ( v10 == 1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 464) + 40LL) )
        {
          sub_A0BF70((_QWORD *)a1, v6, 0);
          sub_9D7780(a1, *(_DWORD *)(4LL * v6 + *(_QWORD *)(a1 + 720)) & 0xFFFFFFF);
          goto LABEL_9;
        }
      }
      else if ( v10 != 2 )
      {
        if ( !v10 )
        {
          v7 = sub_A543B0((_QWORD *)a1, v6);
          if ( v7 )
          {
            v8 = *(_QWORD *)(a1 + 696) + 24LL * *v7;
            sub_A0C3A0(a1, *(_DWORD *)(v8 + 12), v6, (int *)(*(_QWORD *)v8 + 40LL * v7[1]), 0);
            sub_9D7780(a1, *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4LL * v6) & 0xFFFFFFF);
          }
        }
        goto LABEL_9;
      }
      sub_9D7780(a1, *(_DWORD *)v9 & 0xFFFFFFF);
LABEL_9:
      *(_DWORD *)(*(_QWORD *)(a1 + 984) + 4LL * v6) = *(_DWORD *)(a1 + 976);
      *(_DWORD *)(*(_QWORD *)(a1 + 952) + 4LL * v6) = *(_DWORD *)(a1 + 944);
      *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 4LL * v6) = *(_DWORD *)(a1 + 1000);
    }
    while ( v6 != a2 );
  }
  v11 = *(_QWORD *)(a1 + 712);
  if ( v11 )
  {
    v12 = 16LL * a2;
    v13 = 16LL * *(unsigned int *)(v11 - 4);
    v14 = (_QWORD *)(v11 + v12);
    v15 = (_QWORD *)(v11 + v13);
    if ( v12 != v13 )
    {
      do
      {
        while ( *v14 )
        {
          v16 = (void *)(*v14 - 8LL);
          v14 += 2;
          sub_186B220(v16);
          if ( v15 == v14 )
            goto LABEL_19;
        }
        v14 += 2;
      }
      while ( v15 != v14 );
LABEL_19:
      v11 = *(_QWORD *)(a1 + 712);
    }
    *(_DWORD *)(v11 - 4) = a2;
  }
  v17 = *(_QWORD *)(a1 + 720);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = a2;
  v18 = *(_QWORD *)(a1 + 728);
  if ( v18 )
  {
    v19 = 96LL * a2;
    v20 = v18 + v19;
    v21 = 96LL * *(unsigned int *)(v18 - 4);
    v22 = v18 + v21;
    if ( v19 != v21 )
    {
      do
      {
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 64);
        sub_182CBA0(v23, v20 + 80);
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20 + 32);
        sub_182CBA0(v24, v20 + 48);
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v20);
        v26 = v20 + 16;
        v20 += 96;
        sub_182CBA0(v25, v26);
      }
      while ( v22 != v20 );
      v18 = *(_QWORD *)(a1 + 728);
    }
    *(_DWORD *)(v18 - 4) = a2;
  }
  v27 = *(_QWORD *)(a1 + 736);
  if ( v27 )
  {
    v28 = 96LL * a2;
    v29 = v27 + v28;
    v30 = 96LL * *(unsigned int *)(v27 - 4);
    v31 = v27 + v30;
    if ( v28 != v30 )
    {
      do
      {
        v32 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v29 + 64);
        sub_182CBA0(v32, v29 + 80);
        v33 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v29 + 32);
        sub_182CBA0(v33, v29 + 48);
        v34 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v29);
        v35 = v29 + 16;
        v29 += 96;
        sub_182CBA0(v34, v35);
      }
      while ( v31 != v29 );
      v27 = *(_QWORD *)(a1 + 736);
    }
    *(_DWORD *)(v27 - 4) = a2;
  }
  v36 = *(_QWORD *)(a1 + 760);
  if ( v36 )
  {
    v37 = 8LL * a2;
    v38 = 8LL * *(unsigned int *)(v36 - 4);
    v39 = (_QWORD *)(v36 + v37);
    v40 = (_QWORD *)(v36 + v38);
    if ( v37 != v38 )
    {
      do
      {
        while ( *v39 )
        {
          v41 = (void *)(*v39++ - 8LL);
          sub_186B220(v41);
          if ( v40 == v39 )
            goto LABEL_37;
        }
        ++v39;
      }
      while ( v40 != v39 );
LABEL_37:
      v36 = *(_QWORD *)(a1 + 760);
    }
    *(_DWORD *)(v36 - 4) = a2;
  }
  v42 = *(_QWORD *)(a1 + 768);
  if ( v42 )
    *(_DWORD *)(v42 - 4) = a2;
  v43 = *(_QWORD *)(a1 + 784);
  if ( v43 )
    *(_DWORD *)(v43 - 4) = a2;
  v44 = *(_QWORD *)(a1 + 744);
  if ( v44 )
    *(_DWORD *)(v44 - 4) = a2;
  result = *(_QWORD *)(a1 + 752);
  if ( result )
    *(_DWORD *)(result - 4) = a2;
  return result;
}

