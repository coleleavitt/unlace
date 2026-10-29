__int64 __fastcall sub_8DF1C0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  int v5; // r12d
  unsigned int v6; // r12d
  unsigned int *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  int v12; // r9d
  int v13; // r8d
  unsigned int v14; // r8d
  __int64 v15; // r10
  int *v16; // r11
  unsigned int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // rcx
  unsigned int *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // eax
  int v25; // esi
  int v26; // r10d
  __int64 v27; // r12
  __int64 v28; // r11
  int v29; // ecx
  unsigned int *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v34; // rax
  int v35; // esi
  __int64 v36; // r12
  int v37; // ecx
  __int64 v38; // r11
  __int64 v39; // rax

  v4 = *(_QWORD *)(a1 + 680);
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = v5 - a2;
  v7 = (unsigned int *)(v4 + 12LL * v6);
  sub_8DEF50(a1, *v7);
  v8 = *(_QWORD *)(a1 + 640);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = v7[1];
  *(_DWORD *)(a1 + 648) = v7[2];
  v9 = *(_QWORD *)(a1 + 680);
  if ( v9 )
    *(_DWORD *)(v9 - 4) = v6;
  v10 = *(_QWORD *)(a1 + 224);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 248);
    v12 = *(_DWORD *)(v10 - 4);
    if ( v11 )
    {
LABEL_9:
      v13 = *(_DWORD *)(v11 - 4);
      goto LABEL_10;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 248);
    v12 = 0;
    if ( v11 )
      goto LABEL_9;
  }
  v13 = 0;
LABEL_10:
  v14 = v13 - a2;
  v15 = *(_QWORD *)(a1 + 320);
  v16 = (int *)(v11 + 12LL * v14);
  if ( v15 )
  {
    v17 = *(_DWORD *)(v15 - 4);
    v18 = v16[1];
    if ( v18 < v17 )
    {
      v19 = v17 - 1 - v18;
      v20 = (unsigned int *)(v15 + 4LL * (v17 - 1));
      v21 = (__int64)&v20[-v19 - 1];
      do
      {
        v22 = *v20--;
        *(_BYTE *)(v10 + 24 * v22 + 20) = 0;
      }
      while ( (unsigned int *)v21 != v20 );
    }
    *(_DWORD *)(v15 - 4) = v18;
  }
  v23 = *v16;
  *(_DWORD *)(a1 + 312) = v16[2];
  if ( v10 )
  {
    v24 = *(_DWORD *)(v10 - 4);
    v25 = v24;
    v26 = v24 - v23;
    if ( v24 != v23 )
    {
      v27 = *(_QWORD *)(a1 + 232);
      v28 = *(_QWORD *)(a1 + 240);
      v29 = 0;
      while ( 1 )
      {
        ++v29;
        v30 = (unsigned int *)(v10 + 24LL * (unsigned int)(v25 - 1));
        v31 = *(_QWORD *)(v28 + 8LL * v30[1]);
        v32 = *(_QWORD *)(v27 + 8LL * *v30);
        --*(_DWORD *)(v32 - 4);
        --*(_DWORD *)(v31 - 4);
        v24 = *(_DWORD *)(v10 - 4) - 1;
        *(_DWORD *)(v10 - 4) = v24;
        if ( v26 == v29 )
          break;
        v25 = v24;
      }
    }
    goto LABEL_20;
  }
  v35 = -v23;
  if ( v23 )
  {
    v36 = *(_QWORD *)(a1 + 232);
    v37 = 0;
    v38 = *(_QWORD *)(a1 + 240);
    do
    {
      ++v37;
      v39 = *(_QWORD *)(v38 + 8LL * MEMORY[0x17FFFFFFEC]);
      --*(_DWORD *)(*(_QWORD *)(v36 + 8LL * MEMORY[0x17FFFFFFE8]) - 4LL);
      --*(_DWORD *)(v39 - 4);
      v24 = --MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    while ( v37 != v35 );
LABEL_20:
    if ( v11 )
    {
      *(_DWORD *)(v11 - 4) = v14;
      v24 = *(_DWORD *)(v10 - 4);
    }
    goto LABEL_22;
  }
  if ( v11 )
    *(_DWORD *)(v11 - 4) = v14;
  v24 = 0;
LABEL_22:
  if ( v24 != v12 )
  {
    if ( *(_DWORD *)(a1 + 2464) )
    {
      sub_8AAF50(a1 + 800);
      v34 = *(_QWORD *)(a1 + 792);
      *(_DWORD *)(a1 + 2464) = 0;
      if ( v34 )
        *(_DWORD *)(v34 - 4) = 0;
    }
  }
  return sub_965AE0(a1, a2);
}

