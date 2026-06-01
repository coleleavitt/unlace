__int64 __fastcall sub_921580(__int64 a1, int a2)
{
  __int64 v2; // r11
  unsigned int *v3; // r10
  unsigned int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int v7; // edx
  unsigned int v8; // ebx
  int v9; // r13d
  unsigned int v10; // r9d
  int v11; // r15d
  unsigned int v12; // r12d
  char *v13; // r8
  unsigned int v14; // esi
  _QWORD *v15; // r11
  char v16; // bl
  __int64 v17; // rdx
  unsigned int *v18; // rdx
  unsigned int v19; // edx
  unsigned int *v20; // rbp
  __int64 v21; // r11
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // ebx
  int v26; // eax
  unsigned int *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rsi
  char v33; // r8
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  unsigned int *v36; // r14
  __int64 v37; // rcx
  unsigned int *v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // edx
  unsigned int v42; // [rsp+0h] [rbp-48h]
  __int64 v43; // [rsp+10h] [rbp-38h]

  v2 = *(unsigned int *)(a1 + 44);
  v3 = *(unsigned int **)(a1 + 112);
  v4 = v2;
  v5 = *(_QWORD *)(a1 + 128);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 1 << *(_DWORD *)(a1 + 260);
  v8 = a2 - v6;
  v9 = a2 - v6;
  v10 = a2 - v6 - v7;
  v42 = a2 - v6;
  v43 = v6;
  if ( a2 - (int)v6 - (int)v2 <= v7 )
    v10 = *(_DWORD *)(a1 + 44);
  v11 = *(_DWORD *)(a1 + 264) - 2;
  v12 = (1 << *(_DWORD *)(a1 + 268)) - 3;
  if ( v12 > 0xFF )
    v12 = 255;
  v13 = (char *)v3 + (4LL << v11);
  v14 = v8 - (3 << v11);
  if ( 3 << v11 >= v8 )
    v14 = *(_DWORD *)(a1 + 44);
  v15 = (_QWORD *)(v6 + v2);
  if ( v8 > v4 )
  {
    v16 = 64 - v11;
    do
    {
      v19 = *(_DWORD *)(a1 + 272);
      if ( v19 == 6 )
      {
        v17 = (unsigned int)((0xCF1BBCDCBF9B0000LL * *v15) >> v16);
        goto LABEL_11;
      }
      if ( v19 <= 6 )
      {
        if ( v19 != 5 )
        {
LABEL_20:
          v17 = (unsigned int)(-1640531535 * *(_DWORD *)v15) >> (32 - v11);
          goto LABEL_11;
        }
        v17 = (unsigned int)((0xCF1BBCDCBB000000LL * *v15) >> v16);
      }
      else if ( v19 == 7 )
      {
        v17 = (unsigned int)((0xCF1BBCDCBFA56300LL * *v15) >> v16);
      }
      else
      {
        if ( v19 != 8 )
          goto LABEL_20;
        v17 = (unsigned int)((0xCF1BBCDCB7A56463LL * *v15) >> v16);
      }
LABEL_11:
      v18 = &v3[v17];
      if ( v14 <= v4 )
        *(_DWORD *)&v13[4 * (v4 - v14)] = *v18;
      *v18 = v4++;
      v15 = (_QWORD *)((char *)v15 + 1);
    }
    while ( v9 != v4 );
  }
  if ( 1 << v11 )
  {
    v20 = v3;
    v21 = 0;
    do
    {
      v22 = *v20;
      if ( v14 > *v20 )
      {
        v25 = 0;
      }
      else
      {
        v23 = 0;
        v24 = 0;
        do
        {
          v23 += v22 < v10;
          ++v24;
          v22 = *(_DWORD *)&v13[4 * (v22 - v14)];
        }
        while ( v14 <= v22 && v24 <= 2 );
        v25 = 0;
        if ( v24 == 3 )
        {
          while ( 1 )
          {
            if ( v10 > v22 )
            {
              if ( !v22 )
                break;
              if ( (unsigned int)++v23 > 3 )
                break;
            }
            v40 = v21 + 1;
            *(_DWORD *)(v5 + 4 * v21) = v22;
            ++v25;
            if ( v14 > v22 )
              goto LABEL_49;
            v22 = *(_DWORD *)&v13[4 * (v22 - v14)];
            if ( v12 <= v25 )
              goto LABEL_49;
            v21 = v40;
          }
          if ( v25 )
          {
            v40 = v21;
LABEL_49:
            v21 = v40;
            v25 += (v40 - v25) << 8;
          }
        }
      }
      *v20++ = v25;
    }
    while ( &v3[(1 << v11) - 1 + 1] != v20 );
  }
  v26 = 1 << v11;
  if ( 1 << v11 )
  {
    v27 = &v3[v26 - 1];
    v28 = 4 * (v26 + 0x3FFFFFFF);
    while ( 1 )
    {
      v29 = *v27;
      v3[v28] = 0;
      v3[v28 + 1] = 0;
      v3[v28 + 2] = 0;
      v30 = v28 + 3;
      v28 -= 4;
      v3[v30] = v29;
      if ( v3 == v27 )
        break;
      --v27;
    }
  }
  v31 = *(unsigned int *)(a1 + 44);
  v32 = (_QWORD *)(v43 + v31);
  if ( v42 > (unsigned int)v31 )
  {
    v33 = 64 - v11;
    do
    {
      v39 = *(_DWORD *)(a1 + 272);
      if ( v39 == 6 )
      {
        v34 = (0xCF1BBCDCBF9B0000LL * *v32) >> v33;
      }
      else if ( v39 <= 6 )
      {
        if ( v39 != 5 )
        {
LABEL_53:
          LODWORD(v34) = (unsigned int)(-1640531535 * *(_DWORD *)v32) >> (32 - v11);
          goto LABEL_38;
        }
        v34 = (0xCF1BBCDCBB000000LL * *v32) >> v33;
      }
      else if ( v39 == 7 )
      {
        v34 = (0xCF1BBCDCBFA56300LL * *v32) >> v33;
      }
      else
      {
        if ( v39 != 8 )
          goto LABEL_53;
        v34 = (0xCF1BBCDCB7A56463LL * *v32) >> v33;
      }
LABEL_38:
      v35 = (unsigned int)(4 * v34);
      v32 = (_QWORD *)((char *)v32 + 1);
      v36 = &v3[(unsigned int)(v35 + 1)];
      v37 = (unsigned int)(v35 + 2);
      v38 = &v3[v35];
      v3[v37] = *v36;
      *v36 = *v38;
      *v38 = v31;
      LODWORD(v31) = v31 + 1;
    }
    while ( v9 != (_DWORD)v31 );
  }
  *(_DWORD *)(a1 + 44) = v42;
  return v42;
}

