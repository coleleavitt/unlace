/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_21550
// Address: 0x00021550

//----- (00021550) --------------------------------------------------------
int __fastcall sub_21550(int a1, int *a2)
{
  char *v4; // r0
  const char *v5; // r5
  int v6; // r6
  const char *v7; // r0
  char *v8; // r3
  char *v9; // r4
  char *v10; // r4
  int v11; // r0
  _DWORD *v12; // r4
  const char *v13; // r0
  int v14; // r5
  const char *v15; // r0
  _DWORD *v16; // r3
  int v17; // r4
  int *v18; // r7
  int v19; // r6
  int v20; // r0
  char *v21; // r1
  int v22; // r5
  _DWORD *v23; // r4
  char *v24; // r5
  int v25; // r0
  int v26; // r1
  int *v27; // r5
  unsigned int *v28; // r6
  _DWORD *v29; // r7
  int v30; // r0
  char *v31; // r1
  int v32; // r4
  char *v33; // r4
  int v34; // r0
  int v35; // r1
  int v36; // r4
  unsigned int v37; // r5
  char *v39; // [sp+Ch] [bp-4D4h]
  char **v40; // [sp+1Ch] [bp-4C4h]
  int *v41; // [sp+1Ch] [bp-4C4h]
  int **v42; // [sp+20h] [bp-4C0h]
  int v43; // [sp+20h] [bp-4C0h]
  const char *v44; // [sp+2Ch] [bp-4B4h]
  int v45; // [sp+2Ch] [bp-4B4h]
  int v46; // [sp+2Ch] [bp-4B4h]
  unsigned __int8 *elf_debug_file_directory; // [sp+30h] [bp-4B0h]
  _DWORD *v48; // [sp+30h] [bp-4B0h]
  int v49; // [sp+30h] [bp-4B0h]
  int v50; // [sp+34h] [bp-4ACh]
  char **v51; // [sp+34h] [bp-4ACh]
  int v52; // [sp+38h] [bp-4A8h]
  void *v53[3]; // [sp+3Ch] [bp-4A4h] BYREF
  _DWORD v54[18]; // [sp+48h] [bp-498h] BYREF
  _UNKNOWN **v55; // [sp+90h] [bp-450h] BYREF
  int v56; // [sp+94h] [bp-44Ch]
  int v57; // [sp+98h] [bp-448h]
  _DWORD *v58; // [sp+9Ch] [bp-444h]
  int v59; // [sp+A0h] [bp-440h]
  _UNKNOWN **v60; // [sp+A4h] [bp-43Ch] BYREF
  _DWORD v61[270]; // [sp+A8h] [bp-438h] BYREF

  if ( a2[6] )
    v4 = (char *)a2[5];
  else
    v4 = &byte_B3CBE;
  v5 = stristr(v4, "libpthread");
  v6 = a1 + 864;
  if ( v5 )
    *(_DWORD *)(a1 + 1048) = *a2;
  else
    v6 = a1 + 840;
  v50 = a1;
  v40 = (char **)(a1 + 840);
  v42 = (int **)(a1 + 864);
  if ( *a2 == -1 )
  {
    sub_64B30(a1, "Can't import symbols from %s: no imagebase\n");
  }
  else
  {
    v61[0] = 49;
    v61[1] = a1;
    v61[3] = v6;
    v60 = &off_D62E8;
    v61[2] = a2;
    if ( a2[3] )
      v7 = (const char *)a2[2];
    else
      v7 = &byte_B3CBE;
    sub_35628(v7, &v60, 0);
  }
  v44 = v5;
  elf_debug_file_directory = (unsigned __int8 *)get_elf_debug_file_directory();
  v8 = &byte_B3CBE;
  v9 = &byte_B3CBE;
  if ( a2[12] )
    v9 = (char *)a2[11];
  v39 = v9;
  v10 = &byte_B3CBE;
  if ( a2[15] )
    v10 = (char *)a2[14];
  if ( a2[3] )
    v8 = (char *)a2[2];
  v11 = sub_218FC((int)&v60, elf_debug_file_directory, 1, v8, v10, a2[17], v39);
  v12 = (_DWORD *)v50;
  if ( sub_21ABC(v11) )
  {
    v13 = a2[3] ? (const char *)a2[2] : &byte_B3CBE;
    if ( strcmp(v13, (const char *)v61) )
    {
      sub_64B30(v50, "load separate debug info '%s'\n");
      v14 = *a2;
      sub_1B09C((int)&v55, (char *)v61);
      sub_1B09C((int)v53, &byte_A0742);
      sub_213D4(v54, v14, 0, (int)&v55, (int)v53);
      v12 = (_DWORD *)v50;
      if ( v53[0] )
      {
        v53[1] = nullptr;
        qfree(v53[0]);
        v53[2] = nullptr;
        v53[0] = nullptr;
      }
      if ( v55 )
      {
        v56 = 0;
        qfree(v55);
        v57 = 0;
        v55 = nullptr;
      }
      if ( v54[0] == -1 )
      {
        sub_64B30(v50, "Can't import symbols from %s: no imagebase\n");
      }
      else
      {
        v56 = 49;
        v57 = v50;
        v58 = v54;
        v59 = v6;
        v55 = &off_D62E8;
        if ( v54[3] )
          v15 = (const char *)v54[2];
        else
          v15 = &byte_B3CBE;
        sub_35628(v15, &v55, 0);
      }
      sub_21464((int)v54);
    }
  }
  if ( v44 )
  {
    v48 = v12 + 211;
    v16 = v12;
    v17 = v12[217];
    v18 = *v42;
    v19 = (4 * v17) >> 2;
    if ( 4 * v17 )
    {
      v45 = (int)&(*v42)[v17];
      v43 = v17;
      v20 = v16[211];
      v21 = *v40;
      v22 = (4 * v20) >> 2;
      if ( v16[212] >= (unsigned int)(v19 + v20) )
      {
        v23 = v48;
      }
      else
      {
        v21 = (char *)qvector_reserve((int)v40, v21, v19 + v20, 4u);
        *v40 = v21;
        v23 = v48;
        v20 = *v48;
      }
      v24 = &v21[4 * v22];
      memmove(&v24[4 * v19], v24, &v21[4 * v20] - v24);
      if ( v18 != (int *)v45 )
      {
        v25 = 4 * v43;
        do
        {
          v26 = *v18++;
          *(_DWORD *)v24 = v26;
          v24 += 4;
          v25 -= 4;
        }
        while ( v25 );
      }
      *v23 += v19;
      v16 = (_DWORD *)v50;
    }
    v27 = (int *)v16[219];
    v46 = v16[220];
    v28 = v16 + 220;
    v29 = v16 + 219;
    v51 = (char **)(v16 + 213);
    if ( 4 * v46 )
    {
      v41 = v16 + 214;
      v30 = v16[214];
      v49 = (4 * v46) >> 2;
      v31 = *v51;
      v32 = (4 * v30) >> 2;
      if ( v16[215] < (unsigned int)(v49 + v30) )
      {
        v31 = (char *)qvector_reserve((int)v51, v31, v49 + v30, 4u);
        *v51 = v31;
        v30 = *v41;
      }
      v33 = &v31[4 * v32];
      memmove(&v33[4 * v49], v33, &v31[4 * v30] - v33);
      if ( v27 != &v27[v46] )
      {
        v34 = 4 * v46;
        do
        {
          v35 = *v27++;
          *(_DWORD *)v33 = v35;
          v33 += 4;
          v34 -= 4;
        }
        while ( v34 );
      }
      *v41 += v49;
      if ( !*v28 )
        goto LABEL_55;
    }
    else if ( !v46 )
    {
      goto LABEL_55;
    }
    v36 = 0;
    v37 = 0;
    do
    {
      *(_DWORD *)(*v29 + v36) = qstrdup(*(char **)(*v29 + v36));
      v36 += 4;
      ++v37;
    }
    while ( v37 < *v28 );
  }
LABEL_55:
  sub_21E90((int)&v60);
  return _stack_chk_guard - v52;
}
// 21856: variable 'v52' is possibly undefined
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
// D62E8: using guessed type _UNKNOWN *off_D62E8;
