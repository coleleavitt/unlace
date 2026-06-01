/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_intersect
// Address: 0x0008317C

//----- (0008317C) --------------------------------------------------------
int __fastcall rangeset_t_intersect(int **a1, _DWORD *a2)
{
  int **v2; // r4
  unsigned int v3; // r3
  int v4; // r5
  int *v5; // r0
  _DWORD *v6; // r5
  char v7; // r0
  int *v8; // r1
  int v9; // r0
  int *v10; // r5
  unsigned int v11; // r4
  unsigned int v12; // r0
  unsigned int v13; // r2
  int **v14; // r4
  int v15; // r6
  unsigned int v16; // r0
  signed int v17; // r7
  int v18; // r2
  unsigned int v19; // r0
  unsigned int *v20; // r5
  int v21; // r3
  int v22; // r1
  int v23; // r4
  unsigned int v24; // r0
  unsigned int v25; // r2
  unsigned int v26; // r3
  unsigned int v27; // r1
  int v28; // r0
  unsigned int *v29; // r2
  unsigned int v30; // r0
  unsigned int v31; // r0
  unsigned int v32; // r2
  char *v33; // r1
  _DWORD *v34; // r2
  int v35; // r2
  char *v36; // r7
  char *v37; // r5
  unsigned int v38; // r0
  unsigned int v39; // r2
  int v40; // r5
  int *v41; // r3
  int *v42; // r0
  int v43; // r4
  int *v44; // r5
  unsigned int v45; // r4
  unsigned int v46; // r0
  unsigned int v47; // r2
  int **v48; // r2
  _DWORD *v50; // [sp+Ch] [bp-54h]
  int v51; // [sp+18h] [bp-48h]
  int v52; // [sp+1Ch] [bp-44h]
  signed int v53; // [sp+1Ch] [bp-44h]
  _DWORD *v54; // [sp+20h] [bp-40h]
  unsigned int v55; // [sp+24h] [bp-3Ch]
  unsigned int v56; // [sp+24h] [bp-3Ch]
  int *v57; // [sp+2Ch] [bp-34h]
  unsigned int *v58; // [sp+2Ch] [bp-34h]
  int *v59; // [sp+2Ch] [bp-34h]
  int v60; // [sp+30h] [bp-30h]
  int v61; // [sp+30h] [bp-30h]
  unsigned int v62; // [sp+30h] [bp-30h]
  void *v64; // [sp+38h] [bp-28h] BYREF
  int v65; // [sp+3Ch] [bp-24h]
  int v66; // [sp+40h] [bp-20h]
  int *v67; // [sp+44h] [bp-1Ch]
  char v68; // [sp+48h] [bp-18h]
  unsigned int v69; // [sp+4Ch] [bp-14h] BYREF
  unsigned int v70; // [sp+50h] [bp-10h]
  char v71; // [sp+54h] [bp-Ch]

  v2 = a1;
  v3 = (unsigned int)a1[1];
  v4 = 0;
  if ( !v3 )
    return v4;
  if ( !a2[1] )
  {
    v8 = a1[4];
    v9 = 0;
    v65 = 0;
    v64 = nullptr;
    v66 = 0;
    v67 = v8;
    if ( v8 != (int *)-1 )
    {
      v9 = must_journal();
      v3 = (unsigned int)v2[1];
    }
    v68 = v9;
    v10 = *v2;
    v11 = (unsigned int)&(*v2)[2 * v3];
    if ( v9 && (unsigned int)v10 < v11 )
    {
      do
      {
        v12 = *v10;
        v13 = v10[1];
        v71 = 1;
        v70 = v13;
        v69 = v12;
        sub_83AD8(&v64, &v69);
        v10 += 2;
      }
      while ( (unsigned int)v10 < v11 );
      v14 = a1;
      v10 = *a1;
      if ( !*a1 )
        goto LABEL_56;
    }
    else
    {
      v14 = a1;
      if ( !v10 )
      {
LABEL_56:
        v14[3] = nullptr;
        sub_82AF0((int)&v64);
        if ( v64 )
        {
          v65 = 0;
          qfree(v64);
          v66 = 0;
          v64 = nullptr;
        }
        return 1;
      }
    }
    v14[1] = nullptr;
    qfree(v10);
    v14[2] = nullptr;
    *v14 = nullptr;
    goto LABEL_56;
  }
  v5 = a1[4];
  v65 = 0;
  v64 = nullptr;
  v66 = 0;
  v67 = v5;
  if ( v5 == (int *)-1 )
  {
    v68 = 0;
  }
  else
  {
    v6 = a2;
    v7 = must_journal();
    v3 = (unsigned int)v2[1];
    v68 = v7;
    a2 = v6;
    if ( !v3 )
    {
      v4 = 0;
      v2[3] = nullptr;
      goto LABEL_62;
    }
  }
  v15 = 0;
  v16 = 0;
  v51 = 0;
  v54 = a2;
  do
  {
    v55 = v3;
    v17 = v16;
    v18 = 2 * v16;
    v19 = (*v2)[2 * v16];
    v60 = v18 * 4;
    v57 = *v2;
    v20 = (unsigned int *)&(*v2)[v18];
    v21 = a2[1];
    v22 = *a2;
    v23 = 8 * v15 + 4;
    while ( *(_DWORD *)(v22 + v23) <= v19 )
    {
      v23 += 8;
      if ( v21 == ++v15 )
      {
        v45 = (unsigned int)&v57[2 * v55];
        if ( v68 )
        {
          if ( (unsigned int)v20 >= v45 )
          {
            v48 = a1;
          }
          else
          {
            do
            {
              v46 = *v20;
              v47 = v20[1];
              v71 = 1;
              v70 = v47;
              v69 = v46;
              sub_83AD8(&v64, &v69);
              v20 += 2;
            }
            while ( (unsigned int)v20 < v45 );
            v20 = (unsigned int *)((char *)*a1 + v60);
            v45 = (unsigned int)&(*a1)[2 * (_DWORD)a1[1]];
            v48 = a1;
          }
        }
        else
        {
          v48 = a1;
        }
        v48[3] = nullptr;
        v48[1] = (int *)((char *)v48[1] - ((int)(v45 - (_DWORD)v20) >> 3));
        sub_82AF0((int)&v64);
        v4 = 1;
        goto LABEL_62;
      }
    }
    if ( v68 )
    {
      v24 = *v20;
      v25 = v20[1];
      v71 = 1;
      v70 = v25;
      v69 = v24;
      sub_83AD8(&v64, &v69);
      v19 = *v20;
      v22 = *v54;
    }
    v52 = v22;
    v26 = *(_DWORD *)(v22 + v23 - 4);
    v50 = (_DWORD *)(v22 + v23 - 4);
    v27 = *(int *)((char *)v57 + v60 + 4);
    v58 = (unsigned int *)((char *)v57 + v60 + 4);
    v56 = v27;
    if ( v26 <= v19 )
    {
      v29 = v58;
    }
    else
    {
      v28 = v17;
      v29 = v58;
      if ( v26 >= v27 )
        goto LABEL_28;
      *v20 = v26;
      v51 = 1;
    }
    v30 = *(_DWORD *)(v52 + v23);
    if ( v30 < v27 )
    {
      *v29 = v30;
      v51 = 1;
    }
    v28 = v17 + 1;
LABEL_28:
    v53 = v28;
    v2 = a1;
    if ( v68 )
    {
      v31 = *v20;
      v32 = v20[1];
      v71 = 0;
      v70 = v32;
      v69 = v31;
      sub_83AD8(&v64, &v69);
    }
    v33 = (char *)*a1;
    v34 = (int *)((char *)*a1 + v60 + 4);
    do
    {
      if ( *v34 > *v50 )
        break;
      v34 += 2;
      ++v17;
    }
    while ( (int *)v17 != a1[1] );
    if ( v17 <= v53 )
    {
      if ( v56 > *v58 )
      {
        v62 = *v58;
        v40 = (8 * v17 + 8) >> 3;
        v41 = a1[1];
        v42 = *a1;
        if ( a1[2] < (int *)((char *)v41 + 1) )
        {
          v42 = (int *)qvector_reserve((int)a1, v33, (unsigned int)v41 + 1, 8u);
          *a1 = v42;
          v41 = a1[1];
          v40 = (8 * v17 + 8) >> 3;
        }
        v59 = v42;
        v43 = 2 * v40;
        v44 = &v42[2 * v40];
        memmove(v44 + 2, v44, (char *)&v42[2 * (_DWORD)v41] - (char *)v44);
        v59[v43] = v62;
        v44[1] = v56;
        v2 = a1;
        a1[1] = (int *)((char *)a1[1] + 1);
        if ( v68 )
        {
          v71 = 0;
          v69 = v62;
          v70 = v56;
          sub_83AD8(&v64, &v69);
        }
      }
      v3 = (unsigned int)v2[1];
      v16 = v17 + 1;
    }
    else
    {
      v35 = 8 * v17;
      v36 = &v33[8 * v17];
      v37 = &v33[8 * v53];
      if ( v68 && v37 < v36 )
      {
        v61 = v35;
        do
        {
          v38 = *(_DWORD *)v37;
          v39 = *((_DWORD *)v37 + 1);
          v71 = 1;
          v70 = v39;
          v69 = v38;
          sub_83AD8(&v64, &v69);
          v37 += 8;
        }
        while ( v37 < v36 );
        v2 = a1;
        v33 = (char *)*a1;
        v36 = (char *)*a1 + v61;
        v37 = (char *)&(*a1)[2 * v53];
      }
      else
      {
        v2 = a1;
      }
      memmove(v37, v36, &v33[8 * (_DWORD)v2[1]] - v36);
      v3 = (unsigned int)v2[1] - ((v36 - v37) >> 3);
      v2[1] = (int *)v3;
      v51 = 1;
      v16 = v53;
    }
    a2 = v54;
  }
  while ( v16 < v3 );
  v4 = 0;
  v2[3] = nullptr;
  if ( v51 << 31 )
  {
    sub_82AF0((int)&v64);
    v4 = 1;
  }
LABEL_62:
  if ( v64 )
  {
    v65 = 0;
    qfree(v64);
    v66 = 0;
    v64 = nullptr;
  }
  return v4;
}
