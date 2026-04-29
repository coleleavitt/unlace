_BOOL8 __fastcall sub_36A540(__int64 a1, __int64 *a2, int *a3, char a4, char a5)
{
  unsigned int v7; // eax
  __int64 v8; // rax
  _QWORD *v9; // r15
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  int v17; // ebx
  __int64 v18; // r13
  int v19; // esi
  bool v20; // zf
  int v21; // esi
  __int64 v22; // r15
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v33; // rdi
  unsigned int v34; // r14d
  int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r15
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  _DWORD *v46; // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // r13
  void *v49; // rdi
  unsigned __int64 v50; // r13
  void *v51; // rdi
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned int v55; // [rsp+0h] [rbp-1B0h]
  bool v57; // [rsp+7h] [rbp-1A9h]
  __int64 v58; // [rsp+8h] [rbp-1A8h]
  signed int v59; // [rsp+10h] [rbp-1A0h]
  int v60; // [rsp+14h] [rbp-19Ch]
  bool src; // [rsp+30h] [rbp-180h]
  void *srca; // [rsp+30h] [rbp-180h]
  void *srcb; // [rsp+30h] [rbp-180h]
  _QWORD *v65; // [rsp+40h] [rbp-170h]
  int n; // [rsp+48h] [rbp-168h]
  size_t na; // [rsp+48h] [rbp-168h]
  size_t nb; // [rsp+48h] [rbp-168h]
  unsigned int v70; // [rsp+60h] [rbp-150h]
  int v71; // [rsp+68h] [rbp-148h]
  int v72; // [rsp+6Ch] [rbp-144h]
  __int64 v73; // [rsp+78h] [rbp-138h] BYREF
  int v74[4]; // [rsp+80h] [rbp-130h] BYREF
  __int64 v75; // [rsp+90h] [rbp-120h]
  _BYTE v76[16]; // [rsp+A0h] [rbp-110h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-100h]
  int v78; // [rsp+B8h] [rbp-F8h]
  void *v79; // [rsp+C0h] [rbp-F0h]
  unsigned __int64 v80; // [rsp+C8h] [rbp-E8h]
  void *v81; // [rsp+D8h] [rbp-D8h]
  unsigned __int64 v82; // [rsp+E0h] [rbp-D0h]
  __int64 v83; // [rsp+F0h] [rbp-C0h] BYREF
  int v84; // [rsp+F8h] [rbp-B8h]
  int v85; // [rsp+FCh] [rbp-B4h]
  __int64 v86; // [rsp+100h] [rbp-B0h]
  __int64 v87; // [rsp+110h] [rbp-A0h] BYREF
  __int128 v88; // [rsp+118h] [rbp-98h]
  __int64 v89; // [rsp+128h] [rbp-88h]
  __int64 v90; // [rsp+130h] [rbp-80h]
  __int64 v91; // [rsp+138h] [rbp-78h]
  __int64 v92; // [rsp+148h] [rbp-68h]
  __int64 v93; // [rsp+150h] [rbp-60h]
  char v94[24]; // [rsp+160h] [rbp-50h] BYREF
  unsigned __int64 v95; // [rsp+178h] [rbp-38h]

  v95 = __readfsqword(0x28u);
  v7 = *(_DWORD *)(a2[35] + 72);
  if ( v7 > 0x10 )
  {
    if ( v7 != 176 )
      goto LABEL_3;
LABEL_60:
    if ( (unsigned __int64)getinf(88) <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag(3, 4) )
        return 1;
      netnode_check(&v87, "$ golang", 0, 0);
      v33 = v87;
      v34 = netnode_altval(v87, 0, 65);
      if ( v34 <= 0x74 )
        return 1;
      v35 = *(_DWORD *)(get_ph(v33) + 4);
      if ( v35 )
      {
        v36 = (unsigned int)(v35 - 13);
        if ( (unsigned int)v36 > 0x3B )
          return 1;
        v37 = 0x800000000000005LL;
        if ( !_bittest64(&v37, v36) || v34 == 117 )
          return 1;
      }
    }
    goto LABEL_4;
  }
  v7 = getinf(99);
  if ( v7 == 176 )
    goto LABEL_60;
LABEL_3:
  if ( v7 == 256 )
    return 1;
