__int64 *__fastcall sub_19CC8A0(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v10; // r9
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r13
  _QWORD *v14; // r13
  __int64 v15; // rax
  char v16; // r14
  __int64 v17; // rbx
  unsigned __int8 v18; // al
  char *v19; // rdx
  _QWORD *v20; // rcx
  __int64 *v21; // r8
  _QWORD *v22; // rax
  __int64 v23; // rdi
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  char *v27; // rax
  int v28; // eax
  char v29; // al
  __int64 v30; // rax
  int v31; // r13d
  int v32; // eax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  __int64 (__fastcall *v36)(__int64); // rax
  __int64 v37; // r12
  char *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // si
  int v42; // r13d
  _DWORD *v43; // rsi
  unsigned __int64 v44; // r12
  void *v45; // r12
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 (__fastcall *v50)(__int64); // rax
  __int64 v51; // rdi
  __int64 (*v52)(void); // rax
  __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // rdi
  __int64 (*v56)(void); // rax
  __int64 v57; // rax
  char *v58; // rsi
  __int64 v59; // rdi
  __int64 *v60; // rcx
  char *v61; // rdx
  char *v62; // rax
  __int64 (__fastcall *v63)(__int64); // rax
  __int64 v64; // rax
  _QWORD *v65; // rdx
  unsigned int v66; // r14d
  __int64 v67; // r12
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r13
  void **v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  _QWORD *v78; // [rsp+10h] [rbp-F8h]
  __int64 v79; // [rsp+10h] [rbp-F8h]
  char v81; // [rsp+1Dh] [rbp-EBh]
  bool v82; // [rsp+1Eh] [rbp-EAh]
  char v83; // [rsp+1Fh] [rbp-E9h]
  __int64 v85; // [rsp+28h] [rbp-E0h]
  void **p_ptr; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v88; // [rsp+48h] [rbp-C0h]
  __int64 v89; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 *v90; // [rsp+60h] [rbp-A8h] BYREF
  char v91; // [rsp+B8h] [rbp-50h]
  unsigned int v92; // [rsp+C0h] [rbp-48h]
  char v93; // [rsp+C4h] [rbp-44h]

  v11 = sub_15F1540(a1, 0);
  v12 = *(_QWORD *)(a1 + 9944) & 0xFFFFFFFFFFFFFFF0LL;
  v82 = v12 == 0;
  if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 35 > 3 || v11 == 72 )
  {
    if ( *(_DWORD *)a4 == 4 )
    {
LABEL_5:
      if ( !v12 )
        goto LABEL_6;
      goto LABEL_66;
    }
    v83 = 0;
  }
  else
  {
    v83 = sub_B98200((_QWORD *)(v11 - 72), 0);
    if ( v83 )
    {
      v49 = sub_B77C50(v11 - 72);
      if ( *(_DWORD *)a4 == 4 )
      {
        if ( !v49 )
          goto LABEL_66;
LABEL_77:
        v45 = *(void **)(a4 + 8);
        *(_WORD *)(a4 + 163) = 0;
        v46 = (__int64)v45 + 8 * *(unsigned int *)(a4 + 16);
        v47 = sub_15AB9E0((__int64)a2, *(_QWORD **)(a1 + 248), (__int64)v19, (__int64)v20, (__int64)v21, v10);
        return (__int64 *)sub_C9A370(
                            *(_QWORD **)(a1 + 248),
                            *(_QWORD *)(a4 + 96),
                            v47,
                            v48,
                            a3,
                            (const __m128i *)(a4 + 120),
                            0,
                            a5,
                            v45,
                            v46,
                            1u,
                            1u);
      }
      v82 = 0;
      v83 = v49 != 0;
    }
    else if ( *(_DWORD *)a4 == 4 )
    {
      goto LABEL_5;
    }
  }
  v14 = *(_QWORD **)(a4 + 8);
  *(_QWORD *)&v88 = 4;
  DWORD2(v88) = 0;
  ptr = &v89;
  v15 = *(unsigned int *)(a4 + 16);
  BYTE12(v88) = 1;
  v78 = &v14[v15];
  if ( v14 == v78 )
    goto LABEL_6;
  v81 = 0;
  v16 = 0;
  v85 = a4;
  do
  {
    while ( 1 )
    {
      v17 = *v14 & 0xFFFFFFFFFFFFFFF8LL;
      v18 = *(_BYTE *)(v17 + 28) & 0x7F;
      if ( (unsigned int)v18 - 53 <= 1 || ((v18 + 52) & 0x7Fu) <= 1 )
        v17 = sub_B72ED0(*v14 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (unsigned __int8)sub_B72F20(v17) )
        break;
      v81 = 1;
      if ( v78 == ++v14 )
        goto LABEL_36;
    }
    v16 |= (((*(_BYTE *)(v17 + 28) & 0x7F) + 80) & 0x7Fu) <= 3 || (*(_BYTE *)(v17 + 28) & 0x7F) == 32;
    v22 = (_QWORD *)(*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v17 + 16) & 4) != 0 )
      v22 = (_QWORD *)*v22;
    if ( !v22 )
      BUG();
    v23 = (__int64)(v22 - 8);
    v24 = *(__int64 (__fastcall **)(__int64))(*(v22 - 8) + 32LL);
    if ( v24 == sub_A01140 )
      v25 = sub_B70A60(v23);
    else
      v25 = v24(v23);
    if ( !BYTE12(v88) )
      goto LABEL_45;
    v20 = ptr;
    v26 = 8LL * DWORD1(v88);
    v21 = (__int64 *)((char *)ptr + v26);
    if ( ptr != (char *)ptr + v26 )
    {
      v19 = (char *)ptr;
      if ( v25 == *(_QWORD *)ptr )
        goto LABEL_29;
      do
      {
        v19 += 8;
        if ( v21 == (__int64 *)v19 )
          break;
      }
      while ( v25 != *(_QWORD *)v19 );
    }
    if ( DWORD1(v88) < (unsigned int)v88 )
    {
      ++DWORD1(v88);
      *v21 = v25;
      v20 = ptr;
      v19 = (char *)ptr + v26;
    }
    else
    {
LABEL_45:
      v30 = sub_2236760(&ptr, v25);
      v20 = ptr;
      v19 = (char *)v30;
      if ( !BYTE12(v88) )
      {
        v27 = (char *)ptr + 8 * (unsigned int)v88;
        goto LABEL_30;
      }
    }
