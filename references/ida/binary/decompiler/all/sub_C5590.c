__int64 __fastcall sub_C5590(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _BYTE *a5)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  int **v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r8
  int *v12; // rdi
  int *v13; // r15
  __int64 v14; // rdx
  int v15; // esi
  _DWORD *v16; // rax
  _DWORD *v17; // rdx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r12
  unsigned int v23; // r12d
  _QWORD *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rdi
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 *v37; // r12
  unsigned int i; // eax
  unsigned int v39; // r15d
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r14
  _QWORD *v43; // rax
  unsigned __int64 v44; // r8
  int v45; // edx
  int *v46; // r9
  __int64 v47; // rax
  int v48; // esi
  int v49; // edx
  __int64 v50; // rcx
  _DWORD *v51; // rax
  __int64 v52; // r13
  char v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rax
  _QWORD *v57; // [rsp+8h] [rbp-180h]
  size_t v58; // [rsp+8h] [rbp-180h]
  size_t n; // [rsp+10h] [rbp-178h]
  int na; // [rsp+10h] [rbp-178h]
  __int64 nc; // [rsp+10h] [rbp-178h]
  __int64 nb; // [rsp+10h] [rbp-178h]
  __int64 v63; // [rsp+18h] [rbp-170h]
  __int64 v67; // [rsp+40h] [rbp-148h]
  __int64 v68; // [rsp+58h] [rbp-130h]
  _QWORD *v69; // [rsp+68h] [rbp-120h]
  __int64 v70; // [rsp+70h] [rbp-118h] BYREF
  __int64 v71; // [rsp+78h] [rbp-110h]
  void *v72[2]; // [rsp+80h] [rbp-108h] BYREF
  void *src; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v74; // [rsp+98h] [rbp-F0h]
  __int64 v75[2]; // [rsp+B0h] [rbp-D8h] BYREF
  void *v76; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v77; // [rsp+C8h] [rbp-C0h]
  __int64 v78; // [rsp+E0h] [rbp-A8h] BYREF
  int v79; // [rsp+E8h] [rbp-A0h]
  void *v80; // [rsp+F0h] [rbp-98h]
  __int128 v81; // [rsp+F8h] [rbp-90h]
  __int64 v82; // [rsp+110h] [rbp-78h] BYREF
  __int128 v83; // [rsp+118h] [rbp-70h] BYREF
  __int128 v84; // [rsp+128h] [rbp-60h]
  unsigned __int64 v85; // [rsp+138h] [rbp-50h]
  char v86; // [rsp+140h] [rbp-48h]
  unsigned __int64 v87; // [rsp+148h] [rbp-40h]

  v87 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 328);
  v67 = a2 >> 32;
  v70 = 0;
  v71 = 0;
  v63 = sub_10F6E0(*(_QWORD *)(v6 + 784), 0);
  if ( !v63 )
  {
    if ( !under_debugger )
      sub_37EA20(50446);
    goto LABEL_127;
  }
  n = 0;
  ++*(_DWORD *)(v63 + 24);
  if ( *(int *)(a1 + 224) > 0 )
  {
    while ( 1 )
    {
      v57 = (_QWORD *)(*(_QWORD *)v63 + 24LL * *(int *)(*(_QWORD *)(a1 + 16) + 4 * n));
      v7 = (_QWORD *)*v57;
      if ( *v57 )
      {
        if ( v57[1] )
        {
          v8 = (_QWORD *)v7[1];
          if ( v8 != v7 )
            break;
        }
      }
LABEL_19:
      if ( *(_DWORD *)(a1 + 224) <= (int)++n )
        goto LABEL_20;
    }
    while ( 1 )
    {
LABEL_6:
      v9 = (int **)(v8 + 3);
      v10 = *(_QWORD *)(a1 + 328);
      v82 = 0;
      v83 = 0u;
      v84 = 0;
      sub_102500(v8 + 3, v10, &v82);
      if ( (unsigned __int8)sub_63E80((_QWORD *)a3, &v82) || (unsigned __int8)sub_314F20(a3 + 16, (char *)&v83 + 8) )
      {
        v11 = v8[4];
        v12 = *v9;
        v13 = *v9;
        if ( 4 * v11 )
        {
          do
          {
            while ( 1 )
            {
              v14 = *(int *)(a1 + 224);
              v15 = *v13;
              if ( (int)v14 > 0 )
                break;
LABEL_33:
              sub_63890(&v70, v15);
              v12 = *v9;
              v11 = v8[4];
              if ( ++v13 == &(*v9)[v11] )
                goto LABEL_13;
            }
            v16 = *(_DWORD **)(a1 + 16);
            v17 = &v16[v14];
            while ( *v16 != v15 )
            {
              if ( v17 == ++v16 )
                goto LABEL_33;
            }
            ++v13;
          }
          while ( v13 != &v12[v11] );
        }
LABEL_13:
        if ( *((_QWORD *)&v83 + 1) )
        {
          *(_QWORD *)&v84 = 0;
          qfree();
        }
      }
      else if ( *((_QWORD *)&v83 + 1) )
      {
        *(_QWORD *)&v84 = 0;
        qfree();
      }
      qfree();
      if ( (*v8 & 2) != 0 )
        goto LABEL_18;
      v18 = (_QWORD *)v8[2];
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v25 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
        v26 = *v25;
        if ( (*v25 & 2) == 0 )
        {
          while ( (_QWORD *)v25[2] == v8 )
          {
            v8 = v25;
            v27 = v26 & 0xFFFFFFFFFFFFFFFCLL;
            v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v26 & 2) != 0 )
            {
              v8 = (_QWORD *)v27;
              if ( *v57 != v27 )
                goto LABEL_6;
              goto LABEL_19;
            }
            v25 = (_QWORD *)v27;
          }
        }
        v8 = v25;
        if ( (_QWORD *)*v57 == v25 )
          goto LABEL_19;
      }
      else
      {
        do
        {
          v8 = v18;
          v18 = (_QWORD *)v18[1];
        }
        while ( (*(_BYTE *)v18 & 2) == 0 );
LABEL_18:
        if ( (_QWORD *)*v57 == v8 )
          goto LABEL_19;
      }
    }
  }
