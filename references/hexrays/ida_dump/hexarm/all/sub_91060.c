unsigned __int64 __fastcall sub_91060(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 *v5; // rax
  __int64 v6; // rsi
  bool v7; // zf
  __int64 *v8; // r12
  __int64 *v9; // r13
  __int64 *v10; // rdi
  char *v11; // rsi
  __int64 v12; // r13
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  const char *v15; // rcx
  __int64 v16; // rax
  const char *v17; // rdx
  __int64 v18; // rdi
  char *v19; // rsi
  char v20; // r12
  __int64 j; // r13
  char v22; // al
  _QWORD *v23; // r13
  __int64 v24; // rsi
  char v25; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // r13
  char *v30; // rsi
  _QWORD *v31; // r14
  _QWORD *v32; // r13
  _QWORD *v33; // rdx
  _QWORD *v34; // r15
  _QWORD *v35; // r13
  char *v36; // rsi
  _QWORD *v37; // rdx
  unsigned int **v38; // r13
  unsigned __int64 (__fastcall *v39)(__int64, __int64 *); // rax
  _QWORD *v40; // r14
  _QWORD *v41; // r13
  _QWORD *v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rsi
  _QWORD *v46; // r13
  _QWORD *v47; // r13
  _QWORD *v48; // r12
  _QWORD *v49; // rdx
  _QWORD *v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  const char *v61; // rdx
  char *v62; // rsi
  __int64 i; // rbp
  _QWORD *v64; // r13
  _QWORD *v65; // rdx
  _QWORD *v66; // r12
  _QWORD *v67; // rdx
  _QWORD *v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  _QWORD *v74; // r12
  _QWORD *v75; // r13
  __int64 v76; // rsi
  int v77; // [rsp+Ch] [rbp-5Ch]
  const char *v78; // [rsp+10h] [rbp-58h] BYREF
  __int128 v79; // [rsp+18h] [rbp-50h]
  unsigned __int64 v80; // [rsp+28h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  sub_7F320((__int64 *)a2, 0xDu);
  sub_7F320((__int64 *)a2, *(_DWORD *)(a2 + 48));
  v77 = *(_DWORD *)(a2 + 48);
  if ( v77 == 1 )
  {
    *(_QWORD *)(a2 + 40) = -1;
    sub_8F0C0(a2, 0, "mba.flags");
    sub_7F320((__int64 *)a2, *(_DWORD *)a1);
    v61 = s1;
    if ( *(_QWORD *)(a1 + 416) )
      v61 = *(const char **)(a1 + 408);
    sub_8F0C0(a2, 0, v61);
    v62 = (char *)s1;
    if ( *(_QWORD *)(a1 + 416) )
      v62 = *(char **)(a1 + 408);
    sub_7F680((__int64 *)a2, v62);
    sub_8F0C0(a2, 0, "mba.#lvars");
    sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 440));
    sub_8F0C0(a2, 0, "mba.qty");
    sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 64));
    for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      sub_8F690(a2, 2, *(_DWORD *)(i + 72));
      sub_90A80(i, a2);
    }
    return v80 - __readfsqword(0x28u);
  }
  v4 = *(unsigned __int8 *)(a1 + 320);
  if ( *(_QWORD *)(a1 + 784) )
    v4 |= 2u;
  if ( *(_QWORD *)(a1 + 920) )
    v4 |= 4u;
  if ( *(_QWORD *)(a1 + 928) )
  {
    if ( *(_QWORD *)(a1 + 936) )
      v4 |= 0x18u;
    else
      v4 |= 8u;
  }
  if ( *(_QWORD *)(a1 + 1328) )
    v4 |= 0x20u;
  if ( *(_QWORD *)(a1 + 1344) )
    v4 |= 0x40u;
  if ( *(_QWORD *)(a1 + 1336) )
    v4 |= 0x100u;
  if ( !*(_QWORD *)(a1 + 8) )
    LOBYTE(v4) = v4 | 0x80;
  sub_7F320((__int64 *)a2, v4);
  sub_8F0C0(a2, 0, "mba.flags");
  sub_7F320((__int64 *)a2, *(_DWORD *)a1);
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 4));
  v5 = *(__int64 **)(a1 + 8);
  if ( v5 )
  {
    v6 = *v5;
    v7 = *(_DWORD *)(a2 + 48) == 4;
    *(_QWORD *)(a2 + 40) = *v5;
    if ( !v7 )
      goto LABEL_19;
  }
  else
  {
    v57 = *(__int64 **)(a1 + 16);
    v7 = *(_DWORD *)(a2 + 48) == 4;
    v6 = *v57;
    *(_QWORD *)(a2 + 40) = *v57;
    if ( !v7 )
      goto LABEL_19;
  }
  sub_7F380((__int64 *)a2, v6);
