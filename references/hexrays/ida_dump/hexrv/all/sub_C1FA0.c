__int64 __fastcall sub_C1FA0(__m128i *a1, __int64 a2, __int64 a3, _QWORD *a4, _BYTE *a5)
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
  __int64 v52; // rdi
  __int64 v53; // r13
  char v54; // r13
  __int64 v55; // rbp
  __int64 v56; // rdx
  __int64 v57; // rax
  _QWORD *v59; // [rsp+8h] [rbp-180h]
  size_t v60; // [rsp+8h] [rbp-180h]
  size_t n; // [rsp+10h] [rbp-178h]
  int na; // [rsp+10h] [rbp-178h]
  __int64 nc; // [rsp+10h] [rbp-178h]
  __int64 nb; // [rsp+10h] [rbp-178h]
  __int64 v65; // [rsp+18h] [rbp-170h]
  __int64 v69; // [rsp+40h] [rbp-148h]
  __int64 v70; // [rsp+58h] [rbp-130h]
  _QWORD *v71; // [rsp+68h] [rbp-120h]
  __int64 v72; // [rsp+70h] [rbp-118h] BYREF
  __int64 v73; // [rsp+78h] [rbp-110h]
  void *v74[2]; // [rsp+80h] [rbp-108h] BYREF
  void *src; // [rsp+90h] [rbp-F8h] BYREF
  __int64 v76; // [rsp+98h] [rbp-F0h]
  __int64 v77[2]; // [rsp+B0h] [rbp-D8h] BYREF
  void *v78; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v79; // [rsp+C8h] [rbp-C0h]
  __int64 v80; // [rsp+E0h] [rbp-A8h] BYREF
  int v81; // [rsp+E8h] [rbp-A0h]
  void *v82; // [rsp+F0h] [rbp-98h]
  __int128 v83; // [rsp+F8h] [rbp-90h]
  __int64 v84; // [rsp+110h] [rbp-78h] BYREF
  __int128 v85; // [rsp+118h] [rbp-70h] BYREF
  __int128 v86; // [rsp+128h] [rbp-60h]
  unsigned __int64 v87; // [rsp+138h] [rbp-50h]
  char v88; // [rsp+140h] [rbp-48h]
  unsigned __int64 v89; // [rsp+148h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  v6 = a1[20].m128i_i64[1];
  v69 = a2 >> 32;
  v72 = 0;
  v73 = 0;
  v65 = sub_10C420(*(_QWORD *)(v6 + 784), 0);
  if ( !v65 )
  {
    if ( !under_debugger )
      sub_37DDE0(50446);
    goto LABEL_128;
  }
  n = 0;
  ++*(_DWORD *)(v65 + 24);
  if ( a1[14].m128i_i32[0] > 0 )
  {
    while ( 1 )
    {
      v59 = (_QWORD *)(*(_QWORD *)v65 + 24LL * *(int *)(a1[1].m128i_i64[0] + 4 * n));
      v7 = (_QWORD *)*v59;
      if ( *v59 )
      {
        if ( v59[1] )
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
      v84 = 0;
      v85 = 0u;
      v86 = 0;
      sub_FF8A0(v8 + 3, v10, &v84);
      if ( (unsigned __int8)sub_60400((_QWORD *)a3, &v84) || (unsigned __int8)sub_313370(a3 + 16, (char *)&v85 + 8) )
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
              sub_5FE10(&v72, v15);
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
        if ( *((_QWORD *)&v85 + 1) )
        {
          *(_QWORD *)&v86 = 0;
          qfree(*((_QWORD *)&v85 + 1));
        }
      }
      else if ( *((_QWORD *)&v85 + 1) )
      {
        *(_QWORD *)&v86 = 0;
        qfree(*((_QWORD *)&v85 + 1));
      }
      qfree(v84);
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
              if ( *v59 != v27 )
                goto LABEL_6;
              goto LABEL_19;
            }
            v25 = (_QWORD *)v27;
          }
        }
        v8 = v25;
        if ( (_QWORD *)*v59 == v25 )
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
        if ( (_QWORD *)*v59 == v8 )
          goto LABEL_19;
      }
    }
  }