LABEL_4:
  v8 = a2[35];
  v9 = (_QWORD *)v8;
  v60 = *(_DWORD *)v8;
  v57 = *(_DWORD *)v8 == 3;
  if ( *(_DWORD *)v8 == 3 )
  {
    if ( !a4 )
    {
      v10 = a2[27];
      v11 = *(_QWORD *)(v8 + 120);
      if ( v11 < v10 )
      {
        if ( !under_debugger )
          sub_37DDE0(52059);
      }
      else if ( a2[24] == v10 )
      {
        if ( v11 == v9[12] )
        {
          v12 = *(_QWORD *)(a1 + 1504);
          v70 = *(_DWORD *)(v12 + 80);
          if ( !v11 )
          {
            v55 = 8;
            goto LABEL_11;
          }
          v59 = *(_DWORD *)(v12 + 80);
LABEL_50:
          v70 = 8;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9[10] + 112LL) + 200LL))(
                 *(_QWORD *)(v9[10] + 112LL),
                 *(unsigned int *)v9[14]) )
          {
            v70 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v9[10] + 112LL) + 32LL))(
                    *(_QWORD *)(v9[10] + 112LL),
                    *(unsigned int *)v9[14]);
          }
          if ( v9[15] > 1u )
          {
            v31 = (unsigned int)(*(_DWORD *)(v9[14] + 4LL) - *(_DWORD *)v9[14]);
            if ( (unsigned int)v31 < v70 )
              v70 = round_down_power2(v31);
          }
          v12 = *(_QWORD *)(a1 + 1504);
          v9 = (_QWORD *)a2[35];
          if ( !a4 )
            goto LABEL_56;
LABEL_46:
          v65 = v9 + 14;
          v13 = a2 + 26;
          sub_326EA0(&v73, v12, v70);
          v15 = a2[27];
          if ( v9[15] < v15 )
            goto LABEL_132;
          v29 = a2[35];
          v30 = *(_QWORD *)(v29 + 80);
          if ( *(_DWORD *)(*(_QWORD *)(v30 + 8) + 4LL) == 13 || !*(_QWORD *)(v29 + 120) )
          {
            v71 = 1;
            v58 = -1;
            v55 = v70;
            goto LABEL_14;
          }
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v30 + 112) + 200LL))(
                 *(_QWORD *)(v30 + 112),
                 **(unsigned int **)(v29 + 112)) )
          {
            v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v29 + 80) + 112LL) + 32LL))(
                    *(_QWORD *)(*(_QWORD *)(v29 + 80) + 112LL),
                    **(unsigned int **)(v29 + 112));
            if ( *(_QWORD *)(v29 + 120) <= 1u
              || (v38 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v29 + 112) + 4LL) - **(_DWORD **)(v29 + 112)),
                  (unsigned int)v38 >= v52) )
            {
LABEL_117:
              if ( v52 <= 7 )
              {
                v58 = -1;
                v71 = 2;
                v55 = v70;
                v15 = a2[27];
                goto LABEL_14;
              }
              goto LABEL_72;
            }
          }
          else
          {
            if ( *(_QWORD *)(v29 + 120) <= 1u )
            {
              v15 = a2[27];
              v58 = -1;
              v71 = 1;
              v55 = v70;
              goto LABEL_14;
            }
            v38 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v29 + 112) + 4LL) - **(_DWORD **)(v29 + 112));
            if ( (unsigned int)v38 > 7 )
            {
LABEL_72:
              v58 = -1;
              v71 = 1;
              v55 = v70;
              v15 = a2[27];
              goto LABEL_14;
            }
          }
          v52 = round_down_power2(v38);
          goto LABEL_117;
        }
        if ( !under_debugger )
          sub_37DDE0(52061);
      }
      else if ( !under_debugger )
      {
        sub_37DDE0(52060);
      }
LABEL_136:
      BUG();
    }
    return 1;
  }
  v12 = *(_QWORD *)(a1 + 1504);
  v70 = 8;
  v59 = *(_DWORD *)(v12 + 80);
  if ( *(_QWORD *)(v8 + 120) )
    goto LABEL_50;
  if ( a4 )
    goto LABEL_46;
LABEL_56:
  v55 = v70;
  v70 = v59;
LABEL_11:
  v65 = v9 + 11;
  v13 = a2 + 23;
  sub_326FC0(&v73, v12, v70);
  v14 = a2[35];
  if ( !sub_36A3A0(*(_QWORD *)(a1 + 1504), *(_DWORD *)(v14 + 72)) )
  {
    v15 = a2[24];
    if ( v9[12] >= v15 )
    {
      v71 = 1;
      v58 = -1;
      v59 = v70;
      goto LABEL_14;
    }
    goto LABEL_132;
  }
  v87 = 32;
  v89 = 0;
  v88 = 0;
  get_stkarg_area_info(&v87, *(unsigned int *)(v14 + 72));
  v58 = *(_QWORD *)(a1 + 144) + v88 - *(int *)(a1 + 120);
  v15 = a2[24];
  if ( v9[12] < v15 )
  {
LABEL_132:
    if ( !under_debugger )
      sub_37DDE0(52062);
    goto LABEL_136;
  }
  v71 = 1;
  v59 = v70;
