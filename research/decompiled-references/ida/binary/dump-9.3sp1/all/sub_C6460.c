__int64 __fastcall sub_C6460(__m128i *a1, __int64 a2, __int64 a3, _QWORD *a4, _BYTE *a5)
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  unsigned int v25; // r12d
  _QWORD *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r15
  unsigned __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r12
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 *v41; // r12
  unsigned int i; // eax
  unsigned int v43; // r15d
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r14
  _QWORD *v47; // rax
  unsigned __int64 v48; // r8
  int v49; // edx
  int *v50; // r9
  __int64 v51; // rax
  int v52; // esi
  int v53; // edx
  __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // r13
  char v59; // r13
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rbp
  __int64 v63; // rdx
  __int64 v64; // rax
  _QWORD *v66; // [rsp+8h] [rbp-180h]
  size_t v67; // [rsp+8h] [rbp-180h]
  size_t n; // [rsp+10h] [rbp-178h]
  int na; // [rsp+10h] [rbp-178h]
  __int64 nc; // [rsp+10h] [rbp-178h]
  __int64 nb; // [rsp+10h] [rbp-178h]
  __int64 v72; // [rsp+18h] [rbp-170h]
  __int64 v76; // [rsp+40h] [rbp-148h]
  __int64 v77; // [rsp+58h] [rbp-130h]
  _QWORD *v78; // [rsp+68h] [rbp-120h]
  __int64 v79; // [rsp+70h] [rbp-118h] BYREF
  __int64 v80; // [rsp+78h] [rbp-110h]
  __int64 v81[2]; // [rsp+80h] [rbp-108h] BYREF
  void *src; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v83; // [rsp+98h] [rbp-F0h]
  __int64 v84[2]; // [rsp+B0h] [rbp-D8h] BYREF
  void *v85; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v86; // [rsp+C8h] [rbp-C0h]
  __int64 v87; // [rsp+E0h] [rbp-A8h] BYREF
  int v88; // [rsp+E8h] [rbp-A0h]
  void *v89; // [rsp+F0h] [rbp-98h]
  __int128 v90; // [rsp+F8h] [rbp-90h]
  __int64 v91; // [rsp+110h] [rbp-78h] BYREF
  __int128 v92; // [rsp+118h] [rbp-70h] BYREF
  __int128 v93; // [rsp+128h] [rbp-60h]
  unsigned __int64 v94; // [rsp+138h] [rbp-50h]
  char v95; // [rsp+140h] [rbp-48h]
  unsigned __int64 v96; // [rsp+148h] [rbp-40h]

  v96 = __readfsqword(0x28u);
  v6 = a1[20].m128i_i64[1];
  v76 = a2 >> 32;
  v79 = 0;
  v80 = 0;
  v72 = sub_1108E0(*(_QWORD *)(v6 + 784), 0);
  if ( !v72 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_128;
  }
  n = 0;
  ++*(_DWORD *)(v72 + 24);
  if ( a1[14].m128i_i32[0] > 0 )
  {
    while ( 1 )
    {
      v66 = (_QWORD *)(*(_QWORD *)v72 + 24LL * *(int *)(a1[1].m128i_i64[0] + 4 * n));
      v7 = (_QWORD *)*v66;
      if ( *v66 )
      {
        if ( v66[1] )
        {
          v8 = (_QWORD *)v7[1];
          if ( v8 != v7 )
            break;
        }
      }
LABEL_19:
      if ( a1[14].m128i_i32[0] <= (int)++n )
        goto LABEL_20;
    }
    while ( 1 )
    {
LABEL_6:
      v9 = (int **)(v8 + 3);
      v10 = a1[20].m128i_i64[1];
      v91 = 0;
      v92 = 0u;
      v93 = 0;
      sub_103D60(v8 + 3, v10, &v91);
      if ( (unsigned __int8)sub_64780((_QWORD *)a3, &v91) || (unsigned __int8)sub_318470(a3 + 16, (char *)&v92 + 8) )
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
              v14 = a1[14].m128i_i32[0];
              v15 = *v13;
              if ( (int)v14 > 0 )
                break;
LABEL_33:
              sub_64190(&v79, v15);
              v12 = *v9;
              v11 = v8[4];
              if ( ++v13 == &(*v9)[v11] )
                goto LABEL_13;
            }
            v16 = (_DWORD *)a1[1].m128i_i64[0];
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
        if ( *((_QWORD *)&v92 + 1) )
        {
          *(_QWORD *)&v93 = 0;
          qfree(*((__int64 *)&v92 + 1));
        }
      }
      else if ( *((_QWORD *)&v92 + 1) )
      {
        *(_QWORD *)&v93 = 0;
        qfree(*((__int64 *)&v92 + 1));
      }
      qfree(v91);
      if ( (*v8 & 2) != 0 )
        goto LABEL_18;
      v18 = (_QWORD *)v8[2];
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v27 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
        v28 = *v27;
        if ( (*v27 & 2) == 0 )
        {
          while ( (_QWORD *)v27[2] == v8 )
          {
            v8 = v27;
            v29 = v28 & 0xFFFFFFFFFFFFFFFCLL;
            v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v28 & 2) != 0 )
            {
              v8 = (_QWORD *)v29;
              if ( *v66 != v29 )
                goto LABEL_6;
              goto LABEL_19;
            }
            v27 = (_QWORD *)v29;
          }
        }
        v8 = v27;
        if ( (_QWORD *)*v66 == v27 )
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
        if ( (_QWORD *)*v66 == v8 )
          goto LABEL_19;
      }
    }
  }
