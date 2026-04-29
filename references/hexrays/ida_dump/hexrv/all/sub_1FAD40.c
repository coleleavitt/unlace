__int64 __fastcall sub_1FAD40(__int64 a1, int *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v6; // rbp
  _QWORD *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  signed int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // r15d
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  bool v17; // zf
  int v18; // eax
  int v19; // r11d
  __int64 tinfo_size; // rax
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rax
  __m128i *v24; // r8
  int *v25; // rsi
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // r11d
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  char v34; // al
  unsigned __int64 v35; // rdx
  char v36; // al
  int v37; // eax
  __m128i *v38; // rax
  char v39; // al
  int v40; // eax
  __int64 v41; // r12
  __m128i *v42; // r13
  unsigned __int64 v43; // rdx
  char *v44; // rdi
  __m128i *v45; // r12
  __int32 v46; // ecx
  __int32 v47; // edx
  __int32 *v48; // rax
  __m128i *v49; // rsi
  unsigned int v50; // r13d
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  int v53; // r12d
  int v54; // eax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // r12
  __int64 v58; // rcx
  __int64 v59; // r8
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdi
  char v64; // al
  bool v65; // al
  char tinfo_property; // al
  _QWORD *v67; // rcx
  __int64 v68; // rsi
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rdi
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // r8
  int srce; // [rsp+8h] [rbp-B0h]
  unsigned int src; // [rsp+8h] [rbp-B0h]
  unsigned int srca; // [rsp+8h] [rbp-B0h]
  unsigned int srcb; // [rsp+8h] [rbp-B0h]
  __m128i *srcc; // [rsp+8h] [rbp-B0h]
  void *srcd; // [rsp+8h] [rbp-B0h]
  __m128i *srcf; // [rsp+8h] [rbp-B0h]
  __int64 v82; // [rsp+20h] [rbp-98h]
  signed __int64 v83; // [rsp+20h] [rbp-98h]
  int v84; // [rsp+34h] [rbp-84h] BYREF
  _QWORD *v85; // [rsp+38h] [rbp-80h] BYREF
  __int64 v86; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v87; // [rsp+48h] [rbp-70h]
  signed __int64 v88; // [rsp+50h] [rbp-68h] BYREF
  char v89; // [rsp+58h] [rbp-60h]
  __m128i *v90; // [rsp+60h] [rbp-58h] BYREF
  __int128 v91; // [rsp+68h] [rbp-50h]
  unsigned __int64 v92; // [rsp+78h] [rbp-40h]

  v6 = *a2;
  v92 = __readfsqword(0x28u);
  v7 = a4;
  v8 = **(_QWORD **)(a1 + 48) + 104 * v6;
  v9 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v9 + 320) && (*(_WORD *)(v8 + 24) & 0x180) != 0 )
  {
LABEL_3:
    if ( (*(_DWORD *)v9 & 0x40000) == 0
      && *(_BYTE *)a3 == 15
      && (unsigned __int8)sub_1C7400(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), a3, 1) )
    {
      return 1;
    }
    else
    {
      v10 = *(_DWORD *)(v8 + 88);
      *(_DWORD *)(v8 + 24) |= 0x400u;
      v11 = *(_QWORD *)(a1 + 8);
      v90 = nullptr;
      *(_QWORD *)&v91 = 0;
      sub_1EAE10(*(_DWORD **)(v11 + 1504), (__int64 *)(v11 + 496), v8, v10, &v90, 0);
      v12 = -1;
      cleanup_argloc(&v90);
      sub_1EBCB0(*(_QWORD *)(a1 + 8), *(_QWORD *)(v8 + 16), 10, v13, v14, v15);
    }
    return v12;
  }
  v17 = *(_BYTE *)a3 == 15;
  v86 = 0;
  v87 = 0;
  v90 = nullptr;
  v91 = 0;
  if ( v17 )
  {
    v18 = sub_1F7960(a1, (__int64)&v86, (__int64 *)&v90, (_DWORD *)v8, a3, a4);
    v19 = v18;
    if ( !v18 )
      goto LABEL_37;
  }
  else
  {
    v18 = sub_1F72F0(a1, (__int64)&v86, (__int64 *)&v90, (_DWORD *)v8, a3, a4);
    v19 = v18;
    if ( !v18 )
      goto LABEL_37;
  }
  if ( !v7 || (srce = v18, tinfo_size = get_tinfo_size(0, *v7, 0), v19 = srce, srce != tinfo_size) )
    v7 = nullptr;
  v21 = *(_QWORD *)(a1 + 8);
  if ( (_QWORD)v91 )
  {
    v22 = 0;
    v23 = 0;
    while ( 1 )
    {
      v24 = v90;
      v25 = &v90->m128i_i32[v23];
      v26 = *v25;
      v27 = **(_QWORD **)(a1 + 48) + 104LL * *v25;
      if ( *(_BYTE *)(v21 + 320) )
        break;
      v28 = *(_QWORD *)(v21 + 40);
      if ( *(_QWORD *)(v27 + 16) == v28 )
      {
        *(_QWORD *)(v8 + 16) = v28;
        v26 = *v25;
        v21 = *(_QWORD *)(a1 + 8);
      }
      v29 = *(_DWORD *)(v21 + 792);
      if ( v29 <= v26 || v29 > (int)v6 )
      {
LABEL_15:
        v23 = ++v22;
        if ( v22 >= (unsigned __int64)v91 )
          goto LABEL_22;
      }
      else
      {
        *v25 = v6;
        ++v22;
        LODWORD(v6) = v26;
        v21 = *(_QWORD *)(a1 + 8);
        v8 = **(_QWORD **)(a1 + 48) + 104LL * v26;
        v23 = v22;
        if ( v22 >= (unsigned __int64)v91 )
          goto LABEL_22;
      }
    }
    if ( (*(_BYTE *)(v27 + 25) & 1) != 0 )
      goto LABEL_38;
    goto LABEL_15;
  }
