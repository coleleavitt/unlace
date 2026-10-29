/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C100
// Address: 0x0009C100

//----- (0009C100) --------------------------------------------------------
_DWORD *__cdecl sub_9C100(_DWORD *a1, char *s, int (__cdecl *a3)(__int128 *, const char *))
{
  int v3; // edi
  int v4; // ecx
  _DWORD *v5; // esi
  char *v6; // eax
  const char *v7; // eax
  int v8; // eax
  const char *v9; // eax
  int v10; // eax
  bool v11; // zf
  char *v12; // ecx
  int v13; // eax
  char *v14; // edi
  const char **v15; // esi
  int **v16; // esi
  void **v17; // eax
  int v18; // ecx
  _DWORD *v19; // eax
  _DWORD *v20; // esi
  int v21; // ecx
  unsigned int v22; // edi
  int *v23; // edx
  __int16 *v24; // esi
  unsigned int v25; // eax
  int *v26; // esi
  void **v27; // eax
  int v28; // ecx
  _DWORD *v29; // eax
  unsigned int v30; // eax
  int v31; // ecx
  unsigned int v32; // edi
  unsigned int v33; // esi
  int v34; // ecx
  void *v35; // eax
  int **v36; // ecx
  int v37; // esi
  const char *v39; // [esp+1Ch] [ebp-60h]
  int v40; // [esp+1Ch] [ebp-60h]
  _DWORD *v41; // [esp+1Ch] [ebp-60h]
  const char *v42; // [esp+20h] [ebp-5Ch]
  __int16 *v43; // [esp+20h] [ebp-5Ch]
  int v44; // [esp+20h] [ebp-5Ch]
  int v45; // [esp+24h] [ebp-58h]
  int v46; // [esp+24h] [ebp-58h]
  int v47; // [esp+28h] [ebp-54h]
  int v48; // [esp+30h] [ebp-4Ch] BYREF
  int v49; // [esp+34h] [ebp-48h]
  int v50; // [esp+38h] [ebp-44h]
  int *v51; // [esp+48h] [ebp-34h] BYREF
  int v52; // [esp+4Ch] [ebp-30h]
  __int128 v53; // [esp+50h] [ebp-2Ch] BYREF
  int v54; // [esp+60h] [ebp-1Ch]
  unsigned int v55; // [esp+68h] [ebp-14h]

  v55 = __readgsdword(0x14u);
  sub_1B530((int)&v48, s);
  v3 = a1[38];
  v4 = v49;
  if ( v3 )
  {
    v5 = a1 + 38;
    v47 = v49;
    v6 = (char *)v48;
    v45 = v48;
    if ( !v49 )
      v6 = byte_EF875;
    v39 = v6;
    do
    {
      v7 = byte_EF875;
      if ( *(_DWORD *)(v3 + 20) )
        v7 = *(const char **)(v3 + 16);
      v8 = strcmp(v7, v39);
      if ( v8 >= 0 )
        v5 = (_DWORD *)v3;
      v3 = *(_DWORD *)(v3 + 4 * ((unsigned int)v8 >> 31));
    }
    while ( v3 );
    if ( v5 != a1 + 38 )
    {
      v9 = v5[5] ? (const char *)v5[4] : byte_EF875;
      if ( strcmp(v39, v9) >= 0 )
      {
        v30 = v5[7];
        if ( v30 == -1 )
        {
          v41 = nullptr;
        }
        else
        {
          if ( v30 >= a1[35] )
          {
            if ( !(_BYTE)under_debugger )
              interr(1472);
LABEL_70:
            BUG();
          }
          v41 = *(_DWORD **)(a1[34] + 4 * v30);
        }
        v35 = (void *)v45;
        if ( !v45 )
          return v41;
        goto LABEL_64;
      }
    }
    v10 = v45;
    v4 = v47;
  }
  else
  {
    v10 = v48;
  }
  v11 = v4 == 0;
  v12 = byte_EF875;
  if ( !v11 )
    v12 = (char *)v10;
  v42 = v12;
  v13 = 1;
  v14 = byte_106E89;
  v15 = (const char **)off_138D3C;
  while ( 1 )
  {
    v40 = v13;
    if ( !strcmp(*v15, v42) )
      break;
    v13 = v40 + 1;
    v14 += 5;
    ++v15;
    if ( (unsigned int)(v40 + 1) >= 0x148 )
    {
      v16 = (int **)a1;
      if ( a3 )
      {
        v53 = 0;
        v54 = -1;
        v41 = nullptr;
        if ( !a3(&v53, v42) )
        {
          v41 = qalloc_or_throw(20);
          v41[1] = 0;
          *v41 = 0;
          v41[3] = 0;
          v41[2] = 0;
          v41[4] = -1;
          v17 = (void **)(a1 + 34);
          v18 = a1[35];
          if ( a1[36] >= (unsigned int)(v18 + 1) )
          {
            v19 = *v17;
            v20 = a1;
          }
          else
          {
            v19 = qvector_reserve((int)(a1 + 34), *v17, v18 + 1, 4u);
            v20 = a1;
            a1[34] = v19;
            v18 = a1[35];
          }
          v19[v18] = v41;
          ++v20[35];
          rangeset_t_swap((int)v41, (int **)&v53);
        }
        v16 = (int **)a1;
        if ( (_DWORD)v53 )
          goto LABEL_59;
        goto LABEL_60;
      }
      goto LABEL_62;
    }
  }
  v53 = 0;
  v54 = -1;
  v21 = v40;
  if ( *(unsigned __int16 *)v14 != 0xFFFF )
  {
    if ( !(_BYTE)under_debugger )
      interr(1473);
    goto LABEL_70;
  }
  v22 = 0;
  v23 = dword_106448;
  v24 = &word_106E84;
  do
  {
    v25 = (unsigned __int16)*v24;
    if ( v25 == 0xFFFF )
      v25 = v22;
    if ( v25 == v21 )
    {
      v51 = nullptr;
      v52 = 0;
      if ( !v22 )
      {
        v41 = nullptr;
LABEL_50:
        v16 = (int **)a1;
        goto LABEL_51;
      }
      v43 = v24;
      v51 = (int *)*(v23 - 1);
      v26 = v23;
      v52 = *v23 + 1;
      rangeset_t_add(&v53, &v51);
      v21 = v40;
      v23 = v26;
      v24 = v43;
    }
    ++v22;
    v23 += 2;
    v24 = (__int16 *)((char *)v24 + 5);
  }
  while ( v22 < 0x148 );
  v41 = qalloc_or_throw(20);
  v16 = (int **)a1;
  v41[1] = 0;
  *v41 = 0;
  v41[3] = 0;
  v41[2] = 0;
  v41[4] = -1;
  v27 = (void **)(a1 + 34);
  v28 = a1[35];
  if ( a1[36] >= (unsigned int)(v28 + 1) )
  {
    v29 = *v27;
  }
  else
  {
    v29 = qvector_reserve((int)(a1 + 34), *v27, v28 + 1, 4u);
    a1[34] = v29;
    v28 = a1[35];
  }
  v29[v28] = v41;
  ++a1[35];
  v46 = DWORD1(v53);
  if ( DWORD1(v53) )
  {
    v31 = 0;
    do
    {
      v32 = *(_DWORD *)(v53 + 8 * v31);
      v44 = v31;
      v33 = *(_DWORD *)(v53 + 8 * v31 + 4);
      if ( v32 < v33 )
      {
        do
        {
          sub_9BB00(&v51, v32);
          if ( BYTE2(v51) <= 0xBu && (v34 = 2688, _bittest(&v34, BYTE2(v51))) )
          {
            v51 = (int *)v32++;
            v52 = v32;
            rangeset_t_add(v41, &v51);
          }
          else
          {
            ++v32;
          }
        }
        while ( v32 != v33 );
      }
      v31 = v44 + 1;
    }
    while ( v44 + 1 != v46 );
    goto LABEL_50;
  }
LABEL_51:
  if ( (_DWORD)v53 )
  {
LABEL_59:
    DWORD1(v53) = 0;
    qfree((void *)v53);
    LODWORD(v53) = 0;
    DWORD2(v53) = 0;
  }
LABEL_60:
  if ( v41 )
  {
    v36 = v16;
    v37 = (int)v16[35] - 1;
  }
  else
  {
LABEL_62:
    v36 = v16;
    v37 = -1;
    v41 = nullptr;
  }
  v51 = &v48;
  sub_9C890((int)&v53, v36 + 37, (int)&v48, (int)&dword_1074EC, (int *)&v51);
  *(_DWORD *)(v53 + 28) = v37;
  v35 = (void *)v48;
  if ( v48 )
  {
LABEL_64:
    v49 = 0;
    qfree(v35);
    v48 = 0;
    v50 = 0;
  }
  return v41;
}
// 106448: using guessed type int dword_106448[];
// 106E84: using guessed type __int16 word_106E84;
// 1074EC: using guessed type int dword_1074EC;
// 138D3C: using guessed type char *off_138D3C[360];
// 13E34C: using guessed type int under_debugger;
