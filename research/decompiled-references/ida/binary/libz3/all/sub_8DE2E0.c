__int64 __fastcall sub_8DE2E0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned int *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // r13d
  __int64 v12; // r8
  int *v13; // r10
  unsigned int v14; // edx
  unsigned int v15; // r11d
  __int64 v16; // rcx
  unsigned int *v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // edx
  int v21; // ebx
  int v22; // r14d
  void *v23; // r13
  __int64 v24; // r12
  __int64 v25; // rdx
  unsigned int *v26; // rdx
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v32; // rax
  void *v34; // [rsp+10h] [rbp-48h]
  int v35; // [rsp+18h] [rbp-40h]
  int v36; // [rsp+1Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 704);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = v4 - a2;
  v6 = (unsigned int *)(v3 + 12LL * v5);
  sub_8DE070(a1, *v6);
  v7 = *(_QWORD *)(a1 + 664);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = v6[1];
  *(_DWORD *)(a1 + 672) = v6[2];
  v8 = *(_QWORD *)(a1 + 704);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = v5;
  v9 = *(_QWORD *)(a1 + 248);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 272);
    v35 = *(_DWORD *)(v9 - 4);
    if ( v10 )
    {
LABEL_9:
      v11 = *(_DWORD *)(v10 - 4);
      goto LABEL_10;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 272);
    v35 = 0;
    if ( v10 )
      goto LABEL_9;
  }
  v11 = 0;
LABEL_10:
  v12 = *(_QWORD *)(a1 + 344);
  v36 = v11 - a2;
  v13 = (int *)(v10 + 12LL * (v11 - a2));
  if ( v12 )
  {
    v14 = *(_DWORD *)(v12 - 4);
    v15 = v13[1];
    if ( v15 < v14 )
    {
      v16 = v14 - 1 - v15;
      v17 = (unsigned int *)(v12 + 4LL * (v14 - 1));
      v18 = (__int64)&v17[-v16 - 1];
      do
      {
        v19 = *v17--;
        *(_BYTE *)(v9 + 56 * v19 + 48) = 0;
      }
      while ( (unsigned int *)v18 != v17 );
    }
    *(_DWORD *)(v12 - 4) = v15;
  }
  v20 = *v13;
  *(_DWORD *)(a1 + 336) = v13[2];
  if ( v9 )
  {
    v21 = *(_DWORD *)(v9 - 4) - v20;
    if ( v21 )
    {
      v22 = 0;
      do
      {
        while ( 1 )
        {
          v25 = 56LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
LABEL_20:
          v26 = (unsigned int *)(v9 + v25);
          v27 = v26[1];
          v28 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * *v26);
          --*(_DWORD *)(v28 - 4);
          v29 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * v27);
          --*(_DWORD *)(v29 - 4);
          if ( !v9 )
            break;
          v23 = qword_1C7F2C0;
          ++v22;
          v24 = v9 + 56LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
          sub_182CBA0(qword_1C7F2C0, v24 + 8);
          sub_182CBA0(v23, v24 + 24);
          v9 = *(_QWORD *)(a1 + 248);
          --*(_DWORD *)(v9 - 4);
          if ( v21 == v22 )
            goto LABEL_22;
        }
        ++v22;
        v34 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, 0x37FFFFFFD0LL);
        sub_182CBA0(v34, 0x37FFFFFFE0LL);
        v9 = *(_QWORD *)(a1 + 248);
        --*(_DWORD *)(v9 - 4);
      }
      while ( v22 != v21 );
LABEL_22:
      v30 = *(_QWORD *)(a1 + 272);
      if ( v30 )
        *(_DWORD *)(v30 - 4) = v36;
    }
    else if ( v10 )
    {
      *(_DWORD *)(v10 - 4) = v36;
    }
    v20 = *(_DWORD *)(v9 - 4);
  }
  else
  {
    v21 = -v20;
    if ( v20 )
    {
      v22 = 0;
      v25 = 0x37FFFFFFC8LL;
      goto LABEL_20;
    }
    if ( v10 )
      *(_DWORD *)(v10 - 4) = v36;
  }
  if ( v20 != v35 )
  {
    if ( *(_DWORD *)(a1 + 2488) )
    {
      sub_8AAF50(a1 + 824);
      v32 = *(_QWORD *)(a1 + 816);
      *(_DWORD *)(a1 + 2488) = 0;
      if ( v32 )
        *(_DWORD *)(v32 - 4) = 0;
    }
  }
  return sub_965AE0(a1, a2);
}

