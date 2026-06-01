__int64 __fastcall sub_A48650(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  unsigned int v6; // r12d
  unsigned int *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  _QWORD *v15; // r12
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r15
  void *v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbp
  __int64 v29; // r15
  void *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // rbp
  _QWORD *v36; // r12
  void *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax

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
      v9 = 4LL * --v6 + *(_QWORD *)(a1 + 592);
      v10 = (*(_BYTE *)(v9 + 3) >> 4) & 3;
      if ( v10 == 1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 336) + 40LL) )
        {
          sub_A08A40((_QWORD *)a1, v6, 0);
          sub_9D7600(a1, *(_DWORD *)(4LL * v6 + *(_QWORD *)(a1 + 592)) & 0xFFFFFFF);
          goto LABEL_9;
        }
      }
      else if ( v10 != 2 )
      {
        if ( !v10 )
        {
          v7 = sub_A48580((_QWORD *)a1, v6);
          if ( v7 )
          {
            v8 = *(_QWORD *)(a1 + 568) + 24LL * *v7;
            sub_A08E70(a1, *(_DWORD *)(v8 + 12), v6, (int *)(*(_QWORD *)v8 + 40LL * v7[1]), 0);
            sub_9D7600(a1, *(_DWORD *)(*(_QWORD *)(a1 + 592) + 4LL * v6) & 0xFFFFFFF);
          }
        }
        goto LABEL_9;
      }
      sub_9D7600(a1, *(_DWORD *)v9 & 0xFFFFFFF);
LABEL_9:
      *(_DWORD *)(*(_QWORD *)(a1 + 856) + 4LL * v6) = *(_DWORD *)(a1 + 848);
      *(_DWORD *)(*(_QWORD *)(a1 + 824) + 4LL * v6) = *(_DWORD *)(a1 + 816);
      *(_DWORD *)(*(_QWORD *)(a1 + 880) + 4LL * v6) = *(_DWORD *)(a1 + 872);
    }
    while ( v6 != a2 );
  }
  v11 = *(_QWORD *)(a1 + 584);
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
      v11 = *(_QWORD *)(a1 + 584);
    }
    *(_DWORD *)(v11 - 4) = a2;
  }
  v17 = *(_QWORD *)(a1 + 592);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = a2;
  v18 = *(_QWORD *)(a1 + 600);
  if ( v18 )
  {
    v19 = 32LL * a2;
    v20 = 32LL * *(unsigned int *)(v18 - 4);
    v21 = v18 + v19;
    v22 = v18 + v20;
    if ( v19 != v20 )
    {
      do
      {
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v21);
        v24 = v21 + 16;
        v21 += 32;
        sub_182CBA0(v23, v24);
      }
      while ( v22 != v21 );
      v18 = *(_QWORD *)(a1 + 600);
    }
    *(_DWORD *)(v18 - 4) = a2;
  }
  v25 = *(_QWORD *)(a1 + 608);
  if ( v25 )
  {
    v26 = 32LL * a2;
    v27 = 32LL * *(unsigned int *)(v25 - 4);
    v28 = v25 + v26;
    v29 = v25 + v27;
    if ( v26 != v27 )
    {
      do
      {
        v30 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v28);
        v31 = v28 + 16;
        v28 += 32;
        sub_182CBA0(v30, v31);
      }
      while ( v29 != v28 );
      v25 = *(_QWORD *)(a1 + 608);
    }
    *(_DWORD *)(v25 - 4) = a2;
  }
  v32 = *(_QWORD *)(a1 + 632);
  if ( v32 )
  {
    v33 = 8LL * a2;
    v34 = 8LL * *(unsigned int *)(v32 - 4);
    v35 = (_QWORD *)(v32 + v33);
    v36 = (_QWORD *)(v32 + v34);
    if ( v33 != v34 )
    {
      do
      {
        while ( *v35 )
        {
          v37 = (void *)(*v35++ - 8LL);
          sub_186B220(v37);
          if ( v36 == v35 )
            goto LABEL_37;
        }
        ++v35;
      }
      while ( v36 != v35 );
LABEL_37:
      v32 = *(_QWORD *)(a1 + 632);
    }
    *(_DWORD *)(v32 - 4) = a2;
  }
  v38 = *(_QWORD *)(a1 + 640);
  if ( v38 )
    *(_DWORD *)(v38 - 4) = a2;
  v39 = *(_QWORD *)(a1 + 656);
  if ( v39 )
    *(_DWORD *)(v39 - 4) = a2;
  v40 = *(_QWORD *)(a1 + 616);
  if ( v40 )
    *(_DWORD *)(v40 - 4) = a2;
  result = *(_QWORD *)(a1 + 624);
  if ( result )
    *(_DWORD *)(result - 4) = a2;
  return result;
}

