__int64 __fastcall sub_784D70(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v14; // rdx
  unsigned int *v15; // rsi
  size_t v16; // rdx
  const void *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned int *v19; // rdi
  __int64 v20; // rax
  const void *v21; // rdi
  int v22; // r12d
  int v23; // ebp
  __int64 v24; // r13
  int v25; // ebp
  int v26; // eax

  v2 = *(_QWORD *)(a1 + 80);
  v3 = (__int64 *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v2 & 4) != 0 )
    v4 = v3[1];
  else
    v4 = *v3;
  v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 46 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 46 > 1 )
    {
      v11 = 1;
      v12 = 0;
      goto LABEL_10;
    }
    v5 = sub_B0D320(v5);
    if ( !v5 )
      goto LABEL_9;
  }
  v6 = sub_B14A40(v5);
  v7 = v6;
  if ( !v6 )
    goto LABEL_9;
  v8 = *(_QWORD *)(v6 + 40);
  v9 = *(_QWORD *)(a1 + 40);
  if ( (v9 & 7) != 0 || (v14 = v9 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    if ( (v8 & 7) == 0 )
    {
      v10 = v8 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v10 )
      {
        if ( **(_DWORD **)(v10 + 16) )
          goto LABEL_9;
      }
    }
  }
  else
  {
    v15 = *(unsigned int **)(v14 + 16);
    v16 = *v15;
    v17 = v15 + 4;
    if ( (v8 & 7) != 0 || (v18 = v8 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( v16 )
        goto LABEL_9;
    }
    else
    {
      v19 = *(unsigned int **)(v18 + 16);
      v20 = *v19;
      v21 = v19 + 4;
      if ( v16 != v20 || v16 && memcmp(v21, v17, v16) )
        goto LABEL_9;
    }
  }
  v22 = *(_DWORD *)(a1 + 24);
  if ( v22 < 0 )
  {
    v23 = *(_DWORD *)(v7 + 24);
    if ( v23 < 0 )
    {
      v24 = *(_QWORD *)(sub_798D40(a1) + 2152);
      v25 = sub_CAB1A0(v24, (unsigned int)v23);
      v26 = sub_CAB1A0(v24, (unsigned int)v22);
      v2 = *(_QWORD *)(a1 + 80);
      LOBYTE(v12) = v26 == v25;
      v11 = 2LL * (v26 == v25) + 1;
      goto LABEL_10;
    }
  }
LABEL_9:
  v2 = *(_QWORD *)(a1 + 80);
  v11 = 1;
  v12 = 0;
LABEL_10:
  *(_QWORD *)(a1 + 80) = v11 | v2 & 0xFFFFFFFFFFFFFFFCLL;
  return v12;
}