LABEL_19:
  sub_8F0C0(a2, 2, "mbr.ranges");
  sub_7FB40((__int64 *)a2, a1 + 16);
  sub_8F0C0(a2, 0, "mba.last_prolog_ea");
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 48) - *(_QWORD *)(a2 + 40));
  sub_8F0C0(a2, 0, "mba.first_epilog_ea");
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 56) - *(_QWORD *)(a2 + 40));
  sub_8F0C0(a2, 0, "mba.npurged");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 68) + 1);
  sub_8F0C0(a2, 0, "mba.cc");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 72));
  sub_8F0C0(a2, 0, "mba.frame");
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 80));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 88));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 96));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 104));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 112));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 116));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 120));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 128));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 136));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 144));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 152));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 160) - *(_QWORD *)(a2 + 40));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 168));
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 176));
  sub_8FCE0((unsigned int **)(a1 + 1448), (__int64 *)a2);
  sub_8F0C0(a2, 0, "mba.subframes");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 1480));
  v8 = *(__int64 **)(a1 + 1472);
  v9 = &v8[5 * *(_QWORD *)(a1 + 1480)];
  while ( v9 != v8 )
  {
    v10 = v8;
    v8 += 5;
    sub_80960(v10, (__int64 *)a2);
  }
  sub_8F0C0(a2, 0, "mba.memory");
  sub_7FC00(a1 + 184, (__int64 *)a2);
  sub_7FC00(a1 + 208, (__int64 *)a2);
  sub_7FC00(a1 + 232, (__int64 *)a2);
  sub_7FE50(a1 + 256, (__int64 *)a2);
  sub_7FC00(a1 + 272, (__int64 *)a2);
  sub_7FE50(a1 + 296, (__int64 *)a2);
  sub_8F0C0(a2, 0, "mba.maturity");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 312));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 316));
  sub_8F0C0(a2, 0, "mba.functype");
  sub_7F790((__int64 *)a2, (_BYTE *)(a1 + 328));
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
  {
    sub_7F250((__int64 *)a2, (unsigned int **)(a1 + 336));
    sub_7FE50(a1 + 360, (__int64 *)a2);
    sub_7FC00(a1 + 376, (__int64 *)a2);
  }
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 400));
  sub_8F0C0(a2, 0, "mba.label");
  v11 = (char *)s1;
  if ( *(_QWORD *)(a1 + 416) )
    v11 = *(char **)(a1 + 408);
  v12 = 0;
  v13 = 0;
  sub_7F680((__int64 *)a2, v11);
  sub_8F0C0(a2, 0, "mba.lvars");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 440));
  if ( *(_QWORD *)(a1 + 440) )
  {
    do
    {
      if ( *(_BYTE *)(a2 + 52) )
      {
        v14 = *(_QWORD *)(a1 + 432);
        v15 = s1;
        v78 = nullptr;
        v79 = 0;
        v16 = v12 + v14;
        if ( *(_QWORD *)(v16 + 40) )
          v15 = *(const char **)(v16 + 32);
        sub_6B2B0((__int64 *)&v78, (__int64)"#%zu: %s", v13, v15);
        v17 = s1;
        if ( (_QWORD)v79 )
          v17 = v78;
        sub_8F0C0(a2, 2, v17);
        if ( v78 )
        {
          *(_QWORD *)&v79 = 0;
          qfree(v78);
        }
      }
      ++v13;
      v18 = v12 + *(_QWORD *)(a1 + 432);
      v12 += 104;
      sub_81560(v18, (__int64 *)a2);
    }
    while ( v13 < *(_QWORD *)(a1 + 440) );
  }
  sub_8F0C0(a2, 0, "mba.argidx");
  sub_7F920((__int64 *)a2, (unsigned int **)(a1 + 456));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 480) + 1);
  sub_8F0C0(a2, 0, "mba.error");
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 488) - *(_QWORD *)(a2 + 40));
  v19 = (char *)s1;
  if ( *(_QWORD *)(a1 + 504) )
    v19 = *(char **)(a1 + 496);
  v20 = 0;
  sub_7F680((__int64 *)a2, v19);
  sub_8F0C0(a2, 0, "mba.blocks");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 64));
  for ( j = *(_QWORD *)(a1 + 520); j; v20 |= (v22 & 8) != 0 )
  {
    sub_8F690(a2, 2, *(_DWORD *)(j + 72));
    sub_90A80(j, a2);
    v22 = *(_BYTE *)(j + 24);
    j = *(_QWORD *)(j + 8);
  }
  sub_8F0C0(a2, 0, "mba.std_ivls");
  v23 = (_QWORD *)(a1 + 536);
  do
  {
    v24 = *(_QWORD *)a2;
    v25 = *v23 == 0;
    v26 = *(_QWORD *)(a2 + 8);
    if ( v23[1] + *v23 == -1 )
      v25 |= 2u;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v26 + 1) )
    {
      v27 = qvector_reserve(a2, v24, v26 + 1, 1);
      *(_QWORD *)a2 = v27;
      v24 = v27;
      v26 = *(_QWORD *)(a2 + 8);
    }
    *(_BYTE *)(v24 + v26) = v25;
    v23 += 4;
    ++*(_QWORD *)(a2 + 8);
    sub_7F5B0((__int64 *)a2, *(v23 - 4) - *(_QWORD *)(a2 + 40));
    sub_7F380((__int64 *)a2, *(v23 - 3));
  }
  while ( (_QWORD *)(a1 + 728) != v23 );
  sub_8F0C0(a2, 0, "mba.notes");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 736));
  v28 = *(_QWORD *)(a1 + 728);
  v29 = v28 + 40LL * *(_QWORD *)(a1 + 736);
  while ( v29 != v28 )
  {
    sub_7F5B0((__int64 *)a2, *(_QWORD *)v28 - *(_QWORD *)(a2 + 40));
    sub_7F320((__int64 *)a2, *(_DWORD *)(v28 + 8));
    v30 = (char *)s1;
    if ( *(_QWORD *)(v28 + 24) )
      v30 = *(char **)(v28 + 16);
    v28 += 40;
    sub_7F680((__int64 *)a2, v30);
  }
  sub_8F0C0(a2, 0, "mba.occurred_warns");
  sub_7F1A0((__int64 *)a2, a1 + 752, 32);
  sub_8F0C0(a2, 0, "mba.nprealloc");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 792));
  if ( *(_QWORD *)(a1 + 800) )
  {
    if ( !under_debugger )
      sub_3835A0(52152);
LABEL_186:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 808) )
  {
    if ( !under_debugger )
      sub_3835A0(52153);
    goto LABEL_186;
  }
  sub_8F0C0(a2, 0, "mba.corrected_stkvars");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 824));
  v31 = *(_QWORD **)(a1 + 816);
  if ( v31 )
  {
    if ( *(_QWORD *)(a1 + 824) )
    {
      v32 = (_QWORD *)v31[1];
      if ( v31 != v32 )
      {
        do
        {
          while ( 1 )
          {
            sub_7F380((__int64 *)a2, v32[3]);
            sub_7F380((__int64 *)a2, v32[4]);
            if ( (*v32 & 2) == 0 )
              break;
LABEL_56:
            if ( v32 == v31 )
              goto LABEL_57;
          }
          v33 = (_QWORD *)v32[2];
          if ( (*(_BYTE *)v33 & 2) == 0 )
          {
            do
            {
              v32 = v33;
              v33 = (_QWORD *)v33[1];
            }
            while ( (*(_BYTE *)v33 & 2) == 0 );
            goto LABEL_56;
          }
          v51 = (_QWORD *)(*v32 & 0xFFFFFFFFFFFFFFFCLL);
          v52 = *v51;
          if ( (*v51 & 2) == 0 )
          {
            while ( (_QWORD *)v51[2] == v32 )
            {
              v32 = (_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
              v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v52 & 2) != 0 )
                goto LABEL_56;
              v53 = v51;
              v51 = v32;
              v32 = v53;
            }
          }
          v32 = v51;
        }
        while ( v51 != v31 );
      }
    }
  }