LABEL_22:
  if ( (*(_BYTE *)(v21 + 2) & 4) != 0
    && *(_DWORD *)(a1 + 104) > (int)v6
    && (*(_DWORD *)(v21 + 792) > (int)v6 || *(_DWORD *)v8 == 1) )
  {
    goto LABEL_37;
  }
  if ( *(_BYTE *)a3 != 5 )
    goto LABEL_27;
  v32 = *(int *)(v21 + 116);
  if ( (_DWORD)v32 )
  {
    v33 = *(_QWORD *)(v21 + 136);
    if ( v33 + v32 - 1 >= v87 && v87 + v19 - 1 >= v33 )
    {
LABEL_37:
      v24 = v90;
LABEL_38:
      if ( v24 )
      {
        *(_QWORD *)&v91 = 0;
        qfree(v24);
      }
      cleanup_argloc(&v86);
      v9 = *(_QWORD *)(a1 + 8);
      goto LABEL_3;
    }
  }
  srca = v19;
  v83 = v87;
  v34 = sub_1EADB0(v21, v87, v19);
  v21 = *(_QWORD *)(a1 + 8);
  v19 = srca;
  if ( v34 )
  {
    v35 = *(_QWORD *)(v21 + 144);
    if ( v35 < v83 + 1 || srca == 1 || v83 + (int)(srca - 1) < v35 )
    {
      if ( (__int64)v35 <= v83 )
      {
        v88 = v83;
        v89 = 5;
        v36 = sub_2232D0(v21, &v88, v7, srca);
        v19 = srca;
        if ( !v36 )
          goto LABEL_37;
        v21 = *(_QWORD *)(a1 + 8);
      }
      goto LABEL_27;
    }
    goto LABEL_37;
  }
LABEL_27:
  v84 = *(_DWORD *)(v8 + 92);
  v82 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)v21 & 1) != 0 )
  {
    srcb = v19;
    v37 = sub_1BE450((int *)&v86, (int *)v8);
    v19 = srcb;
    if ( v37 )
    {
      v82 = sub_1F7B40(a1, v8, srcb, (int *)&v86, &v84, (__int64)&v90);
      v19 = srcb;
      if ( v82 == -1 )
        goto LABEL_37;
    }
  }
  src = v19;
  v30 = sub_1FACB0(a1, v6, (int *)&v86, v19, (__int64)&v90);
  v31 = src;
  v12 = v30;
  if ( v30 )
  {
    if ( v30 != 1 )
      goto LABEL_37;
    goto LABEL_30;
  }
  if ( *(_BYTE *)a3 != 15 )
    goto LABEL_54;
  v62 = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 48LL), 0);
  v63 = *(_QWORD *)(a3 + 8);
  if ( src == v62 )
  {
    v38 = *(__m128i **)(a1 + 8);
    v7 = (_QWORD *)(v63 + 48);
    goto LABEL_56;
  }
  v64 = sub_1BEA90(v63, 0, 0);
  v31 = src;
  if ( !v64 )
  {
    if ( !under_debugger )
      sub_37DDE0(51163);
    goto LABEL_108;
  }
  if ( (*(_BYTE *)(a3 + 1) & 2) == 0 || (v65 = sub_1185C0(*(_DWORD *)(a3 + 4)), v31 = src, v65) )
  {
LABEL_54:
    v38 = *(__m128i **)(a1 + 8);
    goto LABEL_55;
  }
  tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a3 + 8) + 48LL), 2);
  v31 = src;
  v17 = (tinfo_property & 0x2F) == 13;
  v38 = *(__m128i **)(a1 + 8);
  if ( v17 )
  {
    v67 = (_QWORD *)v38[87].m128i_i64[0];
    v68 = *(_QWORD *)(a1 + 32);
    if ( v67 )
    {
      v69 = *v67 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v69 )
        goto LABEL_55;
      v70 = *(_QWORD *)(v68 + 24);
      while ( (*(_BYTE *)v69 & 2) == 0 )
      {
        v73 = *(_QWORD *)(v69 + 24);
        if ( v70 >= v73 )
        {
          if ( v73 >= v70 )
          {
            if ( v67 != (_QWORD *)v69 )
              goto LABEL_55;
            break;
          }
          v69 = *(_QWORD *)(v69 + 16);
        }
        else
        {
          v69 = *(_QWORD *)(v69 + 8);
        }
      }
    }
    v71 = *(_QWORD *)(a3 + 8);
    v85 = (_QWORD *)(v68 + 24);
    v72 = sub_C3AF0(v38 + 87, (unsigned __int64 *)(v68 + 24), &v85);
    copy_tinfo_t(v72 + 32, v71 + 48);
    v38 = *(__m128i **)(a1 + 8);
    v31 = src;
  }
