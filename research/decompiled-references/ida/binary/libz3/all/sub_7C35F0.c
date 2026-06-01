void __fastcall sub_7C35F0(__int64 a1)
{
  unsigned int *v2; // rdi
  unsigned int *v3; // r9
  __int64 v4; // r11
  char v5; // r8
  unsigned int *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r12
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned int v27; // r13d
  char v28; // al
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // esi
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h]

  v2 = *(unsigned int **)(a1 + 800);
  if ( !v2 || (v3 = &v2[*(v2 - 1)], v3 == v2) )
  {
LABEL_13:
    v10 = 0;
    v11 = 0;
LABEL_14:
    if ( v2 )
    {
      while ( v10 < *(v2 - 1) )
      {
        v12 = *(_QWORD *)(a1 + 792);
        if ( !v12 )
          goto LABEL_43;
        v13 = v2[v10];
        if ( (unsigned int)v13 >= *(_DWORD *)(v12 - 4) )
          goto LABEL_43;
        v14 = (__int64 *)(v12 + 8 * v13);
        v15 = *v14;
        v16 = -*v14;
        if ( *v14 > 0 )
          v16 = *v14;
        v17 = v16;
        *(_BYTE *)(a1 + 996) |= v16 > 0xFFFFFFFFLL;
        if ( !(_DWORD)v16 )
        {
LABEL_43:
          ++v10;
          goto LABEL_14;
        }
        v18 = *(_DWORD *)(a1 + 808);
        if ( v18 < (unsigned int)v16 )
        {
          v19 = v18;
          v17 = *(_DWORD *)(a1 + 808);
          if ( v15 <= 0 )
            v19 = -(__int64)v18;
          *v14 = v19;
        }
        if ( v11 )
          v11 = sub_182B840(v11, v17);
        else
          v11 = v17;
        ++v10;
        if ( v11 == 1 )
          return;
        v2 = *(unsigned int **)(a1 + 800);
        if ( !v2 )
          break;
      }
    }
    if ( v11 > 1 )
    {
      v20 = *(_QWORD *)(a1 + 824);
      if ( v20 )
      {
        do
        {
          v21 = *(_DWORD *)(v20 - 4);
          if ( !v21 )
            break;
          v31 = v21 - 1;
          v32 = *(_DWORD *)(v20 + 4LL * v31);
          *(_DWORD *)(v20 - 4) = v31;
          *(_BYTE *)(*(_QWORD *)(a1 + 816) + v32) = 0;
          v20 = *(_QWORD *)(a1 + 824);
        }
        while ( v20 );
        v2 = *(unsigned int **)(a1 + 800);
      }
      if ( v2 )
      {
        v22 = *(v2 - 1);
        if ( !(_DWORD)v22 )
          goto LABEL_41;
        v23 = 4 * v22;
        v24 = 0;
        LODWORD(v22) = 0;
        v34 = v23;
        do
        {
          v25 = v2[v24 / 4];
          v26 = *(_QWORD *)(*(_QWORD *)(a1 + 792) + 8 * v25);
          v27 = v2[v24 / 4];
          v33 = 8 * v25;
          v28 = sub_7C2CC0(a1, v25);
          v2 = *(unsigned int **)(a1 + 800);
          if ( v28 == 1 )
          {
            if ( v26 )
            {
              *(__int64 *)(*(_QWORD *)(a1 + 792) + v33) /= (int)v11;
              v29 = (unsigned int)v22;
              LODWORD(v22) = v22 + 1;
              v2[v29] = v27;
            }
          }
          v24 += 4LL;
        }
        while ( v34 != v24 );
        if ( v2 )
LABEL_41:
          *(v2 - 1) = v22;
      }
      v30 = *(_DWORD *)(a1 + 808);
      ++*(_DWORD *)(a1 + 204);
      *(_DWORD *)(a1 + 808) = (v11 + v30 - 1) / v11;
    }
    return;
  }
  v4 = *(_QWORD *)(a1 + 792);
  v5 = *(_BYTE *)(a1 + 996);
  if ( !v4 )
  {
LABEL_12:
    *(_BYTE *)(a1 + 996) = v5;
    goto LABEL_13;
  }
  v6 = v2;
  while ( 1 )
  {
    v7 = *v6;
    if ( (unsigned int)v7 < *(_DWORD *)(v4 - 4) )
    {
      v8 = *(_QWORD *)(v4 + 8 * v7);
      v9 = -v8;
      if ( v8 > 0 )
        v9 = v8;
      v5 |= v9 > 0xFFFFFFFFLL;
      if ( (_DWORD)v9 == 1 )
        break;
    }
    if ( v3 == ++v6 )
      goto LABEL_12;
  }
  *(_BYTE *)(a1 + 996) = v5;
}