LABEL_57:
  sub_8F0C0(a2, 0, "mba.lv_aliased");
  sub_7FE50(a1 + 832, (__int64 *)a2);
  sub_7FC00(a1 + 848, (__int64 *)a2);
  sub_8F0C0(a2, 0, "mba.lvar_names");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 880));
  v34 = *(_QWORD **)(a1 + 872);
  if ( v34 )
  {
    if ( *(_QWORD *)(a1 + 880) )
    {
      v35 = (_QWORD *)v34[1];
      if ( v34 != v35 )
      {
        while ( 1 )
        {
LABEL_60:
          v36 = (char *)s1;
          if ( v35[4] )
            v36 = (char *)v35[3];
          sub_7F680((__int64 *)a2, v36);
          if ( (*v35 & 2) != 0 )
            goto LABEL_65;
          v37 = (_QWORD *)v35[2];
          if ( (*(_BYTE *)v37 & 2) != 0 )
          {
            v54 = (_QWORD *)(*v35 & 0xFFFFFFFFFFFFFFFCLL);
            v55 = *v54;
            if ( (*v54 & 2) == 0 )
            {
              while ( (_QWORD *)v54[2] == v35 )
              {
                v35 = v54;
                v56 = v55 & 0xFFFFFFFFFFFFFFFCLL;
                v55 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v55 & 2) != 0 )
                {
                  v35 = (_QWORD *)v56;
                  if ( v34 != (_QWORD *)v56 )
                    goto LABEL_60;
                  goto LABEL_66;
                }
                v54 = (_QWORD *)v56;
              }
            }
            v35 = v54;
            if ( v34 == v54 )
              break;
          }
          else
          {
            do
            {
              v35 = v37;
              v37 = (_QWORD *)v37[1];
            }
            while ( (*(_BYTE *)v37 & 2) == 0 );
LABEL_65:
            if ( v34 == v35 )
              break;
          }
        }
      }
    }
  }
