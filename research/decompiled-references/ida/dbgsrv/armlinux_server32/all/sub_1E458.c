/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E458
// Address: 0x0001E458

//----- (0001E458) --------------------------------------------------------
int __fastcall sub_1E458(int a1, int *a2)
{
  unsigned int v3; // r2
  int v5; // r1
  const char *v6; // r11
  int v7; // r0
  int v8; // r4
  const char *v9; // r0
  const char *v10; // r11
  size_t v11; // r0
  size_t v12; // r8
  int v13; // r3
  const char *v14; // r2
  const char *v15; // r3
  char *v16; // r10
  unsigned int *v17; // r0
  void **v18; // r8
  unsigned int v19; // r2
  int *v20; // r3
  const char *v21; // r0
  char *v22; // r1
  int v23; // r0
  char **v24; // r5
  char *i; // r9
  char *v26; // t1
  int v27; // r0
  int v28; // r8
  unsigned __int8 *v30; // r2
  unsigned int v31; // r1
  void *v32; // r11
  unsigned int v33; // r3
  size_t v34; // r0
  unsigned int v35; // r10
  void *v36; // r0
  unsigned int v37; // r11
  void *v38; // r0
  size_t v39; // [sp+14h] [bp-1030h]
  void *v40; // [sp+1Ch] [bp-1028h] BYREF
  unsigned int v41; // [sp+20h] [bp-1024h]
  unsigned int v42; // [sp+24h] [bp-1020h]
  int (**v43[2])(); // [sp+28h] [bp-101Ch] BYREF
  void *v44; // [sp+30h] [bp-1014h]
  unsigned int v45; // [sp+34h] [bp-1010h]
  unsigned int v46; // [sp+38h] [bp-100Ch]
  char v47[4]; // [sp+3Ch] [bp-1008h] BYREF

  if ( *(_DWORD *)(a1 + 888) )
    return 1;
  v3 = *(_DWORD *)(a1 + 1120);
  v41 = 0;
  v40 = nullptr;
  v42 = 0;
  if ( v3 > 1 )
  {
    v9 = sub_76C6C(*(_BYTE **)(a1 + 1116));
    v10 = v9;
    if ( !v9 || (v11 = strlen(v9), (v12 = v11) == 0) )
    {
      v13 = *(_DWORD *)(a1 + 1120);
      v41 = 0;
      if ( v13 )
        v14 = *(const char **)(a1 + 1116);
      else
        v14 = (const char *)&dword_8DB98;
      v15 = (const char *)&dword_8DB98;
      goto LABEL_18;
    }
    v35 = v11 + 1;
    v36 = v40;
    if ( v35 > v42 )
    {
      v36 = sub_78018((int)&v40, v40, v35, 1u);
      v40 = v36;
    }
    v41 = v35;
    memmove(v36, v10, v12);
    *((_BYTE *)v40 + v12) = 0;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 1132);
    v43[1] = (int (**)())2;
    v43[0] = (int (**)())&off_D0544;
    v44 = nullptr;
    v45 = 0;
    v46 = 0;
    if ( v5 )
      v6 = *(const char **)(a1 + 1128);
    else
      v6 = (const char *)&dword_8DB98;
    v7 = sub_35040((int)v6, v43, 0);
    if ( !v7 )
    {
      if ( !*(_BYTE *)(a1 + 900) )
      {
        *(_BYTE *)(a1 + 900) = 1;
        sub_174C4(
          a1,
          "AUTOHIDE DATABASE\n%s:\nCould not find the elf interpreter name,\nshared object events will not be reported",
          v6);
      }
      goto LABEL_8;
    }
    if ( v7 != 2 )
    {
      sub_174C4(a1, "%s: could not read symbols on remote computer", v6);
LABEL_8:
      v43[0] = (int (**)())&off_D0544;
      if ( v44 )
      {
        v45 = 0;
        sub_77F70(v44);
      }
      goto LABEL_10;
    }
    if ( v45 )
      v30 = (unsigned __int8 *)v44;
    else
      v30 = (unsigned __int8 *)&dword_8DB98;
    sub_76FF4((unsigned __int8 *)v47, 4096, v30);
    v31 = v45;
    v32 = v40;
    v45 = v41;
    v40 = v44;
    v33 = v46;
    v44 = v32;
    v41 = v31;
    v46 = v42;
    v42 = v33;
    v34 = strlen(v47);
    v39 = v34;
    if ( v34 )
    {
      v37 = v34 + 1;
      v38 = *(void **)(a1 + 1116);
      if ( v37 > *(_DWORD *)(a1 + 1124) )
      {
        v38 = sub_78018(a1 + 1116, *(void **)(a1 + 1116), v37, 1u);
        *(_DWORD *)(a1 + 1116) = v38;
      }
      *(_DWORD *)(a1 + 1120) = v37;
      memmove(v38, v47, v39);
      *(_BYTE *)(*(_DWORD *)(a1 + 1116) + v39) = 0;
      v32 = v44;
    }
    else
    {
      *(_DWORD *)(a1 + 1120) = 0;
    }
    v43[0] = (int (**)())&off_D0544;
    if ( v32 )
    {
      v45 = 0;
      sub_77F70(v32);
    }
  }
  if ( *(_DWORD *)(a1 + 1120) )
    v14 = *(const char **)(a1 + 1116);
  else
    v14 = (const char *)&dword_8DB98;
  if ( v41 )
    v15 = (const char *)v40;
  else
    v15 = (const char *)&dword_8DB98;
