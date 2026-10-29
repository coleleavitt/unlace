/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26F90
// Address: 0x00026F90

//----- (00026F90) --------------------------------------------------------
unsigned int __cdecl sub_26F90(int a1, int a2, int a3)
{
  int v3; // eax
  void *v4; // ecx
  int v5; // ecx
  size_t v6; // esi
  void *v7; // eax
  FILE *v8; // eax
  int v9; // ecx
  int v10; // esi
  const char *v11; // eax
  int v12; // edi
  int *v13; // eax
  void *v14; // eax
  size_t v15; // eax
  size_t v16; // esi
  size_t v17; // edx
  int v18; // edi
  void *v19; // eax
  const char *v20; // ecx
  unsigned int v21; // esi
  const void *v22; // edx
  void *v23; // eax
  int v24; // eax
  char *v25; // eax
  unsigned int v26; // edi
  unsigned int *v27; // esi
  const char *v28; // eax
  int v29; // edi
  unsigned int v30; // eax
  _DWORD *v31; // esi
  int v32; // edi
  int v33; // eax
  int v34; // edx
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // edx
  _DWORD *v38; // edi
  int v39; // esi
  int v40; // eax
  int v41; // edx
  unsigned int v42; // ecx
  int v43; // eax
  char *v44; // eax
  char *v45; // eax
  int v46; // ecx
  int v48; // [esp-10h] [ebp-10DCh]
  unsigned int v49; // [esp+4h] [ebp-10C8h]
  const char *v50; // [esp+4h] [ebp-10C8h]
  void **v51; // [esp+4h] [ebp-10C8h]
  const char *v52; // [esp+4h] [ebp-10C8h]
  int v53; // [esp+4h] [ebp-10C8h]
  int v54; // [esp+8h] [ebp-10C4h]
  const void *v55; // [esp+8h] [ebp-10C4h]
  unsigned int v56; // [esp+8h] [ebp-10C4h]
  int v57; // [esp+8h] [ebp-10C4h]
  size_t v58; // [esp+Ch] [ebp-10C0h]
  int v59[4]; // [esp+10h] [ebp-10BCh] BYREF
  _DWORD v60[18]; // [esp+20h] [ebp-10ACh] BYREF
  void *v61; // [esp+68h] [ebp-1064h] BYREF
  int v62; // [esp+6Ch] [ebp-1060h]
  int v63; // [esp+70h] [ebp-105Ch]
  unsigned int *v64; // [esp+78h] [ebp-1054h] BYREF
  unsigned int v65; // [esp+7Ch] [ebp-1050h]
  int v66; // [esp+80h] [ebp-104Ch]
  int v67; // [esp+84h] [ebp-1048h] BYREF
  int v68; // [esp+88h] [ebp-1044h] BYREF
  int v69; // [esp+8Ch] [ebp-1040h]
  int v70; // [esp+90h] [ebp-103Ch]
  char v71; // [esp+94h] [ebp-1038h]
  int v72; // [esp+98h] [ebp-1034h]
  int v73; // [esp+9Ch] [ebp-1030h] BYREF
  size_t v74; // [esp+A0h] [ebp-102Ch]
  unsigned int v75; // [esp+A4h] [ebp-1028h]
  int v76; // [esp+A8h] [ebp-1024h]
  unsigned int v77; // [esp+ACh] [ebp-1020h]
  unsigned int v78; // [esp+B0h] [ebp-101Ch]
  char src[4096]; // [esp+B8h] [ebp-1014h] BYREF
  unsigned int v80; // [esp+10B8h] [ebp-14h]

  v3 = a2;
  v80 = __readgsdword(0x14u);
  *(_DWORD *)(a1 + 272) = a2;
  v4 = *(void **)(a1 + 580);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 584) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 580) = 0;
    *(_DWORD *)(a1 + 588) = 0;
    v3 = *(_DWORD *)(a1 + 272);
  }
  *(_DWORD *)(a1 + 624) = v3;
  *(_BYTE *)(a1 + 632) = 0;
  *(_DWORD *)(a1 + 672) = 0;
  sub_20000(a1, v3);
  qwait_timed(&v67, *(_DWORD *)(a1 + 272), a3 == 2, (a3 == 2) - 1);
  sub_8A3F0(a1, "process pid/tid: %d\n", *(_DWORD *)(a1 + 272));
  *(_BYTE *)(a1 + 676) = 0;
  v68 = -1;
  v69 = 0;
  v70 = -1;
  v71 = 0;
  v73 = 0;
  v72 = 0;
  v75 = 0;
  v74 = 0;
  v78 = 0;
  v77 = 0;
  v76 = 0;
  set_debug_event_code(&v68, 1);
  if ( (v72 & 0xFFFFFFFu) > 0xB || (v5 = 2306, !_bittest(&v5, v72 & 0xFFFFFFF)) )
  {
    if ( !(_BYTE)under_debugger )
      interr(3295);
LABEL_97:
    BUG();
  }
  v68 = *(_DWORD *)(a1 + 272);
  v69 = v68;
  v70 = ptrace(PTRACE_PEEKUSER, v68, 48, 0);
  v71 = 1;
  (*(void (__cdecl **)(int, _DWORD, char *, int))(*(_DWORD *)a1 + 312))(a1, *(_DWORD *)(a1 + 272), src, 4096);
  v6 = __strlen_chk(src, 4096);
  if ( v6 )
  {
    v7 = (void *)v73;
    if ( v75 < v6 + 1 )
    {
      v7 = qvector_reserve((int)&v73, (void *)v73, v6 + 1, 1u);
      v73 = (int)v7;
    }
    v74 = v6 + 1;
    memmove(v7, src, v6);
    *(_BYTE *)(v73 + v6) = 0;
  }
  else
  {
    v74 = 0;
  }
  v76 = -1;
  v77 = 0;
  v78 = -1;
  qsnprintf(src, 4096, "/proc/%u/maps", *(_DWORD *)(a1 + 272));
  v8 = fopenRT(src);
  v10 = a1;
  *(_DWORD *)(a1 + 668) = v8;
  if ( !v8 )
  {
    v13 = (int *)__errno(v9);
    v14 = winerr(*v13);
    sub_1C9D0(a1, "%s: %s\n", src, v14);
    v49 = 0;
    goto LABEL_88;
  }
  if ( v74 )
  {
    v11 = (const char *)v73;
    v12 = a1 + 692;
    if ( !v73 )
    {
LABEL_20:
      *(_DWORD *)(v12 + 4) = 0;
      if ( *(_BYTE *)(v10 + 389) )
        goto LABEL_30;
      goto LABEL_24;
    }
  }
  else
  {
    v12 = a1 + 692;
    v11 = byte_EF875;
  }
  v50 = v11;
  v15 = strlen(v11);
  if ( !v15 )
  {
    v10 = a1;
    goto LABEL_20;
  }
  v16 = v15;
  v54 = v12;
  v17 = v15 + 1;
  v18 = a1;
  if ( *(_DWORD *)(a1 + 700) >= v15 + 1 )
  {
    v19 = *(void **)(a1 + 692);
    v20 = v50;
  }
  else
  {
    v58 = v15 + 1;
    v19 = qvector_reserve(v54, *(void **)(a1 + 692), v15 + 1, 1u);
    v18 = a1;
    *(_DWORD *)(a1 + 692) = v19;
    v20 = v50;
    v17 = v58;
  }
  *(_DWORD *)(v18 + 696) = v17;
  memmove(v19, v20, v16);
  *(_BYTE *)(*(_DWORD *)(v18 + 692) + v16) = 0;
  v10 = v18;
  v12 = v54;
  if ( !*(_BYTE *)(v10 + 389) )
  {
LABEL_24:
    v21 = *(_DWORD *)(v12 + 4);
    if ( v21 < 2 )
    {
      v10 = a1;
      *(_DWORD *)(a1 + 252) = 0;
    }
    else
    {
      v51 = (void **)(a1 + 248);
      v22 = *(const void **)v12;
      if ( *(_DWORD *)(a1 + 256) >= v21 )
      {
        v23 = *v51;
      }
      else
      {
        v55 = *(const void **)v12;
        v23 = qvector_reserve((int)v51, *v51, v21, 1u);
        *v51 = v23;
        v22 = v55;
      }
      *(_DWORD *)(a1 + 252) = v21;
      memmove(v23, v22, v21 - 1);
      *(_BYTE *)(*(_DWORD *)(a1 + 248) + v21 - 1) = 0;
      v10 = a1;
    }
  }
