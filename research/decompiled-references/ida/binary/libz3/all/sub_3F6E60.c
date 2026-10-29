__int64 __fastcall sub_3F6E60(__m128i *a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5)
{
  __int64 *v6; // rax
  __int64 *v7; // r14
  __int64 *v8; // rbp
  __int64 v9; // r15
  __m128i *v10; // rax
  __m128i v11; // xmm0
  __m128i *v12; // r13
  __int64 *v13; // r14
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 *v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // rsi
  bool v21; // zf
  _DWORD *v22; // rax
  __int64 v23; // r14
  __int64 v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // r12
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r13
  _DWORD *v30; // rax
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // r12
  unsigned int i; // r15d
  __int64 v35; // r13
  _QWORD *v36; // rax
  void *v37; // r13
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // r15
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // r13
  int v46; // eax
  unsigned __int64 v47; // r15
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // r13
  __int64 v51; // r13
  unsigned int v52; // r8d
  __int64 v53; // rax
  int v54; // [rsp+0h] [rbp-138h]
  int v55[2]; // [rsp+8h] [rbp-130h]
  __int64 *v56; // [rsp+10h] [rbp-128h]
  __int64 v57; // [rsp+18h] [rbp-120h]
  __int64 *v58; // [rsp+20h] [rbp-118h]
  __int64 v59; // [rsp+28h] [rbp-110h]
  unsigned int v60; // [rsp+34h] [rbp-104h]
  unsigned int *v62; // [rsp+48h] [rbp-F0h]
  __int64 v64; // [rsp+60h] [rbp-D8h]
  unsigned int v65; // [rsp+60h] [rbp-D8h]
  __int64 v66; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int *v69; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v70; // [rsp+90h] [rbp-A8h] BYREF
  __int64 *v71; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-90h]
  __m128i v74; // [rsp+B0h] [rbp-88h] BYREF
  int v75[4]; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v76; // [rsp+D0h] [rbp-68h] BYREF
  void *v77; // [rsp+D8h] [rbp-60h]
  __int64 v78; // [rsp+E8h] [rbp-50h]
  void *ptr; // [rsp+F0h] [rbp-48h]

  v58 = a3;
  v57 = a5;
  v68 = a1->m128i_i64[0];
  sub_3EF850(a1->m128i_i64, a4, (int)a3, a2);
  v59 = a1->m128i_i64[0];
  v6 = (__int64 *)v58[1];
  v7 = v6;
  if ( !v6 )
  {
    v8 = nullptr;
    v62 = nullptr;
    goto LABEL_62;
  }
  v60 = 0;
  v8 = nullptr;
  v62 = nullptr;
  v56 = &v68;
  while ( v60 < *((_DWORD *)v6 - 1) )
  {
    v9 = v6[v60];
    v10 = (__m128i *)sub_186B270(0xB0u);
    v11 = _mm_loadl_epi64(a1);
    v12 = v10;
    *v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, v11);
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v13 = (__int64 *)a1[6].m128i_i64[1];
    v10[1].m128i_i64[1] = v9;
    v10[1].m128i_i64[0] = (__int64)&off_1C4E7B8;
    v10[2].m128i_i64[0] = (__int64)v10[1].m128i_i64;
    v10[3].m128i_i64[1] = 0;
    v10[4].m128i_i64[0] = 0;
    v10[2].m128i_i64[1] = (__int64)&off_1C62200;
    v10[5].m128i_i64[0] = 0;
    v10[5].m128i_i64[1] = 0;
    v10[6].m128i_i64[0] = (__int64)&off_1C62200;
    v10[7].m128i_i64[0] = 0;
    v10[7].m128i_i64[1] = 0;
    v10[8].m128i_i64[1] = 0;
    v10[9].m128i_i64[0] = 0;
    v10[10].m128i_i64[0] = 0;
    v10[10].m128i_i8[8] = 1;
    v10[9].m128i_i64[1] = v11.m128i_i64[0];
    if ( v10 != (__m128i *)v13 )
    {
      if ( v13 )
      {
        sub_2334C0(v13 + 19);
        v14 = (void *)v13[18];
        v13[12] = (__int64)&off_1C62200;
        if ( v14 )
          sub_186B220(v14);
        v15 = (void *)v13[15];
        if ( v15 )
          sub_186B220(v15);
        v16 = (void *)v13[11];
        v13[5] = (__int64)&off_1C62200;
        if ( v16 )
          sub_186B220(v16);
        v17 = (void *)v13[8];
        if ( v17 )
          sub_186B220(v17);
        sub_3E5D00(*v13, v13[1]);
        sub_186B220(v13);
      }
      a1[6].m128i_i64[1] = (__int64)v12;
    }
    sub_15B9FF0(v57);
    if ( v8 )
    {
      v18 = v8;
      v19 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
      if ( (unsigned __int64)v8 < v19 )
      {
        do
        {
          while ( 1 )
          {
            v20 = *v18;
            if ( *v18 )
            {
              v21 = (*(_DWORD *)(v20 + 8))-- == 1;
              if ( v21 )
                break;
            }
            if ( (unsigned __int64)++v18 >= v19 )
              goto LABEL_25;
          }
          sub_15D7BC0(v59, v20);
          ++v18;
        }
        while ( (unsigned __int64)v18 < v19 );
      }
LABEL_25:
      *((_DWORD *)v8 - 1) = 0;
    }
    v22 = *(_DWORD **)(sub_15D1F10(v9) + 24);
    if ( v22 && *v22 == 5 && v22[1] == 1 )
    {
      sub_15B8F20(v75, a1->m128i_i64[0]);
      sub_3F00E0(a1->m128i_i64, a4, (__int64)v75);
      sub_15BA200(v75);
    }
    v23 = a1->m128i_i64[0];
    v76 = 0;
    v77 = nullptr;
    v78 = 0;
    v24 = *a4;
    ptr = nullptr;
    *(_QWORD *)v75 = &off_1C62200;
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v25 = (_QWORD *)sub_186B270(0x18u);
    v25[1] = v24;
    v26 = (__int64)(v25 + 1);
    *v25 = 0x100000002LL;