LABEL_20:
  sub_103910(v63);
  v19 = *(_QWORD *)(a1 + 328);
  v20 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * (int)a2);
  if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 64) )
    sub_B6D60(v63);
  v21 = *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8 * v20);
  v58 = (size_t)a4;
  if ( !a4 )
  {
    v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL * (int)a2) + 8 * v67);
    if ( !v58 )
    {
      v23 = 0;
      goto LABEL_32;
    }
  }
  sub_122180(v72, *(_QWORD *)(v19 + 520), v58, 1);
  sub_63700(v75, a3);
  v22 = *(_QWORD *)(a3 + 24);
  v76 = 0;
  v77 = 0;
  if ( v22 )
  {
    v76 = (void *)qalloc_or_throw();
    *((_QWORD *)&v77 + 1) = v22;
    memcpy(v76, *(const void **)(a3 + 16), 16 * v22);
    *(_QWORD *)&v77 = v22;
  }
  sub_63980(v75, (__int64 *)(a1 + 232));
  sub_313730(&v76, a1 + 248);
  sub_313730(&v76, *(_QWORD *)(a1 + 328) + 232LL);
  if ( !(unsigned __int8)sub_63F20(v72, v75) || !(unsigned __int8)sub_3149F0(&v76, &src) )
  {
    if ( !a4 )
      goto LABEL_26;
    if ( !under_debugger )
      sub_37EA20(50047);
    goto LABEL_127;
  }
  if ( !(unsigned __int8)sub_63F80(&v70) )
  {
    v36 = sub_10EF10(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 784LL), 0);
    v37 = (__int64 *)v36;
    if ( !v36 )
    {
      if ( !under_debugger )
        sub_37EA20(50446);
      goto LABEL_127;
    }
    ++*(_DWORD *)(v36 + 24);
    for ( i = sub_64060(&v70, 0); ; i = sub_64060(&v70, v39 + 1) )
    {
      v39 = i;
      if ( i == (_DWORD)v71 )
        break;
      v40 = *(_QWORD *)(a1 + 328);
      if ( i >= *(_DWORD *)(v40 + 64) )
        sub_B6D60(&v70);
      v41 = *(_QWORD *)(*(_QWORD *)(v40 + 528) + 8LL * i);
      v68 = v41;
      if ( *(_DWORD *)(v41 + 72) != *(_DWORD *)(v21 + 72) )
      {
        v42 = *v37;
        sub_63700(&v78, v41 + 160);
        sub_63E00(&v78, (__int64 *)a3);
        for ( na = sub_64060(&v78, 0); na != v79; na = sub_64060(&v78, na + 1) )
        {
          v82 = 0;
          *(_QWORD *)&v84 = na;
          BYTE8(v84) = 1;
          v85 = 0xFFFFFFFF00000001LL;
          v86 = 1;
          v83 = 0;
          v43 = (_QWORD *)sub_1038F0(v42 + 24LL * (int)v39, &v82);
          if ( v82 )
          {
            v69 = v43;
            *(_QWORD *)&v83 = 0;
            qfree();
            v43 = v69;
          }
          if ( !v43 )
            goto LABEL_90;
          v44 = v43[1];
          if ( !v44 )
            goto LABEL_90;
          v45 = *(_DWORD *)(a1 + 224);
          if ( v45 <= 0 )
            goto LABEL_90;
          v46 = (int *)*v43;
          v47 = v45;
          v48 = 0;
          v49 = *v46;
          v50 = *(_QWORD *)(a1 + 16) + 4 * v47;
          while ( 1 )
          {
            v51 = *(_DWORD **)(a1 + 16);
            while ( *v51 != v49 )
            {
              if ( ++v51 == (_DWORD *)v50 )
                goto LABEL_90;
            }
            if ( ++v48 >= v44 )
              break;
            v49 = v46[v48];
          }
          if ( !sub_64030(v72, na) )
            goto LABEL_90;
        }
        sub_63700(&v82, (__int64)v72);
        v52 = v74;
        *((_QWORD *)&v83 + 1) = 0;
        v84 = 0;
        if ( v74 )
        {
          nc = 16 * v74;
          *((_QWORD *)&v83 + 1) = qalloc_or_throw();
          *((_QWORD *)&v84 + 1) = v52;
          memcpy(*((void **)&v83 + 1), src, nc);
          *(_QWORD *)&v84 = v52;
        }
        v53 = sub_C4F10((__m128i *)a1, v68, *(_QWORD *)(v68 + 48), (_DWORD *)v58, &v82);
        if ( *((_QWORD *)&v83 + 1) )
        {
          *(_QWORD *)&v84 = 0;
          qfree();
        }
        qfree();
        if ( !v53 )
        {
LABEL_90:
          qfree();
          sub_103910(v37);
          goto LABEL_26;
        }
        qfree();
      }
    }
    sub_103910(v37);
  }
  v28 = sub_BC500(a1, a2, 1);
  v29 = v28;
  if ( v28 )
  {
    v30 = *(_QWORD *)(v28 + 8);
  }
  else if ( a4 )
  {
    v30 = *(_QWORD *)(v21 + 48);
  }
  else
  {
    v30 = *(_QWORD *)(v58 + 8);
  }
  sub_63700(&v82, (__int64)v72);
  v31 = v74;
  *((_QWORD *)&v83 + 1) = 0;
  v84 = 0;
  if ( v74 )
  {
    nb = 16 * v74;
    *((_QWORD *)&v83 + 1) = qalloc_or_throw();
    *((_QWORD *)&v84 + 1) = v31;
    memcpy(*((void **)&v83 + 1), src, nb);
    *(_QWORD *)&v84 = v31;
  }
  v23 = sub_C4F10((__m128i *)a1, v21, v30, (_DWORD *)v58, &v82);
  if ( *((_QWORD *)&v83 + 1) )
  {
    *(_QWORD *)&v84 = 0;
    qfree();
  }
  v32 = v82;
  qfree();
  if ( !(_BYTE)v23 )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_27;
  v33 = *(_DWORD *)(v21 + 76);
  if ( v33 == 6 )
    goto LABEL_26;
  if ( v33 == 1 )
  {
    v54 = *(_QWORD *)(a1 + 328);
    v55 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * ((int)a2 - 1));
    if ( (unsigned int)v55 >= *(_DWORD *)(v54 + 64) )
      sub_B6D60(v32);
    sub_11FD90(a4, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 528) + 8 * v55) + 32LL));
    v21 = sub_67520(*(_QWORD *)(a1 + 328), (__int64)a4);
    *a5 = 1;
  }
  else
  {
    if ( v30 )
      v34 = *(_QWORD *)(v30 + 24);
    else
      v34 = *(_QWORD *)(v21 + 32);
    sub_11FD90(a4, v34);
    sub_A23D0(v21, a4, v29);
  }
  sub_63700(&v78, a3);
  v35 = *(_QWORD *)(a3 + 24);
  v80 = 0;
  v81 = 0;
  if ( v35 )
  {
    v80 = (void *)qalloc_or_throw();
    *((_QWORD *)&v81 + 1) = v35;
    memcpy(v80, *(const void **)(a3 + 16), 16 * v35);
    *(_QWORD *)&v81 = v35;
  }
  if ( !(unsigned __int8)sub_BC7C0((_QWORD **)a1, v21, &v78, (__int64)a4) )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL * (int)a2) + 8 * v67) = a4;
    sub_63890((__int64 *)(a1 + 336), *(_DWORD *)(v21 + 72));
    if ( *(_QWORD *)(a1 + 216) )
    {
      sub_BA2C0(*(_QWORD **)(a1 + 216));
      j__qfree();
    }
    v82 = 0;
    v83 = 0u;
    v84 = 0;
    if ( (unsigned __int8)sub_BDDC0(a1, (__int64)&v82) )
    {
      if ( *((_QWORD *)&v83 + 1) )
      {
        *(_QWORD *)&v84 = 0;
        qfree();
      }
      qfree();
      if ( v80 )
      {
        *(_QWORD *)&v81 = 0;
        qfree();
      }
      qfree();
      goto LABEL_27;
    }
    if ( !under_debugger )
      sub_37EA20(50049);
LABEL_127:
    BUG();
  }
  if ( *a5 )
  {
    if ( !under_debugger )
      sub_37EA20(50048);
    goto LABEL_127;
  }
  sub_A2630(v21, (__int64)a4);
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree();
  }
  qfree();
LABEL_26:
  v23 = 0;
LABEL_27:
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  qfree();
  if ( src )
  {
    v74 = 0;
    qfree();
  }
  qfree();
LABEL_32:
  qfree();
  return v23;
}
