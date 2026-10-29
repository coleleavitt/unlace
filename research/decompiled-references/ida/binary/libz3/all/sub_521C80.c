char *__fastcall sub_521C80(
        __int64 **a1,
        __int64 a2,
        double a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7,
        unsigned int *a8,
        char *a9,
        __int64 a10)
{
  __int64 v12; // r9
  int v13; // ecx
  int v14; // eax
  int v15; // esi
  int v16; // edx
  int v17; // eax
  char *v18; // rcx
  int v19; // esi
  __int64 v20; // rax
  unsigned int v21; // edx
  char *v22; // rdi
  __int64 v23; // rdx
  char *v24; // r8
  char *i; // rax
  __int64 v26; // rdx
  int v27; // eax
  int v28; // r14d
  _QWORD *v29; // rax
  __int64 *v30; // r13
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // esi
  int v34; // r15d
  __int64 v35; // rax
  int v36; // r11d
  __m128i *v37; // r12
  __m128i *v38; // r13
  __int64 v39; // r11
  __m128i v40; // xmm0
  __m128i *v41; // rdi
  __m128i *v42; // rax
  __m128i *v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // r15
  _QWORD *v52; // rdi
  __int64 v53; // rsi
  bool v54; // zf
  _QWORD *v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // r15
  __int64 v58; // rsi
  _QWORD *v59; // rdi
  __int64 v60; // rax
  unsigned int v61; // r8d
  int v62; // r9d
  _DWORD *v63; // rax
  __int8 *v64; // rax
  const __m128i *v65; // rax
  __m128i *v66; // r10
  __int64 v67; // rdx
  __m128i *v68; // rsi
  __int64 v69; // rdi
  __m128i *v70; // rdx
  __int64 v71; // [rsp+10h] [rbp-A0h]
  unsigned int v72; // [rsp+10h] [rbp-A0h]
  unsigned int v73; // [rsp+18h] [rbp-98h]
  int v74; // [rsp+18h] [rbp-98h]
  size_t v75; // [rsp+20h] [rbp-90h]
  __int64 v76; // [rsp+20h] [rbp-90h]
  __int64 v77; // [rsp+28h] [rbp-88h]
  __int64 v80; // [rsp+40h] [rbp-70h] BYREF
  _QWORD *v81; // [rsp+48h] [rbp-68h]
  __int128 v82; // [rsp+50h] [rbp-60h] BYREF
  _QWORD v83[10]; // [rsp+60h] [rbp-50h] BYREF

  if ( (unsigned int)sub_180B130(a1) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v49 = (_QWORD *)**a1;
      v50 = (__int64)(*a1 + 82);
      v80 = 0;
      v81 = v49;
      sub_62E310(v50, a2, &v80);
      sub_180B150(v50, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v51 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v82, v80, **a1, 0, 0, 0);
      sub_160E8B0(v51, &v82);
      std::__ostream_insert<char,std::char_traits<char>>();
      v52 = v83;
      sub_18572D0(v83);
      v53 = v80;
      if ( v80 )
      {
        v52 = v81;
        v54 = (*(_DWORD *)(v80 + 8))-- == 1;
        if ( v54 )
          sub_15D7BC0(v52, v53);
      }
      sub_186A500(v52, v53);
    }
    else
    {
      v55 = (_QWORD *)**a1;
      v56 = (__int64)(*a1 + 82);
      v80 = 0;
      v81 = v55;
      sub_62E310(v56, a2, &v80);
      sub_180B150(v56, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v57 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1606360(&v82, v80, **a1, 0, 0, 0);
      sub_160E8B0(v57, &v82);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v83);
      v58 = v80;
      if ( v80 )
      {
        v59 = v81;
        v54 = (*(_DWORD *)(v80 + 8))-- == 1;
        if ( v54 )
          sub_15D7BC0(v59, v58);
      }
    }
  }
  v12 = *a7;
  v13 = *(_DWORD *)(*a7 + 12);
  v14 = (*(_DWORD *)(a5 + 12) - v13) ^ (v13 << 8);
  v15 = (v13 - v14) << 10;
  v16 = v14 ^ ((v13 - v14) << 16);
  v17 = v14 - v13;
  v18 = (char *)a1[10];
  v19 = (v16 + v17) ^ v15;
  v20 = *((unsigned int *)a1 + 22);
  v21 = v20 - 1;
  v20 *= 24;
  v22 = &v18[v20];
  v23 = 24LL * (v19 & v21);
  v24 = &v18[v23];
  if ( v23 != v20 )
  {
    for ( i = &v18[v23]; v22 != i; i += 24 )
    {
      v26 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *((_DWORD *)i + 5) == v19 && v12 == v26 && a5 == *((_QWORD *)i + 1) )
        {
LABEL_28:
          v28 = *((_DWORD *)i + 4);
          goto LABEL_29;
        }
      }
      else if ( !v26 )
      {
        goto LABEL_9;
      }
    }
  }
  for ( ; v24 != v18; v18 += 24 )
  {
    v47 = *(_QWORD *)v18;
    if ( *(_QWORD *)v18 > 1u )
    {
      if ( *((_DWORD *)v18 + 5) == v19 && v12 == v47 && a5 == *((_QWORD *)v18 + 1) )
      {
        i = v18;
        goto LABEL_28;
      }
    }
    else if ( !v47 )
    {
      break;
    }
  }
