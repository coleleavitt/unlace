void __fastcall sub_980D90(__int64 a1, int a2, char a3)
{
  char **exception; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  __int64 v10; // rax
  _DWORD *v11; // rdx
  unsigned int v12; // ecx
  _DWORD *v13; // rsi
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  _DWORD *v16; // rax
  int v17; // ecx
  __int64 v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rsi
  int v26; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rsi
  int v32; // eax
  _QWORD *v33; // rsi
  __int64 v34; // r14
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  _QWORD *v37; // r12
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  _QWORD *v41; // rcx
  __int64 v42; // r15
  __int64 v43; // r14
  char *v44; // r15
  __int64 v45; // r12
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 *v50; // rcx
  __int64 v51; // rdi
  _QWORD *v52; // rdx
  __int64 v53; // rax
  _DWORD *v54; // rax
  __int64 v55; // rax
  int v56; // eax
  unsigned int v57; // r12d
  unsigned int v58; // ecx
  unsigned int *v59; // rax
  __int64 v60; // rax
  unsigned int v61; // r15d
  unsigned int v62; // ecx
  unsigned int *v63; // rax
  __int64 v64; // rcx
  unsigned int v65; // r15d
  unsigned int v66; // ecx
  unsigned int *v67; // rax
  __int64 v68; // rcx
  unsigned int v69; // r14d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rsi
  unsigned int v73; // edx
  __int64 v74; // rax
  int *v75; // r10
  _DWORD *v76; // r9
  __int64 v77; // rax
  _QWORD *v78; // rdx
  int *v79; // rdi
  int *i; // rax
  int v81; // ecx
  char v82; // r8
  __int64 v83; // rcx
  _QWORD *v84; // rax
  _QWORD *v85; // rdx
  _QWORD *v86; // rdx
  _QWORD *v87; // rdx
  _QWORD *v88; // rax
  char v89; // [rsp+8h] [rbp-A8h]
  _QWORD *v90; // [rsp+8h] [rbp-A8h]
  unsigned int v91; // [rsp+8h] [rbp-A8h]
  _QWORD *v92; // [rsp+8h] [rbp-A8h]
  int v93; // [rsp+14h] [rbp-9Ch]
  _DWORD *v94; // [rsp+20h] [rbp-90h]
  _QWORD v95[3]; // [rsp+40h] [rbp-70h] BYREF
  __int64 v96[11]; // [rsp+58h] [rbp-58h] BYREF

  if ( !a3 )
    return;
  if ( *(_BYTE *)(a1 + 890) )
    sub_97FC70(a1);
  v10 = *(unsigned int *)(a1 + 864);
  v11 = *(_DWORD **)(a1 + 856);
  v12 = v10 - 1;
  v10 *= 16;
  v13 = (_DWORD *)((char *)v11 + v10);
  v14 = 16LL * (a2 & v12);
  v15 = &v11[(unsigned __int64)v14 / 4];
  if ( v14 == v10 )
  {
LABEL_39:
    while ( v15 != v11 )
    {
      v56 = v11[1];
      if ( v56 == 2 )
      {
        if ( a2 == *v11 && a2 == v11[2] )
        {
          v16 = v11;
          goto LABEL_11;
        }
      }
      else if ( !v56 )
      {
        break;
      }
      v11 += 4;
    }
LABEL_82:
    BUG();
  }
  v16 = &v11[(unsigned __int64)v14 / 4];
  while ( 1 )
  {
    v17 = v16[1];
    if ( v17 != 2 )
    {
      if ( !v17 )
        goto LABEL_82;
      goto LABEL_7;
    }
    if ( a2 == *v16 && a2 == v16[2] )
      break;
LABEL_7:
    v16 += 4;
    if ( v13 == v16 )
      goto LABEL_39;
  }
LABEL_11:
  v18 = (unsigned int)v16[3];
  v93 = v16[3];
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 928) + v18) && *(_BYTE *)(*(_QWORD *)(a1 + 936) + v18) )
  {
    v95[0] = 0;
    v19 = *(_QWORD *)(a1 + 704) + 16 * v18;
    v95[1] = 0;
    if ( (*(_BYTE *)(v19 + 4) & 1) != 0 )
      sub_182EA00(a1 + 64, v95, v19);
    else
      LODWORD(v95[0]) = *(_DWORD *)v19;
    v20 = *(_QWORD **)(a1 + 720);
    v21 = *(_QWORD *)(a1 + 16);
    if ( v20 )
    {
      v22 = *((unsigned int *)v20 - 1);
      if ( (_DWORD)v22 == *((_DWORD *)v20 - 2) )
      {
        v91 = (unsigned int)(3 * v22 + 1) >> 1;
        v73 = 16 * v91 + 8;
        if ( 16 * (int)v22 + 8 >= v73 || (unsigned int)v22 >= (unsigned int)(3 * v22 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v96, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v96);
          sub_233E40((__int64)v96);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v74 = sub_186B270(v73);
        v75 = *(int **)(a1 + 720);
        v76 = (_DWORD *)v74;
        v20 = (_QWORD *)(v74 + 8);
        if ( v75 )
        {
          v77 = (unsigned int)*(v75 - 1);
          v78 = v20;
          v76[1] = v77;
          v79 = &v75[4 * v77];
          for ( i = v75; v79 != i; *(v78 - 1) = v83 )
          {
            v81 = *i;
            v82 = *((_BYTE *)i + 4);
            i += 4;
            v78 += 2;
            *((_DWORD *)v78 - 4) = v81;
            *((_BYTE *)v78 - 12) = v82 & 3 | *((_BYTE *)v78 - 12) & 0xFC;
            v83 = *((_QWORD *)i - 1);
            *((_QWORD *)i - 1) = 0;
          }
          v94 = v76;
          sub_186B220(v75 - 2);
          v76 = v94;
          v23 = &v20[2 * (unsigned int)v94[1]];
        }
        else
        {
          *(_DWORD *)(v74 + 4) = 0;
          v23 = (_QWORD *)(v74 + 8);
        }
        *(_QWORD *)(a1 + 720) = v20;
        *v76 = v91;
      }
      else
      {
        v23 = &v20[2 * v22];
      }
    }
    else
    {
      v88 = (_QWORD *)sub_186B270(0x28u);
      *v88 = 2;
      v20 = v88 + 1;
      *(_QWORD *)(a1 + 720) = v88 + 1;
      v23 = v88 + 1;
    }
    *v23 = 0;
    v23[1] = 0;
    v24 = *((unsigned int *)v20 - 1);
    *((_DWORD *)v20 - 1) = v24 + 1;
    v25 = &v20[2 * v24];
    if ( (*(_BYTE *)(a1 + 812) & 1) != 0 )
    {
      sub_182EA00(*(_QWORD *)(a1 + 728), v25, a1 + 808);
    }
    else
    {
      v26 = *(_DWORD *)(a1 + 808);
      *((_BYTE *)v25 + 4) &= ~1u;
      *(_DWORD *)v25 = v26;
    }
    v27 = (_QWORD *)sub_180C100(v21 + 8400, 24);
    v28 = *(_QWORD **)(v21 + 9456);
    v29 = v27;
    *v27 = off_1C55FF0;
    v27[1] = a1 + 800;
    v27[2] = a1 + 720;
    if ( v28 )
    {
      v30 = *((_DWORD *)v28 - 1);
      if ( v30 == *((_DWORD *)v28 - 2) )
      {
        v69 = (3 * v30 + 1) >> 1;
        v70 = 8 * v69 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v70 || v30 >= v69 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v96, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v96);
          sub_233E40((__int64)v96);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v90 = v29;
        v71 = (unsigned int *)sub_186B300(v28 - 1, v70);
        v72 = v71[1];
        v28 = v71 + 2;
        v29 = v90;
        *(_QWORD *)(v21 + 9456) = v71 + 2;
        *v71 = v69;
        LODWORD(v71) = v72;
        v33 = &v28[v72];
        v32 = (_DWORD)v71 + 1;
      }
      else
      {
        v31 = v30;
        v32 = v30 + 1;
        v33 = &v28[v31];
      }
    }
    else
    {
      v92 = v27;
      v87 = (_QWORD *)sub_186B270(0x18u);
      *v87 = 2;
      v29 = v92;
      v32 = 1;
      v28 = v87 + 1;
      *(_QWORD *)(v21 + 9456) = v28;
      v33 = v28;
    }
    *v33 = v29;
    v34 = *(_QWORD *)(a1 + 16);
    *((_DWORD *)v28 - 1) = v32;
    v35 = (_QWORD *)sub_180C100(v34 + 8400, 16);
    v36 = *(_QWORD **)(v34 + 9456);
    v37 = v35;
    *v35 = off_1C56018;
    v35[1] = a1 + 736;
    if ( v36 )
    {
      v38 = *((_DWORD *)v36 - 1);
      if ( v38 == *((_DWORD *)v36 - 2) )
      {
        v65 = (3 * v38 + 1) >> 1;
        v66 = 8 * v65 + 8;
        if ( 8 * v38 + 8 >= v66 || v38 >= v65 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v96, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v96);
          sub_233E40((__int64)v96);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v67 = (unsigned int *)sub_186B300(v36 - 1, v66);
        v68 = v67[1];
        v36 = v67 + 2;
        *(_QWORD *)(v34 + 9456) = v67 + 2;
        *v67 = v65;
        LODWORD(v67) = v68;
        v41 = &v36[v68];
        v40 = (_DWORD)v67 + 1;
      }
      else
      {
        v39 = v38;
        v40 = v38 + 1;
        v41 = &v36[v39];
      }
    }
    else
    {
      v86 = (_QWORD *)sub_186B270(0x18u);
      *v86 = 2;
      v40 = 1;
      v36 = v86 + 1;
      *(_QWORD *)(v34 + 9456) = v36;
      v41 = v36;
    }
    v42 = *(_QWORD *)(a1 + 928);
    *v41 = v37;
    *((_DWORD *)v36 - 1) = v40;
    v43 = *(_QWORD *)(a1 + 16);
    v44 = (char *)(v18 + v42);
    v89 = *v44;
    v45 = sub_180C100(v43 + 8400, 24);
    *(_QWORD *)v45 = off_1C54EE8;
    *(_BYTE *)(v45 + 16) = v89;
    v46 = *(_QWORD **)(v43 + 9456);
    *(_QWORD *)(v45 + 8) = v44;
    if ( v46 )
    {
      v47 = *((_DWORD *)v46 - 1);
      if ( v47 == *((_DWORD *)v46 - 2) )
      {
        v61 = (3 * v47 + 1) >> 1;
        v62 = 8 * v61 + 8;
        if ( 8 * v47 + 8 >= v62 || v47 >= v61 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v96, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v96);
          sub_233E40((__int64)v96);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v63 = (unsigned int *)sub_186B300(v46 - 1, v62);
        v64 = v63[1];
        v46 = v63 + 2;
        *(_QWORD *)(v43 + 9456) = v63 + 2;
        *v63 = v61;
        LODWORD(v63) = v64;
        v50 = &v46[v64];
        v49 = (_DWORD)v63 + 1;
      }
      else
      {
        v48 = v47;
        v49 = v47 + 1;
        v50 = &v46[v48];
      }
    }
    else
    {
      v85 = (_QWORD *)sub_186B270(0x18u);
      *v85 = 2;
      v49 = 1;
      v46 = v85 + 1;
      *(_QWORD *)(v43 + 9456) = v46;
      v50 = v46;
    }
    *v50 = v45;
    v51 = *(_QWORD *)(a1 + 800);
    *((_DWORD *)v46 - 1) = v49;
    sub_1839610(v51, a1 + 808, v95);
    v52 = *(_QWORD **)(a1 + 736);
    if ( v52 )
    {
      v53 = *((unsigned int *)v52 - 1);
      if ( (_DWORD)v53 == *((_DWORD *)v52 - 2) )
      {
        v57 = (unsigned int)(3 * v53 + 1) >> 1;
        v58 = 4 * v57 + 8;
        if ( 4 * (int)v53 + 8 >= v58 || (unsigned int)v53 >= v57 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v96, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v96);
          sub_233E40((__int64)v96);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v59 = (unsigned int *)sub_186B300(v52 - 1, v58);
        v52 = v59 + 2;
        *v59 = v57;
        v60 = v59[1];
        *(_QWORD *)(a1 + 736) = v52;
        v54 = (_DWORD *)v52 + v60;
      }
      else
      {
        v54 = (_DWORD *)v52 + v53;
      }
    }
    else
    {
      v84 = (_QWORD *)sub_186B270(0x10u);
      *v84 = 2;
      v52 = v84 + 1;
      *(_QWORD *)(a1 + 736) = v84 + 1;
      v54 = v84 + 1;
    }
    *v54 = v93;
    v55 = *(_QWORD *)(a1 + 928);
    ++*((_DWORD *)v52 - 1);
    *(_BYTE *)(v55 + v18) = 1;
    if ( (*(_BYTE *)(a1 + 812) & 1) != 0 || (*(_BYTE *)(a1 + 836) & 1) != 0 )
    {
      if ( (int)sub_182EB00(*(_QWORD *)(a1 + 800), a1 + 808, a1 + 832) < 0 )
        goto LABEL_48;
LABEL_35:
      sub_97EAC0(a1);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 808) >= *(_DWORD *)(a1 + 832) )
        goto LABEL_35;
LABEL_48:
      *(_BYTE *)(a1 + 889) = 1;
    }
    sub_182EF00(a1 + 64, v95);
  }
}

