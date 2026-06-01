/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_20F58
// Address: 0x00020F58

//----- (00020F58) --------------------------------------------------------
int __fastcall sub_20F58(int a1, int a2, int a3, char *a4, char *a5)
{
  int v5; // r4
  int v6; // r7
  int v7; // r0
  char *v8; // r6
  size_t v9; // r0
  size_t v10; // r2
  unsigned int v11; // r6
  void *v12; // r1
  int v13; // r5
  size_t v14; // r6
  const char *v15; // r0
  int v16; // r0
  unsigned int v17; // r5
  int v18; // r3
  int v19; // r2
  int v20; // r0
  unsigned int v21; // r0
  int v22; // r5
  int **v23; // r7
  int **v24; // r5
  unsigned int v25; // r1
  int *v26; // r1
  int *v27; // r1
  int v28; // r6
  int v29; // r4
  int v30; // r2
  int v31; // r3
  int *v32; // r4
  int v33; // r2
  int v34; // r6
  int *v35; // r3
  int v36; // r4
  int v37; // r3
  int v38; // r2
  int v39; // r0
  int **v40; // r6
  int **v41; // r7
  unsigned int v42; // r1
  int *v43; // r1
  int *v44; // r1
  int v45; // r0
  size_t v47; // [sp+8h] [bp-F8h]
  int v48; // [sp+8h] [bp-F8h]
  int v49; // [sp+10h] [bp-F0h]
  int v50; // [sp+14h] [bp-ECh]
  int v51; // [sp+14h] [bp-ECh]
  int v52; // [sp+18h] [bp-E8h]
  int v53; // [sp+18h] [bp-E8h]
  char *v54; // [sp+1Ch] [bp-E4h]
  char *v55; // [sp+1Ch] [bp-E4h]
  int v57; // [sp+20h] [bp-E0h]
  char *sa; // [sp+28h] [bp-D8h]
  void *v61; // [sp+30h] [bp-D0h] BYREF
  char *v62; // [sp+34h] [bp-CCh] BYREF
  int v63; // [sp+38h] [bp-C8h]
  int v64; // [sp+3Ch] [bp-C4h]
  int v65; // [sp+40h] [bp-C0h]
  int v66; // [sp+44h] [bp-BCh]
  int v67; // [sp+48h] [bp-B8h]
  int v68; // [sp+4Ch] [bp-B4h]
  int v69; // [sp+50h] [bp-B0h]
  int *v70; // [sp+54h] [bp-ACh]
  int v71; // [sp+58h] [bp-A8h] BYREF
  int v72; // [sp+5Ch] [bp-A4h]
  int v73; // [sp+60h] [bp-A0h]
  char *v74; // [sp+64h] [bp-9Ch]
  int v75; // [sp+68h] [bp-98h]
  int v76; // [sp+6Ch] [bp-94h]
  int v77; // [sp+70h] [bp-90h]
  int v78; // [sp+74h] [bp-8Ch]
  int v79; // [sp+78h] [bp-88h]
  void *v80[3]; // [sp+7Ch] [bp-84h] BYREF
  int v81[18]; // [sp+88h] [bp-78h] BYREF
  int v82; // [sp+D0h] [bp-30h] BYREF
  int v83; // [sp+D4h] [bp-2Ch]
  int v84; // [sp+D8h] [bp-28h]
  char v85; // [sp+DCh] [bp-24h]
  int v86; // [sp+E0h] [bp-20h]
  void *ptr; // [sp+E4h] [bp-1Ch] BYREF
  unsigned int v88; // [sp+E8h] [bp-18h]
  unsigned int v89; // [sp+ECh] [bp-14h]
  int v90; // [sp+F0h] [bp-10h]
  int v91; // [sp+F4h] [bp-Ch]
  int v92; // [sp+F8h] [bp-8h]
  int v93; // [sp+FCh] [bp-4h]

  v5 = a1;
  sub_64B30(a1, "%a: new dll %s (soname=%s)\n");
  v6 = 0;
  v85 = 0;
  v83 = 0;
  v82 = -1;
  v84 = -1;
  v92 = 0;
  v91 = 0;
  v90 = 0;
  v89 = 0;
  v88 = 0;
  ptr = nullptr;
  v86 = 0;
  set_debug_event_code((int)&v82, 8);
  if ( (v86 & 0xFFFFFFFu) > 0xB || ((1 << v86) & 0x902) == 0 )
  {
    if ( !under_debugger )
      interr(3295);
LABEL_66:
    __debugbreak();
  }
  v7 = *(_DWORD *)(v5 + 968);
  v85 = 1;
  v83 = v7;
  v82 = v7;
  v84 = a2;
  v8 = a4;
  if ( a4 && (v9 = strlen(a4)) != 0 )
  {
    v10 = v9;
    v11 = v9 + 1;
    v12 = ptr;
    if ( v89 >= v9 + 1 )
    {
      v13 = a3;
    }
    else
    {
      v47 = v9;
      v12 = qvector_reserve((int)&ptr, ptr, v11, 1u);
      ptr = v12;
      v13 = a3;
      v10 = v47;
    }
    v88 = v11;
    v14 = v10;
    memmove(v12, a4, v10);
    *((_BYTE *)ptr + v14) = 0;
    v8 = a4;
  }
  else
  {
    v88 = 0;
    v13 = a3;
  }
  v91 = v13;
  v90 = a2;
  v92 = -1;
  if ( *(_BYTE *)(v5 + 389) )
  {
    v15 = *(_DWORD *)(v5 + 252) ? *(const char **)(v5 + 248) : &byte_B3CBE;
    if ( !strcmp(v15, v8) )
      v92 = a2;
  }
  v16 = v86;
  v49 = v5;
  if ( 16 * v86 )
  {
    v17 = *(_DWORD *)(v5 + 72);
    if ( !v17 )
    {
      sub_2519C(v5 + 56);
      v17 = *(_DWORD *)(v5 + 72);
    }
    v18 = *(_DWORD *)(v5 + 60);
    v19 = *(_DWORD *)(v18 + 4 * (v17 / 0x5D));
    if ( *(_DWORD *)(v5 + 64) != v18 )
      v6 = v19 + 44 * (v17 % 0x5D);
    if ( v6 == v19 )
      v6 = *(_DWORD *)(v18 + 4 * (v17 / 0x5D) - 4) + 4092;
    *(_DWORD *)(v6 - 44) = -1;
    v20 = v6 - 44;
    *(_DWORD *)(v20 + 4) = 0;
    *(_DWORD *)(v20 + 8) = -1;
    *(_BYTE *)(v20 + 12) = 0;
    *(_DWORD *)(v20 + 16) = 0;
    copy_debug_event(v6 - 44, (int)&v82);
    *(_BYTE *)(v5 + 1020) = 0;
    --*(_DWORD *)(v5 + 72);
    ++*(_DWORD *)(v5 + 76);
    v16 = v86;
    v8 = a4;
  }
  v21 = v16 & 0xFFFFFFF;
  if ( v21 > 0xB || ((1 << v21) & 0x902) == 0 )
  {
    if ( !under_debugger )
      interr(3295);
    goto LABEL_66;
  }
  v22 = v91;
  sub_1B09C((int)&v61, v8);
  sub_1B09C((int)v80, a5);
  sub_213D4(v81, a2, v22, (int)&v61, (int)v80);
  if ( v80[0] )
  {
    v80[1] = nullptr;
    qfree(v80[0]);
    v80[2] = nullptr;
    v80[0] = nullptr;
  }
  if ( v61 )
  {
    v62 = nullptr;
    qfree(v61);
    v63 = 0;
    v61 = nullptr;
  }
  v61 = (void *)v81[0];
  sub_25EB2(&v62, v81);
  v23 = *(int ***)(v5 + 904);
  v24 = (int **)(v5 + 904);
  if ( v23 )
  {
    v24 = (int **)(v5 + 904);
    while ( 1 )
    {
      v25 = (unsigned int)v23[4];
      if ( (unsigned int)v61 >= v25 )
      {
        if ( v25 >= (unsigned int)v61 )
          goto LABEL_40;
        v26 = v23[1];
        v24 = v23 + 1;
        if ( !v26 )
          goto LABEL_40;
        ++v23;
      }
      else
      {
        v26 = *v23;
        if ( !*v23 )
        {
          v24 = v23;
          goto LABEL_40;
        }
      }
      v24 = v23;
      v23 = (int **)v26;
    }
  }
  v23 = (int **)(v5 + 904);
LABEL_40:
  if ( !*v24 )
  {
    sa = (char *)(v5 + 900);
    v27 = (int *)operator new(0x5Cu);
    v54 = v62;
    v52 = v63;
    v50 = v64;
    v64 = 0;
    v48 = v65;
    v65 = 0;
    v28 = v66;
    v66 = 0;
    v29 = v67;
    v67 = 0;
    v30 = v68;
    v27[4] = (int)v61;
    v27[5] = (int)v54;
    v27[6] = v52;
    v27[7] = v50;
    v27[8] = v48;
    v27[9] = v28;
    v27[10] = v29;
    v27[11] = v30;
    v68 = 0;
    v31 = v69;
    v69 = 0;
    v32 = v70;
    v33 = v71;
    v34 = v72;
    v27[12] = v31;
    v27[13] = (int)v32;
    v27[14] = v33;
    v27[15] = v34;
    v35 = v27 + 14;
    if ( v34 )
    {
      *(_DWORD *)(v33 + 8) = v35;
      v71 = 0;
      v70 = &v71;
      v72 = 0;
    }
    else
    {
      v27[13] = (int)v35;
    }
    v57 = v73;
    v73 = 0;
    v55 = v74;
    v74 = nullptr;
    v53 = v75;
    v75 = 0;
    v51 = v76;
    v76 = 0;
    v36 = v77;
    v77 = 0;
    v37 = v78;
    v78 = 0;
    v38 = v79;
    v27[16] = v57;
    v27[17] = (int)v55;
    v27[18] = v53;
    v27[19] = v51;
    v27[20] = v36;
    v27[21] = v37;
    v27[22] = v38;
    *v27 = 0;
    v27[1] = 0;
    v27[2] = (int)v23;
    *v24 = v27;
    v39 = **(_DWORD **)sa;
    if ( v39 )
    {
      *(_DWORD *)sa = v39;
      v27 = *v24;
    }
    v5 = v49;
    sub_261FA(*(int **)(v49 + 904), v27);
    ++*(_DWORD *)(v49 + 908);
  }
  sub_21464((int)&v62);
  v40 = (int **)(v5 + 892);
  v41 = *(int ***)(v5 + 892);
  if ( v41 )
  {
    v40 = (int **)(v5 + 892);
    while ( 1 )
    {
      v42 = (unsigned int)v41[4];
      if ( v81[0] >= v42 )
      {
        if ( v42 >= v81[0] )
          goto LABEL_57;
        v43 = v41[1];
        v40 = v41 + 1;
        if ( !v43 )
          goto LABEL_57;
        ++v41;
      }
      else
      {
        v43 = *v41;
        if ( !*v41 )
        {
          v40 = v41;
          goto LABEL_57;
        }
      }
      v40 = v41;
      v41 = (int **)v43;
    }
  }
  v41 = (int **)(v5 + 892);
LABEL_57:
  if ( !*v40 )
  {
    v44 = (int *)operator new(0x14u);
    v44[4] = v81[0];
    *v44 = 0;
    v44[1] = 0;
    v44[2] = (int)v41;
    *v40 = v44;
    v45 = **(_DWORD **)(v5 + 888);
    if ( v45 )
    {
      *(_DWORD *)(v5 + 888) = v45;
      v44 = *v40;
    }
    sub_261FA(*(int **)(v5 + 892), v44);
    ++*(_DWORD *)(v5 + 896);
  }
  sub_21464((int)v81);
  free_debug_event(&v82);
  return _stack_chk_guard - v93;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
