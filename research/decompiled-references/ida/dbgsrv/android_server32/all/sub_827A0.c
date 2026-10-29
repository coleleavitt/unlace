/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_827A0
// Address: 0x000827A0

//----- (000827A0) --------------------------------------------------------
int __fastcall sub_827A0(char **a1, char *a2, int a3)
{
  char **v3; // r6
  char *v4; // r4
  char *v5; // r3
  int v6; // r2
  char *v7; // r4
  unsigned int v8; // r0
  char *v9; // r5
  char *v10; // r4
  void *v11; // r0
  int v12; // r2
  _DWORD *v13; // r0
  void *v14; // r5
  int v15; // r2
  char *v16; // r0
  char *v17; // r5
  void *v18; // r5
  int v19; // r4
  char *v20; // r0
  unsigned int v21; // r2
  unsigned int v22; // r6
  char *v23; // r4
  unsigned int v24; // r7
  unsigned int v25; // r6
  int result; // r0
  int v27; // r5
  int v28; // r7
  char *v29; // r5
  void *v30; // r7
  int v31; // r5
  char *v32; // r0
  void *v33; // r4
  int v34; // r2
  char *v35; // r0
  char *v36; // r6
  int v37; // r4
  unsigned int v38; // r0
  unsigned int v39; // r3
  char *v40; // r2
  char *v41; // r7
  void *v42; // r0
  int v43; // r2
  char *v44; // r1
  int v45; // r0
  void *v46; // r0
  int v47; // r2
  char *ptr; // [sp+Ch] [bp-2Ch]
  void *ptra; // [sp+Ch] [bp-2Ch]
  char *v50; // [sp+10h] [bp-28h]
  char *v51; // [sp+10h] [bp-28h]
  int v52; // [sp+10h] [bp-28h]
  int v55; // [sp+1Ch] [bp-1Ch]
  void *v57; // [sp+24h] [bp-14h] BYREF
  int v58; // [sp+28h] [bp-10h]
  char v59; // [sp+2Ch] [bp-Ch]

  v3 = a1;
  v4 = *a1;
  v5 = a1[1];
  if ( v5 )
  {
    v6 = 8 * (_DWORD)v5;
    ptr = *a1;
    v7 = &v4[8 * (_DWORD)v5];
    v8 = *((_DWORD *)v7 - 1);
    v9 = v7 - 4;
    v50 = v7;
    v10 = v7 - 8;
    if ( v8 == *(_DWORD *)a2 )
    {
      if ( *(_BYTE *)(a3 + 16) )
      {
        v11 = *(void **)v10;
        v12 = *((_DWORD *)v10 + 1);
        v59 = 1;
        v58 = v12;
        v57 = v11;
        sub_83AD8((_DWORD *)a3, &v57);
      }
      *(_DWORD *)v9 = *((_DWORD *)a2 + 1);
      v13 = (_DWORD *)a3;
      v3 = a1;
      if ( !*(_BYTE *)(a3 + 16) )
        goto LABEL_61;
      v14 = *(void **)v10;
      v15 = *((_DWORD *)v10 + 1);
      v59 = 0;
      v58 = v15;
      v57 = v14;
      goto LABEL_60;
    }
    if ( v8 < *(_DWORD *)a2 )
    {
      v18 = *(void **)a2;
      v19 = *((_DWORD *)a2 + 1);
      v3 = a1;
      if ( a1[2] >= v5 + 1 )
      {
        v20 = ptr;
      }
      else
      {
        v20 = (char *)qvector_reserve((int)a1, ptr, (unsigned int)(v5 + 1), 8u);
        *a1 = v20;
        v5 = a1[1];
      }
      *(_DWORD *)&v20[8 * (_DWORD)v5] = v18;
      *(_DWORD *)&v20[8 * (_DWORD)v5 + 4] = v19;
      goto LABEL_33;
    }
    if ( v6 )
    {
      v21 = v6 >> 3;
      v17 = ptr;
      do
      {
        while ( 1 )
        {
          v22 = v21 >> 1;
          v23 = &v17[8 * (v21 >> 1)];
          if ( *((_DWORD *)v23 + 1) >= *(_DWORD *)a2 )
            break;
          v21 += ~v22;
          v17 = v23 + 8;
          if ( !v21 )
            goto LABEL_18;
        }
        v21 >>= 1;
      }
      while ( v22 );
LABEL_18:
      v3 = a1;
      v4 = ptr;
    }
    else
    {
      v4 = ptr;
      v17 = ptr;
      v3 = a1;
    }
    v16 = v50;
  }
  else
  {
    v16 = *a1;
    v17 = v4;
  }
  v51 = v16;
  if ( v17 == v16 )
  {
    v30 = *(void **)a2;
    v31 = *((_DWORD *)a2 + 1);
    if ( v3[2] < v5 + 1 )
    {
      v32 = (char *)qvector_reserve((int)v3, v4, (unsigned int)(v5 + 1), 8u);
      *v3 = v32;
      v16 = &v32[8 * (_DWORD)v3[1]];
    }
    *(_DWORD *)v16 = v30;
    *((_DWORD *)v16 + 1) = v31;
    goto LABEL_33;
  }
  v24 = *((_DWORD *)a2 + 1);
  v25 = *(_DWORD *)v17;
  if ( *(_DWORD *)a2 < *(_DWORD *)v17 || (result = 0, v24 > *((_DWORD *)v17 + 1)) )
  {
    if ( v25 <= v24 )
    {
      v35 = v17;
      if ( v25 >= *(_DWORD *)a2 )
        v35 = a2;
      v55 = *(_DWORD *)v35;
      v36 = v17;
      v37 = *((_DWORD *)a2 + 1);
      if ( v51 != v17 )
      {
        v38 = (v51 - v17) >> 3;
        v36 = v17;
        do
        {
          while ( 1 )
          {
            v39 = v38 >> 1;
            v40 = &v36[8 * (v38 >> 1)];
            if ( v24 >= *((_DWORD *)v40 + 1) )
              break;
            v38 >>= 1;
            if ( !v39 )
              goto LABEL_43;
          }
          v38 += ~v39;
          v36 = v40 + 8;
        }
        while ( v38 );
      }
LABEL_43:
      if ( v36 == v51 )
      {
        v36 = v51;
      }
      else if ( *(_DWORD *)v36 <= v24 )
      {
        v37 = *((_DWORD *)v36 + 1);
        v36 += 8;
      }
      if ( v17 == v36 )
      {
        v3 = a1;
        if ( *(_BYTE *)(a3 + 16) )
        {
          v46 = *(void **)v17;
          v47 = *((_DWORD *)v17 + 1);
          v59 = 1;
          v58 = v47;
          v57 = v46;
          sub_83AD8((_DWORD *)a3, &v57);
        }
      }
      else
      {
        if ( v17 < v36 && *(_BYTE *)(a3 + 16) )
        {
          v41 = v17;
          do
          {
            v42 = *(void **)v41;
            v43 = *((_DWORD *)v41 + 1);
            v59 = 1;
            v58 = v43;
            v57 = v42;
            sub_83AD8((_DWORD *)a3, &v57);
            v41 += 8;
          }
          while ( v41 < v36 );
        }
        v44 = v17;
        do
          v44 += 8;
        while ( v36 != v44 );
        memmove(v17 + 8, v36, &(*a1)[8 * (_DWORD)a1[1]] - v36);
        v45 = v36 - (v17 + 8);
        v3 = a1;
        a1[1] -= v45 >> 3;
      }
      *(_DWORD *)v17 = v55;
      *((_DWORD *)v17 + 1) = v37;
      v13 = (_DWORD *)a3;
      if ( !*(_BYTE *)(a3 + 16) )
        goto LABEL_61;
      v33 = *(void **)v17;
      v34 = *((_DWORD *)v17 + 1);
LABEL_59:
      v59 = 0;
      v58 = v34;
      v57 = v33;
LABEL_60:
      sub_83AD8(v13, &v57);
      goto LABEL_61;
    }
    v27 = (v17 - v4) >> 3;
    ptra = *(void **)a2;
    v52 = *((_DWORD *)a2 + 1);
    v3 = a1;
    if ( a1[2] < v5 + 1 )
    {
      v4 = (char *)qvector_reserve((int)a1, v4, (unsigned int)(v5 + 1), 8u);
      *a1 = v4;
      v5 = a1[1];
    }
    v28 = 8 * v27;
    v29 = &v4[8 * v27];
    memmove(v29 + 8, v29, &v4[8 * (_DWORD)v5] - v29);
    *(_DWORD *)&v4[v28] = ptra;
    *((_DWORD *)v29 + 1) = v52;
LABEL_33:
    ++v3[1];
    v13 = (_DWORD *)a3;
    if ( !*(_BYTE *)(a3 + 16) )
    {
LABEL_61:
      v3[3] = nullptr;
      return 1;
    }
    v33 = *(void **)a2;
    v34 = *((_DWORD *)a2 + 1);
    goto LABEL_59;
  }
  return result;
}
