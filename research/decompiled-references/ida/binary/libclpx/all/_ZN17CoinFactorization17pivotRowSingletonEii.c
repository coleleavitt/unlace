__int64 __fastcall CoinFactorization::pivotRowSingleton(CoinFactorization *this, int a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // r11
  int v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 i; // rax
  int v13; // ebx
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // r11
  int v17; // ebp
  __int64 v18; // r14
  __int64 v19; // r15
  bool v20; // cc
  int v21; // r8d
  __int64 v22; // rbx
  double v23; // xmm0_8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r11
  __int64 v27; // rsi
  int *v28; // r12
  int v29; // ebp
  __int64 v30; // rsi
  _DWORD *v31; // rbx
  __int64 v32; // rsi
  int v33; // eax
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 v36; // rbx
  __int64 v37; // rsi
  int v38; // ebx
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // r12
  int *v42; // rbp
  __int64 v43; // rsi
  _DWORD *v44; // r9
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // r11
  __int64 v48; // rsi
  int *v49; // r12
  int v50; // ebp
  __int64 v51; // rsi
  _DWORD *v52; // rbx
  __int64 v53; // rsi
  int v54; // eax
  __int64 v55; // r14
  __int64 v56; // r13
  __int64 v57; // rbx
  __int64 v58; // rsi
  int v59; // ebx
  __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // r12
  int *v63; // rbp
  __int64 v64; // rsi
  _DWORD *v65; // r9
  __int64 v66; // r11
  __int64 v67; // rbx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rsi
  int v71; // r8d
  __int64 v72; // rsi
  __int64 v73; // rbx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r15
  __int64 v77; // rax
  _DWORD *v78; // r8
  __int64 v79; // rbx
  __int64 v80; // rdx
  int *v81; // rax
  int v82; // esi
  int *v83; // rdx
  int *v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rax
  _BYTE *v87; // rbp
  char v88; // si
  std::ostream *v89; // rax
  __int64 (__fastcall *v90)(__int64, unsigned int); // rax
  __int64 v91; // [rsp+0h] [rbp-E8h]
  __int64 v92; // [rsp+0h] [rbp-E8h]
  __int64 v93; // [rsp+8h] [rbp-E0h]
  __int64 v94; // [rsp+8h] [rbp-E0h]
  __int64 v95; // [rsp+10h] [rbp-D8h]
  __int64 v96; // [rsp+18h] [rbp-D0h]
  __int64 v97; // [rsp+20h] [rbp-C8h]
  __int64 v98; // [rsp+30h] [rbp-B8h]
  __int64 v99; // [rsp+30h] [rbp-B8h]
  __int64 v100; // [rsp+38h] [rbp-B0h]
  __int64 v101; // [rsp+38h] [rbp-B0h]
  __int64 v102; // [rsp+40h] [rbp-A8h]
  __int64 v103; // [rsp+40h] [rbp-A8h]
  __int64 v104; // [rsp+48h] [rbp-A0h]
  __int64 v105; // [rsp+50h] [rbp-98h]
  __int64 v106; // [rsp+50h] [rbp-98h]
  __int64 v107; // [rsp+58h] [rbp-90h]
  int v108; // [rsp+64h] [rbp-84h]
  int v109; // [rsp+68h] [rbp-80h]
  int v110; // [rsp+6Ch] [rbp-7Ch]
  _DWORD *v111; // [rsp+70h] [rbp-78h]
  __int64 v112; // [rsp+78h] [rbp-70h]
  __int64 v113; // [rsp+80h] [rbp-68h]
  __int64 v114; // [rsp+88h] [rbp-60h]
  __int64 v115; // [rsp+90h] [rbp-58h]
  __int64 v116; // [rsp+98h] [rbp-50h]
  __int64 v117; // [rsp+A0h] [rbp-48h]
  int v119; // [rsp+ACh] [rbp-3Ch]

  v3 = 0;
  v4 = *((_QWORD *)this + 81);
  v5 = *((_QWORD *)this + 78);
  v6 = *((_QWORD *)this + 23);
  v7 = *((_QWORD *)this + 50);
  if ( *((int *)this + 164) <= -2 )
    v4 = 0;
  v8 = *(_DWORD *)(v4 + 4LL * a3);
  v9 = *((_QWORD *)this + 26);
  if ( *((int *)this + 54) <= -2 )
    v9 = 0;
  v110 = v8;
  v96 = v9;
  v10 = *((_QWORD *)this + 29);
  if ( *((int *)this + 60) <= -2 )
    v10 = 0;
  v111 = (_DWORD *)(v10 + 4LL * a3);
  v108 = *v111 - 1;
  v11 = v8;
  if ( *((int *)this + 158) <= -2 )
    v5 = 0;
  v114 = v5;
  v100 = v5 + 4LL * v8;
  if ( *((int *)this + 48) <= -2 )
    v6 = 0;
  v97 = v6;
  if ( *((int *)this + 102) <= -2 )
    v7 = 0;
  v112 = v7;
  if ( *((int *)this + 108) > -2 )
    v3 = *((_QWORD *)this + 53);
  v113 = v3;
  if ( *(_DWORD *)(v5 + 4LL * v8) == a2 )
  {
    i = v8;
  }
  else
  {
    for ( i = v8 + 1LL; ; ++i )
    {
      ++v8;
      if ( a2 == *(_DWORD *)(v5 + 4 * (i + 1) - 4) )
        break;
    }
  }
  v13 = *((_DWORD *)this + 176);
  v109 = v13;
  if ( v13 + v108 <= *((_DWORD *)this + 177) )
  {
    v15 = *((_QWORD *)this + 95);
    v16 = *((_QWORD *)this + 89);
    v17 = *((_DWORD *)this + 176);
    v18 = *((_QWORD *)this + 92);
    v19 = *((_QWORD *)this + 63);
    if ( *((int *)this + 192) <= -2 )
      v15 = 0;
    if ( *((int *)this + 180) <= -2 )
      v16 = 0;
    v20 = *((_DWORD *)this + 186) <= -2;
    *(_DWORD *)(v15 + 4LL * *((int *)this + 15)) = v13;
    v115 = v16;
    v21 = *((_DWORD *)this + 15) + 1;
    if ( v20 )
      v18 = 0;
    v117 = v18;
    *((_DWORD *)this + 15) = v21;
    *(_DWORD *)(v15 + 4LL * v21) = v13 + v108;
    *((_DWORD *)this + 176) += v108;
    v22 = *((_QWORD *)this + 75);
    if ( *((int *)this + 152) <= -2 )
      v22 = 0;
    v23 = 1.0 / *(double *)(v22 + 8 * i);
    v24 = *((_QWORD *)this + 69);
    v116 = v22;
    if ( *((int *)this + 140) <= -2 )
      v24 = 0;
    if ( *((int *)this + 128) <= -2 )
      v19 = 0;
    *(double *)(v24 + 8LL * *((int *)this + 14)) = v23;
    v95 = *((_QWORD *)this + 38);
    v93 = *((_QWORD *)this + 35);
    v91 = *((_QWORD *)this + 41);
    if ( v110 < v8 )
    {
      v119 = v8;
      v105 = v22 + 8 * v11;
      v25 = 0;
      v102 = 4LL * (unsigned int)(v8 + ~v110) + 4;
      v107 = v18 + 4LL * v17;
      v104 = v16 + 8LL * v17;
      do
      {
        v26 = *(int *)(v100 + v25);
        *(_DWORD *)(v107 + v25) = v26;
        *(double *)(v104 + 2 * v25) = *(double *)(v105 + 2 * v25) * v23;
        v27 = *(int *)(v97 + 4 * v26);
        v28 = (int *)(v96 + 4 * v26);
        v29 = v27 + *v28;
        v30 = 4 * v27;
        v31 = (_DWORD *)(v19 + v30);
        if ( a3 != *(_DWORD *)(v19 + v30) )
        {
          v32 = v19 + v30 + 4;
          do
          {
            v31 = (_DWORD *)v32;
            v32 += 4;
          }
          while ( *(_DWORD *)(v32 - 4) != a3 );
        }
        v33 = *v28 - 1;
        v34 = v95;
        v35 = v91;
        *v31 = *(_DWORD *)(v19 + 4LL * v29 - 4);
        *v28 = v33;
        v36 = v93;
        if ( *((int *)this + 78) <= -2 )
          v34 = 0;
        v37 = *(int *)(v34 + 4 * v26);
        if ( *((int *)this + 72) <= -2 )
          v36 = 0;
        v98 = v36;
        if ( *((int *)this + 84) <= -2 )
          v35 = 0;
        v38 = *(_DWORD *)(v35 + 4 * v26);
        if ( v38 < 0 )
          *(_DWORD *)(v98 + 4LL * (-2 - v38)) = v37;
        else
          *(_DWORD *)(v34 + 4LL * v38) = v37;
        if ( (int)v37 >= 0 )
          *(_DWORD *)(v35 + 4 * v37) = v38;
        *(_DWORD *)(v34 + 4 * v26) = -2;
        *(_DWORD *)(v35 + 4 * v26) = -2;
        v39 = v95;
        v40 = v93;
        v41 = v91;
        if ( *((int *)this + 78) <= -2 )
          v39 = 0;
        if ( *((int *)this + 72) <= -2 )
          v40 = 0;
        v42 = (int *)(v40 + 4LL * v33);
        v43 = *v42;
        if ( *((int *)this + 84) <= -2 )
          v41 = 0;
        v44 = (_DWORD *)(v39 + 4 * v26);
        *(_DWORD *)(v41 + 4 * v26) = -2 - v33;
        *v42 = v26;
        if ( (int)v43 < 0 )
        {
          *v44 = -1;
        }
        else
        {
          *v44 = v43;
          *(_DWORD *)(v41 + 4 * v43) = v26;
        }
        v25 += 4;
      }
      while ( v102 != v25 );
      v8 = v119;
      v109 = v119 + v109 - v110;
    }
    v45 = v8 + 1;
    if ( v108 + v110 >= v8 + 1 )
    {
      v103 = 4LL * (unsigned int)(v108 + v110 - 1 - v8) + 4;
      v101 = v114 + 4LL * v45;
      v106 = v116 + 8LL * v45;
      v46 = 0;
      do
      {
        v47 = *(int *)(v101 + v46);
        *(_DWORD *)(v117 + 4LL * v109 + v46) = v47;
        *(double *)(v115 + 8LL * v109 + 2 * v46) = *(double *)(v106 + 2 * v46) * v23;
        v48 = *(int *)(v97 + 4 * v47);
        v49 = (int *)(v96 + 4 * v47);
        v50 = v48 + *v49;
        v51 = 4 * v48;
        v52 = (_DWORD *)(v19 + v51);
        if ( a3 != *(_DWORD *)(v19 + v51) )
        {
          v53 = v19 + v51 + 4;
          do
          {
            v52 = (_DWORD *)v53;
            v53 += 4;
          }
          while ( *(_DWORD *)(v53 - 4) != a3 );
        }
        v54 = *v49 - 1;
        v55 = v95;
        v56 = v91;
        *v52 = *(_DWORD *)(v19 + 4LL * v50 - 4);
        *v49 = v54;
        v57 = v93;
        if ( *((int *)this + 78) <= -2 )
          v55 = 0;
        v58 = *(int *)(v55 + 4 * v47);
        if ( *((int *)this + 72) <= -2 )
          v57 = 0;
        v99 = v57;
        if ( *((int *)this + 84) <= -2 )
          v56 = 0;
        v59 = *(_DWORD *)(v56 + 4 * v47);
        if ( v59 < 0 )
          *(_DWORD *)(v99 + 4LL * (-2 - v59)) = v58;
        else
          *(_DWORD *)(v55 + 4LL * v59) = v58;
        if ( (int)v58 >= 0 )
          *(_DWORD *)(v56 + 4 * v58) = v59;
        *(_DWORD *)(v55 + 4 * v47) = -2;
        *(_DWORD *)(v56 + 4 * v47) = -2;
        v60 = v95;
        v61 = v93;
        v62 = v91;
        if ( *((int *)this + 78) <= -2 )
          v60 = 0;
        if ( *((int *)this + 72) <= -2 )
          v61 = 0;
        v63 = (int *)(v61 + 4LL * v54);
        v64 = *v63;
        if ( *((int *)this + 84) <= -2 )
          v62 = 0;
        v65 = (_DWORD *)(v60 + 4 * v47);
        *(_DWORD *)(v62 + 4 * v47) = -2 - v54;
        *v63 = v47;
        if ( (int)v64 < 0 )
        {
          *v65 = -1;
        }
        else
        {
          *v65 = v64;
          *(_DWORD *)(v62 + 4 * v64) = v47;
        }
        v46 += 4;
      }
      while ( v46 != v103 );
    }
    v66 = v95;
    v67 = v93;
    *v111 = 0;
    v68 = 4LL * a2;
    *(_DWORD *)(v96 + v68) = 0;
    v69 = 0;
    if ( *((int *)this + 78) <= -2 )
      v66 = 0;
    v70 = *(int *)(v66 + 4LL * a2);
    if ( *((int *)this + 72) <= -2 )
      v67 = 0;
    if ( *((int *)this + 84) > -2 )
      v69 = v91;
    v71 = *(_DWORD *)(v69 + 4LL * a2);
    if ( v71 < 0 )
      *(_DWORD *)(v67 + 4LL * (-2 - v71)) = v70;
    else
      *(_DWORD *)(v66 + 4LL * v71) = v70;
    if ( (int)v70 >= 0 )
      *(_DWORD *)(v69 + 4 * v70) = v71;
    *(_DWORD *)(v66 + 4LL * a2) = -2;
    *(_DWORD *)(v69 + 4LL * a2) = -2;
    v72 = v95;
    v73 = v93;
    v74 = a3 + *((_DWORD *)this + 8);
    v75 = 0;
    if ( *((int *)this + 78) <= -2 )
      v72 = 0;
    v76 = v72;
    if ( *((int *)this + 72) <= -2 )
      v73 = 0;
    if ( *((int *)this + 84) > -2 )
      v75 = v91;
    v94 = v73;
    v77 = 4LL * v74;
    v78 = (_DWORD *)(v72 + v77);
    v79 = v75;
    v92 = v75;
    v80 = *(int *)(v72 + v77);
    v81 = (int *)(v79 + v77);
    v82 = *v81;
    if ( *v81 < 0 )
      *(_DWORD *)(v94 + 4LL * (-2 - v82)) = v80;
    else
      *(_DWORD *)(v76 + 4LL * v82) = v80;
    if ( (int)v80 >= 0 )
      *(_DWORD *)(v92 + 4 * v80) = v82;
    *v78 = -2;
    *v81 = -2;
    v83 = (int *)(v112 + v68);
    v84 = (int *)(v113 + v68);
    v85 = *v84;
    v86 = *v83;
    *(_DWORD *)(v112 + 4 * v85) = v86;
    *(_DWORD *)(v113 + 4 * v86) = v85;
    *v84 = -2;
    *v83 = *((_DWORD *)this + 14);
    return 1;
  }
  else
  {
    result = 0;
    if ( (*((_BYTE *)this + 496) & 4) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v87 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
      if ( !v87 )
        std::__throw_bad_cast();
      if ( v87[56] )
      {
        v88 = v87[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v88 = 10;
        v90 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v87 + 48LL);
        if ( v90 != std::ctype<char>::do_widen )
          v88 = v90((__int64)v87, 10u);
      }
      v89 = (std::ostream *)std::ostream::put((std::ostream *)&std::cout, v88);
      std::ostream::flush(v89);
      return 0;
    }
  }
  return result;
}