LABEL_14:
  if ( !v15 )
  {
LABEL_76:
    src = 1;
    goto LABEL_77;
  }
  v16 = 0;
  v72 = 0;
  v17 = 0;
  while ( 1 )
  {
    v18 = 4 * v16;
    if ( *(_DWORD *)(*v13 + 4 * v16) == -1 )
    {
      src = sub_605B0((_QWORD *)(a1 + 296), *(_DWORD *)(*v65 + 4 * v16));
      if ( !src && (v60 != 3 || !sub_605B0((_QWORD *)(a1 + 296), *(_DWORD *)(*(_QWORD *)(a2[35] + 112) + 4 * v16))) )
        break;
    }
LABEL_16:
    v72 += v59 * v71;
    v17 += v71;
    v16 = v17;
    if ( (unsigned __int64)v17 >= v13[1] )
      goto LABEL_76;
  }
  if ( v58 != -1 )
  {
    v87 = v58 + v72;
    *(_QWORD *)&v88 = v59;
    if ( (unsigned __int8)sub_312D70(a2 + 29, (__m128i *)&v87, 0) )
      goto LABEL_77;
  }
  v19 = *a3;
  if ( *a3 < 0 )
  {
LABEL_23:
    v20 = v19 == -1;
    v21 = v19 + 1;
    *a3 = v21;
    if ( v20 && *(_QWORD *)(a1 + 464) && *(char *)(sub_138DC0((_QWORD *)a1, v21) + 25) < 0 )
    {
      if ( a5 || *(_DWORD *)(a1 + 72) == 128 )
        goto LABEL_77;
      v44 = sub_138DC0((_QWORD *)a1, 0);
      *(_DWORD *)(v44 + 24) &= ~0x8000u;
      *(_DWORD *)(a1 + 4) &= 0xFFFFFFCF;
    }
    sub_1EAA90((__int64)v76, *(_QWORD *)(a1 + 1504), *(_DWORD *)(*v65 + 4 * v16), v70, &v73, 0, *(_QWORD *)(a1 + 40));
    LODWORD(v87) = 0;
    copy_argloc(&v87, v76);
    *((_QWORD *)&v88 + 1) = v77;
    v22 = sub_1EB8A0((__int64 *)(a1 + 432), (__int64)&v87);
    cleanup_argloc(&v87);
    if ( v22 )
      goto LABEL_33;
    if ( v57 )
    {
      sub_1EAA90(
        (__int64)&v87,
        *(_QWORD *)(a1 + 1504),
        *(_DWORD *)(*(_QWORD *)(a2[35] + 112) + v18),
        v55,
        &v73,
        0,
        *(_QWORD *)(a1 + 40));
      v74[0] = 0;
      copy_argloc(v74, &v87);
      v75 = *((_QWORD *)&v88 + 1);
      v22 = sub_1EB8A0((__int64 *)(a1 + 432), (__int64)v74);
      cleanup_argloc(v74);
      clear_tinfo_t(v94);
      if ( v92 )
      {
        v93 = 0;
        qfree(v92);
      }
      if ( v90 )
      {
        v91 = 0;
        qfree(v90);
      }
      cleanup_argloc(&v87);
    }
    if ( v22 )
    {
LABEL_33:
      if ( (*(_BYTE *)(v22 + 24) & 1) == 0 )
        goto LABEL_34;
      if ( (unsigned __int8)sub_3657C0(a2, v22, *a3) )
      {
        v23 = *(_DWORD *)(v22 + 24);
        if ( (v23 & 1) != 0 )
        {
LABEL_36:
          *(_DWORD *)(v22 + 92) = 0;
          v24 = v23 & 0xFFEFFFFF;
          v25 = (v22 - *(_QWORD *)(a1 + 432)) >> 3;
          *(_DWORD *)(v22 + 24) = v24;
          n = -991146299 * v25;
LABEL_37:
          BYTE1(v24) |= 1u;
          *(_DWORD *)(v22 + 24) = v24;
          v26 = *(_QWORD *)(a1 + 464);
          v27 = *(_QWORD *)(a1 + 456);
          v28 = 4LL * *a3;
          if ( *(_QWORD *)(a1 + 472) < (unsigned __int64)(v26 + 1) )
          {
            v40 = qvector_reserve(a1 + 456, v27, v26 + 1, 4);
            *(_QWORD *)(a1 + 456) = v40;
            v26 = *(_QWORD *)(a1 + 464);
            v27 = v40;
          }
          memmove((void *)(v27 + v28 + 4), (const void *)(v27 + v28), 4 * v26 - v28);
          *(_DWORD *)(v27 + v28) = n;
          ++*(_QWORD *)(a1 + 464);
          clear_tinfo_t(&v83);
          if ( v81 )
          {
            v82 = 0;
            qfree(v81);
          }
          if ( v79 )
          {
            v80 = 0;
            qfree(v79);
          }
          cleanup_argloc(v76);
          goto LABEL_16;
        }
LABEL_34:
        if ( !(unsigned __int8)sub_3657C0(a2, v22, *a3) )
        {
          copy_argloc(v22, v76);
          *(_QWORD *)(v22 + 16) = v77;
          *(_DWORD *)(v22 + 24) = v78;
          if ( (_BYTE *)v22 != v76 )
          {
            v48 = v80;
            if ( !v80 || (na = v80 - 1, v80 == 1) )
            {
              *(_QWORD *)(v22 + 40) = 0;
            }
            else
            {
              v49 = *(void **)(v22 + 32);
              srca = v79;
              if ( *(_QWORD *)(v22 + 48) < v80 )
              {
                v54 = qvector_reserve(v22 + 32, v49, v80, 1);
                *(_QWORD *)(v22 + 32) = v54;
                v49 = (void *)v54;
              }
              *(_QWORD *)(v22 + 40) = v48;
              memmove(v49, srca, na);
              *(_BYTE *)(*(_QWORD *)(v22 + 32) + v48 - 1) = 0;
            }
            v50 = v82;
            if ( !v82 || (nb = v82 - 1, v82 == 1) )
            {
              *(_QWORD *)(v22 + 64) = 0;
            }
            else
            {
              v51 = *(void **)(v22 + 56);
              srcb = v81;
              if ( *(_QWORD *)(v22 + 72) < v82 )
              {
                v53 = qvector_reserve(v22 + 56, v51, v82, 1);
                *(_QWORD *)(v22 + 56) = v53;
                v51 = (void *)v53;
              }
              *(_QWORD *)(v22 + 64) = v50;
              memmove(v51, srcb, nb);
              *(_BYTE *)(*(_QWORD *)(v22 + 56) + v50 - 1) = 0;
            }
          }
          copy_tinfo_t(v22 + 80, &v83);
          *(_DWORD *)(v22 + 88) = v84;
          *(_DWORD *)(v22 + 92) = v85;
          *(_QWORD *)(v22 + 96) = v86;
        }
        v23 = *(_DWORD *)(v22 + 24);
        goto LABEL_36;
      }
      LODWORD(v87) = 0;
      copy_argloc(&v87, v76);
      v74[0] = 0;
      *((_QWORD *)&v88 + 1) = v77;
      copy_argloc(v74, v22);
      v75 = *(_QWORD *)(v22 + 16);
      if ( !(unsigned int)sub_32B410(v74, (int *)&v87) )
      {
        cleanup_argloc(v74);
        cleanup_argloc(&v87);
        if ( a5 )
        {
          clear_tinfo_t(&v83);
          if ( v81 )
          {
            v82 = 0;
            qfree(v81);
          }
          if ( v79 )
          {
            v80 = 0;
            qfree(v79);
          }
          cleanup_argloc(v76);
          goto LABEL_77;
        }
        v43 = (v22 - *(_QWORD *)(a1 + 432)) >> 3;
        *(_DWORD *)(v22 + 24) &= ~0x100000u;
        n = -991146299 * v43;
        copy_argloc(v22, v76);
        sub_1EA930(v22, &v83);
        sub_1EF9B0(a1, -1, v22);
        *(_DWORD *)(v22 + 24) |= 0x400u;
        goto LABEL_84;
      }
      cleanup_argloc(v74);
      cleanup_argloc(&v87);
    }
    v41 = *(_QWORD *)(a1 + 440);
    v78 &= ~1u;
    n = v41;
    sub_1F1960(a1, (__int64)v76, 0);
    v22 = *(_QWORD *)(a1 + 432) + 104LL * (int)v41;
    *(_DWORD *)(v22 + 24) |= 0x80000u;
LABEL_84:
    v42 = *a3;
    *(_DWORD *)(*v13 + v18) = *a3;
    if ( v60 == 3 )
      *(_DWORD *)(a2[26] + v18) = v42;
    v24 = *(_DWORD *)(v22 + 24);
    goto LABEL_37;
  }
  v39 = sub_138DC0((_QWORD *)a1, v19);
  if ( *(_DWORD *)v39 != 2 )
  {
    if ( *(_DWORD *)v39 == 1 )
      goto LABEL_77;
    goto LABEL_75;
  }
  v45 = *(_QWORD *)(v39 + 8);
  v46 = *(_DWORD **)v45;
  v47 = *(_QWORD *)v45 + 24LL * *(_QWORD *)(v45 + 8);
  if ( v46 == (_DWORD *)v47 )
  {
LABEL_75:
    v19 = *a3;
    goto LABEL_23;
  }
  while ( *v46 != 1 )
  {
    v46 += 6;
    if ( (_DWORD *)v47 == v46 )
      goto LABEL_75;
  }
LABEL_77:
  clear_tinfo_t(&v73);
  return src;
}
