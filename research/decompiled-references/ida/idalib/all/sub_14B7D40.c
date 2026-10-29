char __fastcall sub_14B7D40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // r12
  _QWORD *v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rax
  char *v11; // rsi
  char *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // r8d
  char *v18; // rdx
  int v19; // eax
  char *v20; // rdx
  int v21; // eax
  __int16 v22; // ax
  int *v23; // rsi
  unsigned __int16 v24; // cx
  unsigned int v25; // eax
  unsigned __int16 v26; // di
  __int64 v27; // rdx
  unsigned __int16 v28; // cx
  int v29; // eax
  unsigned __int16 v31; // cx
  unsigned int v32; // eax
  unsigned __int16 v33; // di
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx

  v7 = *(__int64 **)(a1 + 24);
  v8 = *(_QWORD **)(a1 + 8);
  v9 = 2 * v7[1] - 1;
  v10 = v8[16];
  v8[26] += 24 * v9;
  v11 = (char *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v12 = &v11[24 * v9];
  if ( v8[17] >= (unsigned __int64)v12 && v10 )
    v8[16] = v12;
  else
    v11 = (char *)sub_986170((__int64)(v8 + 16), 24 * v9, 24 * v9, 3, 24 * v9, a6);
  v13 = *v7;
  v14 = v7[1];
  v15 = *v7 + v14;
  if ( *v7 != v15 )
  {
    v16 = 2 * v14 - 2;
    v17 = 0;
    do
    {
      v18 = &v11[24 * v17];
      *(_QWORD *)v18 = 0;
      *((_DWORD *)v18 + 4) = 8;
      v19 = *(_DWORD *)(a1 + 16);
      *((_DWORD *)v18 + 1) = 1;
      *(_DWORD *)v18 = v19;
      *((_QWORD *)v18 + 1) = v13;
      if ( v17 != v16 )
      {
        v20 = &v11[24 * (v17 + 1)];
        *(_QWORD *)v20 = 0;
        *((_DWORD *)v20 + 4) = 66;
        v21 = *(_DWORD *)(a1 + 16);
        *((_QWORD *)v20 + 1) = 0;
        *(_DWORD *)v20 = v21;
      }
      ++v13;
      v17 += 2;
    }
    while ( v15 != v13 );
  }
  sub_14368B0(*(_QWORD *)(a1 + 8), v11, (unsigned int)v9, 1u, 0, 1u);
  v22 = *(_WORD *)(a1 + 32);
  v23 = (int *)(a1 + 16);
  if ( v22 == 22 )
  {
    ++*(_WORD *)(a1 + 88);
    goto LABEL_24;
  }
  if ( v22 == 23 )
  {
    v28 = *(_WORD *)(a1 + 88);
    if ( !v28 )
      goto LABEL_24;
    v35 = *(_DWORD *)(a1 + 2792);
    if ( !v35 )
    {
LABEL_49:
      *(_WORD *)(a1 + 88) = v28 - 1;
      goto LABEL_24;
    }
    v36 = *(_QWORD *)(a1 + 2784) + 24LL * v35 - 24;
    while ( 1 )
    {
      if ( v28 == *(_WORD *)(v36 + 14) )
      {
        if ( *(_DWORD *)(v36 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_44;
      }
      else if ( v28 > *(_WORD *)(v36 + 14) )
      {
        goto LABEL_44;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v36 + 16) && *(_WORD *)(a1 + 92) <= *(_WORD *)(v36 + 18) )
        goto LABEL_49;
LABEL_44:
      --v35;
      v36 -= 24;
      *(_DWORD *)(a1 + 2792) = v35;
      if ( !v35 )
        goto LABEL_49;
    }
  }
  if ( (unsigned __int16)(v22 - 20) <= 1u )
  {
    v24 = *(_WORD *)(a1 + 90);
    if ( v22 == 20 )
    {
      *(_WORD *)(a1 + 90) = v24 + 1;
    }
    else if ( v24 )
    {
      v25 = *(_DWORD *)(a1 + 2792);
      if ( v25 )
      {
        v26 = *(_WORD *)(a1 + 88);
        v27 = *(_QWORD *)(a1 + 2784) + 24LL * v25 - 24;
        do
        {
          if ( v26 == *(_WORD *)(v27 + 14) )
          {
            if ( *(_DWORD *)(v27 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_17;
          }
          else if ( v26 > *(_WORD *)(v27 + 14) )
          {
            goto LABEL_17;
          }
          if ( *(_WORD *)(v27 + 16) >= v24 && *(_WORD *)(a1 + 92) <= *(_WORD *)(v27 + 18) )
            break;
LABEL_17:
          --v25;
          v27 -= 24;
          *(_DWORD *)(a1 + 2792) = v25;
        }
        while ( v25 );
      }
      *(_WORD *)(a1 + 90) = v24 - 1;
    }
    goto LABEL_24;
  }
  if ( (unsigned __int16)(v22 - 24) <= 1u )
  {
    v31 = *(_WORD *)(a1 + 92);
    if ( v22 == 24 )
    {
      *(_WORD *)(a1 + 92) = v31 + 1;
    }
    else if ( v31 )
    {
      v32 = *(_DWORD *)(a1 + 2792);
      if ( v32 )
      {
        v33 = *(_WORD *)(a1 + 88);
        v34 = *(_QWORD *)(a1 + 2784) + 24LL * v32 - 24;
        do
        {
          if ( v33 == *(_WORD *)(v34 + 14) )
          {
            if ( *(_DWORD *)(v34 + 16) == *(_DWORD *)(a1 + 90) )
              goto LABEL_34;
          }
          else if ( v33 > *(_WORD *)(v34 + 14) )
          {
            goto LABEL_34;
          }
          if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v34 + 16) && *(_WORD *)(v34 + 18) >= v31 )
            break;
LABEL_34:
          --v32;
          v34 -= 24;
          *(_DWORD *)(a1 + 2792) = v32;
        }
        while ( v32 );
      }
      *(_WORD *)(a1 + 92) = v31 - 1;
    }
LABEL_24:
    v29 = *(_DWORD *)(a1 + 16);
    goto LABEL_25;
  }
  if ( (unsigned __int16)(v22 - 14) <= 1u )
    goto LABEL_24;
  if ( (unsigned __int16)(v22 - 17) <= 2u )
    goto LABEL_24;
  if ( v22 == 3 )
    goto LABEL_24;
  v23 = (int *)(a1 + 16);
  if ( !sub_10CCDE0(v22) )
    goto LABEL_24;
  v29 = *(_DWORD *)(a1 + 20);
  if ( !v29 )
    v29 = *(_DWORD *)(a1 + 16);
LABEL_25:
  *(_DWORD *)(a1 + 40) = v29;
  return sub_14634E0(*(__int64 **)(a1 + 8), v23);
}
