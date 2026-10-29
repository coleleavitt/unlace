/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B2000
// Address: 0x000B2000

//----- (000B2000) --------------------------------------------------------
int __fastcall sub_B2000(char a1)
{
  char *v1; // eax
  char *v2; // esi
  int v3; // edx
  int v4; // ecx
  int v5; // esi
  unsigned int v6; // eax
  char *v7; // edi
  const char *v8; // esi
  char *v9; // eax
  int v10; // edi
  __int64 v11; // rax
  int v12; // ebx
  char *v13; // ebx
  char v14; // bl
  int v15; // ebx
  bool v16; // cc
  unsigned int v17; // eax
  unsigned int v18; // esi
  char *v19; // esi
  int v20; // eax
  char *v21; // edx
  int v22; // ecx
  int v23; // esi
  _BYTE *v24; // eax
  const char *v25; // esi
  int v26; // eax
  int v27; // eax
  int v28; // ebx
  __int128 v29; // xmm1
  unsigned int v30; // esi
  unsigned int v31; // ecx
  unsigned int v33; // edi
  int v34; // ebx
  __int128 v35; // xmm1
  int v36; // [esp+20h] [ebp-4Ch]
  unsigned int v37; // [esp+20h] [ebp-4Ch]
  unsigned int v38; // [esp+24h] [ebp-48h]
  unsigned int v39; // [esp+24h] [ebp-48h]
  unsigned int v40; // [esp+28h] [ebp-44h]
  char *v41; // [esp+28h] [ebp-44h]
  unsigned int v42; // [esp+2Ch] [ebp-40h]
  FILE *v43; // [esp+30h] [ebp-3Ch]
  int v45; // [esp+38h] [ebp-34h] BYREF
  int v46; // [esp+3Ch] [ebp-30h]
  int v47; // [esp+40h] [ebp-2Ch]
  int v48; // [esp+48h] [ebp-24h] BYREF
  unsigned int v49; // [esp+4Ch] [ebp-20h]
  unsigned int v50; // [esp+50h] [ebp-1Ch]
  unsigned int v51; // [esp+58h] [ebp-14h]

  v51 = __readgsdword(0x14u);
  v43 = qfopen("/proc/cpuinfo", (int)"r");
  if ( !v43 )
    return -1;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v1 = (char *)qvector_reserve((int)&v48, nullptr, 1u, 8u);
  v42 = v50;
  v50 = 0;
  v2 = (char *)v48;
  v3 = v49 - 1;
  v36 = (int)v1;
  if ( (int)(v49 - 1) < 0 )
    goto LABEL_10;
  if ( v49 >= 4 && ((unsigned int)v1 >= v48 + 8 * v49 || (unsigned int)&v1[8 * v49] <= v48) )
  {
    v39 = v49;
    v33 = v49 & 0xFFFFFFFC;
    v3 -= v49 & 0xFFFFFFFC;
    v41 = &v1[8 * (v49 & 0xFFFFFFFC)];
    v4 = v48 + 8 * (v49 & 0xFFFFFFFC);
    v34 = 0;
    do
    {
      v35 = *(_OWORD *)&v2[8 * v34 + 16];
      *(_OWORD *)&v1[8 * v34] = *(_OWORD *)&v2[8 * v34];
      *(_OWORD *)&v1[8 * v34 + 16] = v35;
      v34 += 4;
    }
    while ( v33 != v34 );
    v1 = v41;
    if ( v39 == v33 )
      goto LABEL_9;
  }
  else
  {
    v4 = v48;
  }
  v5 = 0;
  do
  {
    *(_QWORD *)&v1[v5] = *(_QWORD *)(v4 + v5);
    v5 += 8;
    --v3;
  }
  while ( v3 >= 0 );
LABEL_9:
  v2 = (char *)v48;
LABEL_10:
  qfree(v2);
  v48 = v36;
  v50 = v42;
  v6 = v49;
  *(_DWORD *)(v36 + 8 * v49) = -1;
  *(_DWORD *)(v36 + 8 * v6 + 4) = -1;
  ++v49;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  while ( qgetline(&v45, v43) >= 0 )
  {
    v8 = byte_EF875;
    if ( v46 )
      v8 = (const char *)v45;
    v9 = strchr(v8, 58);
    if ( !v9 || (v10 = v9 - v8, v9 - v8 == -1) )
    {
      v17 = v49;
      v18 = v50;
      if ( v50 >= v49 + 1 )
      {
        v7 = (char *)v48;
        goto LABEL_11;
      }
      v7 = (char *)qvector_reserve((int)&v48, nullptr, v49 + 1, 8u);
      v40 = v50;
      v50 = v18;
      v19 = (char *)v48;
      v20 = v49 - 1;
      if ( (int)(v49 - 1) >= 0 )
      {
        if ( v49 < 4 || (unsigned int)v7 < v48 + 8 * v49 && (unsigned int)&v7[8 * v49] > v48 )
        {
          v21 = v7;
          v22 = v48;
          goto LABEL_32;
        }
        v38 = v49;
        v20 -= v49 & 0xFFFFFFFC;
        v21 = &v7[8 * (v49 & 0xFFFFFFFC)];
        v37 = v49 & 0xFFFFFFFC;
        v22 = v48 + 8 * (v49 & 0xFFFFFFFC);
        v28 = 0;
        do
        {
          v29 = *(_OWORD *)&v19[8 * v28 + 16];
          *(_OWORD *)&v7[8 * v28] = *(_OWORD *)&v19[8 * v28];
          *(_OWORD *)&v7[8 * v28 + 16] = v29;
          v28 += 4;
        }
        while ( v37 != v28 );
        if ( v38 != v37 )
        {
LABEL_32:
          v23 = 0;
          do
          {
            *(_QWORD *)&v21[v23] = *(_QWORD *)(v22 + v23);
            v23 += 8;
            --v20;
          }
          while ( v20 >= 0 );
        }
        v19 = (char *)v48;
      }
      qfree(v19);
      v48 = (int)v7;
      v50 = v40;
      v17 = v49;
LABEL_11:
      *(_DWORD *)&v7[8 * v17] = -1;
      *(_DWORD *)&v7[8 * v17 + 4] = -1;
      ++v49;
    }
    else
    {
      HIDWORD(v11) = v46;
      v12 = v9 - v8;
      if ( v10 > 0 )
      {
        LODWORD(v11) = v9 - 1 - v8;
        while ( 1 )
        {
          v13 = (char *)&qword_13ACD8 + 4169;
          if ( v11 )
            v13 = (char *)(v45 + v11);
          v14 = *v13;
          if ( v14 != 32 && v14 != 9 )
            break;
          v15 = v11 - 1;
          v16 = (int)v11 + 1 <= 1;
          LODWORD(v11) = v11 - 1;
          if ( v16 )
          {
            v12 = v15 + 1;
            goto LABEL_37;
          }
        }
        v12 = v11 + 1;
      }
LABEL_37:
      v24 = (char *)&qword_13ACD8 + 4169;
      if ( v12 | v46 )
        v24 = (_BYTE *)(v12 + v45);
      *v24 = 0;
      if ( v46 )
        v25 = (const char *)v45;
      else
        v25 = (char *)&qword_13ACD8 - 308323;
      if ( !strcmp(v25, (const char *)&qword_13ACD8 - 312092) )
      {
        v27 = atoi(&v25[v10 + 1]);
        *(_DWORD *)(v48 + 8 * v49 - 8) = v27;
      }
      else if ( !strcmp(v25, (const char *)&qword_13ACD8 - 312082) )
      {
        v26 = atoi(&v25[v10 + 1]);
        *(_DWORD *)(v48 + 8 * v49 - 4) = v26;
      }
    }
  }
  qfclose(v43);
  v30 = v49;
  if ( v49 && *(_DWORD *)(v48 + 8 * v49 - 8) == -1 )
    v30 = --v49;
  if ( !a1 )
  {
    sub_B2820((__int64 *)v48, (__int64 *)(v48 + 8 * v30));
    if ( v49 )
    {
      v31 = 0;
      v30 = 0;
      do
      {
        if ( !v31
          || *(_DWORD *)(v48 + 8 * v31) != *(_DWORD *)(v48 + 8 * v31 - 8)
          || *(_DWORD *)(v48 + 8 * v31 + 4) != *(_DWORD *)(v48 + 8 * v31 - 4) )
        {
          ++v30;
        }
        ++v31;
      }
      while ( v31 < v49 );
    }
    else
    {
      v30 = 0;
    }
  }
  if ( v45 )
  {
    v46 = 0;
    qfree((void *)v45);
    v45 = 0;
    v47 = 0;
  }
  if ( v48 )
  {
    v49 = 0;
    qfree((void *)v48);
    v48 = 0;
    v50 = 0;
  }
  return v30;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
