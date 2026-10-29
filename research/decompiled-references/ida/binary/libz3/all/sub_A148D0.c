__int64 __fastcall sub_A148D0(__int64 a1, unsigned int a2)
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
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r15
  void *v23; // r14
  void *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // r15
  void *v31; // r14
  void *v32; // r14
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // rbp
  _QWORD *v38; // r13
  void *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax

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
      v9 = 4LL * --v6 + *(_QWORD *)(a1 + 656);
      v10 = (*(_BYTE *)(v9 + 3) >> 4) & 3;
      if ( v10 == 1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 400) + 40LL) )
        {
          sub_A05530((_QWORD *)a1, v6, 0);
          sub_9D7480(a1, *(_DWORD *)(4LL * v6 + *(_QWORD *)(a1 + 656)) & 0xFFFFFFF);
          goto LABEL_9;
        }
      }
      else if ( v10 != 2 )
      {
        if ( !v10 )
        {
          v7 = sub_A14800((_QWORD *)a1, v6);
          if ( v7 )
          {
            v8 = *(_QWORD *)(a1 + 632) + 24LL * *v7;
            sub_A05960(a1, *(_DWORD *)(v8 + 12), v6, (int *)(*(_QWORD *)v8 + 40LL * v7[1]), 0);
            sub_9D7480(a1, *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4LL * v6) & 0xFFFFFFF);
          }
        }
        goto LABEL_9;
      }
      sub_9D7480(a1, *(_DWORD *)v9 & 0xFFFFFFF);
LABEL_9:
      *(_DWORD *)(*(_QWORD *)(a1 + 920) + 4LL * v6) = *(_DWORD *)(a1 + 912);
      *(_DWORD *)(*(_QWORD *)(a1 + 888) + 4LL * v6) = *(_DWORD *)(a1 + 880);
      *(_DWORD *)(*(_QWORD *)(a1 + 944) + 4LL * v6) = *(_DWORD *)(a1 + 936);
    }
    while ( v6 != a2 );
  }
  v11 = *(_QWORD *)(a1 + 648);
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
      v11 = *(_QWORD *)(a1 + 648);
    }
    *(_DWORD *)(v11 - 4) = a2;
  }
  v17 = *(_QWORD *)(a1 + 656);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = a2;
  v18 = *(_QWORD *)(a1 + 664);
  if ( v18 )
  {
    v19 = (unsigned __int64)a2 << 6;
    v20 = (unsigned __int64)*(unsigned int *)(v18 - 4) << 6;
    v21 = v18 + v19;
    v22 = v18 + v20;
    if ( v19 != v20 )
    {
      do
      {
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v21 + 32);
        sub_182CBA0(v23, v21 + 48);
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v21);
        v25 = v21 + 16;
        v21 += 64;
        sub_182CBA0(v24, v25);
      }
      while ( v22 != v21 );
      v18 = *(_QWORD *)(a1 + 664);
    }
    *(_DWORD *)(v18 - 4) = a2;
  }
  v26 = *(_QWORD *)(a1 + 672);
  if ( v26 )
  {
    v27 = (unsigned __int64)a2 << 6;
    v28 = (unsigned __int64)*(unsigned int *)(v26 - 4) << 6;
    v29 = v26 + v27;
    v30 = v26 + v28;
    if ( v27 != v28 )
    {
      do
      {
        v31 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v29 + 32);
        sub_182CBA0(v31, v29 + 48);
        v32 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v29);
        v33 = v29 + 16;
        v29 += 64;
        sub_182CBA0(v32, v33);
      }
      while ( v30 != v29 );
      v26 = *(_QWORD *)(a1 + 672);
    }
    *(_DWORD *)(v26 - 4) = a2;
  }
  v34 = *(_QWORD *)(a1 + 696);
  if ( v34 )
  {
    v35 = 8LL * a2;
    v36 = 8LL * *(unsigned int *)(v34 - 4);
    v37 = (_QWORD *)(v34 + v35);
    v38 = (_QWORD *)(v34 + v36);
    if ( v35 != v36 )
    {
      do
      {
        while ( *v37 )
        {
          v39 = (void *)(*v37++ - 8LL);
          sub_186B220(v39);
          if ( v38 == v37 )
            goto LABEL_37;
        }
        ++v37;
      }
      while ( v38 != v37 );
LABEL_37:
      v34 = *(_QWORD *)(a1 + 696);
    }
    *(_DWORD *)(v34 - 4) = a2;
  }
  v40 = *(_QWORD *)(a1 + 704);
  if ( v40 )
    *(_DWORD *)(v40 - 4) = a2;
  v41 = *(_QWORD *)(a1 + 720);
  if ( v41 )
    *(_DWORD *)(v41 - 4) = a2;
  v42 = *(_QWORD *)(a1 + 680);
  if ( v42 )
    *(_DWORD *)(v42 - 4) = a2;
  result = *(_QWORD *)(a1 + 688);
  if ( result )
    *(_DWORD *)(result - 4) = a2;
  return result;
}

