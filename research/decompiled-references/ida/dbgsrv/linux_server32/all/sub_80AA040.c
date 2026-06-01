/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AA040
// Address: 0x080AA040

//----- (080AA040) --------------------------------------------------------
unsigned int __cdecl sub_80AA040(int a1, int a2, unsigned int *a3)
{
  int *v3; // ecx
  unsigned int v4; // edi
  int v5; // esi
  int *v6; // edx
  void *v7; // eax
  unsigned int v9; // esi
  unsigned int v10; // edx
  int *v11; // eax
  __int64 v12; // xmm0_8
  int *v13; // eax
  int v14; // edi
  int *v15; // eax
  int *v16; // edi
  int v17; // esi
  int v18; // eax
  int *v19; // ecx
  unsigned int v20; // eax
  _BYTE *v21; // edx
  char *v22; // esi
  unsigned __int8 v23; // dl
  unsigned int v24; // edi
  unsigned int v25; // edx
  char *v26; // ecx
  _DWORD *v27; // edx
  char *v28; // esi
  _DWORD *v29; // eax
  int *v30; // esi
  int *i; // ebx
  int v32; // eax
  int v33; // edx
  int v34; // edx
  char v35; // di
  void *v36; // eax
  int *k; // esi
  int v38; // ecx
  char v39; // dl
  void *v40; // eax
  char *v41; // eax
  int v42; // edi
  unsigned int v43; // eax
  void *v44; // ecx
  size_t v45; // ecx
  unsigned int v46; // edi
  int *v47; // ecx
  void *v48; // edx
  int *v49; // eax
  void *v50; // eax
  __int64 v51; // xmm1_8
  __int64 v52; // xmm2_8
  int *v53; // eax
  int *v54; // edi
  int v55; // eax
  char *v56; // eax
  int *v57; // eax
  int v58; // [esp-78h] [ebp-88h]
  int v59; // [esp-74h] [ebp-84h]
  int v60; // [esp-70h] [ebp-80h]
  int v61; // [esp-6Ch] [ebp-7Ch]
  char *v62; // [esp-68h] [ebp-78h]
  int v63; // [esp-64h] [ebp-74h]
  char v64; // [esp-64h] [ebp-74h]
  unsigned int v65; // [esp-64h] [ebp-74h]
  unsigned int v66; // [esp-54h] [ebp-64h]
  int *v67; // [esp-54h] [ebp-64h]
  size_t v68; // [esp-54h] [ebp-64h]
  int *j; // [esp-50h] [ebp-60h]
  unsigned int v70; // [esp-48h] [ebp-58h]
  int *v71; // [esp-44h] [ebp-54h] BYREF
  unsigned int v72; // [esp-40h] [ebp-50h]
  unsigned int v73; // [esp-3Ch] [ebp-4Ch]
  int v74; // [esp-34h] [ebp-44h] BYREF
  const void *v75; // [esp-30h] [ebp-40h]
  size_t v76; // [esp-2Ch] [ebp-3Ch]
  int v77; // [esp-28h] [ebp-38h]
  _BYTE v78[20]; // [esp-24h] [ebp-34h]
  unsigned int v79; // [esp-10h] [ebp-20h]

  v79 = __readgsdword(0x14u);
  v71 = nullptr;
  v72 = 0;
  v73 = 0;
  v61 = sub_80CDEC0(a3, a3[1]);
  v60 = sub_80CDEC0(a3, a3[1]);
  if ( (v60 | v61) < 0 || 0x7FFFFFFF - v60 < v61 )
  {
    sub_80A6580((char **)a2, 0);
    if ( *(_BYTE *)(a1 + 96) )
      sub_8058290();
    v66 = 0;
    goto LABEL_6;
  }
  v9 = v72;
  v10 = v61 + v60;
  v11 = v71;
  v67 = v71;
  if ( v61 + v60 != v72 )
  {
    v74 = -1;
    *(_OWORD *)&v78[4] = 0;
    v75 = nullptr;
    v76 = 0;
    v77 = 0;
    *(_DWORD *)v78 = 4;
    *(_DWORD *)&v78[12] = -1;
    if ( v10 < v72 )
    {
      v46 = v61 + v60;
      do
      {
        v47 = &v11[9 * v46];
        v48 = (void *)v47[1];
        if ( v48 )
        {
          v47[2] = 0;
          sub_80CF780(v48);
          v11 = v71;
        }
        ++v46;
      }
      while ( v46 < v9 );
      v67 = v11;
      v72 = v61 + v60;
    }
    else
    {
      if ( &v74 < v71 || &v74 >= &v71[9 * v73] )
      {
        if ( v73 < v10 )
        {
          v49 = (int *)sub_80CF920((int)&v71, v71, v10, 0x24u);
          v9 = v72;
          v10 = v61 + v60;
          v67 = v49;
          v71 = v49;
        }
        while ( v9 < v10 )
        {
          v54 = &v67[9 * v9];
          v55 = v74;
          v54[1] = 0;
          *v54 = v55;
          v54[2] = 0;
          v54[3] = 0;
          if ( v76 )
          {
            v65 = v10;
            v68 = v76;
            v50 = sub_80CF8B0(v76);
            v54[1] = (int)v50;
            v54[3] = v68;
            memcpy(v50, v75, v68);
            v10 = v65;
            v54[2] = v68;
          }
          v51 = *(_QWORD *)v78;
          ++v9;
          v52 = *(_QWORD *)&v78[12];
          *((_BYTE *)v54 + 24) = v78[8];
          v53 = v71;
          *((_QWORD *)v54 + 2) = v51;
          v67 = v53;
          *(_QWORD *)(v54 + 7) = v52;
        }
      }
      else
      {
        if ( v73 < v10 )
        {
          v57 = (int *)sub_80CF920((int)&v71, v71, v10, 0x24u);
          v9 = v72;
          v10 = v61 + v60;
          v67 = v57;
          v71 = v57;
        }
        if ( v9 < v10 )
        {
          v12 = *(__int64 *)((char *)&qword_811CFF4 - 257412);
          v13 = v67;
          do
          {
            v14 = 9 * v9++;
            v15 = &v13[v14];
            *v15 = -1;
            v15[1] = 0;
            v15[2] = 0;
            v15[3] = 0;
            v15[6] = 0;
            v15[7] = -1;
            v15[8] = 0;
            *((_QWORD *)v15 + 2) = v12;
            v13 = v71;
          }
          while ( v10 != v9 );
          v67 = v71;
        }
      }
      v72 = v10;
    }
  }
  v16 = &v67[9 * v61];
  v59 = 9 * v61;
  if ( v16 != v67 )
  {
    v17 = 0;
    do
    {
      *((_BYTE *)v67 + 24) = 0;
      v17 += sub_80CE010(a3, a3[1]) - 1;
      *v67 = v17;
      v67[5] = sub_80CDEC0(a3, a3[1]);
      v67[4] = sub_80CDEC0(a3, a3[1]);
      v67[7] = sub_80CDEC0(a3, a3[1]);
      v18 = sub_80CDEC0(a3, a3[1]);
      v19 = v67 + 9;
      v67[8] = v18;
      v67 = v19;
    }
    while ( v16 != v19 );
    v58 = 9 * v60;
    v62 = (char *)&v19[9 * v60];
    if ( v62 == (char *)v19 )
    {
LABEL_43:
      v28 = (char *)&v71[v59];
      if ( v62 != (char *)&v71[v59] )
      {
        do
        {
          if ( *(_BYTE *)(a1 + 96) )
            sub_8058290();
          v28 += 36;
        }
        while ( v62 != v28 );
      }
      goto LABEL_47;
    }
LABEL_30:
    v63 = 0;
    do
    {
      v63 += sub_80CE010(a3, a3[1]) - 1;
      *v67 = v63;
      v20 = a3[1];
      v21 = (_BYTE *)*a3;
      if ( *a3 < v20 )
      {
        v22 = v21 + 1;
        v23 = *v21;
        *a3 = (unsigned int)v22;
        if ( v23 )
        {
          v24 = v23;
          v25 = v67[2];
          if ( v25 < v24 )
          {
            v56 = (char *)v67[1];
            if ( v67[3] < v24 )
            {
              v56 = (char *)sub_80CF920((int)(v67 + 1), v56, v24, 1u);
              v25 = v67[2];
              v67[1] = (int)v56;
            }
            memset(&v56[v25], 0, v24 - v25);
            v67[2] = v24;
            v20 = a3[1];
            v22 = (char *)*a3;
          }
          else if ( v24 != v25 )
          {
            v67[2] = v24;
            v20 = a3[1];
            v22 = (char *)*a3;
          }
          v26 = &v22[v24];
          if ( !__CFADD__(v24, v22) && v20 >= (unsigned int)v26 )
          {
            v27 = (_DWORD *)v67[1];
            *a3 = (unsigned int)v26;
            if ( v24 >= 4 )
            {
              *v27 = *(_DWORD *)v22;
              *(_DWORD *)((char *)v27 + v24 - 4) = *(_DWORD *)&v22[v24 - 4];
              qmemcpy(
                (void *)((unsigned int)(v27 + 1) & 0xFFFFFFFC),
                (const void *)(v22 - ((char *)v27 - ((unsigned int)(v27 + 1) & 0xFFFFFFFC))),
                4 * (((unsigned int)v27 + v24 - ((unsigned int)(v27 + 1) & 0xFFFFFFFC)) >> 2));
              v20 = a3[1];
            }
            else
            {
              *(_BYTE *)v27 = *v22;
              if ( (v24 & 2) != 0 )
                *(_WORD *)((char *)v27 + v24 - 2) = *(_WORD *)&v22[v24 - 2];
              v20 = a3[1];
            }
          }
        }
      }
      v67[4] = sub_80CDEC0(a3, v20);
      v67[7] = sub_80CDEC0(a3, a3[1]);
      v67[8] = sub_80CDEC0(a3, a3[1]);
      v67 += 9;
    }
    while ( v67 != (int *)v62 );
    goto LABEL_43;
  }
  v58 = 9 * v60;
  v62 = (char *)&v67[9 * v60];
  if ( v62 != (char *)v67 )
    goto LABEL_30;
  v58 = 0;
LABEL_47:
  v74 = 0;
  v75 = nullptr;
  v29 = *(_DWORD **)(a1 + 244);
  v76 = 0;
  v66 = (*(__uid_t (**)(void))((char *)&off_811D098 + *v29 - 135385076))();
  v30 = &v71[v59];
  for ( i = v71; v30 != i; i += 9 )
  {
    if ( *(_BYTE *)(a1 + 96) )
      sub_8058290();
  }
  sub_80A6580((char **)a2, v66);
  sub_80A6580((char **)a2, v70);
  for ( j = v71; v30 != j; j += 9 )
  {
    v34 = *(_DWORD *)(a2 + 4);
    v35 = *((_BYTE *)j + 24);
    v36 = *(void **)a2;
    if ( *(_DWORD *)(a2 + 8) < (unsigned int)(v34 + 1) )
    {
      v36 = sub_80CF920(a2, v36, v34 + 1, 1u);
      *(_DWORD *)a2 = v36;
      v34 = *(_DWORD *)(a2 + 4);
    }
    *((_BYTE *)v36 + v34) = v35;
    v32 = *(_DWORD *)(a2 + 4);
    v33 = v32 + 1;
    *(_DWORD *)(a2 + 4) = v32 + 1;
    if ( !*((_BYTE *)j + 24) && j[4] == 4 )
    {
      v42 = j[2];
      v43 = v32 + 2;
      v44 = *(void **)a2;
      if ( *(_DWORD *)(a2 + 8) < v43 )
      {
        v44 = sub_80CF920(a2, v44, v43, 1u);
        v33 = *(_DWORD *)(a2 + 4);
        *(_DWORD *)a2 = v44;
      }
      *((_BYTE *)v44 + v33) = v42;
      ++*(_DWORD *)(a2 + 4);
      v45 = j[2];
      if ( v45 )
        sub_80A62C0(v45, (char **)a2, (const void *)j[1]);
    }
  }
  for ( k = &v30[v58]; k != j; j += 9 )
  {
    v38 = *(_DWORD *)(a2 + 4);
    v39 = *((_BYTE *)j + 24);
    v40 = *(void **)a2;
    if ( *(_DWORD *)(a2 + 8) < (unsigned int)(v38 + 1) )
    {
      v64 = *((_BYTE *)j + 24);
      v40 = sub_80CF920(a2, v40, v38 + 1, 1u);
      v38 = *(_DWORD *)(a2 + 4);
      v39 = v64;
      *(_DWORD *)a2 = v40;
    }
    *((_BYTE *)v40 + v38) = v39;
    ++*(_DWORD *)(a2 + 4);
    if ( *(_BYTE *)(a1 + 96) )
      sub_8058290();
  }
  if ( v66 != 1 )
  {
    v41 = (char *)&qword_811CFF4 - 258076;
    if ( v75 )
      v41 = (char *)v74;
    sub_80A6780((char **)a2, v41);
  }
  if ( v74 )
  {
    v75 = nullptr;
    sub_80CF780((void *)v74);
  }
LABEL_6:
  v3 = v71;
  if ( v71 )
  {
    v4 = v72;
    if ( v72 )
    {
      v5 = 0;
      do
      {
        v6 = &v3[9 * v5];
        v7 = (void *)v6[1];
        if ( v7 )
        {
          v6[2] = 0;
          sub_80CF780(v7);
          v3 = v71;
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    v72 = 0;
    sub_80CF780(v3);
  }
  if ( v79 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v66;
}
// 80AA3D1: conditional instruction was optimized away because edi.4 is in (1..3)
// 80AA51C: variable 'v70' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D098: using guessed type _UNKNOWN *off_811D098;
