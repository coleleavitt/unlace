/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1ED90
// Address: 0x0001ED90

//----- (0001ED90) --------------------------------------------------------
int __fastcall sub_1ED90(int a1, int *a2, int a3)
{
  FILE *v4; // r3
  _BOOL4 v6; // r6
  size_t v7; // r10
  const char **v8; // r11
  const char *v9; // r8
  const char **v10; // r6
  _DWORD *v11; // r1
  int v12; // r6
  _DWORD *v13; // r0
  int v14; // r2
  int v15; // t1
  int v16; // r3
  unsigned int v18; // r2
  unsigned int *v19; // r6
  __int64 v20; // kr08_8
  unsigned int v21; // r2
  int v22; // r3
  int v23; // r2
  int v24; // r9
  unsigned int v25; // r8
  unsigned int v26; // r10
  int *v27; // r2
  int v28; // r10
  int *v29; // r2
  char *v30; // r3
  int v31; // r2
  unsigned int v32; // r1
  int v33; // r3
  char *v34; // r3
  unsigned int v35; // r6
  int v36; // r4
  int v37; // r5
  void *v38; // r0
  char *v39; // r3
  char *v41; // r0
  int v42; // r0
  void *v43; // r6
  unsigned int v44; // r3
  char *v45; // r0
  char *v46; // r2
  unsigned int v47; // r3
  void *v48; // r0
  int v49; // [sp+4h] [bp-70h]
  size_t v51; // [sp+18h] [bp-5Ch]
  const void *v52; // [sp+1Ch] [bp-58h]
  void *ptr; // [sp+24h] [bp-50h] BYREF
  unsigned int v54; // [sp+28h] [bp-4Ch]
  unsigned int v55; // [sp+2Ch] [bp-48h]
  unsigned int v56; // [sp+30h] [bp-44h] BYREF
  unsigned int v57; // [sp+34h] [bp-40h]
  char s[16]; // [sp+48h] [bp-2Ch] BYREF
  unsigned __int8 v59; // [sp+58h] [bp-1Ch]
  __int64 s1; // [sp+5Ch] [bp-18h]
  unsigned int v61; // [sp+64h] [bp-10h]

  if ( *(_BYTE *)(a1 + 1077) )
    return -5;
  v4 = *(FILE **)(a1 + 1104);
  if ( !v4 )
    return -5;
  if ( a3 )
  {
    sub_1BF74(a1, 0, 1);
    v4 = *(FILE **)(a1 + 1104);
  }
  v49 = 1;
  rewind(v4);
  s1 = 0;
  v61 = 0;
  ptr = nullptr;
  v54 = 0;
  v55 = 0;
LABEL_6:
  while ( 1 )
  {
    v6 = sub_185D8(a1, (int)&v56);
    if ( !v6 )
      break;
    if ( v56 < v57 )
    {
      if ( *(_DWORD *)(a1 + 1120) > 1u )
        goto LABEL_16;
      v7 = HIDWORD(s1);
      if ( HIDWORD(s1) <= 1 )
        goto LABEL_16;
      v8 = (const char **)ptr;
      v9 = (const char *)s1;
      v10 = (const char **)((char *)ptr + 12 * v54);
      if ( ptr != v10 )
      {
        do
        {
          if ( v8[1] )
          {
            if ( !strcmp(v9, *v8) )
              goto LABEL_16;
          }
          else if ( !strcmp(v9, (const char *)&dword_8DB98) )
          {
            goto LABEL_16;
          }
          v8 += 3;
        }
        while ( v10 != v8 );
      }
      v41 = strstr(v9, "ld-");
      if ( !v41 || (v42 = v41 - v9, v42 == -1) || v42 && v9[v42 - 1] != 47 )
      {
LABEL_16:
        v12 = a2[1];
        v11 = (_DWORD *)*a2;
        if ( !v12 )
          goto LABEL_69;
      }
      else
      {
        v43 = sub_77FEC(v7);
        memcpy(v43, (const void *)s1, v7);
        v44 = v54;
        if ( v54 + 1 > v55 )
        {
          v45 = (char *)sub_78018((int)&ptr, ptr, v54 + 1, 0xCu);
          v44 = v54;
          ptr = v45;
        }
        else
        {
          v45 = (char *)ptr;
        }
        v46 = &v45[12 * v44];
        *(_DWORD *)v46 = v43;
        *((_DWORD *)v46 + 1) = v7;
        v47 = v54;
        *((_DWORD *)v46 + 2) = v7;
        v12 = a2[1];
        v11 = (_DWORD *)*a2;
        v54 = v47 + 1;
        if ( !v12 )
        {
LABEL_69:
          v18 = 1;
          v16 = v12;
          if ( a2[2] )
            goto LABEL_23;
LABEL_70:
          v11 = sub_78018((int)a2, v11, v18, 0x28u);
          v16 = a2[1];
          *a2 = (int)v11;
          goto LABEL_23;
        }
      }
      if ( v56 != *v11 )
      {
        v13 = v11;
        v14 = 0;
        while ( 1 )
        {
          v16 = v14 + 1;
          if ( v12 == ++v14 )
            break;
          v15 = v13[10];
          v13 += 10;
          if ( v15 == v56 )
            goto LABEL_6;
        }
        v18 = v16 + 1;
        if ( v16 + 1 > (unsigned int)a2[2] )
          goto LABEL_70;
LABEL_23:
        v19 = &v11[10 * v16];
        *v19 = 0;
        v19[1] = 0;
        v19[2] = 0;
        v19[3] = 0;
        v19[4] = 0;
        *((_WORD *)v19 + 18) = 0;
        v19[5] = 0;
        v19[6] = 0;
        v19[7] = 0;
        v19[8] = 0;
        ++a2[1];
        *v19 = v56;
        v20 = *((_QWORD *)v19 + 1);
        v19[1] = v57;
        v21 = v19[4];
        *((_QWORD *)v19 + 1) = s1;
        v19[4] = v61;
        v61 = v21;
        v22 = v59;
        v23 = v49;
        s1 = v20;
        *((_BYTE *)v19 + 36) = v59;
        if ( v49 < v22 )
          v23 = v22;
        v49 = v23;
        if ( strchr(s, 114) )
          *((_BYTE *)v19 + 37) |= 4u;
        if ( strchr(s, 119) )
          *((_BYTE *)v19 + 37) |= 2u;
        if ( strchr(s, 120) )
          *((_BYTE *)v19 + 37) |= 1u;
      }
    }
  }
  if ( !v54 )
    goto LABEL_46;
  v24 = 0;
  v25 = 0;
  while ( 2 )
  {
    v30 = (char *)ptr + v24;
    if ( (char *)ptr + v24 == (void *)(a1 + 1116) )
    {
LABEL_42:
      if ( *(_DWORD *)(a1 + 1120) )
        v27 = *(int **)(a1 + 1116);
      else
        v27 = &dword_8DB98;
    }
    else
    {
      v26 = *((_DWORD *)v30 + 1);
      if ( v26 )
      {
        v51 = v26 - 1;
        if ( v26 != 1 )
        {
          v48 = *(void **)(a1 + 1116);
          v52 = *(const void **)v30;
          if ( v26 > *(_DWORD *)(a1 + 1124) )
          {
            v48 = sub_78018(a1 + 1116, v48, v26, 1u);
            *(_DWORD *)(a1 + 1116) = v48;
          }
          *(_DWORD *)(a1 + 1120) = v26;
          memmove(v48, v52, v51);
          *(_BYTE *)(*(_DWORD *)(a1 + 1116) + v51) = 0;
          goto LABEL_42;
        }
      }
      *(_DWORD *)(a1 + 1120) = 0;
      v27 = &dword_8DB98;
    }
    sub_53ED4(a1, "trying potential interpreter %s\n", v27);
    v28 = sub_1E458(a1, a2);
    if ( v28 )
    {
      if ( *(_DWORD *)(a1 + 1120) )
        v29 = *(int **)(a1 + 1116);
      else
        v29 = &dword_8DB98;
      sub_17480(a1, "Found a valid interpeter in %s, will report shared library events!\n", v29);
      sub_1E8A0(a1, a2);
      v6 = v28;
    }
    ++v25;
    v24 += 12;
    if ( v25 < v54 )
      continue;
    break;
  }
  if ( !v6 )
    *(_DWORD *)(a1 + 1120) = 0;
LABEL_46:
  if ( a2[1] )
  {
    v31 = 0;
    v32 = 0;
    do
    {
      ++v32;
      v33 = *a2 + v31;
      v31 += 40;
      *(_BYTE *)(v33 + 36) = v49;
    }
    while ( v32 < a2[1] );
  }
  if ( a3 )
    sub_1C560(a1, 0, 1, a3);
  v34 = (char *)ptr;
  if ( ptr )
  {
    v35 = v54;
    if ( v54 )
    {
      v36 = 0;
      v37 = 0;
      do
      {
        v38 = *(void **)&v34[v36];
        v39 = &v34[v36];
        if ( v38 )
        {
          *((_DWORD *)v39 + 1) = 0;
          sub_77F70(v38);
        }
        ++v37;
        v36 += 12;
        v34 = (char *)ptr;
      }
      while ( v35 != v37 );
    }
    v54 = 0;
    sub_77F70(v34);
  }
  if ( (_DWORD)s1 )
  {
    HIDWORD(s1) = 0;
    sub_77F70((void *)s1);
  }
  return 1;
}
// 8DB98: using guessed type int dword_8DB98;