LABEL_30:
  v64 = nullptr;
  v65 = 0;
  v66 = 0;
  *(_DWORD *)(v10 + 128) = 4;
  if ( sub_21B40(v10, (int *)&v64, 0) <= 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30065);
    goto LABEL_97;
  }
  sub_214C0((_DWORD *)v10);
  sub_1C460((_DWORD *)v10);
  (*(void (__cdecl **)(int))(*(_DWORD *)v10 + 296))(v10);
  if ( *(_DWORD *)(v10 + 336) == -1 || *(_DWORD *)(v10 + 340) == -1 )
    goto LABEL_91;
  v24 = *(_DWORD *)(v10 + 284);
  if ( !v24 )
    v24 = *(_DWORD *)(v10 + 332);
  if ( v24 <= 0 )
  {
LABEL_91:
    if ( !(_BYTE)under_debugger )
      interr(30016);
    goto LABEL_97;
  }
  sub_8E920();
  if ( v74 )
    v25 = (char *)v73;
  else
    v25 = byte_EF875;
  v52 = v25;
  v56 = v65;
  if ( !v65 )
    goto LABEL_49;
  v26 = 0;
  v27 = v64;
  while ( 1 )
  {
    v28 = byte_EF875;
    if ( v27[3] )
      v28 = (const char *)v27[2];
    if ( !strcmp(v28, v52) )
      break;
    ++v26;
    v27 += 10;
    if ( v26 >= v56 )
      goto LABEL_49;
  }
  if ( v27 )
  {
    v76 = *v27;
    v29 = a3;
    v77 = sub_26E90(v48, &v64, v27);
    if ( !*(_BYTE *)(a1 + 389) )
      v78 = *v27;
  }
  else
  {
LABEL_49:
    v29 = a3;
    if ( !*(_BYTE *)(a1 + 389) )
      sub_1C9D0(a1, "%s: nowhere in the process memory?!\n", v52);
  }
  v30 = sub_266B0(a1, &v64, v29 != 0);
  if ( !(_BYTE)v30 )
    v30 = sub_1C9D0(a1, "Could not set the shlib bpt, shared object events will not be handled\n");
  v31 = (_DWORD *)a1;
  if ( (v72 & 0xFFFFFFF) != 0 )
  {
    v32 = *(_DWORD *)(a1 + 60);
    v33 = *(_DWORD *)(a1 + 64);
    v34 = 93 * ((v33 - v32) >> 2) - 1;
    if ( v33 == v32 )
      v34 = *(_DWORD *)(a1 + 64) - v32;
    v35 = *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 76);
    if ( v34 == v35 )
    {
      sub_2C600((_DWORD *)(a1 + 56));
      v32 = *(_DWORD *)(a1 + 60);
      v33 = *(_DWORD *)(a1 + 64);
      v35 = *(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 72);
    }
    if ( v33 == v32 )
      v36 = 0;
    else
      v36 = *(_DWORD *)(v32 + 4 * (v35 / 0x5D)) + 44 * (v35 % 0x5D);
    v29 = a3;
    *(_DWORD *)v36 = -1;
    *(_DWORD *)(v36 + 4) = 0;
    *(_DWORD *)(v36 + 8) = -1;
    *(_BYTE *)(v36 + 12) = 0;
    *(_DWORD *)(v36 + 16) = 0;
    copy_debug_event(v36, &v68);
    v31 = (_DWORD *)a1;
    ++*(_DWORD *)(a1 + 76);
    *(_BYTE *)(a1 + 676) = 0;
  }
  if ( !v29 )
    goto LABEL_85;
  set_debug_event_code(&v68, 11);
  if ( (v72 & 0xFFFFFFFu) > 0xB || (v37 = 2306, !_bittest(&v37, v72 & 0xFFFFFFF)) )
  {
    if ( !(_BYTE)under_debugger )
      interr(3295);
    goto LABEL_97;
  }
  if ( (v72 & 0xFFFFFFF) != 0 )
  {
    v38 = v31;
    v39 = v31[15];
    v40 = v38[16];
    v41 = 93 * ((v40 - v39) >> 2) - 1;
    if ( v40 == v39 )
      v41 = v38[16] - v39;
    v42 = v38[18] + v38[19];
    if ( v41 == v42 )
    {
      sub_2C600((_DWORD *)(a1 + 56));
      v39 = *(_DWORD *)(a1 + 60);
      v40 = *(_DWORD *)(a1 + 64);
      v42 = *(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 72);
    }
    if ( v40 == v39 )
      v43 = 0;
    else
      v43 = *(_DWORD *)(v39 + 4 * (v42 / 0x5D)) + 44 * (v42 % 0x5D);
    *(_DWORD *)v43 = -1;
    *(_DWORD *)(v43 + 4) = 0;
    *(_DWORD *)(v43 + 8) = -1;
    *(_BYTE *)(v43 + 12) = 0;
    *(_DWORD *)(v43 + 16) = 0;
    copy_debug_event(v43, &v68);
    ++*(_DWORD *)(a1 + 76);
    *(_BYTE *)(a1 + 676) = 0;
  }
  v30 = qgetenv("IDA_SKIP_SYMS", 0);
  if ( !(_BYTE)v30 )
  {
    v61 = nullptr;
    v62 = 0;
    v63 = 0;
    if ( v74 )
      v44 = (char *)v73;
    else
      v44 = byte_EF875;
    v60[1] = 4;
    v60[0] = off_1346F0;
    v60[2] = &v61;
    sub_40950(v44, v60, 0);
    v53 = v76;
    v57 = v77;
    if ( v74 )
      v45 = (char *)v73;
    else
      v45 = byte_EF875;
    sub_1B530((int)v59, v45);
    sub_24F20(v60, v53, v57, (int)v59, (const void **)&v61);
    v46 = a1;
    if ( v59[0] )
    {
      v59[1] = 0;
      qfree((void *)v59[0]);
      v59[0] = 0;
      v59[2] = 0;
      v46 = a1;
    }
    sub_251F0(v46, v60);
    sub_25060((int)v60);
    v30 = (unsigned int)v61;
    if ( v61 )
    {
      v62 = 0;
      qfree(v61);
      v61 = nullptr;
      v63 = 0;
    }
  }
LABEL_85:
  if ( v64 )
  {
    sub_1BDA0((int *)&v64, 0);
    qfree(v64);
    v64 = nullptr;
    v66 = 0;
  }
  LOBYTE(v30) = 1;
  v49 = v30;
LABEL_88:
  free_debug_event(&v68);
  return v49;
}
// 27265: variable 'v9' is possibly undefined
// 2751C: variable 'v48' is possibly undefined
// 278EC: variable 'v30' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 1346F0: using guessed type int (*off_1346F0[3])();
// 13E34C: using guessed type int under_debugger;