LABEL_29:
    v27 = (char *)&v20[DWORD1(v88)];
LABEL_30:
    if ( v27 != v19 && *(_QWORD *)v19 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v19 += 8;
      do
      {
        v20 = v19;
        if ( v27 == v19 )
          break;
        v19 += 8;
      }
      while ( *v20 >= 0xFFFFFFFFFFFFFFFELL );
    }
    ++v14;
  }
  while ( v78 != v14 );
LABEL_36:
  a4 = v85;
  if ( DWORD1(v88) == DWORD2(v88) )
  {
    if ( BYTE12(v88) )
      goto LABEL_6;
    goto LABEL_44;
  }
  if ( v83 )
  {
    if ( !BYTE12(v88) )
      free(ptr);
    goto LABEL_77;
  }
  v28 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( v28 < 0 )
    goto LABEL_52;
  if ( v28 <= 1 )
  {
    if ( v16 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
    {
      if ( !v82 )
      {
        v31 = 9;
        goto LABEL_54;
      }
      v29 = BYTE12(v88);
      if ( !v81 )
      {
        if ( !BYTE12(v88) )
          free(ptr);
LABEL_132:
        sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(v85 + 128), 0x1A74u, 0);
        v67 = *(_QWORD *)(v85 + 120);
        if ( v91 )
        {
          sub_AE9DF0(&v90, *(_QWORD *)(v85 + 120), 9u);
        }
        else if ( v93 )
        {
          v72 = sub_168B9E0(&ptr);
          v73 = *((void ***)&v88 + 1);
          if ( *((_QWORD *)&v88 + 1) )
            v73 = (void **)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v88 + 1) + 32LL))(*((_QWORD *)&v88 + 1));
          p_ptr = v73;
          v74 = sub_1587BC0(v72, (__int64 *)&p_ptr, v68, v69, v70, v71);
          sub_AE9DF0((unsigned __int8 **)(*v74 + 32LL * v92 + 8), v67, 9u);
        }
        sub_15F7200(&ptr);
        goto LABEL_6;
      }
      goto LABEL_43;
    }
