__int64 __fastcall sub_744680(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // r15
  int v5; // eax
  __int64 v6; // rax
  int v7; // r10d
  _DWORD *v8; // rbx
  unsigned __int16 *v9; // r14
  char *v10; // r13
  int v11; // r11d
  int v12; // ebp
  unsigned __int16 *v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // ebx
  size_t v17; // rdx
  int v18; // r12d
  __int64 v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // ebx
  __int64 v22; // rdx
  unsigned __int16 *v23; // rbx
  unsigned __int16 *v24; // r12
  char *v25; // r9
  __int64 v26; // r14
  unsigned int v27; // ebp
  __int64 v28; // r13
  __int16 v29; // si
  char *v30; // rax
  int v31; // edx
  __int16 v32; // cx
  __int64 v33; // rax
  int v34; // edi
  _WORD *v35; // rcx
  int v36; // eax
  int v37; // esi
  unsigned int v38; // edx
  _WORD *v39; // rcx
  unsigned __int16 *v40; // rbx
  int v41; // edx
  int v42; // eax
  __int64 v43; // rbx
  unsigned __int16 *v44; // r12
  int v45; // r8d
  int v46; // r15d
  unsigned int v47; // eax
  __int64 v48; // rbp
  __int64 v49; // r14
  unsigned __int16 *v50; // rbx
  unsigned int v51; // r12d
  unsigned __int16 *v52; // rsi
  __int64 v53; // rax
  unsigned int v54; // edx
  size_t v55; // rdx
  __int16 v56; // si
  unsigned int v57; // eax
  int v58; // edx
  __int64 v59; // rsi
  __int64 v60; // rdi
  unsigned int v61; // r9d
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // r9d
  unsigned int v70; // edx
  int v71; // eax
  unsigned int v72; // ecx
  int v73; // eax
  unsigned int v74; // ecx
  int v75; // eax
  unsigned __int16 v77; // r8
  char *v78; // r9
  __int64 v79; // rax
  unsigned __int16 *v80; // rax
  int v81; // edx
  __int16 v82; // cx
  int v83; // esi
  unsigned int v84; // edx
  int v85; // ebx
  __int64 v86; // r11
  unsigned int v87; // ebx
  unsigned __int16 *v88; // rsi
  _DWORD *v89; // [rsp+0h] [rbp-98h]
  int v90; // [rsp+0h] [rbp-98h]
  int v91; // [rsp+0h] [rbp-98h]
  int srca; // [rsp+8h] [rbp-90h]
  _WORD *srce; // [rsp+8h] [rbp-90h]
  unsigned __int16 srcb; // [rsp+8h] [rbp-90h]
  _QWORD *srcc; // [rsp+8h] [rbp-90h]
  _WORD *srcd; // [rsp+8h] [rbp-90h]
  __int64 v98; // [rsp+10h] [rbp-88h]
  __int64 v99; // [rsp+18h] [rbp-80h]
  __int64 v100; // [rsp+20h] [rbp-78h]
  int v102; // [rsp+30h] [rbp-68h]
  __int64 v103; // [rsp+30h] [rbp-68h]
  __int64 v104; // [rsp+38h] [rbp-60h]
  __int64 v105; // [rsp+40h] [rbp-58h]
  __int64 v106; // [rsp+48h] [rbp-50h]
  __int16 v107; // [rsp+48h] [rbp-50h]
  char *v108; // [rsp+48h] [rbp-50h]
  int v109; // [rsp+50h] [rbp-48h]
  char *v110; // [rsp+50h] [rbp-48h]
  int v111; // [rsp+50h] [rbp-48h]
  unsigned __int16 v113; // [rsp+58h] [rbp-40h]
  int v114; // [rsp+5Ch] [rbp-3Ch]

  v4 = (_QWORD *)a2;
  v100 = *(_QWORD *)a2;
  v104 = *(_QWORD *)(a1 + 16);
  v105 = *(_QWORD *)(v104 + 8);
  v5 = *(_DWORD *)(a2 + 32) + 1;
  if ( *(_DWORD *)(a2 + 32) == -1 )
    v5 = -1;
  *(_DWORD *)(a2 + 32) = v5;
  v99 = sub_73ABC0((int *)a1);
  v6 = sub_73ABC0((int *)a1);
  v98 = v6;
  if ( !v99 || !v6 )
    sub_743100((unsigned int)dword_2CCC638, 0);
  if ( *(_DWORD *)(v99 + 12) == *(_DWORD *)(v6 + 12) )
    sub_743130();
  v7 = 0;
  v8 = *(_DWORD **)v6;
  v106 = *(_QWORD *)v99;
  v9 = (unsigned __int16 *)(v100 + 6);
  *v8 = *(_DWORD *)v100;
  v89 = v8;
  v10 = (char *)v8 + 6;
  v109 = *(_DWORD *)a1;
  v11 = *(_DWORD *)a1;
  v12 = *(_DWORD *)a1 >> 1;
  while ( 1 )
  {
    v19 = v9[2];
    if ( (unsigned __int16)v19 <= 1u )
    {
      v13 = (unsigned __int16 *)v4[v19 + 2];
      if ( !v13 )
        sub_743130();
      v14 = *v13;
      v15 = *(unsigned __int16 *)((char *)v13 + v14 + 2);
    }
    else
    {
      v20 = *v4;
      v21 = *(_DWORD *)(*v4 - 8LL);
      if ( (unsigned __int16)v19 >= v21 )
        sub_743130();
      v13 = (unsigned __int16 *)(v20 + v19);
      v22 = *v13;
      LODWORD(v14) = *v13;
      if ( (int)v13 + (int)v22 + 3 - (int)v20 >= v21 )
        sub_743130();
      v15 = *(unsigned __int16 *)((char *)v13 + v22 + 2);
      if ( (unsigned int)v13 + (_DWORD)v14 + v15 + 4 - 1 - (unsigned int)v20 >= v21 )
        sub_743130();
    }
    v16 = v7 + 1;
    if ( (unsigned int)v14 > 0x204 || v15 > 0x404 )
      sub_743130();
    v17 = (unsigned int)v14 + v15 + 4;
    v12 += 3;
    v18 = v11 - v17;
    if ( v11 - (int)v17 <= v12 )
      break;
    memmove((char *)v89 + v18, v13, v17);
    *(_DWORD *)v10 = *(_DWORD *)v9;
    if ( *(_DWORD *)a1 < (unsigned int)(unsigned __int16)v18 )
      sub_743130();
    *((_WORD *)v10 + 2) = v18;
    v9 += 3;
    v10 += 6;
    v7 = v16;
    v11 = v18;
  }
  v102 = v7 + 1;
  v23 = v13;
  v24 = v9;
  v25 = v10;
  v26 = v106;
  v27 = v109;
  v28 = a1;
  if ( *(_DWORD *)v100 )
  {
    v39 = v13;
    v40 = nullptr;
  }
  else
  {
    v29 = *((_WORD *)v25 - 3);
    v30 = v25 - 6;
    v31 = v7;
    if ( v7 > 0 )
    {
      do
      {
        v30 -= 6;
        v32 = v7 - v31--;
        *((_WORD *)v30 + 4) = v32;
      }
      while ( *(_WORD *)v30 == v29 && v31 );
    }
    v110 = v25;
    v107 = v11;
    srca = v7;
    v33 = sub_745C10(v28, v98, (unsigned int)(v7 - 1));
    v34 = *v24;
    v35 = (_WORD *)v33;
    v36 = *v23;
    if ( v34 + v36 > 516 )
      sub_743130();
    *v35 = v34 + v36;
    v37 = *v23;
    v38 = *(unsigned __int16 *)((char *)v23 + (unsigned __int16)v37 + 2);
    if ( (unsigned __int16)v37 > 0x204u || v38 > 0x404 )
      sub_743130();
    v114 = srca;
    srce = v35;
    memmove((char *)v35 + *v24 + 2, v23 + 1, v37 + v38 + 4);
    v25 = v110;
    LOWORD(v11) = v107;
    v7 = v114;
    v24[1] = 0;
    *((_WORD *)v110 + 1) = 0;
    v39 = srce;
    v40 = srce;
  }
  v111 = v7;
  v108 = v25;
  srcb = v11;
  sub_745920(v28, a3, a4, v39, *(unsigned int *)(v99 + 12));
  v41 = *(_DWORD *)(v98 + 12);
  if ( a4 )
  {
    *(_DWORD *)(*(_QWORD *)a3 + 6LL * (int)(a4 - 1) + 6) = v41;
  }
  else if ( a3 )
  {
    **(_DWORD **)a3 = v41;
  }
  else
  {
    *(_DWORD *)(v28 + 5796) = v41;
  }
  *(_DWORD *)v26 = *(_DWORD *)v24;
  if ( *(_DWORD *)v28 < (unsigned int)srcb )
    sub_743130();
  *((_WORD *)v108 + 2) = srcb;
  *(_WORD *)(v98 + 8) = srcb - ((_WORD)v108 + 12 - (_WORD)v89);
  *((_WORD *)v89 + 2) = v102 - 1;
  v42 = *(_DWORD *)v100;
  *v89 = *(_DWORD *)v100;
  v90 = *(__int16 *)(v100 + 4);
  if ( v42 )
  {
    v43 = v26 + 6;
    v44 = v24 + 3;
    v45 = 0;
  }
  else
  {
    srcd = (_WORD *)sub_73F210(*(_QWORD *)(v28 + 16));
    if ( !srcd )
    {
      dword_2CCC638 = 16;
      sub_743100(16, 0);
    }
    *(_DWORD *)v26 = 0;
    v77 = v24[3];
    if ( *v40 < v77 )
      sub_743130();
    v113 = v24[3];
    v103 = v77;
    v78 = (char *)memmove(srcd + 1, v40 + 1, v77);
    v79 = v24[5];
    if ( (unsigned __int16)v79 > 1u )
    {
      v86 = *v4;
      v87 = *(_DWORD *)(*v4 - 8LL);
      if ( (unsigned __int16)v79 >= v87 )
        sub_743130();
      v80 = (unsigned __int16 *)(v86 + v79);
      v81 = *v80;
      v82 = *v80;
      v88 = (unsigned __int16 *)((char *)v80 + v81 + 2);
      if ( (int)v88 + 1 - (int)v86 >= v87 )
        sub_743130();
      if ( (unsigned int)v80 + v81 + 2 + *v88 + 2 - 1 - (unsigned int)v86 >= v87 )
        sub_743130();
    }
    else
    {
      v80 = (unsigned __int16 *)v4[v79 + 2];
      if ( !v80 )
        sub_743130();
      v81 = *v80;
      v82 = *v80;
    }
    if ( v113 + v81 > 516 )
      sub_743130();
    *srcd = v113 + v82;
    v83 = *v80;
    v84 = *(unsigned __int16 *)((char *)v80 + (unsigned __int16)v83 + 2);
    if ( (unsigned __int16)v83 > 0x204u || v84 > 0x404 )
      sub_743130();
    v85 = v83 + v84 + 4;
    memmove(&v78[v103], v80 + 1, v85);
    v27 -= v85 + v113;
    if ( v27 >= *(_DWORD *)(v26 - 8) )
      sub_743130();
    memmove((void *)(v26 + v27), srcd, v85 + v113);
    sub_73F260(*(_QWORD *)(v28 + 16), (__int64)srcd);
    if ( *(_DWORD *)v28 < (unsigned int)(unsigned __int16)v27 )
      sub_743130();
    *(_WORD *)(v26 + 10) = v27;
    v43 = v26 + 12;
    v44 = v24 + 6;
    *(_DWORD *)(v26 + 6) = 0;
    v45 = 1;
    v102 = v111 + 2;
  }
  if ( v90 <= v102 )
  {
    LOWORD(v91) = v45;
    v56 = v27;
    v57 = (unsigned __int16)v27;
  }
  else
  {
    srcc = v4;
    v46 = v45;
    v91 = v45 + v90 - v102;
    v47 = v27;
    v48 = v26;
    v49 = v43;
    v50 = v44;
    v51 = v47;
    do
    {
      v59 = v50[2];
      if ( (unsigned __int16)v59 <= 1u )
      {
        v52 = (unsigned __int16 *)srcc[v59 + 2];
        if ( !v52 )
          sub_743130();
        v53 = *v52;
        v54 = *(unsigned __int16 *)((char *)v52 + v53 + 2);
      }
      else
      {
        v60 = *srcc;
        v61 = *(_DWORD *)(*srcc - 8LL);
        if ( (unsigned __int16)v59 >= v61 )
          sub_743130();
        v52 = (unsigned __int16 *)(v60 + v59);
        v62 = *v52;
        LODWORD(v53) = *v52;
        if ( (int)v52 + (int)v62 + 3 - (int)v60 >= v61 )
          sub_743130();
        v54 = *(unsigned __int16 *)((char *)v52 + v62 + 2);
        if ( (unsigned int)v52 + (_DWORD)v53 + v54 + 4 - 1 - (unsigned int)v60 >= v61 )
          sub_743130();
      }
      if ( (unsigned int)v53 > 0x204 || v54 > 0x404 )
        sub_743130();
      v55 = (unsigned int)v53 + v54 + 4;
      v51 -= v55;
      if ( v51 >= *(_DWORD *)(v48 - 8) )
        sub_743130();
      memmove((void *)(v48 + v51), v52, v55);
      v56 = v51;
      v57 = (unsigned __int16)v51;
      if ( *(_DWORD *)v28 < (unsigned int)(unsigned __int16)v51 )
        sub_743130();
      *(_WORD *)(v49 + 4) = v51;
      ++v46;
      v49 += 6;
      v58 = *(_DWORD *)v50;
      v50 += 3;
      *(_DWORD *)(v49 - 6) = v58;
    }
    while ( v46 != v91 );
    v4 = srcc;
    v43 = v49;
    v26 = v48;
  }
  if ( *(_DWORD *)v28 < v57 )
    sub_743130();
  *(_WORD *)(v43 + 4) = v56;
  *(_WORD *)(v26 + 4) = v91;
  *(_WORD *)(v99 + 8) = v56 - (v43 + 12 - v26);
  v63 = v4[2];
  v64 = *(_QWORD *)(v28 + 16);
  if ( v63 )
  {
    sub_73F260(*(_QWORD *)(v28 + 16), v63);
    v4[2] = 0;
  }
  v65 = v4[3];
  if ( v65 )
  {
    sub_73F260(v64, v65);
    v4[3] = 0;
  }
  sub_738AE0(*(_QWORD *)(v28 + 8), v100);
  if ( !(unsigned __int8)sub_73B860((__m128i **)v28, *((unsigned int *)v4 + 3), v66, v67, v68, v69) )
    sub_743100((unsigned int)dword_2CCC638, 0);
  if ( a3 )
  {
    v70 = *(_DWORD *)(a3 + 32);
    v71 = v70 + 100;
    if ( v70 >= 0xFFFFFF9C )
      v71 = -1;
    *(_DWORD *)(a3 + 32) = v71;
  }
  v72 = *(_DWORD *)(v99 + 32);
  v73 = v72 + 100;
  if ( v72 >= 0xFFFFFF9C )
    v73 = -1;
  *(_DWORD *)(v99 + 32) = v73;
  v74 = *(_DWORD *)(v98 + 32);
  v75 = v74 + 100;
  if ( v74 >= 0xFFFFFF9C )
    v75 = -1;
  *(_DWORD *)(v98 + 32) = v75;
  sub_73AB60(v28, v99);
  sub_73AB60(v28, v98);
  *(_QWORD *)(v104 + 8) = v105;
  return v104;
}
