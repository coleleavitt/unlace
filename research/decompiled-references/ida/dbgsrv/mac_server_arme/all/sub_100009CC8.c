/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009CC8
// Address: 0x0000000100009CC8

//----- (0000000100009CC8) ----------------------------------------------------
void __fastcall sub_100009CC8(__int64 a1)
{
  char *v2; // x23
  char *v3; // x24
  __int64 v4; // x10
  __int64 v5; // x9
  char *v6; // x10
  char *v7; // x9
  __int64 v8; // x11
  unsigned __int64 v9; // x21
  char *v10; // x22
  void *v11; // x20
  char *v12; // x26
  __int64 v13; // x8
  __int64 v14; // x8
  char *v15; // x21
  char *v16; // x25
  char *v17; // x20
  char *v18; // x21
  char *v19; // x0
  __int64 v20; // t1
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x26
  char *v23; // x0
  char *v24; // x23
  unsigned __int64 v25; // x8
  bool v26; // zf
  signed __int64 v27; // x9
  unsigned __int64 v28; // x9
  __int64 v29; // x12
  char *v30; // x8
  char *v31; // x9
  __int64 v32; // t1
  __int64 v33; // x10
  __int64 v34; // x9
  char *v35; // x12
  __int128 *v36; // x13
  __int64 v37; // x14
  __int128 v38; // q0
  __int128 v39; // q1
  __int128 v40; // q2
  __int128 v41; // q3
  void *v42; // [xsp+0h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = *(char **)(a1 + 8);
  v2 = *(char **)(a1 + 16);
  if ( v2 == v3 )
    v4 = 0;
  else
    v4 = 56 * ((unsigned __int64)(v2 - v3) >> 3) - 1;
  v5 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(v4 - (*(_QWORD *)(a1 + 40) + v5)) >= 0x38 )
  {
    *(_QWORD *)(a1 + 32) = v5 + 56;
    v42 = *((void **)v2 - 1);
    *(_QWORD *)(a1 + 16) = v2 - 8;
    sub_10000A094(a1, &v42);
    return;
  }
  v6 = *(char **)(a1 + 24);
  v7 = *(char **)a1;
  v8 = (__int64)&v6[-*(_QWORD *)a1];
  if ( v2 - v3 < (unsigned __int64)v8 )
  {
    if ( v3 == v7 )
    {
      v42 = operator new(0xFC0u);
      sub_10000A3BC((char **)a1, &v42);
      v13 = *(_QWORD *)(a1 + 16);
      v42 = *(void **)(v13 - 8);
      *(_QWORD *)(a1 + 16) = v13 - 8;
      sub_10000A094(a1, &v42);
    }
    else
    {
      v42 = operator new(0xFC0u);
      sub_10000A228(a1, &v42);
    }
    if ( *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8) == 8 )
      v14 = 28;
    else
      v14 = *(_QWORD *)(a1 + 32) + 56LL;
    *(_QWORD *)(a1 + 32) = v14;
    return;
  }
  if ( v6 == v7 )
    v9 = 1;
  else
    v9 = v8 >> 2;
  if ( v9 >> 61 )
    sub_10000A544();
  v10 = (char *)operator new(8 * v9);
  v11 = operator new(0xFC0u);
  if ( v9 )
  {
    v12 = &v10[8 * v9];
  }
  else
  {
    v15 = (char *)operator new(8u);
    v12 = v15 + 8;
    operator delete(v10);
    v3 = *(char **)(a1 + 8);
    v2 = *(char **)(a1 + 16);
    v10 = v15;
  }
  *(_QWORD *)v10 = v11;
  v16 = v10 + 8;
  v17 = v10;
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      if ( v16 == v12 )
      {
        if ( v10 <= v17 )
        {
          if ( v16 == v17 )
            v22 = 1;
          else
            v22 = (v16 - v17) >> 2;
          if ( v22 >> 61 )
            sub_10000A544();
          v23 = (char *)operator new(8 * v22);
          v24 = v23;
          v25 = v22 >> 2;
          v18 = &v23[8 * (v22 >> 2)];
          v27 = v16 - v10;
          v26 = v16 == v10;
          v16 = v18;
          if ( !v26 )
          {
            v16 = &v18[v27];
            v28 = v27 - 8;
            if ( v28 < 0x38 || (v29 = 8 * v25, (unsigned __int64)(&v23[8 * v25] - v10) < 0x40) )
            {
              v30 = &v23[8 * (v22 >> 2)];
              v31 = v10;
              goto LABEL_43;
            }
            v33 = (v28 >> 3) + 1;
            v34 = 8 * (v33 & 0x3FFFFFFFFFFFFFF8LL);
            v30 = &v18[v34];
            v31 = &v10[v34];
            v35 = &v23[v29 + 32];
            v36 = (__int128 *)(v10 + 32);
            v37 = v33 & 0x3FFFFFFFFFFFFFF8LL;
            do
            {
              v38 = *(v36 - 2);
              v39 = *(v36 - 1);
              v40 = *v36;
              v41 = v36[1];
              v36 += 4;
              *((_OWORD *)v35 - 2) = v38;
              *((_OWORD *)v35 - 1) = v39;
              *(_OWORD *)v35 = v40;
              *((_OWORD *)v35 + 1) = v41;
              v35 += 64;
              v37 -= 8;
            }
            while ( v37 );
            if ( v33 != (v33 & 0x3FFFFFFFFFFFFFF8LL) )
            {
              do
              {
LABEL_43:
                v32 = *(_QWORD *)v31;
                v31 += 8;
                *(_QWORD *)v30 = v32;
                v30 += 8;
              }
              while ( v30 != v16 );
            }
          }
          v12 = &v23[8 * v22];
          if ( v17 )
            operator delete(v17);
          v17 = v24;
          goto LABEL_29;
        }
        v21 = (((v10 - v17) >> 3) + 1 + ((unsigned __int64)(((v10 - v17) >> 3) + 1) >> 63)) >> 1;
        v18 = &v10[-8 * v21];
        if ( v16 != v10 )
          memmove(&v10[-8 * v21], v10, v16 - v10);
        v16 = &v18[v16 - v10];
      }
      else
      {
        v18 = v10;
      }
LABEL_29:
      v20 = *(_QWORD *)v3;
      v3 += 8;
      *(_QWORD *)v16 = v20;
      v16 += 8;
      v10 = v18;
      if ( v3 == *(char **)(a1 + 16) )
        goto LABEL_23;
    }
  }
  v18 = v10;
LABEL_23:
  v19 = *(char **)a1;
  *(_QWORD *)a1 = v17;
  *(_QWORD *)(a1 + 8) = v18;
  *(_QWORD *)(a1 + 16) = v16;
  *(_QWORD *)(a1 + 24) = v12;
  if ( v16 - v18 == 8 )
  {
    *(_QWORD *)(a1 + 32) = 28;
    if ( !v19 )
      return;
  }
  else
  {
    *(_QWORD *)(a1 + 32) += 56LL;
    if ( !v19 )
      return;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v19);
}