LABEL_31:
    if ( v26 )
    {
      while ( 1 )
      {
        v27 = *(_DWORD *)(v26 - 4);
        if ( !v27 )
          break;
        v28 = (unsigned int)(v27 - 1);
        v29 = *(_QWORD *)(v26 + 8 * v28);
        *(_DWORD *)(v26 - 4) = v28;
        if ( v29 )
        {
          v21 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v21 )
            sub_15D7BC0(v23, v29);
        }
        if ( !(unsigned __int8)sub_15D37A0(v75, v29) )
        {
          sub_15D0A90(v75, v29, 1);
          if ( !*(_WORD *)(v29 + 4) )
          {
            v30 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL);
            if ( v30 && !*v30 && (unsigned int)(v30[1] - 5) <= 1 )
            {
              if ( *(_DWORD *)(v29 + 24) )
              {
                v52 = 0;
                v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v26);
                do
                {
                  v53 = *(_QWORD *)(v29 + 8LL * v52 + 32);
                  v67 = v53;
                  if ( v53 )
                    ++*(_DWORD *)(v53 + 8);
                  v65 = v52;
                  v74 = v11;
                  sub_3E6950((unsigned int **)&v74.m128i_i64[1], &v67);
                  v23 = v74.m128i_i64[0];
                  v11 = _mm_load_si128(&v74);
                  v26 = v74.m128i_i64[1];
                  v52 = v65 + 1;
                }
                while ( v65 + 1 < *(_DWORD *)(v29 + 24) );
              }
              goto LABEL_31;
            }
            v66 = v29;
            ++*(_DWORD *)(v29 + 8);
            v70 = v59;
            v71 = v8;
            sub_3E6540(&v71, &v66);
            v8 = v71;
            v59 = v70;
          }
        }
      }
    }
    sub_15D08E0(v75);
    *(_QWORD *)v75 = &off_1C62200;
    if ( ptr )
      sub_186B220(ptr);
    if ( v77 )
      sub_186B220(v77);
    v74.m128i_i64[0] = v23;
    v74.m128i_i64[1] = v26;
    sub_2334C0(v74.m128i_i64);
    v31 = a1->m128i_i64[0];
    v71 = v8;
    v70 = v59;
    v72 = 0;
    v73 = v31;
    v32 = sub_3F2750((__int64)a1, a2, (__int64)&v70, v57, &v72, *(double *)v11.m128i_i64);
    v33 = v72;
    v64 = v73;
    if ( v32 )
    {
      sub_1694970(v75, a1->m128i_i64[0]);
      if ( v8 )
      {
        for ( i = 0; i < *((_DWORD *)v8 - 1); ++i )
        {
          v67 = 0;
          v35 = v8[i];
          v66 = 0;
          sub_15B97F0(v57, v35, &v66, &v67);
          if ( v66 )
            sub_1692DB0(v75, v35, v66, 0, 0);
        }
      }
      v36 = (_QWORD *)a1[6].m128i_i64[1];
      v67 = 0;
      v66 = 0;
      sub_15B97F0(v57, *v36, &v66, &v67);
      if ( v66 )
        sub_1692DB0(v75, *(_QWORD *)a1[6].m128i_i64[1], v66, 0, 0);
      v37 = (void *)sub_1434DE0(a1->m128i_i64[0], 0);
      (*(void (__fastcall **)(void *, int *))(*(_QWORD *)v37 + 24LL))(v37, v75);
      v41 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v37 + 16LL))(v37);
      v42 = *a4;
      if ( *a4 )
      {
        ++*(_DWORD *)(v42 + 8);
        sub_1435270((_DWORD)v37, v42, (_DWORD)a4, v38, v39, v40, v54, (__int64)v75, (__int64)v56, v57, (__int64)v58);
        v21 = (*(_DWORD *)(v42 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v41, v42);
      }
      else
      {
        sub_1435270((_DWORD)v37, 0, (_DWORD)a4, v38, v39, v40, v54, (__int64)v75, (__int64)v56, v57, (__int64)v58);
      }
      (**(void (__fastcall ***)(void *))v37)(v37);
      sub_186B220(v37);
      sub_1695230(*(_QWORD *)v55);
      if ( !v33 )
        goto LABEL_61;
      v43 = sub_15E1B70(a1->m128i_i64[0]);
      v44 = v43;
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      sub_3E5D20(*a4, a4[1]);
      *a4 = v44;
      v21 = (*(_DWORD *)(v33 + 8))-- == 1;
      if ( !v21 )
        goto LABEL_61;
    }
    else
    {
      if ( (unsigned int)sub_180B130(a1) > 1 )
      {
        if ( (unsigned __int8)sub_186A530(*(double *)v11.m128i_i64) )
        {
          sub_186A4C0(*(double *)v11.m128i_i64);
          v50 = sub_180B150(a1, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v75, v9, a1->m128i_i64[0], 0, 0, 0);
          sub_160E8B0(v50, v75);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(&v76);
          sub_186A500(&v76, "\n");
        }
        else
        {
          v51 = sub_180B150(a1, a2);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1606360(v75, v9, a1->m128i_i64[0], 0, 0, 0);
          sub_160E8B0(v51, v75);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18572D0(&v76);
        }
      }
      ++*(_DWORD *)(v9 + 8);
      if ( !v62 || (v46 = *(v62 - 1), v46 == *(v62 - 2)) )
      {
        v69 = v62;
        sub_3A6B20(&v69);
        v62 = v69;
        v46 = *(v69 - 1);
      }
      *(_QWORD *)&v62[2 * v46] = v9;
      *(v62 - 1) = v46 + 1;
      if ( !v33 )
        goto LABEL_61;
      v21 = (*(_DWORD *)(v33 + 8))-- == 1;
      if ( !v21 )
        goto LABEL_61;
    }
    sub_15D7BC0(v64, v33);
LABEL_61:
    ++v60;
    v6 = (__int64 *)v58[1];
    v7 = v6;
    if ( !v6 )
      goto LABEL_62;
  }
  v47 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
  if ( (unsigned __int64)v6 < v47 )
  {
    do
    {
      while ( 1 )
      {
        v48 = *v7;
        if ( *v7 )
        {
          v49 = *v58;
          v21 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( (unsigned __int64)++v7 >= v47 )
          goto LABEL_77;
      }
      sub_15D7BC0(v49, v48);
      ++v7;
    }
    while ( (unsigned __int64)v7 < v47 );
LABEL_77:
    v6 = (__int64 *)v58[1];
  }
  if ( v6 )
    *((_DWORD *)v6 - 1) = 0;
LABEL_62:
  v69 = v62;
  sub_3EE030((__int64)v58, (__int64)&v68);
  sub_14B9B80(&a1[1].m128i_u64[1], a4);
  v71 = v8;
  v70 = v59;
  sub_2B4F40(&v70);
  return sub_2B4F40(&v68);
}

