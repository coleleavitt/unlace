/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22938
// Address: 0x00022938

//----- (00022938) --------------------------------------------------------
int __fastcall sub_22938(int a1, int a2, int a3)
{
  char *v5; // r3
  int *v6; // r4
  void *v7; // r0
  int v8; // r3
  int v9; // r0
  size_t v10; // r7
  char *v11; // r2
  FILE *v12; // r0
  int v13; // r4
  char *v14; // r1
  char *v15; // r5
  int *v16; // r0
  const char *v17; // r0
  size_t v18; // r0
  size_t v19; // r6
  size_t v20; // r7
  void *v21; // r0
  _BYTE *v22; // r7
  void **v23; // r5
  unsigned int v24; // r6
  size_t v25; // r2
  const void *v26; // r1
  void *v27; // r0
  size_t v28; // r6
  int v29; // r0
  char *v30; // r0
  unsigned int v31; // r7
  unsigned int v32; // r4
  unsigned int *v33; // r6
  const char *v34; // r0
  int v35; // r4
  int v36; // r5
  int v37; // r7
  int v38; // r0
  int v39; // r2
  unsigned int v40; // r6
  int v41; // r7
  int v42; // r1
  int v43; // r2
  unsigned int v44; // r6
  int v45; // r0
  char *v46; // r0
  int v47; // r5
  int v48; // r7
  char *v49; // r1
  _DWORD *v51; // [sp+Ch] [bp-10D4h]
  const void *v52; // [sp+Ch] [bp-10D4h]
  _BYTE *v53; // [sp+14h] [bp-10CCh]
  _BYTE *v54; // [sp+18h] [bp-10C8h]
  int v55; // [sp+24h] [bp-10BCh]
  int v56; // [sp+28h] [bp-10B8h]
  int v57; // [sp+30h] [bp-10B0h]
  int v58; // [sp+34h] [bp-10ACh]
  char *s2b; // [sp+38h] [bp-10A8h]
  char *s2; // [sp+38h] [bp-10A8h]
  char *s2a; // [sp+38h] [bp-10A8h]
  void *v62[3]; // [sp+40h] [bp-10A0h] BYREF
  int v63[18]; // [sp+4Ch] [bp-1094h] BYREF
  void *v64; // [sp+94h] [bp-104Ch] BYREF
  int v65; // [sp+98h] [bp-1048h]
  int v66; // [sp+9Ch] [bp-1044h]
  unsigned int *v67; // [sp+A0h] [bp-1040h] BYREF
  unsigned int v68; // [sp+A4h] [bp-103Ch]
  int v69; // [sp+A8h] [bp-1038h]
  __time_t v70; // [sp+ACh] [bp-1034h] BYREF
  int v71; // [sp+B0h] [bp-1030h] BYREF
  int v72; // [sp+B4h] [bp-102Ch]
  int v73; // [sp+B8h] [bp-1028h]
  char v74; // [sp+BCh] [bp-1024h]
  int v75; // [sp+C0h] [bp-1020h]
  char *s; // [sp+C4h] [bp-101Ch] BYREF
  size_t v77; // [sp+C8h] [bp-1018h]
  unsigned int v78; // [sp+CCh] [bp-1014h]
  unsigned int v79; // [sp+D0h] [bp-1010h]
  unsigned int v80; // [sp+D4h] [bp-100Ch]
  unsigned int v81; // [sp+D8h] [bp-1008h]
  char v82[4100]; // [sp+DCh] [bp-1004h] BYREF

  *(_DWORD *)(a1 + 272) = a2;
  v5 = (char *)(a1 + 924);
  v6 = (int *)(a1 + 272);
  v7 = *(void **)(a1 + 924);
  if ( v7 )
  {
    *(_DWORD *)(a1 + 928) = 0;
    s2b = v5;
    qfree(v7);
    *(_DWORD *)s2b = 0;
    *(_DWORD *)(a1 + 932) = 0;
    a2 = *v6;
  }
  *(_BYTE *)(a1 + 976) = 0;
  *(_DWORD *)(a1 + 968) = a2;
  *(_DWORD *)(a1 + 1016) = 0;
  sub_1E25C(a1, a2);
  v8 = -1;
  if ( a3 == 2 )
    v8 = 0;
  v55 = a3;
  qwait_timed(&v70, *v6, a3 == 2, v8);
  sub_64B30(a1, "process pid/tid: %d\n");
  *(_BYTE *)(a1 + 1020) = 0;
  v74 = 0;
  v72 = 0;
  v71 = -1;
  v73 = -1;
  v81 = 0;
  v80 = 0;
  v79 = 0;
  v78 = 0;
  v77 = 0;
  s = nullptr;
  v75 = 0;
  v58 = a1;
  v54 = (_BYTE *)(a1 + 1020);
  v57 = 1;
  set_debug_event_code((int)&v71, 1);
  if ( (v75 & 0xFFFFFFFu) > 0xB || ((1 << v75) & 0x902) == 0 )
  {
    if ( !under_debugger )
      interr(3295);
LABEL_95:
    __debugbreak();
  }
  v72 = *v6;
  v71 = v72;
  v9 = ptrace(PTRACE_PEEKUSER, v72, 60, 0);
  v74 = 1;
  v73 = v9;
  (*(void (__fastcall **)(int, int, char *, int))(*(_DWORD *)a1 + 328))(a1, *v6, v82, 4096);
  v10 = _strlen_chk(v82, 4096);
  if ( v10 )
  {
    v11 = s;
    if ( v78 < v10 + 1 )
    {
      v11 = (char *)qvector_reserve((int)&s, s, v10 + 1, 1u);
      s = v11;
    }
    v77 = v10 + 1;
    memmove(v11, v82, v10);
    s[v10] = 0;
  }
  else
  {
    v77 = 0;
  }
  v56 = 0;
  v80 = 0;
  v79 = -1;
  v81 = -1;
  qsnprintf(v82, 4096, "/proc/%u/maps");
  v12 = fopenRT(v82);
  v13 = a1;
  *(_DWORD *)(a1 + 1012) = v12;
  if ( !v12 )
  {
    v16 = (int *)_errno(0);
    v17 = (const char *)winerr(*v16);
    v57 = 0;
    sub_1BC48(a1, "%s: %s\n", v82, v17);
    goto LABEL_86;
  }
  if ( v77 )
  {
    v14 = (char *)(a1 + 1036);
    v15 = s;
    if ( !s )
      goto LABEL_22;
  }
  else
  {
    v14 = (char *)(a1 + 1036);
    v15 = &byte_B3CBE;
  }
  s2 = v14;
  v18 = strlen(v15);
  if ( !v18 )
  {
    v14 = s2;
LABEL_22:
    *((_DWORD *)v14 + 1) = 0;
    goto LABEL_25;
  }
  v19 = v18;
  v20 = v18 + 1;
  if ( *(_DWORD *)(v58 + 1044) >= v18 + 1 )
  {
    v21 = *(void **)(v58 + 1036);
    v51 = (_DWORD *)(v58 + 1036);
  }
  else
  {
    v51 = (_DWORD *)(v58 + 1036);
    v21 = qvector_reserve((int)s2, *(void **)(v58 + 1036), v18 + 1, 1u);
    *(_DWORD *)(v58 + 1036) = v21;
    v13 = v58;
  }
  *(_DWORD *)(v13 + 1040) = v20;
  memmove(v21, v15, v19);
  *(_BYTE *)(*v51 + v19) = 0;
  v14 = s2;
LABEL_25:
  v22 = (_BYTE *)(v13 + 389);
  if ( !*(_BYTE *)(v13 + 389) )
  {
    v23 = (void **)(v13 + 248);
    v24 = *((_DWORD *)v14 + 1);
    v25 = v24 - 1;
    if ( v24 < 2 )
    {
      *(_DWORD *)(v13 + 252) = 0;
    }
    else
    {
      v26 = *(const void **)v14;
      if ( *(_DWORD *)(v13 + 256) >= v24 )
      {
        v27 = *v23;
      }
      else
      {
        v52 = v26;
        v27 = qvector_reserve(v13 + 248, *v23, v24, 1u);
        *v23 = v27;
        v13 = v58;
        v25 = v24 - 1;
        v26 = v52;
      }
      *(_DWORD *)(v13 + 252) = v24;
      v28 = v25;
      memmove(v27, v26, v25);
      *((_BYTE *)*v23 + v28) = 0;
    }
  }
  v69 = 0;
  v68 = 0;
  v67 = nullptr;
  *(_DWORD *)(v13 + 128) = 4;
  if ( sub_1F360(v13, (int)&v67, 0) <= 0 )
  {
    if ( !under_debugger )
      interr(30065);
    goto LABEL_95;
  }
  sub_1EF60((_DWORD *)v13);
  sub_1B866((_DWORD *)v13);
  (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 296))(v13);
  if ( *(_DWORD *)(v13 + 336) == -1 || *(_DWORD *)(v13 + 340) == -1 )
    goto LABEL_89;
  v29 = *(_DWORD *)(v13 + 284);
  if ( !v29 )
    v29 = *(_DWORD *)(v13 + 332);
  if ( v29 <= 0 )
  {
LABEL_89:
    if ( !under_debugger )
      interr(30016);
    goto LABEL_95;
  }
  nullsub_2(1);
  v53 = v22;
  if ( v77 )
    v30 = s;
  else
    v30 = &byte_B3CBE;
  s2a = v30;
  v31 = v68;
  if ( !v68 )
    goto LABEL_51;
  v32 = 0;
  v33 = v67;
  while ( 1 )
  {
    v34 = &byte_B3CBE;
    if ( v33[3] )
      v34 = (const char *)v33[2];
    ++v32;
    if ( !strcmp(v34, s2a) )
      break;
    v33 += 10;
    if ( v32 >= v31 )
      goto LABEL_51;
  }
  if ( v33 )
  {
    v79 = *v33;
    v35 = v58;
    v36 = v55;
    v80 = sub_22890(v79, &v67, v33);
    if ( !*v53 )
      v81 = *v33;
  }
  else
  {
LABEL_51:
    v35 = v58;
    v36 = v55;
    if ( !*v53 )
      sub_1BC48(v58, "%s: nowhere in the process memory?!\n", s2a);
  }
  if ( !sub_22244(v35, &v67, v36 != 0) )
    sub_1BC48(v35, "Could not set the shlib bpt, shared object events will not be handled\n");
  if ( 16 * v75 )
  {
    v37 = *(_DWORD *)(v35 + 60);
    v38 = *(_DWORD *)(v35 + 64);
    v39 = 93 * ((v38 - v37) >> 2) - 1;
    if ( v38 == v37 )
      v39 = v38 - v37;
    v40 = *(_DWORD *)(v58 + 76) + *(_DWORD *)(v58 + 72);
    if ( v39 == v40 )
    {
      sub_25954((void **)(v58 + 56));
      v40 = *(_DWORD *)(v58 + 72) + *(_DWORD *)(v58 + 76);
      v37 = *(_DWORD *)(v58 + 60);
      v38 = *(_DWORD *)(v58 + 64);
    }
    if ( v38 != v37 )
      v56 = *(_DWORD *)(v37 + 4 * (v40 / 0x5D)) + 44 * (v40 % 0x5D);
    *(_DWORD *)v56 = -1;
    *(_DWORD *)(v56 + 4) = 0;
    *(_DWORD *)(v56 + 8) = -1;
    *(_BYTE *)(v56 + 12) = 0;
    *(_DWORD *)(v56 + 16) = 0;
    copy_debug_event(v56, (int)&v71);
    v35 = v58;
    v36 = v55;
    ++*(_DWORD *)(v58 + 76);
    *v54 = 0;
  }
  if ( !v36 )
    goto LABEL_84;
  set_debug_event_code((int)&v71, 11);
  if ( (v75 & 0xFFFFFFFu) > 0xB || ((1 << v75) & 0x902) == 0 )
  {
    if ( !under_debugger )
      interr(3295);
    goto LABEL_95;
  }
  if ( (v75 & 0xFFFFFFF) != 0 )
  {
    v41 = *(_DWORD *)(v35 + 60);
    v42 = *(_DWORD *)(v35 + 64);
    v43 = 93 * ((v42 - v41) >> 2) - 1;
    if ( v42 == v41 )
      v43 = v42 - v41;
    v44 = *(_DWORD *)(v58 + 76) + *(_DWORD *)(v58 + 72);
    if ( v43 == v44 )
    {
      sub_25954((void **)(v58 + 56));
      v44 = *(_DWORD *)(v58 + 72) + *(_DWORD *)(v58 + 76);
      v41 = *(_DWORD *)(v58 + 60);
      v42 = *(_DWORD *)(v58 + 64);
    }
    v45 = 0;
    if ( v42 != v41 )
      v45 = *(_DWORD *)(v41 + 4 * (v44 / 0x5D)) + 44 * (v44 % 0x5D);
    *(_DWORD *)v45 = -1;
    *(_DWORD *)(v45 + 4) = 0;
    *(_DWORD *)(v45 + 8) = -1;
    *(_BYTE *)(v45 + 12) = 0;
    *(_DWORD *)(v45 + 16) = 0;
    copy_debug_event(v45, (int)&v71);
    ++*(_DWORD *)(v58 + 76);
    *v54 = 0;
  }
  if ( !qgetenv("IDA_SKIP_SYMS", 0) )
  {
    v65 = 0;
    v64 = nullptr;
    v66 = 0;
    v46 = s;
    v63[0] = (int)&off_D6358;
    v63[1] = 4;
    v63[2] = (int)&v64;
    if ( !v77 )
      v46 = &byte_B3CBE;
    sub_35628(v46, v63, 0);
    v47 = v80;
    v48 = v79;
    if ( v77 )
      v49 = s;
    else
      v49 = &byte_B3CBE;
    sub_1B09C((int)v62, v49);
    sub_213D4(v63, v48, v47, (int)v62, (int)&v64);
    if ( v62[0] )
    {
      v62[1] = nullptr;
      qfree(v62[0]);
      v62[2] = nullptr;
      v62[0] = nullptr;
    }
    sub_21550(v58, v63);
    sub_21464((int)v63);
    if ( v64 )
    {
      v65 = 0;
      qfree(v64);
      v66 = 0;
      v64 = nullptr;
    }
  }
LABEL_84:
  if ( v67 )
  {
    sub_1B470((int *)&v67, 0);
    qfree(v67);
    v69 = 0;
    v67 = nullptr;
  }
LABEL_86:
  free_debug_event(&v71);
  return v57;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// 67518: using guessed type int __fastcall nullsub_2(_DWORD);
// B3CBE: using guessed type char byte_B3CBE;
// D6358: using guessed type _UNKNOWN *off_D6358;
// E0550: using guessed type char under_debugger;