LABEL_20:
  sub_100950(v65);
  v19 = a1[20].m128i_i64[1];
  v20 = *(unsigned int *)(a1[1].m128i_i64[0] + 4LL * (int)a2);
  if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 64) )
    sub_B36E0(v65);
  v21 = *(_QWORD *)(*(_QWORD *)(v19 + 528) + 8 * v20);
  v60 = (size_t)a4;
  if ( !a4 )
  {
    v60 = *(_QWORD *)(*(_QWORD *)(a1[2].m128i_i64[1] + 24LL * (int)a2) + 8 * v69);
    if ( !v60 )
    {
      v23 = 0;
      goto LABEL_32;
    }
  }
  sub_1201C0(v74, *(_QWORD *)(v19 + 520), v60, 1);
  sub_5FC80(v77, a3);
  v22 = *(_QWORD *)(a3 + 24);
  v78 = nullptr;
  v79 = 0;
  if ( v22 )
  {
    v78 = (void *)qalloc_or_throw(16 * v22);
    *((_QWORD *)&v79 + 1) = v22;
    memcpy(v78, *(const void **)(a3 + 16), 16 * v22);
    *(_QWORD *)&v79 = v22;
  }
  sub_5FF00(v77, &a1[14].m128i_i64[1]);
  sub_311BB0(&v78, &a1[15].m128i_u64[1]);
  sub_311BB0(&v78, a1[20].m128i_i64[1] + 232);
  if ( !(unsigned __int8)sub_604A0(v74, v77) || !(unsigned __int8)sub_312E40(&v78, &src) )
  {
    if ( !a4 )
      goto LABEL_26;
    if ( !under_debugger )
      sub_37DDE0(50047);
    goto LABEL_128;
  }
  if ( !(unsigned __int8)sub_60500(&v72) )
  {
    v36 = sub_10BE80(*(_QWORD *)(a1[20].m128i_i64[1] + 784), 0);
    v37 = (__int64 *)v36;
    if ( !v36 )
    {
      if ( !under_debugger )
        sub_37DDE0(50446);
      goto LABEL_128;
    }
    ++*(_DWORD *)(v36 + 24);
    for ( i = sub_605E0(&v72, 0); ; i = sub_605E0(&v72, v39 + 1) )
    {
      v39 = i;
      if ( i == (_DWORD)v73 )
        break;
      v40 = a1[20].m128i_i64[1];
      if ( i >= *(_DWORD *)(v40 + 64) )
        sub_B36E0(&v72);
      v41 = *(_QWORD *)(*(_QWORD *)(v40 + 528) + 8LL * i);
      v70 = v41;
      if ( *(_DWORD *)(v41 + 72) != *(_DWORD *)(v21 + 72) )
      {
        v42 = *v37;
        sub_5FC80(&v80, v41 + 160);
        sub_60380(&v80, (__int64 *)a3);
        for ( na = sub_605E0(&v80, 0); na != v81; na = sub_605E0(&v80, na + 1) )
        {
          v84 = 0;
          *(_QWORD *)&v86 = na;
          BYTE8(v86) = 1;
          v87 = 0xFFFFFFFF00000001LL;
          v88 = 1;
          v85 = 0;
          v43 = (_QWORD *)sub_100930(v42 + 24LL * (int)v39, &v84);
          if ( v84 )
          {
            v71 = v43;
            *(_QWORD *)&v85 = 0;
            qfree(v84);
            v43 = v71;
          }
          if ( !v43 )
            goto LABEL_90;
          v44 = v43[1];
          if ( !v44 )
            goto LABEL_90;
          v45 = a1[14].m128i_i32[0];
          if ( v45 <= 0 )
            goto LABEL_90;
          v46 = (int *)*v43;
          v47 = v45;
          v48 = 0;
          v49 = *v46;
          v50 = a1[1].m128i_i64[0] + 4 * v47;
          while ( 1 )
          {
            v51 = (_DWORD *)a1[1].m128i_i64[0];
            while ( *v51 != v49 )
            {
              if ( ++v51 == (_DWORD *)v50 )
                goto LABEL_90;
            }
            if ( ++v48 >= v44 )
              break;
            v49 = v46[v48];
          }
          if ( !sub_605B0(v74, na) )
          {
LABEL_90:
            v52 = v80;
            goto LABEL_91;
          }
        }
        sub_5FC80(&v84, (__int64)v74);
        v53 = v76;
        *((_QWORD *)&v85 + 1) = 0;
        v86 = 0;
        if ( v76 )
        {
          nc = 16 * v76;
          *((_QWORD *)&v85 + 1) = qalloc_or_throw(16 * v76);
          *((_QWORD *)&v86 + 1) = v53;
          memcpy(*((void **)&v85 + 1), src, nc);
          *(_QWORD *)&v86 = v53;
        }
        v54 = sub_C1920(a1, v70, *(_QWORD *)(v70 + 48), (_DWORD *)v60, &v84);
        if ( *((_QWORD *)&v85 + 1) )
        {
          *(_QWORD *)&v86 = 0;
          qfree(*((_QWORD *)&v85 + 1));
        }
        qfree(v84);
        v52 = v80;
        if ( !v54 )
        {
LABEL_91:
          qfree(v52);
          sub_100950(v37);
          goto LABEL_26;
        }
        qfree(v80);
      }
    }
    sub_100950(v37);
  }
  v28 = sub_B8EC0((__int64)a1, a2, 1);
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
    v30 = *(_QWORD *)(v60 + 8);
  }
  sub_5FC80(&v84, (__int64)v74);
  v31 = v76;
  *((_QWORD *)&v85 + 1) = 0;
  v86 = 0;
  if ( v76 )
  {
    nb = 16 * v76;
    *((_QWORD *)&v85 + 1) = qalloc_or_throw(16 * v76);
    *((_QWORD *)&v86 + 1) = v31;
    memcpy(*((void **)&v85 + 1), src, nb);
    *(_QWORD *)&v86 = v31;
  }
  v23 = sub_C1920(a1, v21, v30, (_DWORD *)v60, &v84);
  if ( *((_QWORD *)&v85 + 1) )
  {
    *(_QWORD *)&v86 = 0;
    qfree(*((_QWORD *)&v85 + 1));
  }
  v32 = v84;
  qfree(v84);
  if ( !(_BYTE)v23 )
    goto LABEL_26;
  if ( !a4 )
    goto LABEL_27;
  v33 = *(_DWORD *)(v21 + 76);
  if ( v33 == 6 )
    goto LABEL_26;
  if ( v33 == 1 )
  {
    v56 = a1[20].m128i_i64[1];
    v57 = *(unsigned int *)(a1[1].m128i_i64[0] + 4LL * ((int)a2 - 1));
    if ( (unsigned int)v57 >= *(_DWORD *)(v56 + 64) )
      sub_B36E0(v32);
    sub_11DDD0(a4, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 528) + 8 * v57) + 32LL));
    v21 = sub_63AA0(a1[20].m128i_i64[1], (__int64)a4);
    *a5 = 1;
  }
  else
  {
    if ( v30 )
      v34 = *(_QWORD *)(v30 + 24);
    else
      v34 = *(_QWORD *)(v21 + 32);
    sub_11DDD0(a4, v34);
    sub_9ECA0(v21, a4, v29);
  }
  sub_5FC80(&v80, a3);
  v35 = *(_QWORD *)(a3 + 24);
  v82 = nullptr;
  v83 = 0;
  if ( v35 )
  {
    v82 = (void *)qalloc_or_throw(16 * v35);
    *((_QWORD *)&v83 + 1) = v35;
    memcpy(v82, *(const void **)(a3 + 16), 16 * v35);
    *(_QWORD *)&v83 = v35;
  }
  if ( !(unsigned __int8)sub_B9180(a1, v21, &v80, (__int64)a4) )
  {
    *(_QWORD *)(*(_QWORD *)(a1[2].m128i_i64[1] + 24LL * (int)a2) + 8 * v69) = a4;
    sub_5FE10(a1[21].m128i_i64, *(_DWORD *)(v21 + 72));
    v55 = a1[13].m128i_i64[1];
    if ( v55 )
    {
      sub_B6C60((_QWORD *)a1[13].m128i_i64[1]);
      j__qfree(v55);
    }
    v84 = 0;
    v85 = 0u;
    v86 = 0;
    if ( (unsigned __int8)sub_BA780((__int64)a1, (__int64)&v84) )
    {
      if ( *((_QWORD *)&v85 + 1) )
      {
        *(_QWORD *)&v86 = 0;
        qfree(*((_QWORD *)&v85 + 1));
      }
      qfree(v84);
      if ( v82 )
      {
        *(_QWORD *)&v83 = 0;
        qfree(v82);
      }
      qfree(v80);
      goto LABEL_27;
    }
    if ( !under_debugger )
      sub_37DDE0(50049);
LABEL_128:
    BUG();
  }
  if ( *a5 )
  {
    if ( !under_debugger )
      sub_37DDE0(50048);
    goto LABEL_128;
  }
  sub_9EF00(v21, (__int64)a4);
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    qfree(v82);
  }
  qfree(v80);
LABEL_26:
  v23 = 0;
LABEL_27:
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  qfree(v77[0]);
  if ( src )
  {
    v76 = 0;
    qfree(src);
  }
  qfree(v74[0]);
LABEL_32:
  qfree(v72);
  return v23;
}
