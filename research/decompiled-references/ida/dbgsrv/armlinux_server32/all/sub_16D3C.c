/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16D3C
// Address: 0x00016D3C

//----- (00016D3C) --------------------------------------------------------
int __fastcall sub_16D3C(_DWORD *a1, int a2, int a3)
{
  int v6; // r2
  int v7; // r8
  int v8; // r10
  char *v9; // r1
  unsigned int v10; // r2
  int v11; // r3
  int v12; // r3
  char *v13; // r1
  char *v14; // r11
  char **v15; // r4
  unsigned int v16; // r5
  char *v17; // r3
  char *v18; // r1
  char *v19; // r0
  char *v20; // r8
  unsigned int v21; // r3
  char *v22; // r2
  char *v23; // r3
  char *v24; // r5
  char *v25; // r1
  unsigned int v26; // r2
  unsigned int v27; // r6
  char *v28; // r10
  int v29; // t1
  unsigned int v30; // r7
  char *v31; // r0
  int **v32; // r6
  const void *v33; // r7
  size_t v34; // r0
  int *v35; // r3
  unsigned int v36; // r12
  char *v37; // r0
  int v38; // r5
  size_t v39; // r0
  size_t v40; // r7
  char *v41; // r3
  char *v42; // r1
  unsigned int v43; // r2
  char *v44; // r0
  char *v45; // r1
  int *v46; // r3
  void *v48; // r0
  unsigned int v49; // r2
  int *v50; // r0
  char *v51; // r0
  unsigned int v52; // r8
  void *v53; // r0
  char *v54; // r1
  unsigned int v55; // r0
  int v56; // r2
  int v57; // r2
  char *v58; // r0
  char *v59; // [sp+0h] [bp-3Ch]
  int v60; // [sp+Ch] [bp-30h]
  int v61; // [sp+10h] [bp-2Ch]
  size_t n; // [sp+14h] [bp-28h]
  char *s; // [sp+18h] [bp-24h]
  int v64; // [sp+1Ch] [bp-20h]
  char v65; // [sp+20h] [bp-1Ch]
  int v66; // [sp+24h] [bp-18h]
  int v67; // [sp+28h] [bp-14h]
  unsigned int v68; // [sp+2Ch] [bp-10h]
  int v69; // [sp+30h] [bp-Ch] BYREF

  v6 = *(unsigned __int8 *)(a2 + 9);
  switch ( v6 )
  {
    case 1:
      v7 = 2;
      break;
    case 2:
      v7 = 4;
      break;
    case 7:
      v7 = 8;
      break;
    default:
      if ( !under_debugger )
        sub_78C64(1798);
      goto LABEL_5;
  }
  v8 = a1[3];
  v9 = (char *)a1[2];
  v10 = v8 + 1;
  if ( (unsigned int)(v8 + 1) > a1[4] )
  {
    v51 = (char *)sub_78018((int)(a1 + 2), v9, v10, 0x14u);
    v11 = a1[3];
    v9 = v51;
    a1[2] = v51;
    v10 = v11 + 1;
  }
  else
  {
    v11 = a1[3];
  }
  a1[3] = v10;
  v12 = 20 * v11;
  *(_DWORD *)&v9[v12] = 0;
  v13 = &v9[v12];
  *((_DWORD *)v13 + 2) = a3;
  *((_DWORD *)v13 + 4) = v7;
  *((_DWORD *)v13 + 1) = -1;
  *((_DWORD *)v13 + 3) = 4;
  v14 = *(char **)(a2 + 12);
  v15 = (char **)a1[1];
  s = *(char **)a2;
  v60 = *(_DWORD *)(a2 + 4);
  v61 = *(unsigned __int8 *)(a2 + 9);
  v65 = *(_BYTE *)(a2 + 8);
  v66 = *(_DWORD *)(a2 + 16);
  if ( !v14 )
  {
    v23 = v15[4];
    v64 = (int)(v15 + 3);
    v36 = (unsigned int)v15[5];
    v25 = v15[3];
    v30 = (unsigned int)(v23 + 1);
    goto LABEL_34;
  }
  if ( (v60 & 0x100) != 0 )
  {
    v16 = 1;
  }
  else
  {
    switch ( v61 )
    {
      case 1:
        v16 = 16;
        break;
      case 2:
        v16 = 32;
        break;
      case 7:
        v16 = 64;
        break;
      default:
        if ( !under_debugger )
          sub_78C64(1795);
LABEL_5:
        __und(0xFFu);
    }
  }
  v17 = v15[10];
  v18 = v15[9];
  if ( v17 + 1 > v15[11] )
  {
    v19 = (char *)sub_78018((int)(v15 + 9), v18, (unsigned int)(v17 + 1), 0xCu);
    v17 = v15[10];
    v18 = v19;
    v15[9] = v19;
  }
  v69 = 0;
  v20 = &v18[12 * (_DWORD)v17];
  *(_DWORD *)v20 = 0;
  *((_DWORD *)v20 + 1) = 0;
  *((_DWORD *)v20 + 2) = 0;
  ++v15[10];
  v21 = *((_DWORD *)v20 + 1);
  if ( v21 <= v16 )
  {
    if ( v21 >= v16 )
      goto LABEL_24;
    v54 = *(char **)v20;
    v55 = *((_DWORD *)v20 + 2);
    if ( *(_DWORD *)v20 <= (unsigned int)&v69 && &v69 < (int *)&v54[4 * v55] )
    {
      if ( v16 <= v55
        || (v58 = (char *)sub_78018((int)v20, v54, v16, 4u),
            v21 = *((_DWORD *)v20 + 1),
            v54 = v58,
            *(_DWORD *)v20 = v58,
            v16 > v21) )
      {
        v57 = 4 * v21;
        while ( 1 )
        {
          ++v21;
          *(_DWORD *)&v54[v57] = 0;
          v57 += 4;
          if ( v16 <= v21 )
            break;
          v54 = *(char **)v20;
        }
      }
    }
    else if ( v16 <= v55
           || (v48 = sub_78018((int)v20, v54, v16, 4u), v21 = *((_DWORD *)v20 + 1), *(_DWORD *)v20 = v48, v16 > v21) )
    {
      v56 = 4 * v21;
      do
      {
        ++v21;
        *(_DWORD *)(*(_DWORD *)v20 + v56) = 0;
        v56 += 4;
      }
      while ( v16 > v21 );
    }
  }
  *((_DWORD *)v20 + 1) = v16;
LABEL_24:
  v22 = &v14[4 * v16];
  v23 = v15[4];
  v24 = v14;
  v25 = v15[3];
  v59 = v22;
  v64 = (int)(v15 + 3);
  v26 = (unsigned int)(v23 + 1);
  v27 = (unsigned int)v15[5];
  v67 = v8;
  do
  {
    v28 = (char *)(v24 - v14);
    v29 = *(_DWORD *)v24;
    v24 += 4;
    v30 = v26;
    if ( v29 )
    {
      if ( v26 > v27 )
      {
        v31 = (char *)sub_78018(v64, v25, v26, 0xCu);
        v23 = v15[4];
        v25 = v31;
        v15[3] = v31;
      }
      v32 = (int **)&v25[12 * (_DWORD)v23];
      *v32 = nullptr;
      v32[1] = nullptr;
      v32[2] = nullptr;
      ++v15[4];
      v33 = *((const void **)v24 - 1);
      if ( v33 && (v34 = strlen(*((const char **)v24 - 1)), (n = v34) != 0) )
      {
        v49 = v34 + 1;
        v50 = *v32;
        v68 = v49;
        if ( v49 > (unsigned int)v32[2] )
        {
          v50 = (int *)sub_78018((int)v32, v50, v49, 1u);
          *v32 = v50;
        }
        v32[1] = (int *)v68;
        memmove(v50, v33, n);
        *((_BYTE *)*v32 + n) = 0;
        if ( v32[1] )
          v35 = *v32;
        else
          v35 = &dword_8DB98;
      }
      else
      {
        v32[1] = nullptr;
        v35 = &dword_8DB98;
      }
      *(_DWORD *)&v28[*(_DWORD *)v20] = v35;
      v27 = (unsigned int)v15[5];
      v23 = v15[4];
      v25 = v15[3];
      v26 = (unsigned int)(v23 + 1);
      v30 = (unsigned int)(v23 + 1);
    }
  }
  while ( v59 != v24 );
  v36 = v27;
  v8 = v67;
  v14 = *(char **)v20;
LABEL_34:
  if ( v30 > v36 )
  {
    v37 = (char *)sub_78018(v64, v25, v30, 0xCu);
    v23 = v15[4];
    v25 = v37;
    v15[3] = v37;
  }
  v38 = (int)&v25[12 * (_DWORD)v23];
  *(_DWORD *)v38 = 0;
  *(_DWORD *)(v38 + 4) = 0;
  *(_DWORD *)(v38 + 8) = 0;
  ++v15[4];
  if ( s && (v39 = strlen(s), (v40 = v39) != 0) )
  {
    v52 = v39 + 1;
    v53 = *(void **)v38;
    if ( v52 > *(_DWORD *)(v38 + 8) )
    {
      v53 = sub_78018(v38, *(void **)v38, v52, 1u);
      *(_DWORD *)v38 = v53;
    }
    *(_DWORD *)(v38 + 4) = v52;
    memmove(v53, s, v40);
    *(_BYTE *)(*(_DWORD *)v38 + v40) = 0;
  }
  else
  {
    *(_DWORD *)(v38 + 4) = 0;
  }
  v41 = v15[1];
  v42 = *v15;
  v43 = (unsigned int)(v41 + 1);
  if ( v41 + 1 > v15[2] )
  {
    v44 = (char *)sub_78018((int)v15, v42, v43, 0x14u);
    v41 = v15[1];
    v42 = v44;
    *v15 = v44;
    v43 = (unsigned int)(v41 + 1);
  }
  v15[1] = (char *)v43;
  v45 = &v42[20 * (_DWORD)v41];
  if ( *(_DWORD *)(v38 + 4) )
    v46 = *(int **)v38;
  else
    v46 = &dword_8DB98;
  *(_DWORD *)v45 = v46;
  *((_DWORD *)v45 + 1) = v60;
  v45[9] = v61;
  *((_DWORD *)v45 + 3) = v14;
  v45[8] = v65;
  *((_DWORD *)v45 + 4) = v66;
  return v8;
}
// 8DB98: using guessed type int dword_8DB98;
// D6C20: using guessed type char under_debugger;