LABEL_52:
    if ( !v82 )
    {
      v31 = 0;
      goto LABEL_54;
    }
    v29 = BYTE12(v88);
    if ( !v81 )
      goto LABEL_69;
LABEL_43:
    if ( v29 )
      goto LABEL_6;
    goto LABEL_44;
  }
  if ( v28 != 3 )
    goto LABEL_52;
  if ( v82 )
  {
    v29 = BYTE12(v88);
    if ( v81 )
      goto LABEL_43;
    if ( BYTE12(v88) )
    {
LABEL_6:
      if ( a5 || a3 )
        return (__int64 *)sub_1CD7830(a1, a2, a3, a4, 0, a5);
      else
        return (__int64 *)sub_190B490(a1, a2->m128i_i64, a4, 0, 0, v10, (__m128i)a7, a8);
    }
LABEL_44:
    free(ptr);
    goto LABEL_6;
  }
  v31 = 6;
LABEL_54:
  v32 = *(_BYTE *)(v11 + 8) & 0x7F;
  if ( (unsigned int)(v32 - 35) > 3 )
  {
    if ( (unsigned int)(v32 - 59) <= 2 )
    {
      v37 = v11 - 64;
      if ( v37 )
        goto LABEL_82;
    }
LABEL_138:
    v29 = BYTE12(v88);
    if ( !v31 )
      goto LABEL_69;
LABEL_139:
    if ( !v29 )
      free(ptr);
    switch ( v31 )
    {
      case 9:
        goto LABEL_132;
      default:
        goto LABEL_6;
    }
    goto LABEL_6;
  }
  if ( v11 == 72 )
    goto LABEL_138;
  v33 = *(_QWORD *)(sub_B8C1B0(v11) + 16);
  if ( (v33 & 4) != 0 )
    v34 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v34 = v33 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v34 )
    BUG();
  v35 = v34 - 64;
  v36 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v34 - 64) + 32LL);
  if ( v36 == sub_A01140 )
    v37 = sub_B70A60(v35);
  else
    v37 = v36(v35);
