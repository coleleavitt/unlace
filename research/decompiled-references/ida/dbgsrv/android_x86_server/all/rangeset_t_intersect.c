/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_intersect
// Address: 0x000B81E0

//----- (000B81E0) --------------------------------------------------------
int __cdecl rangeset_t_intersect(int *a1, int *a2)
{
  int *v2; // esi
  unsigned int v3; // ecx
  int v4; // eax
  char v5; // al
  int v6; // ecx
  int v7; // eax
  char v8; // al
  int v9; // ebx
  unsigned int v10; // edx
  int v11; // esi
  unsigned int *v12; // edi
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  signed int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  _DWORD *v22; // edx
  signed int v23; // edi
  char *v24; // esi
  char *v25; // ecx
  unsigned int v26; // eax
  int *v27; // ebx
  int v28; // ebx
  char *v29; // eax
  int v30; // esi
  char *v31; // edi
  unsigned int v32; // esi
  unsigned int v33; // eax
  int *v34; // edx
  int v35; // esi
  int *v36; // esi
  int *v37; // edi
  unsigned int v38; // eax
  int v40; // [esp+14h] [ebp-58h]
  char *v41; // [esp+14h] [ebp-58h]
  int v42; // [esp+18h] [ebp-54h]
  char *v43; // [esp+18h] [ebp-54h]
  unsigned int v44; // [esp+18h] [ebp-54h]
  unsigned int v45; // [esp+1Ch] [ebp-50h]
  int v46; // [esp+1Ch] [ebp-50h]
  unsigned int v47; // [esp+20h] [ebp-4Ch]
  char v48; // [esp+24h] [ebp-48h]
  unsigned int v49; // [esp+28h] [ebp-44h]
  unsigned int v50; // [esp+2Ch] [ebp-40h]
  void *v51; // [esp+30h] [ebp-3Ch] BYREF
  int v52; // [esp+34h] [ebp-38h]
  int v53; // [esp+38h] [ebp-34h]
  int v54; // [esp+3Ch] [ebp-30h]
  char v55; // [esp+40h] [ebp-2Ch]
  unsigned int v56; // [esp+48h] [ebp-24h] BYREF
  unsigned int v57; // [esp+4Ch] [ebp-20h]
  char v58; // [esp+50h] [ebp-1Ch]
  unsigned int v59; // [esp+58h] [ebp-14h]

  v2 = a1;
  v59 = __readgsdword(0x14u);
  v3 = a1[1];
  if ( !v3 )
    return 0;
  if ( !a2[1] )
  {
    v7 = a1[4];
    v51 = nullptr;
    v52 = 0;
    v53 = 0;
    v54 = v7;
    if ( v7 == -1 )
    {
      v8 = 0;
    }
    else
    {
      v8 = must_journal();
      v3 = a1[1];
    }
    v55 = v8;
    v36 = (int *)*a1;
    if ( v8 )
    {
      v37 = &v36[2 * v3];
      if ( v36 < v37 )
      {
        do
        {
          v38 = *v36;
          v57 = v36[1];
          v56 = v38;
          v58 = 1;
          sub_B8FF0((unsigned int *)&v51, (unsigned int)&v56);
          v36 += 2;
        }
        while ( v36 < v37 );
        v36 = (int *)*a1;
      }
    }
    if ( v36 )
    {
      a1[1] = 0;
      qfree(v36);
      *a1 = 0;
      a1[2] = 0;
    }
    a1[3] = 0;
    sub_B76D0((int)&v51);
    if ( v51 )
    {
      v52 = 0;
      qfree(v51);
      v51 = nullptr;
      v53 = 0;
    }
    LOBYTE(v6) = 1;
    return v6;
  }
  v4 = a1[4];
  v51 = nullptr;
  v52 = 0;
  v53 = 0;
  v54 = v4;
  if ( v4 == -1 )
  {
    v55 = 0;
  }
  else
  {
    v5 = must_journal();
    v3 = a1[1];
    v55 = v5;
    if ( !v3 )
    {
      a1[3] = 0;
      v6 = 0;
      goto LABEL_52;
    }
  }
  v9 = 0;
  v10 = 0;
  v48 = 0;
LABEL_11:
  v45 = v3;
  v11 = *v2;
  v12 = (unsigned int *)(v11 + 8 * v10);
  v50 = v10;
  v40 = v11;
  v13 = *v12;
  v14 = *a2;
  do
  {
    if ( *(_DWORD *)(*a2 + 8 * v9 + 4) > v13 )
    {
      v46 = v9;
      v2 = a1;
      if ( v55 )
      {
        v15 = *v12;
        v57 = v12[1];
        v56 = v15;
        v58 = 1;
        sub_B8FF0((unsigned int *)&v51, (unsigned int)&v56);
        v14 = *a2;
        v13 = *v12;
      }
      v16 = v50;
      v49 = *(_DWORD *)(v40 + 8 * v50 + 4);
      v42 = v14;
      v17 = *(_DWORD *)(v14 + 8 * v46);
      if ( v17 <= v13 )
      {
        v18 = *(_DWORD *)(v40 + 8 * v50 + 4);
      }
      else
      {
        v18 = *(_DWORD *)(v40 + 8 * v50 + 4);
        v19 = v50;
        if ( v17 >= v49 )
          goto LABEL_24;
        *v12 = v17;
        v48 = 1;
      }
      v20 = *(_DWORD *)(v42 + 8 * v46 + 4);
      if ( v20 < v18 )
      {
        *(_DWORD *)(v40 + 8 * v50 + 4) = v20;
        v48 = 1;
      }
      v19 = v50 + 1;
LABEL_24:
      v47 = v19;
      if ( v55 )
      {
        v21 = *v12;
        v57 = v12[1];
        v56 = v21;
        v58 = 0;
        sub_B8FF0((unsigned int *)&v51, (unsigned int)&v56);
        v16 = v50;
        v19 = v47;
      }
      v22 = (_DWORD *)*a1;
      v23 = v16;
      do
      {
        if ( v22[2 * v23 + 1] > *(_DWORD *)(v42 + 8 * v46) )
          break;
        ++v23;
      }
      while ( v23 != a1[1] );
      if ( v23 <= v19 )
      {
        if ( v49 > *(_DWORD *)(v40 + 8 * v16 + 4) )
        {
          v44 = *(_DWORD *)(v40 + 8 * v16 + 4);
          v28 = a1[1];
          v29 = (char *)*a1;
          if ( a1[2] < (unsigned int)(v28 + 1) )
          {
            v29 = (char *)qvector_reserve((int)a1, v22, v28 + 1, 8u);
            *a1 = (int)v29;
            v28 = a1[1];
          }
          v41 = v29;
          v30 = (8 * v23 + 8) >> 3;
          memmove(&v29[8 * v30 + 8], &v29[8 * v30], 8 * v28 - 8 * v30);
          *(_DWORD *)&v41[8 * v30 + 4] = v49;
          *(_DWORD *)&v41[8 * v30] = v44;
          v2 = a1;
          ++a1[1];
          if ( v55 )
          {
            v56 = v44;
            v57 = v49;
            v58 = 0;
            sub_B8FF0((unsigned int *)&v51, (unsigned int)&v56);
          }
        }
        v9 = v46;
        v3 = v2[1];
        v10 = v23 + 1;
        if ( v23 + 1 >= v3 )
        {
LABEL_44:
          v2[3] = 0;
          if ( (v48 & 1) != 0 )
          {
            sub_B76D0((int)&v51);
            LOBYTE(v6) = 1;
          }
          else
          {
            v6 = 0;
          }
          goto LABEL_52;
        }
      }
      else
      {
        v24 = (char *)&v22[2 * v19];
        v25 = (char *)&v22[2 * v23];
        if ( v55 && v24 < v25 )
        {
          v43 = (char *)&v22[2 * v23];
          do
          {
            v26 = *(_DWORD *)v24;
            v57 = *((_DWORD *)v24 + 1);
            v56 = v26;
            v58 = 1;
            sub_B8FF0((unsigned int *)&v51, (unsigned int)&v56);
            v24 += 8;
          }
          while ( v24 < v43 );
          v27 = a1;
          v22 = (_DWORD *)*a1;
          v24 = (char *)(*a1 + 8 * v47);
          v25 = (char *)(*a1 + 8 * v23);
        }
        else
        {
          v27 = a1;
        }
        v31 = v25;
        memmove(v24, v25, (char *)&v22[2 * v27[1]] - v25);
        v3 = a1[1] - ((v31 - v24) >> 3);
        a1[1] = v3;
        v48 = 1;
        v2 = a1;
        v9 = v46;
        v10 = v47;
        if ( v47 >= v3 )
          goto LABEL_44;
      }
      goto LABEL_11;
    }
    ++v9;
  }
  while ( a2[1] != v9 );
  v32 = v11 + 8 * v45;
  if ( v55 && (unsigned int)v12 < v32 )
  {
    do
    {
      v33 = *v12;
      v57 = v12[1];
      v56 = v33;
      v58 = 1;
      sub_B8FF0((unsigned int *)&v51, (unsigned int)&v56);
      v12 += 2;
    }
    while ( (unsigned int)v12 < v32 );
    v34 = a1;
    v32 = *a1 + 8 * a1[1];
    v12 = (unsigned int *)(*a1 + 8 * v50);
  }
  else
  {
    v34 = a1;
  }
  v34[1] -= (int)(v32 - (_DWORD)v12) >> 3;
  v34[3] = 0;
  sub_B76D0((int)&v51);
  LOBYTE(v6) = 1;
LABEL_52:
  if ( v51 )
  {
    v35 = v6;
    v52 = 0;
    qfree(v51);
    v51 = nullptr;
    v53 = 0;
    return v35;
  }
  return v6;
}
// B8635: variable 'v6' is possibly undefined