LABEL_20:
  sub_104E10(v72);
  v19 = a1[20].m128i_i64[1];
  v20 = *(unsigned int *)(a1[1].m128i_i64[0] + 4LL * (int)a2);
  if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 64) )
    sub_B7BA0(v72);
  v21 = *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8 * v20);
  v67 = (size_t)a4;
  if ( !a4 )
  {
    v67 = *(_QWORD *)(*(_QWORD *)(a1[2].m128i_i64[1] + 24LL * (int)a2) + 8 * v76);
    if ( !v67 )
    {
      v25 = 0;
      goto LABEL_32;
    }
  }
  sub_124680(v81, *(_QWORD *)(v19 + 520), v67, 1);
  sub_64000(v84, a3);
  v24 = *(_QWORD *)(a3 + 24);
  v85 = nullptr;
  v86 = 0;
  if ( v24 )
  {
    v85 = (void *)qalloc_or_throw(16 * v24, a3, v22, v23);
    *((_QWORD *)&v86 + 1) = v24;
    memcpy(v85, *(const void **)(a3 + 16), 16 * v24);
    *(_QWORD *)&v86 = v24;
  }
  sub_64280(v84, &a1[14].m128i_i64[1]);
  sub_316CB0(&v85, &a1[15].m128i_u64[1]);
  sub_316CB0(&v85, a1[20].m128i_i64[1] + 232);
  if ( !(unsigned __int8)sub_64820(v81, v84) || !(unsigned __int8)sub_317F40(&v85, &src) )
  {
    if ( !a4 )
      goto LABEL_26;
    if ( !under_debugger )
      sub_383060(50047);
    goto LABEL_128;
  }
  if ( !(unsigned __int8)sub_64880(&v79) )
  {
    v40 = sub_110340(*(_QWORD *)(a1[20].m128i_i64[1] + 784), 0);
    v41 = (__int64 *)v40;
    if ( !v40 )
    {
      if ( !under_debugger )
        sub_383060(50446);
      goto LABEL_128;
    }
    ++*(_DWORD *)(v40 + 24);
    for ( i = sub_64960(&v79, 0); ; i = sub_64960(&v79, v43 + 1) )
    {
      v43 = i;
      if ( i == (_DWORD)v80 )
        break;
      v44 = a1[20].m128i_i64[1];
      if ( i >= *(_DWORD *)(v44 + 64) )
        sub_B7BA0(&v79);
      v45 = *(_QWORD *)(*(_QWORD *)(v44 + 528) + 8LL * i);
      v77 = v45;
      if ( *(_DWORD *)(v45 + 72) != *(_DWORD *)(v21 + 72) )
      {
        v46 = *v41;
        sub_64000(&v87, v45 + 160);
        sub_64700(&v87, (__int64 *)a3);
        for ( na = sub_64960(&v87, 0); na != v88; na = sub_64960(&v87, na + 1) )
        {
          v91 = 0;
          *(_QWORD *)&v93 = na;
          BYTE8(v93) = 1;
          v94 = 0xFFFFFFFF00000001LL;
          v95 = 1;
          v92 = 0;
          v47 = (_QWORD *)sub_104DF0(v46 + 24LL * (int)v43, &v91);
          if ( v91 )
          {
            v78 = v47;
            *(_QWORD *)&v92 = 0;
            qfree(v91);
            v47 = v78;
          }
          if ( !v47 )
            goto LABEL_90;
          v48 = v47[1];
          if ( !v48 )
            goto LABEL_90;
          v49 = a1[14].m128i_i32[0];
          if ( v49 <= 0 )
            goto LABEL_90;
          v50 = (int *)*v47;
          v51 = v49;
          v52 = 0;
          v53 = *v50;
          v54 = a1[1].m128i_i64[0] + 4 * v51;
          while ( 1 )
          {
            v55 = (_DWORD *)a1[1].m128i_i64[0];
            while ( *v55 != v53 )
            {
              if ( ++v55 == (_DWORD *)v54 )
                goto LABEL_90;
            }
            if ( ++v52 >= v48 )
              break;
            v53 = v50[v52];
          }
          if ( !sub_64930(v81, na) )
          {
LABEL_90:
            v56 = v87;
            goto LABEL_91;
          }
        }
        sub_64000(&v91, (__int64)v81);
        v58 = v83;
        *((_QWORD *)&v92 + 1) = 0;
        v93 = 0;
        if ( v83 )
        {
          nc = 16 * v83;
          *((_QWORD *)&v92 + 1) = qalloc_or_throw(16 * v83, (__int64)v81, 16 * v83, v57);
          *((_QWORD *)&v93 + 1) = v58;
          memcpy(*((void **)&v92 + 1), src, nc);
          *(_QWORD *)&v93 = v58;
        }
        v59 = sub_C5DE0(a1, v77, *(_QWORD *)(v77 + 48), (_DWORD *)v67, &v91);
        if ( *((_QWORD *)&v92 + 1) )
        {
          *(_QWORD *)&v93 = 0;
          qfree(*((__int64 *)&v92 + 1));
        }
        qfree(v91);
        v56 = v87;
        if ( !v59 )
        {
LABEL_91:
          qfree(v56);
          sub_104E10(v41);
          goto LABEL_26;
        }
        qfree(v87);
      }
    }
    sub_104E10(v41);
  }
  v30 = sub_BD380((__int64)a1, a2, 1);
  v31 = v30;
  if ( v30 )
  {
    v32 = *(_QWORD *)(v30 + 8);
  }
  else if ( a4 )
  {
    v32 = *(_QWORD *)(v21 + 48);
  }
  else
  {
    v32 = *(_QWORD *)(v67 + 8);
  }
  sub_64000(&v91, (__int64)v81);
  v34 = v83;
  *((_QWORD *)&v92 + 1) = 0;
  v93 = 0;
  if ( v83 )
  {
    nb = 16 * v83;
    *((_QWORD *)&v92 + 1) = qalloc_or_throw(16 * v83, (__int64)v81, 16 * v83, v33);
    *((_QWORD *)&v93 + 1) = v34;
    memcpy(*((void **)&v92 + 1), src, nb);
    *(_QWORD *)&v93 = v34;
  }
  v25 = sub_C5DE0(a1, v21, v32, (_DWORD *)v67, &v91);
  if ( *((_QWORD *)&v92 + 1) )
  {
    *(_QWORD *)&v93 = 0;
    qfree(*((__int64 *)&v92 + 1));
  }
  v35 = v91;
  qfree(v91);
  if ( !(_BYTE)v25 )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_27;
  v36 = *(_DWORD *)(v21 + 76);
  if ( v36 == 6 )
    goto LABEL_26;
  if ( v36 == 1 )
  {
    v63 = a1[20].m128i_i64[1];
    v64 = *(unsigned int *)(a1[1].m128i_i64[0] + 4LL * ((int)a2 - 1));
    if ( (unsigned int)v64 >= *(_DWORD *)(v63 + 64) )
      sub_B7BA0(v35);
    sub_122290(a4, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 528) + 8 * v64) + 32LL));
    v21 = sub_67E20(a1[20].m128i_i64[1], (__int64)a4);
    *a5 = 1;
  }
  else
  {
    if ( v32 )
      v37 = *(_QWORD *)(v32 + 24);
    else
      v37 = *(_QWORD *)(v21 + 32);
    sub_122290(a4, v37);
    sub_A3160(v21, a4, v31);
  }
  sub_64000(&v87, a3);
  v39 = *(_QWORD *)(a3 + 24);
  v89 = nullptr;
  v90 = 0;
  if ( v39 )
  {
    v89 = (void *)qalloc_or_throw(16 * v39, a3, 16 * v39, v38);
    *((_QWORD *)&v90 + 1) = v39;
    memcpy(v89, *(const void **)(a3 + 16), 16 * v39);
    *(_QWORD *)&v90 = v39;
  }
  if ( !(unsigned __int8)sub_BD640(a1, v21, &v87, (__int64)a4) )
  {
    *(_QWORD *)(*(_QWORD *)(a1[2].m128i_i64[1] + 24LL * (int)a2) + 8 * v76) = a4;
    sub_64190(a1[21].m128i_i64, *(_DWORD *)(v21 + 72));
    v62 = a1[13].m128i_i64[1];
    if ( v62 )
    {
      sub_BB120((_QWORD *)a1[13].m128i_i64[1]);
      j__qfree(v62);
    }
    v91 = 0;
    v92 = 0u;
    v93 = 0;
    if ( (unsigned __int8)sub_BEC40((__int64)a1, (__int64)&v91, v60, v61) )
    {
      if ( *((_QWORD *)&v92 + 1) )
      {
        *(_QWORD *)&v93 = 0;
        qfree(*((__int64 *)&v92 + 1));
      }
      qfree(v91);
      if ( v89 )
      {
        *(_QWORD *)&v90 = 0;
        qfree((__int64)v89);
      }
      qfree(v87);
      goto LABEL_27;
    }
    if ( !under_debugger )
      sub_383060(50049);
LABEL_128:
    BUG();
  }
  if ( *a5 )
  {
    if ( !under_debugger )
      sub_383060(50048);
    goto LABEL_128;
  }
  sub_A33C0(v21, (__int64)a4);
  if ( v89 )
  {
    *(_QWORD *)&v90 = 0;
    qfree((__int64)v89);
  }
  qfree(v87);
LABEL_26:
  v25 = 0;
LABEL_27:
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree((__int64)v85);
  }
  qfree(v84[0]);
  if ( src )
  {
    v83 = 0;
    qfree((__int64)src);
  }
  qfree(v81[0]);
LABEL_32:
  qfree(v79);
  return v25;
}
