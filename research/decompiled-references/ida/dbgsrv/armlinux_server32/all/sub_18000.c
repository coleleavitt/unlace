/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_18000
// Address: 0x00018000

//----- (00018000) --------------------------------------------------------
int __fastcall sub_18000(_DWORD *a1)
{
  _DWORD *v2; // r4
  char **v3; // r11
  _DWORD *v4; // r4
  int v5; // r3
  char *v6; // r1
  unsigned int v7; // r2
  char *v8; // r2
  char *v9; // r10
  char **v10; // r4
  unsigned int v11; // r5
  char *v12; // r3
  char *v13; // r1
  char *v14; // r0
  char *v15; // r8
  unsigned int v16; // r3
  char *v17; // r2
  char *v18; // r3
  unsigned int v19; // r12
  char *v20; // r5
  char *v21; // r1
  unsigned int v22; // r2
  char *v23; // r11
  char *v24; // r10
  int v25; // t1
  unsigned int v26; // r6
  char *v27; // r0
  int **v28; // r6
  const void *v29; // r9
  size_t v30; // r0
  int *v31; // r3
  char *v32; // r0
  int v33; // r5
  size_t v34; // r0
  size_t v35; // r6
  char *v36; // r0
  char *v37; // r1
  unsigned int v38; // r2
  char *v39; // r1
  int *v40; // r3
  char *v42; // r1
  unsigned int v43; // r0
  char *v44; // r0
  unsigned int v45; // r2
  int *v46; // r0
  char *v47; // r0
  int v48; // r2
  unsigned int v49; // r7
  void *v50; // r0
  int v51; // r2
  char *v52; // r0
  char *v53; // [sp+0h] [bp-44h]
  int v54; // [sp+4h] [bp-40h]
  _DWORD *v55; // [sp+Ch] [bp-38h]
  char *v56; // [sp+10h] [bp-34h]
  int v57; // [sp+14h] [bp-30h]
  size_t n; // [sp+18h] [bp-2Ch]
  char *s; // [sp+1Ch] [bp-28h]
  int v60; // [sp+20h] [bp-24h]
  char v61; // [sp+24h] [bp-20h]
  char *v62; // [sp+28h] [bp-1Ch]
  char **v63; // [sp+30h] [bp-14h]
  unsigned int v64; // [sp+34h] [bp-10h]
  int v65; // [sp+38h] [bp-Ch] BYREF

  v2 = sub_808A4(0x190u);
  sub_17DB4((int)v2, (int)(a1 + 86));
  v54 = 128;
  a1[85] = v2;
  sub_16D3C(v2, (int)&off_D4820, 56);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D4834, 60);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D4848, 64);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D485C, 68);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D4870, 72);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D4884, 76);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D4898, 80);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D48AC, 84);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D48C0, 88);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D48D4, 92);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D48E8, 96);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D48FC, 100);
  sub_16D3C((_DWORD *)a1[85], (int)&off_D4910, 104);
  a1[100] = sub_16D3C((_DWORD *)a1[85], (int)&off_D4924, 108);
  a1[212] = sub_16D3C((_DWORD *)a1[85], (int)&off_D47E4, 112);
  a1[101] = sub_16D3C((_DWORD *)a1[85], (int)&off_D47F8, 116);
  a1[213] = sub_16D3C((_DWORD *)a1[85], (int)&off_D480C, 120);
  v55 = a1;
  v3 = &off_D4550;
  do
  {
    v4 = (_DWORD *)v55[85];
    v5 = v4[3];
    v6 = (char *)v4[2];
    v7 = v5 + 1;
    if ( (unsigned int)(v5 + 1) > v4[4] )
    {
      v47 = (char *)sub_78018((int)(v4 + 2), v6, v7, 0x14u);
      v5 = v4[3];
      v6 = v47;
      v4[2] = v47;
      v7 = v5 + 1;
    }
    v4[3] = v7;
    v8 = &v6[20 * v5];
    *(_DWORD *)v8 = 2;
    *((_DWORD *)v8 + 1) = -1;
    *((_DWORD *)v8 + 4) = 8;
    *((_DWORD *)v8 + 2) = v54;
    *((_DWORD *)v8 + 3) = 8;
    v9 = v3[3];
    v10 = (char **)v4[1];
    s = *v3;
    v56 = v3[1];
    v57 = *((unsigned __int8 *)v3 + 9);
    v61 = *((_BYTE *)v3 + 8);
    v62 = v3[4];
    if ( !v9 )
    {
      v18 = v10[4];
      v60 = (int)(v10 + 3);
      v19 = (unsigned int)v10[5];
      v21 = v10[3];
      v26 = (unsigned int)(v18 + 1);
      goto LABEL_26;
    }
    if ( ((unsigned __int16)v56 & 0x100) != 0 )
    {
      v11 = 1;
    }
    else
    {
      switch ( v57 )
      {
        case 1:
          v11 = 16;
          break;
        case 2:
          v11 = 32;
          break;
        case 7:
          v11 = 64;
          break;
        default:
          if ( under_debugger )
            __und(0xFFu);
          sub_78C64(1795);
      }
    }
    v12 = v10[10];
    v13 = v10[9];
    if ( v12 + 1 > v10[11] )
    {
      v14 = (char *)sub_78018((int)(v10 + 9), v13, (unsigned int)(v12 + 1), 0xCu);
      v12 = v10[10];
      v13 = v14;
      v10[9] = v14;
    }
    v65 = 0;
    v15 = &v13[12 * (_DWORD)v12];
    *(_DWORD *)v15 = 0;
    *((_DWORD *)v15 + 1) = 0;
    *((_DWORD *)v15 + 2) = 0;
    ++v10[10];
    v16 = *((_DWORD *)v15 + 1);
    if ( v16 <= v11 )
    {
      if ( v16 >= v11 )
        goto LABEL_16;
      v42 = *(char **)v15;
      v43 = *((_DWORD *)v15 + 2);
      if ( *(_DWORD *)v15 <= (unsigned int)&v65 && &v65 < (int *)&v42[4 * v43] )
      {
        if ( v11 <= v43
          || (v52 = (char *)sub_78018((int)v15, v42, v11, 4u),
              v16 = *((_DWORD *)v15 + 1),
              v42 = v52,
              *(_DWORD *)v15 = v52,
              v11 > v16) )
        {
          v51 = 4 * v16;
          while ( 1 )
          {
            ++v16;
            *(_DWORD *)&v42[v51] = 0;
            v51 += 4;
            if ( v11 <= v16 )
              break;
            v42 = *(char **)v15;
          }
        }
      }
      else if ( v11 <= v43
             || (v44 = (char *)sub_78018((int)v15, v42, v11, 4u),
                 v16 = *((_DWORD *)v15 + 1),
                 v42 = v44,
                 *(_DWORD *)v15 = v44,
                 v11 > v16) )
      {
        v48 = 4 * v16;
        while ( 1 )
        {
          ++v16;
          *(_DWORD *)&v42[v48] = 0;
          v48 += 4;
          if ( v11 <= v16 )
            break;
          v42 = *(char **)v15;
        }
      }
    }
    *((_DWORD *)v15 + 1) = v11;
LABEL_16:
    v17 = &v9[4 * v11];
    v18 = v10[4];
    v19 = (unsigned int)v10[5];
    v20 = v9;
    v21 = v10[3];
    v53 = v17;
    v60 = (int)(v10 + 3);
    v22 = (unsigned int)(v18 + 1);
    v63 = v3;
    v23 = v9;
    do
    {
      v24 = (char *)(v20 - v23);
      v25 = *(_DWORD *)v20;
      v20 += 4;
      v26 = v22;
      if ( v25 )
      {
        if ( v22 > v19 )
        {
          v27 = (char *)sub_78018(v60, v21, v22, 0xCu);
          v18 = v10[4];
          v21 = v27;
          v10[3] = v27;
        }
        v28 = (int **)&v21[12 * (_DWORD)v18];
        *v28 = nullptr;
        v28[1] = nullptr;
        v28[2] = nullptr;
        ++v10[4];
        v29 = *((const void **)v20 - 1);
        if ( v29 && (v30 = strlen(*((const char **)v20 - 1)), (n = v30) != 0) )
        {
          v45 = v30 + 1;
          v46 = *v28;
          v64 = v45;
          if ( v45 > (unsigned int)v28[2] )
          {
            v46 = (int *)sub_78018((int)v28, v46, v45, 1u);
            *v28 = v46;
          }
          v28[1] = (int *)v64;
          memmove(v46, v29, n);
          *((_BYTE *)*v28 + n) = 0;
          if ( v28[1] )
            v31 = *v28;
          else
            v31 = &dword_8DB98;
        }
        else
        {
          v28[1] = nullptr;
          v31 = &dword_8DB98;
        }
        *(_DWORD *)&v24[*(_DWORD *)v15] = v31;
        v19 = (unsigned int)v10[5];
        v18 = v10[4];
        v21 = v10[3];
        v22 = (unsigned int)(v18 + 1);
        v26 = (unsigned int)(v18 + 1);
      }
    }
    while ( v53 != v20 );
    v3 = v63;
    v9 = *(char **)v15;
LABEL_26:
    if ( v26 > v19 )
    {
      v32 = (char *)sub_78018(v60, v21, v26, 0xCu);
      v18 = v10[4];
      v21 = v32;
      v10[3] = v32;
    }
    v33 = (int)&v21[12 * (_DWORD)v18];
    *(_DWORD *)v33 = 0;
    *(_DWORD *)(v33 + 4) = 0;
    *(_DWORD *)(v33 + 8) = 0;
    ++v10[4];
    if ( s && (v34 = strlen(s), (v35 = v34) != 0) )
    {
      v49 = v34 + 1;
      v50 = *(void **)v33;
      if ( v49 > *(_DWORD *)(v33 + 8) )
      {
        v50 = sub_78018(v33, *(void **)v33, v49, 1u);
        *(_DWORD *)v33 = v50;
      }
      *(_DWORD *)(v33 + 4) = v49;
      memmove(v50, s, v35);
      *(_BYTE *)(*(_DWORD *)v33 + v35) = 0;
    }
    else
    {
      *(_DWORD *)(v33 + 4) = 0;
    }
    v36 = v10[1];
    v37 = *v10;
    v38 = (unsigned int)(v36 + 1);
    if ( v36 + 1 > v10[2] )
    {
      v37 = (char *)sub_78018((int)v10, v37, v38, 0x14u);
      v36 = v10[1];
      *v10 = v37;
      v38 = (unsigned int)(v36 + 1);
    }
    v10[1] = (char *)v38;
    v39 = &v37[20 * (_DWORD)v36];
    if ( *(_DWORD *)(v33 + 4) )
      v40 = *(int **)v33;
    else
      v40 = &dword_8DB98;
    *(_DWORD *)v39 = v40;
    v3 += 5;
    *((_DWORD *)v39 + 3) = v9;
    *((_DWORD *)v39 + 1) = v56;
    v54 += 8;
    v39[9] = v57;
    v39[8] = v61;
    *((_DWORD *)v39 + 4) = v62;
  }
  while ( v54 != 384 );
  return sub_16D3C((_DWORD *)v55[85], (int)&off_D47D0, 384);
}
// 8DB98: using guessed type int dword_8DB98;
// D4550: using guessed type char *off_D4550;
// D47D0: using guessed type char *off_D47D0;
// D47E4: using guessed type int *off_D47E4;
// D47F8: using guessed type _UNKNOWN *off_D47F8;
// D480C: using guessed type int *off_D480C;
// D4820: using guessed type int (*off_D4820)[14];
// D4834: using guessed type _UNKNOWN *;
// D4848: using guessed type _UNKNOWN *;
// D485C: using guessed type _UNKNOWN *;
// D4870: using guessed type _UNKNOWN *;
// D4884: using guessed type _UNKNOWN *;
// D4898: using guessed type _UNKNOWN *;
// D48AC: using guessed type _UNKNOWN *;
// D48C0: using guessed type _UNKNOWN *;
// D48D4: using guessed type _UNKNOWN *;
// D48E8: using guessed type _UNKNOWN *;
// D48FC: using guessed type _UNKNOWN *;
// D4910: using guessed type _UNKNOWN *;
// D4924: using guessed type _UNKNOWN *off_D4924;
// D6C20: using guessed type char under_debugger;