LABEL_9:
  v27 = sub_51E070((__int64)a1, v12);
  *(_QWORD *)&v82 = 0;
  v28 = v27;
  v29 = (_QWORD *)sub_186B270(0x18u);
  v30 = a1[2];
  *(_QWORD *)&v82 = v29 + 1;
  v29[1] = *a7;
  *v29 = 0x100000002LL;
  v31 = sub_4DB200(&v82, a5, v28);
  sub_52C6B0(v30, v31);
  v32 = *a7;
  v33 = *(_DWORD *)(*a7 + 12);
  v34 = (((*(_DWORD *)(a5 + 12) - v33) ^ (v33 << 8) ^ ((v33 - ((*(_DWORD *)(a5 + 12) - v33) ^ (v33 << 8))) << 16))
       + ((*(_DWORD *)(a5 + 12) - v33) ^ (v33 << 8))
       - v33)
      ^ ((v33 - ((*(_DWORD *)(a5 + 12) - v33) ^ (v33 << 8))) << 10);
  v35 = *((unsigned int *)a1 + 22);
  if ( 3 * (int)v35 < (unsigned int)(4 * (*((_DWORD *)a1 + 23) + *((_DWORD *)a1 + 24))) )
  {
    v71 = *a7;
    v73 = 2 * v35;
    v75 = 24LL * (unsigned int)(2 * v35);
    v77 = v75;
    v60 = sub_186B270(v75);
    v61 = v73;
    v32 = v71;
    v37 = (__m128i *)v60;
    if ( v73 )
    {
      v62 = v73 - 1;
      if ( v73 - 1 <= 2 )
      {
        *(_DWORD *)(v60 + 20) = 0;
        *(_DWORD *)(v60 + 44) = 0;
        *(_OWORD *)v60 = 0;
        *(_OWORD *)(v60 + 24) = 0;
      }
      else
      {
        v63 = (_DWORD *)(v60 + 20);
        do
        {
          *v63 = 0;
          v63 += 24;
          *(_OWORD *)(v63 - 29) = 0;
          *(_OWORD *)(v63 - 23) = 0;
          *(_OWORD *)(v63 - 17) = 0;
          *(_OWORD *)(v63 - 11) = 0;
          *(v63 - 18) = 0;
          *(v63 - 12) = 0;
          *(v63 - 6) = 0;
        }
        while ( v63 != (_DWORD *)((char *)v37[6 * (v73 >> 2) + 1].m128i_i64 + 4) );
        v64 = &v37->m128i_i8[24 * (v73 & 0xFFFFFFFC)];
        if ( (v73 & 2) != 0 )
        {
          *((_DWORD *)v64 + 5) = 0;
          *((_DWORD *)v64 + 11) = 0;
          *(_OWORD *)v64 = 0;
          *(_OWORD *)(v64 + 24) = 0;
          if ( (v73 & 2) != 2 )
          {
            *((_QWORD *)v64 + 8) = 0;
            *((_OWORD *)v64 + 3) = 0;
          }
        }
      }
    }
    else
    {
      v62 = -1;
    }
    v65 = (const __m128i *)a1[10];
    v36 = v62;
    v66 = (__m128i *)((char *)v65 + 24 * *((unsigned int *)a1 + 22));
    v38 = (__m128i *)((char *)v37 + v75);
    if ( v65 != v66 )
    {
      do
      {
        if ( v65->m128i_i64[0] > 1uLL )
        {
          v67 = 24LL * (v65[1].m128i_i32[1] & (unsigned int)v62);
          v68 = (__m128i *)((char *)v37 + v67);
          if ( v75 == v67 )
          {
LABEL_72:
            if ( v37 == v68 )
            {
LABEL_85:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v69 = a5;
            v70 = v37;
            while ( v70->m128i_i64[0] )
            {
              v70 = (__m128i *)((char *)v70 + 24);
              if ( v68 == v70 )
                goto LABEL_85;
            }
          }
          else
          {
            v69 = a5;
            v70 = (__m128i *)((char *)v37 + v67);
            while ( v70->m128i_i64[0] )
            {
              v70 = (__m128i *)((char *)v70 + 24);
              if ( v38 == v70 )
                goto LABEL_72;
            }
          }
          a5 = v69;
          *v70 = _mm_loadu_si128(v65);
          v70[1].m128i_i64[0] = v65[1].m128i_i64[0];
        }
        v65 = (const __m128i *)((char *)v65 + 24);
      }
      while ( v66 != v65 );
      v66 = (__m128i *)a1[10];
    }
    if ( v66 )
    {
      v72 = v73;
      v74 = v62;
      v76 = v32;
      sub_186B220(v66);
      v61 = v72;
      v36 = v74;
      v32 = v76;
    }
    a1[10] = (__int64 *)v37;
    *((_DWORD *)a1 + 22) = v61;
    *((_DWORD *)a1 + 24) = 0;
  }
  else
  {
    v36 = v35 - 1;
    v37 = (__m128i *)a1[10];
    v77 = 24 * v35;
    v38 = (__m128i *)((char *)v37 + 24 * v35);
  }
  v39 = v34 & (unsigned int)v36;
  v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)(unsigned __int64)a5);
  v41 = (__m128i *)((char *)v37 + 24 * v39);
  if ( 24 * v39 == v77 )
  {
    v43 = nullptr;
LABEL_19:
    if ( v41 == v37 )
    {
LABEL_81:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v45 = v37->m128i_i64[0];
      if ( v37->m128i_i64[0] > 1uLL )
      {
        if ( v37[1].m128i_i32[1] == v34 && v32 == v45 && a5 == v37->m128i_i64[1] )
        {
          v37[1].m128i_i32[0] = v28;
          v37[1].m128i_i32[1] = v34;
          *v37 = v40;
          goto LABEL_49;
        }
      }
      else
      {
        if ( !v45 )
        {
          if ( !v43 )
          {
            v43 = v37;
            goto LABEL_84;
          }
LABEL_83:
          --*((_DWORD *)a1 + 24);
          goto LABEL_84;
        }
        v43 = v37;
      }
      v37 = (__m128i *)((char *)v37 + 24);
      if ( v41 == v37 )
        goto LABEL_81;
    }
  }
  v42 = (__m128i *)((char *)v37 + 24 * v39);
  v43 = nullptr;
  while ( 1 )
  {
    while ( 1 )
    {
      v44 = v42->m128i_i64[0];
      if ( v42->m128i_i64[0] <= 1uLL )
        break;
      if ( v42[1].m128i_i32[1] == v34 && v32 == v44 && a5 == v42->m128i_i64[1] )
      {
        v42[1].m128i_i32[0] = v28;
        v42[1].m128i_i32[1] = v34;
        *v42 = v40;
        goto LABEL_49;
      }
      v42 = (__m128i *)((char *)v42 + 24);
      if ( v42 == v38 )
        goto LABEL_19;
    }
    if ( !v44 )
      break;
    v43 = v42;
    v42 = (__m128i *)((char *)v42 + 24);
    if ( v42 == v38 )
      goto LABEL_19;
  }
  if ( v43 )
    goto LABEL_83;
  v43 = v42;
LABEL_84:
  v43[1].m128i_i32[0] = v28;
  v43[1].m128i_i32[1] = v34;
  *v43 = v40;
  ++*((_DWORD *)a1 + 23);
LABEL_49:
  if ( (_QWORD)v82 )
    sub_186B220((void *)(v82 - 8));
LABEL_29:
  if ( a6 == -1 )
  {
    *a8 = v28;
    return (char *)a8;
  }
  else
  {
    v48 = **a1;
    v83[0] = 0;
    v83[2] = 0;
    v83[1] = v48;
    v82 = 0;
    sub_520C70((__int64)a1, a6, v28, (int **)&v82, a8, *a9, a10);
    *a9 = 1;
    return a9;
  }
}