LABEL_55:
  if ( v7 )
  {
LABEL_56:
    v39 = sub_1EAD50(v8, v38[94].m128i_i64[0], v7, v38[4].m128i_u32[2], 10);
    goto LABEL_57;
  }
  v39 = sub_1EA9A0((_DWORD *)v8, (_QWORD *)v38[94].m128i_i64[0], v31, v38[4].m128i_u32[2], 2);
LABEL_57:
  if ( !v39 )
    goto LABEL_37;
  copy_argloc(v8, &v86);
  *(_QWORD *)(v8 + 16) = v82;
  *(_DWORD *)(v8 + 92) = v84;
  v40 = v91;
  v41 = 4 * v91;
  v42 = (__m128i *)((char *)v90 + 4 * v91);
  if ( v90 != v42 )
  {
    if ( v41 >> 2 )
    {
      _BitScanReverse64(&v43, v41 >> 2);
      srcc = v90;
      sub_1F67C0(v90, &v90->m128i_i32[v91], 2LL * (int)v43);
      v44 = (char *)srcc;
      if ( v41 > 64 )
      {
        v45 = srcc + 4;
        sub_1F6700(srcc->m128i_i8, srcc[4].m128i_i8);
        do
        {
          v46 = v45->m128i_i32[0];
          v47 = v45[-1].m128i_i32[3];
          v48 = &v45[-1].m128i_i32[3];
          if ( v47 <= v45->m128i_i32[0] )
          {
            v49 = v45;
          }
          else
          {
            do
            {
              v48[1] = v47;
              v49 = (__m128i *)v48;
              v47 = *--v48;
            }
            while ( v46 < v47 );
          }
          v45 = (__m128i *)((char *)v45 + 4);
          v49->m128i_i32[0] = v46;
        }
        while ( v42 != v45 );
        goto LABEL_65;
      }
    }
    else
    {
      srcf = v90;
      sub_1F67C0(v90, &v90->m128i_i32[v91], -2);
      v44 = (char *)srcf;
    }
    sub_1F6700(v44, v42->m128i_i8);
LABEL_65:
    v40 = v91;
  }
  v50 = v40 - 1;
  if ( v40 - 1 >= 0 )
  {
    v51 = 4LL * v50;
    while ( 1 )
    {
      srcd = (void *)v51;
      v52 = *(int *)((char *)v90->m128i_i32 + v51);
      v53 = *(__int32 *)((char *)v90->m128i_i32 + v51);
      if ( v52 >= *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) || (_DWORD)v52 == (_DWORD)v6 )
        break;
      sub_1FA060(a1, v53, v6);
      LODWORD(v6) = v6 - (v53 < (int)v6);
      v54 = *(_DWORD *)(a1 + 104);
      if ( v54 > v53 )
        *(_DWORD *)(a1 + 104) = v54 - 1;
      v55 = *(_QWORD *)(a1 + 8);
      v56 = *(_DWORD *)(v55 + 792);
      if ( v56 > v53 )
        *(_DWORD *)(v55 + 792) = v56 - 1;
      --v50;
      v51 = (__int64)srcd - 4;
      if ( v50 == -1 )
        goto LABEL_75;
    }
    if ( !under_debugger )
      sub_37DDE0(50327);
LABEL_108:
    BUG();
  }
LABEL_75:
  v57 = **(_QWORD **)(a1 + 48) + 104LL * (int)v6;
  sub_20F980(*(_QWORD *)(a1 + 8), (unsigned int)v6);
  *a2 = v6;
  v60 = *(_DWORD *)v57;
  if ( *(_DWORD *)(a1 + 104) <= (int)v6 )
  {
    if ( v60 == 1 )
      sub_22E000(*(_QWORD *)(a1 + 8), *(_QWORD *)(v57 + 8), *(unsigned int *)(v57 + 88), v58, v59);
    goto LABEL_31;
  }
  v61 = *(_QWORD *)(a1 + 8);
  if ( v60 != 1 )
  {
    v12 = *(_DWORD *)(v61 + 792) > (int)v6;
    goto LABEL_31;
  }
  sub_22D410(v61 + 816, v57);
LABEL_30:
  v12 = 1;
LABEL_31:
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    qfree(v90);
  }
  cleanup_argloc(&v86);
  return v12;
}
