__int64 __fastcall sub_1461D50(__int64 a1, __int64 a2)
{
  __int64 *v5; // r13
  int *v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  __int64 v13; // r8
  unsigned int v14; // edi
  int v15; // ecx
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 i; // rcx
  unsigned int v19; // edx
  unsigned int v20; // r13d
  unsigned int *v21; // rax
  unsigned __int64 v22; // r13
  int v23; // r11d
  __int64 v24; // r10
  __int64 v25; // r8
  int v26; // edx
  int v27; // esi
  __int64 v28; // r9
  unsigned int v29; // r8d
  int v30; // edi
  int v31; // r11d
  __int64 v32; // r10
  int v33; // edx
  int v34; // edi
  __int64 v35; // r9
  unsigned int v36; // r8d
  int v37; // esi
  int v38; // r11d
  int v39; // [rsp+0h] [rbp-2Ch]
  int v40; // [rsp+0h] [rbp-2Ch]

  if ( !*(_DWORD *)(a2 + 8) )
    return 0;
  v5 = (__int64 *)(a1 + 3304);
  v6 = *(int **)a2;
  v7 = sub_1020530(*(_QWORD *)(a1 + 88), **(_DWORD **)a2);
  v12 = *(_DWORD *)(a1 + 3320);
  if ( !v12 )
    goto LABEL_20;
  v11 = v12 - 1;
  v13 = *(_QWORD *)(a1 + 3304);
  v14 = v11 & v7;
  v8 = v13 + 152LL * ((unsigned int)v11 & v7);
  v15 = *(_DWORD *)v8;
  if ( v7 != *(_DWORD *)v8 )
  {
    v23 = 1;
    v24 = 0;
    if ( v15 )
    {
      while ( 1 )
      {
        if ( !v24 && v15 == -1 )
          v24 = v8;
        v14 = v11 & (v23 + v14);
        v8 = v13 + 152LL * v14;
        v15 = *(_DWORD *)v8;
        if ( *(_DWORD *)v8 == v7 )
          goto LABEL_5;
        if ( !v15 )
          break;
        ++v23;
      }
      if ( v24 )
        v8 = v24;
    }
    v9 = (unsigned int)(*(_DWORD *)(a1 + 3312) + 1);
    v10 = (unsigned int)(4 * v9);
    if ( (unsigned int)v10 < 3 * v12 )
    {
      v25 = v12 >> 3;
      if ( v12 - *(_DWORD *)(a1 + 3316) - (unsigned int)v9 > (unsigned int)v25 )
      {
LABEL_17:
        *(_DWORD *)(a1 + 3312) = v9;
        if ( *(_DWORD *)v8 )
          --*(_DWORD *)(a1 + 3316);
        *(_DWORD *)v8 = v7;
        v16 = v8 + 8;
        i = 16;
        *(_QWORD *)(v8 + 8) = v8 + 24;
        *(_QWORD *)(v8 + 16) = 0x1000000000LL;
        v17 = 0;
        goto LABEL_7;
      }
      v40 = v7;
      sub_1461A30(v5, v12, v8, v9, v25, v11);
      v33 = *(_DWORD *)(a1 + 3320);
      if ( v33 )
      {
        v7 = v40;
        v34 = v33 - 1;
        v35 = *(_QWORD *)(a1 + 3304);
        v36 = (v33 - 1) & v40;
        v8 = v35 + 152LL * v36;
        v37 = *(_DWORD *)v8;
        LODWORD(v9) = *(_DWORD *)(a1 + 3312) + 1;
        if ( *(_DWORD *)v8 != v40 )
        {
          v38 = 1;
          v32 = 0;
          if ( v37 )
          {
            while ( 1 )
            {
              if ( v37 == -1 && !v32 )
                v32 = v8;
              v36 = v34 & (v38 + v36);
              v8 = v35 + 152LL * v36;
              v37 = *(_DWORD *)v8;
              if ( *(_DWORD *)v8 == v40 )
                break;
              if ( !v37 )
                goto LABEL_28;
              ++v38;
            }
          }
        }
        goto LABEL_17;
      }
LABEL_50:
      ++*(_DWORD *)(a1 + 3312);
      BUG();
    }
LABEL_20:
    v39 = v7;
    sub_1461A30(v5, 2 * v12, v8, v9, v10, v11);
    v26 = *(_DWORD *)(a1 + 3320);
    if ( v26 )
    {
      v7 = v39;
      v27 = v26 - 1;
      v28 = *(_QWORD *)(a1 + 3304);
      v29 = (v26 - 1) & v39;
      v8 = v28 + 152LL * v29;
      v30 = *(_DWORD *)v8;
      LODWORD(v9) = *(_DWORD *)(a1 + 3312) + 1;
      if ( *(_DWORD *)v8 != v39 )
      {
        v31 = 1;
        v32 = 0;
        if ( v30 )
        {
          while ( 1 )
          {
            if ( !v32 && v30 == -1 )
              v32 = v8;
            v29 = v27 & (v31 + v29);
            v8 = v28 + 152LL * v29;
            v30 = *(_DWORD *)v8;
            if ( *(_DWORD *)v8 == v39 )
              break;
            if ( !v30 )
            {
LABEL_28:
              if ( v32 )
                v8 = v32;
              goto LABEL_17;
            }
            ++v31;
          }
        }
      }
      goto LABEL_17;
    }
    goto LABEL_50;
  }
LABEL_5:
  v16 = v8 + 8;
  v17 = *(unsigned int *)(v8 + 16);
  for ( i = *(unsigned int *)(v8 + 20); ; i = *(unsigned int *)(v16 + 12) )
  {
LABEL_7:
    v19 = *v6;
    v6 += 2;
    v20 = *(v6 - 1);
    if ( v17 >= i )
    {
      v22 = ((unsigned __int64)(unsigned int)*(v6 - 1) << 32) | v19;
      if ( i < v17 + 1 )
      {
        sub_2237220(v16, v16 + 16, v17 + 1, 8);
        v17 = *(unsigned int *)(v16 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v16 + 8 * v17) = v22;
      v17 = (unsigned int)(*(_DWORD *)(v16 + 8) + 1);
      *(_DWORD *)(v16 + 8) = v17;
    }
    else
    {
      v21 = (unsigned int *)(*(_QWORD *)v16 + 8 * v17);
      *v21 = v19;
      v21[1] = v20;
      v17 = (unsigned int)(*(_DWORD *)(v16 + 8) + 1);
      *(_DWORD *)(v16 + 8) = v17;
    }
    if ( v6 == (int *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) )
      break;
  }
  return 1;
}