LABEL_66:
  sub_8F0C0(a2, 0, "mba.counters");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 888));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 892));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 896));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 900));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 904));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 908));
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 912));
  if ( *(_QWORD *)(a1 + 920) )
  {
    sub_8F0C0(a2, 0, "mba.procinf");
    v38 = *(unsigned int ***)(a1 + 920);
    v39 = *((unsigned __int64 (__fastcall **)(__int64, __int64 *))*v38 + 2);
    if ( v39 == sub_8F730 )
    {
      sub_8F0C0(a2, 2, "procinf.sregs");
      sub_7F920((__int64 *)a2, v38 + 1);
      sub_8F0C0(a2, 2, "procinf.spoiled");
      sub_7F250((__int64 *)a2, v38 + 4);
    }
    else
    {
      v39(*(_QWORD *)(a1 + 920), (__int64 *)a2);
    }
  }
  if ( *(_QWORD *)(a1 + 928) )
  {
    sub_8F0C0(a2, 0, "mba.gvad");
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 928) + 80LL))(*(_QWORD *)(a1 + 928), a2);
    if ( *(_QWORD *)(a1 + 936) )
    {
      sub_8F0C0(a2, 0, "mba.va_collector");
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 936) + 104LL))(*(_QWORD *)(a1 + 936), a2);
    }
    goto LABEL_72;
  }
  if ( *(_QWORD *)(a1 + 936) )
  {
    if ( !under_debugger )
      sub_3835A0(52164);
    goto LABEL_186;
  }