LABEL_82:
  if ( *(_QWORD *)(v85 + 96) )
  {
    v50 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL);
    v79 = v50 == sub_A01140 ? sub_B70A60(v37) : v50(v37);
    v51 = *(_QWORD *)(v85 + 96);
    v52 = *(__int64 (**)(void))(*(_QWORD *)v51 + 32LL);
    v53 = (char *)v52 == (char *)sub_A01140 ? sub_B70A60(v51) : v52();
    if ( v79 != v53 )
    {
      if ( BYTE12(v88) )
        goto LABEL_93;
      v54 = 4 * (DWORD1(v88) - DWORD2(v88));
      if ( v54 < 0x20 )
        v54 = 32;
      if ( (unsigned int)v88 > v54 )
      {
        sub_22364B0(&ptr);
      }
      else
      {
        memset(ptr, -1, 8LL * (unsigned int)v88);
LABEL_93:
        *(_QWORD *)((char *)&v88 + 4) = 0;
      }
      v55 = *(_QWORD *)(v85 + 96);
      v56 = *(__int64 (**)(void))(*(_QWORD *)v55 + 32LL);
      if ( (char *)v56 == (char *)sub_A01140 )
        v57 = sub_B70A60(v55);
      else
        v57 = v56();
      if ( BYTE12(v88) )
      {
        v58 = (char *)ptr;
        v59 = 8LL * DWORD1(v88);
        v60 = (__int64 *)((char *)ptr + v59);
        if ( ptr != (char *)ptr + v59 )
        {
          v61 = (char *)ptr;
          if ( v57 == *(_QWORD *)ptr )
          {
LABEL_104:
            v62 = &v58[8 * DWORD1(v88)];
            goto LABEL_105;
          }
          while ( 1 )
          {
            v61 += 8;
            if ( v60 == (__int64 *)v61 )
              break;
            if ( v57 == *(_QWORD *)v61 )
              goto LABEL_104;
          }
        }
        if ( DWORD1(v88) < (unsigned int)v88 )
        {
          ++DWORD1(v88);
          *v60 = v57;
          v58 = (char *)ptr;
          v61 = (char *)ptr + v59;
          goto LABEL_104;
        }
      }
      v75 = sub_2236760(&ptr, v57);
      v58 = (char *)ptr;
      v61 = (char *)v75;
      if ( BYTE12(v88) )
        goto LABEL_104;
      v62 = (char *)ptr + 8 * (unsigned int)v88;
LABEL_105:
      if ( v62 != v61 && (unsigned __int64)(*(_QWORD *)v61 + 2LL) <= 1 )
      {
        do
          v61 += 8;
        while ( v62 != v61 && *(_QWORD *)v61 >= 0xFFFFFFFFFFFFFFFELL );
      }
    }
  }
  p_ptr = &ptr;
  v63 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 32LL);
  if ( v63 == sub_A01140 )
    v64 = sub_B70A60(v37);
  else
    v64 = v63(v37);
  v41 = BYTE12(v88);
  if ( !BYTE12(v88) )
  {
    if ( !sub_2236570(&ptr, v64) )
      goto LABEL_118;
LABEL_62:
    v41 = BYTE12(v88);
LABEL_63:
    if ( !v81 )
    {
      v42 = 4;
      if ( v41 )
        goto LABEL_125;
      free(ptr);
      v66 = *(_DWORD *)(v85 + 128);
      v44 = sub_19A27D0(a1);
LABEL_126:
      v43 = sub_19B4F00(a1, v66, v44, 1);
      return sub_19CB370(
               (__m128 *)a1,
               v43,
               v44,
               0,
               (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0,
               a2,
               a7,
               a8,
               a3,
               0,
               a4,
               a5,
               a6,
               0,
               nullptr);
    }
    v42 = 1;
    if ( v41 )
      goto LABEL_125;
LABEL_65:
    free(ptr);
LABEL_66:
    v43 = nullptr;
    v44 = sub_19A27D0(a1);
    return sub_19CB370(
             (__m128 *)a1,
             v43,
             v44,
             0,
             (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0,
             a2,
             a7,
             a8,
             a3,
             0,
             a4,
             a5,
             a6,
             0,
             nullptr);
  }
  v65 = ptr;
  v38 = (char *)ptr + 8 * DWORD1(v88);
  if ( ptr != v38 )
  {
    if ( v64 == *(_QWORD *)ptr )
    {
      v42 = v81 == 0 ? 4 : 1;
      goto LABEL_125;
    }
    while ( v38 != (char *)++v65 )
    {
      if ( v64 == *v65 )
        goto LABEL_63;
    }
  }
LABEL_118:
  if ( !(unsigned __int8)sub_B67690(v37, (__int64)sub_19CD2F0, (__int64)&p_ptr, (__int64)v38, v39, v40) )
    goto LABEL_62;
  v29 = BYTE12(v88);
  if ( v81 )
  {
    v42 = 3;
    if ( !BYTE12(v88) )
      goto LABEL_65;
LABEL_125:
    v66 = *(_DWORD *)(v85 + 128);
    v44 = sub_19A27D0(a1);
    if ( v42 == 4 )
      goto LABEL_126;
    v43 = nullptr;
    return sub_19CB370(
             (__m128 *)a1,
             v43,
             v44,
             0,
             (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) == 0,
             a2,
             a7,
             a8,
             a3,
             0,
             a4,
             a5,
             a6,
             0,
             nullptr);
  }
  if ( v31 )
    goto LABEL_139;
LABEL_69:
  if ( !v29 )
    free(ptr);
  sub_19C5ED0(a1, (unsigned int *)a2, **(_QWORD **)(v85 + 8) & 0xFFFFFFFFFFFFFFF8LL, v85 + 120);
  return (_QWORD *)(&dword_0 + 1);
}