LABEL_18:
  sub_53ED4(a1, "INTERP: %s, SONAME: %s\n", v14, v15);
  if ( *(_DWORD *)(a1 + 1120) )
    v16 = *(char **)(a1 + 1116);
  else
    v16 = (char *)&dword_8DB98;
  v17 = (unsigned int *)sub_15C98(a2, v16);
  v18 = (void **)v17;
  if ( !v17 )
  {
    sub_174C4(a1, "%s: could not find in process memory", v16);
    goto LABEL_10;
  }
  v19 = sub_18538(a1, a2, v17);
  if ( *(_DWORD *)(a1 + 1120) )
    v20 = *(int **)(a1 + 1116);
  else
    v20 = &dword_8DB98;
  if ( v41 )
    v21 = (const char *)v40;
  else
    v21 = (const char *)&dword_8DB98;
  sub_1DF4C(a1, *v18, v19, v20, v21);
  if ( v41 )
    v22 = (char *)v40;
  else
    v22 = (char *)&dword_8DB98;
  if ( *(_DWORD *)(a1 + 972) )
    sub_19A78((_DWORD *)a1, v22);
  v23 = sub_17A64((_DWORD *)a1, "_r_debug");
  if ( v23 != -1
    && !*(_BYTE *)(a1 + 1077)
    && *(_DWORD *)(a1 + 1068) != -1
    && sub_1C68C(a1, -1, v23, (unsigned int *)v43, 20, *(_BYTE *)(a1 + 1077)) == 20
    && v44
    && !sub_1C9C8(a1, a1 + 888, (int)v44) )
  {
    sub_53ED4(a1, "%a: could not set shlib bpt\n", v44);
  }
  if ( *(_DWORD *)(a1 + 888) )
  {
LABEL_40:
    sub_53ED4(a1, "%a: added shlib bpt (%s)\n");
    v8 = 1;
    goto LABEL_11;
  }
  v24 = off_D05AC;
  for ( i = "r_debug_state"; ; i = v26 )
  {
    v27 = sub_17A64((_DWORD *)a1, i);
    v28 = v27;
    if ( (unsigned int)(v27 - 1) <= 0xFFFFFFFD )
      break;
    if ( v24 == off_D05C0 )
      goto LABEL_39;
LABEL_35:
    v26 = *v24++;
  }
  if ( !sub_1C9C8(a1, a1 + 888, v27) )
  {
    sub_53ED4(a1, "%a: could not set shlib bpt (name=%s)\n", v28, i);
    if ( v24 != off_D05C0 )
      goto LABEL_35;
  }
LABEL_39:
  if ( *(_DWORD *)(a1 + 888) )
    goto LABEL_40;
LABEL_10:
  v8 = 0;
LABEL_11:
  if ( v40 )
  {
    v41 = 0;
    sub_77F70(v40);
  }
  return v8;
}
// 8DB98: using guessed type int dword_8DB98;
// D0544: using guessed type _UNKNOWN *off_D0544;
// D05AC: using guessed type char *off_D05AC[4];
// D05C0: using guessed type char *off_D05C0[4];