LABEL_72:
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x3B8u) )
  {
    sub_8F0C0(a2, 0, "mba.partials");
    sub_7F9D0((__int64 *)a2, a1 + 952);
  }
  sub_8F0C0(a2, 0, "mba.extins");
  sub_7F9D0((__int64 *)a2, a1 + 1000);
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x418u) )
  {
    sub_8F0C0(a2, 0, "mba.swapinsns");
    sub_7F9D0((__int64 *)a2, a1 + 1048);
  }
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x478u) )
  {
    sub_8F0C0(a2, 0, "mba.ldxmap");
    sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 1152));
    v40 = *(_QWORD **)(a1 + 1144);
    if ( v40 )
    {
      if ( *(_QWORD *)(a1 + 1152) )
      {
        v64 = (_QWORD *)v40[1];
        while ( v40 != v64 )
        {
          sub_7F5B0((__int64 *)a2, v64[3] - *(_QWORD *)(a2 + 40));
          sub_7F5B0((__int64 *)a2, v64[4] - *(_QWORD *)(a2 + 40));
          if ( (*v64 & 2) == 0 )
          {
            v65 = (_QWORD *)v64[2];
            if ( (*(_BYTE *)v65 & 2) != 0 )
            {
              v68 = (_QWORD *)(*v64 & 0xFFFFFFFFFFFFFFFCLL);
              v69 = *v68;
              if ( (*v68 & 2) != 0 || (_QWORD *)v68[2] != v64 )
              {
LABEL_166:
                v64 = v68;
              }
              else
              {
                while ( 1 )
                {
                  v64 = (_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
                  v69 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v69 & 2) != 0 )
                    break;
                  v70 = v68;
                  v68 = v64;
                  if ( (_QWORD *)v64[2] != v70 )
                    goto LABEL_166;
                }
              }
            }
            else
            {
              do
              {
                v64 = v65;
                v65 = (_QWORD *)v65[1];
              }
              while ( (*(_BYTE *)v65 & 2) == 0 );
            }
          }
        }
      }
    }
  }
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x488u) )
  {
    sub_8F0C0(a2, 0, "mba.kregs");
    sub_7FC00(a1 + 1160, (__int64 *)a2);
  }
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x4A0u) )
  {
    sub_8F0C0(a2, 0, "mba.fp");
    sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 1184) + 1);
  }
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x4A8u) )
  {
    sub_8F0C0(a2, 0, "mba.stkpnts");
    sub_7FA70((__int64 *)a2, a1 + 1192);
  }
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x4C0u) )
  {
    sub_8F0C0(a2, 0, "mba.unk_tcalls");
    sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 1224));
    v41 = *(_QWORD **)(a1 + 1216);
    v42 = &v41[*(_QWORD *)(a1 + 1224)];
    while ( v42 != v41 )
    {
      v43 = *v41++ - *(_QWORD *)(a2 + 40);
      sub_7F5B0((__int64 *)a2, v43);
    }
  }
  if ( v20 )
  {
    v44 = *(_QWORD *)(a1 + 1240);
    if ( v44 )
      sub_80390(v44, (__int64 *)a2);
    else
      sub_7F320((__int64 *)a2, 0);
    v45 = *(_QWORD *)(a1 + 1248);
    if ( v45 )
      sub_7FB40((__int64 *)a2, v45);
    else
      sub_7F320((__int64 *)a2, 0);
  }
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x4E8u) )
  {
    sub_8F0C0(a2, 0, "mba.lvinf");
    sub_2BC550(a1 + 1256, a2);
  }
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x520u) )
  {
    sub_8F0C0(a2, 0, "mba.udcalls");
    sub_2B8110(a2, a1 + 1312);
  }
  if ( *(_QWORD *)(a1 + 1328) )
  {
    sub_8F0C0(a2, 0, "mba.numforms");
    sub_2B6B30(a2, *(_QWORD *)(a1 + 1328));
  }
  if ( *(_QWORD *)(a1 + 1344) && (unsigned __int8)sub_7A080(v77, 0, 0x540u) )
  {
    sub_8F0C0(a2, 0, "mba.mflags");
    sub_2B8200(a2, *(_QWORD *)(a1 + 1344), *(_QWORD *)(a2 + 40));
  }
  if ( *(_QWORD *)(a1 + 1336) && (unsigned __int8)sub_7A080(v77, 0, 0x538u) )
  {
    sub_8F0C0(a2, 0, "mba.user_minsns");
    sub_2B8620(a2, *(_QWORD *)(a1 + 1336), *(_QWORD *)(a2 + 40));
  }
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x548u) )
  {
    sub_8F0C0(a2, 0, "mba.got_ea");
    sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 1352) - *(_QWORD *)(a2 + 40));
  }
  if ( (unsigned __int8)sub_7A080(v77, 0, 0x560u) )
  {
    sub_8F0C0(a2, 0, "mba.func_casts");
    sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 1384));
    v46 = *(_QWORD **)(a1 + 1376);
    if ( v46 )
    {
      if ( *(_QWORD *)(a1 + 1384) )
      {
        v66 = (_QWORD *)v46[1];
LABEL_160:
        while ( v46 != v66 )
        {
          sub_7F5B0((__int64 *)a2, v66[3] - *(_QWORD *)(a2 + 40));
          sub_7F790((__int64 *)a2, (_BYTE *)v66 + 32);
          if ( (*v66 & 2) == 0 )
          {
            v67 = (_QWORD *)v66[2];
            if ( (*(_BYTE *)v67 & 2) != 0 )
            {
              v71 = (_QWORD *)(*v66 & 0xFFFFFFFFFFFFFFFCLL);
              v72 = *v71;
              if ( (*v71 & 2) == 0 )
              {
                while ( v66 == (_QWORD *)v71[2] )
                {
                  v66 = v71;
                  v73 = v72 & 0xFFFFFFFFFFFFFFFCLL;
                  v72 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v72 & 2) != 0 )
                  {
                    v66 = (_QWORD *)v73;
                    goto LABEL_160;
                  }
                  v71 = (_QWORD *)v73;
                }
              }
              v66 = v71;
            }
            else
            {
              do
              {
                v66 = v67;
                v67 = (_QWORD *)v67[1];
              }
              while ( (*(_BYTE *)v67 & 2) == 0 );
            }
          }
        }
      }
    }
  }
  sub_8F0C0(a2, 0, "mba.udtmops");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 1400));
  v47 = *(_QWORD **)(a1 + 1392);
  if ( v47 )
  {
    if ( *(_QWORD *)(a1 + 1400) )
    {
      v48 = (_QWORD *)v47[1];
      while ( v48 != v47 )
      {
        sub_7F5B0((__int64 *)a2, v48[3] - *(_QWORD *)(a2 + 40));
        sub_7F790((__int64 *)a2, (_BYTE *)v48 + 32);
        if ( (*v48 & 2) == 0 )
        {
          v49 = (_QWORD *)v48[2];
          if ( (*(_BYTE *)v49 & 2) != 0 )
          {
            v58 = (_QWORD *)(*v48 & 0xFFFFFFFFFFFFFFFCLL);
            v59 = *v58;
            if ( (*v58 & 2) == 0 )
            {
              while ( v48 == (_QWORD *)v58[2] )
              {
                v48 = v58;
                v60 = v59 & 0xFFFFFFFFFFFFFFFCLL;
                v59 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v59 & 2) != 0 )
                {
                  v48 = (_QWORD *)v60;
                  goto LABEL_116;
                }
                v58 = (_QWORD *)v60;
              }
            }
            v48 = v58;
          }
          else
          {
            do
            {
              v48 = v49;
              v49 = (_QWORD *)v49[1];
            }
            while ( (*(_BYTE *)v49 & 2) == 0 );
          }
        }
LABEL_116:
        ;
      }
    }
  }
  sub_8F0C0(a2, 0, "mba.fictvec");
  sub_7F320((__int64 *)a2, *(_DWORD *)(a1 + 1416));
  if ( *(_QWORD *)(a1 + 1416) )
  {
    sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 1432) - *(_QWORD *)(a2 + 40));
    v74 = *(_QWORD **)(a1 + 1408);
    v75 = &v74[*(_QWORD *)(a1 + 1416)];
    while ( v75 != v74 )
    {
      v76 = *v74++ - *(_QWORD *)(a2 + 40);
      sub_7F5B0((__int64 *)a2, v76);
    }
  }
  sub_8F0C0(a2, 0, "mba.retvalue");
  sub_809F0(*(_QWORD *)(a1 + 944), (__int64 *)a2);
  sub_8F0C0(a2, 0, "mba.spbase");
  sub_7F5B0((__int64 *)a2, *(_QWORD *)(a1 + 1440) - *(_QWORD *)(a2 + 40));
  sub_8F0C0(a2, 0, "mba.end");
  return sub_7F320((__int64 *)a2, 0xDEADBEEF);
}
