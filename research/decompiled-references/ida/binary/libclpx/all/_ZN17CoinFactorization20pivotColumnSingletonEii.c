__int64 __fastcall CoinFactorization::pivotColumnSingleton(CoinFactorization *this, int a2, int a3)
{
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  _DWORD *v9; // rax
  int v10; // r10d
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned int v13; // r9d
  __int64 v14; // r14
  __int64 v15; // rax
  int v16; // r8d
  __int64 v17; // rax
  int *v18; // rax
  int *v19; // rdx
  unsigned __int64 v20; // rbx
  int v21; // esi
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // r13
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rcx
  bool v30; // cc
  __int64 v31; // rdx
  int v32; // r9d
  int *v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rax
  _DWORD *v36; // rdx
  __int64 v37; // rbp
  int v38; // esi
  __int64 v39; // r13
  __int64 v40; // rbx
  __int64 v41; // r8
  int *v42; // r11
  int *v43; // r8
  int v44; // r10d
  __int64 v45; // r9
  int v46; // ecx
  __int64 v47; // rbx
  __int64 v48; // r8
  __int64 v49; // r11
  int *v50; // r10
  __int64 v51; // r8
  _DWORD *v52; // r9
  int *v53; // r11
  __int64 v54; // r10
  __int64 v55; // rax
  __int64 v56; // r9
  int *v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // ecx
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rax
  int *v64; // rsi
  int *v65; // rax
  int v66; // ecx
  __int64 v67; // rdx
  __int64 v68; // rdx
  int v69; // ecx
  int v70; // eax
  __int64 v72; // rsi
  __int64 v73; // rcx
  int v74; // ebx
  __int64 v75; // rsi
  int *v76; // r13
  double *v77; // rbp
  __int64 v78; // rcx
  int v79; // r8d
  _DWORD *v80; // r9
  __int64 *v81; // rsi
  __int64 *v82; // rcx
  __int64 v83; // xmm0_8
  double v84; // xmm1_8
  double v85; // xmm3_8
  __int64 v86; // rsi
  int v87; // r10d
  int v88; // r8d
  double v89; // xmm1_8
  __int64 v90; // rcx
  __int64 v91; // r9
  double v92; // xmm0_8
  double v93; // xmm0_8
  int *v94; // rcx
  double *v95; // rsi
  __int64 v96; // [rsp+0h] [rbp-A8h]
  __int64 v97; // [rsp+0h] [rbp-A8h]
  __int64 v98; // [rsp+8h] [rbp-A0h]
  __int64 v99; // [rsp+10h] [rbp-98h]
  __int64 v100; // [rsp+18h] [rbp-90h]
  __int64 v101; // [rsp+20h] [rbp-88h]
  __int64 v102; // [rsp+28h] [rbp-80h]
  __int64 v103; // [rsp+30h] [rbp-78h]
  __int64 v104; // [rsp+38h] [rbp-70h]
  _DWORD *v106; // [rsp+48h] [rbp-60h]
  __int64 v107; // [rsp+50h] [rbp-58h]
  _DWORD *v108; // [rsp+58h] [rbp-50h]
  int v110; // [rsp+64h] [rbp-44h]
  __int64 v111; // [rsp+68h] [rbp-40h]

  v3 = a3;
  v4 = *((_QWORD *)this + 26);
  v5 = a2;
  v6 = *((_QWORD *)this + 29);
  if ( *((int *)this + 54) <= -2 )
    v4 = 0;
  v7 = *((_QWORD *)this + 32);
  v8 = 4LL * a2;
  if ( *((int *)this + 60) <= -2 )
    v6 = 0;
  v101 = 4 * v5;
  if ( *((int *)this + 66) <= -2 )
    v7 = 0;
  v9 = (_DWORD *)(v8 + v4);
  v10 = *v9;
  v106 = v9;
  v11 = *((_QWORD *)this + 81);
  v12 = *((_QWORD *)this + 63);
  v102 = v7;
  v13 = v10 - 1;
  if ( *((int *)this + 164) <= -2 )
    v11 = 0;
  v103 = v11;
  v14 = *(int *)(v11 + 4LL * a3);
  v15 = *((_QWORD *)this + 23);
  if ( *((int *)this + 48) <= -2 )
    v15 = 0;
  v16 = *(_DWORD *)(v15 + 4 * v5);
  v17 = *((_QWORD *)this + 78);
  if ( *((int *)this + 128) <= -2 )
    v12 = 0;
  if ( *((int *)this + 158) <= -2 )
    v17 = 0;
  v107 = v17;
  v18 = *((int **)this + 56);
  if ( *((int *)this + 114) <= -2 )
    v18 = nullptr;
  if ( (int)(v13 + v16) >= v16 )
  {
    v19 = (int *)(v12 + 4LL * v16);
    v20 = v12 + 4 * (v16 + (unsigned __int64)v13) + 4;
    v21 = 0;
    do
    {
      if ( (_DWORD)v3 != *v19 )
      {
        v22 = v21++;
        v18[v22] = *v19;
      }
      ++v19;
    }
    while ( (int *)v20 != v19 );
  }
  v23 = *((_QWORD *)this + 50);
  v24 = *((_QWORD *)this + 53);
  if ( *((int *)this + 102) <= -2 )
    v23 = 0;
  v25 = *(int *)(v23 + v101);
  if ( *((int *)this + 108) <= -2 )
    v24 = 0;
  v26 = *(int *)(v24 + v101);
  *(_DWORD *)(v23 + 4 * v26) = v25;
  *(_DWORD *)(v24 + 4 * v25) = v26;
  v27 = *((_QWORD *)this + 41);
  *(_DWORD *)(v23 + v101) = *((_DWORD *)this + 14);
  *(_DWORD *)(v24 + v101) = -2;
  v28 = *((_QWORD *)this + 75);
  v29 = *((_QWORD *)this + 69);
  if ( *((int *)this + 152) <= -2 )
    v28 = 0;
  v104 = v28;
  if ( *((int *)this + 140) <= -2 )
    v29 = 0;
  v30 = (int)v13 <= 0;
  *(double *)(v29 + 8LL * *((int *)this + 14)) = 1.0 / *(double *)(v28 + 8 * v14);
  v31 = *((_QWORD *)this + 38);
  *(_DWORD *)(v6 + 4 * v3) = 0;
  v32 = *((_DWORD *)this + 78);
  v98 = v31;
  v96 = *((_QWORD *)this + 35);
  if ( v30 )
  {
    v54 = *((_QWORD *)this + 35);
  }
  else
  {
    v33 = v18;
    v100 = v27;
    v99 = (__int64)&v18[v10 - 2 + 1];
    do
    {
      while ( 1 )
      {
        v34 = *v33;
        v35 = 4 * v34;
        v36 = (_DWORD *)(v6 + 4 * v34);
        if ( *v36 )
          break;
        if ( (int *)v99 == ++v33 )
          goto LABEL_54;
      }
      v37 = v98;
      v38 = *v36 - 1;
      v39 = v96;
      v40 = v100;
      if ( v32 < -1 )
        v37 = 0;
      if ( *((int *)this + 72) <= -2 )
        v39 = 0;
      if ( *((int *)this + 84) <= -2 )
        v40 = 0;
      v41 = 4LL * ((int)v34 + *((_DWORD *)this + 8));
      v42 = (int *)(v37 + v41);
      v43 = (int *)(v40 + v41);
      v44 = *v43;
      v45 = *v42;
      if ( *v43 < 0 )
        *(_DWORD *)(v39 + 4LL * (-2 - v44)) = v45;
      else
        *(_DWORD *)(v37 + 4LL * v44) = v45;
      if ( (int)v45 >= 0 )
        *(_DWORD *)(v40 + 4 * v45) = v44;
      *v42 = -2;
      *v43 = -2;
      v46 = *((_DWORD *)this + 8) + v34;
      v47 = v98;
      v48 = v96;
      v49 = v100;
      if ( *((int *)this + 78) <= -2 )
        v47 = 0;
      if ( *((int *)this + 72) <= -2 )
        v48 = 0;
      v50 = (int *)(v48 + 4LL * v38);
      v51 = *v50;
      if ( *((int *)this + 84) <= -2 )
        v49 = 0;
      *(_DWORD *)(v49 + 4LL * v46) = -2 - v38;
      v52 = (_DWORD *)(v47 + 4LL * v46);
      *v50 = v46;
      if ( (int)v51 < 0 )
      {
        *v52 = -1;
      }
      else
      {
        *v52 = v51;
        *(_DWORD *)(v49 + 4 * v51) = v46;
      }
      v53 = (int *)(v103 + v35);
      if ( v38 )
      {
        v72 = *v53;
        v73 = 4 * v72;
        v74 = *v53;
        v75 = v72 + 1;
        v76 = (int *)(v107 + v73 + 4);
        v77 = (double *)(8 * v75 + v104);
        v111 = 8 * v75;
        v108 = (_DWORD *)(v107 + v73);
        v110 = *(_DWORD *)(v107 + v73);
        if ( a2 == v110 )
          goto LABEL_89;
        v78 = v107 + v73 + 4;
        v79 = *v53;
        while ( 1 )
        {
          v80 = (_DWORD *)v78;
          ++v79;
          v78 += 4;
          if ( a2 == *v80 )
            break;
          ++v75;
        }
        if ( v74 == v79 )
        {
LABEL_89:
          v85 = *v77;
          LODWORD(v86) = v74 + 2;
          v87 = *v76;
          v88 = v74 + 1;
          v89 = fabs(*v77);
          if ( v74 + *v36 > v74 + 2 )
          {
            v86 = (int)v86;
            v90 = (int)v86 + 1LL;
            v91 = v90 + (unsigned int)(*v36 - 3);
            while ( 1 )
            {
              v92 = fabs(*(double *)(v104 + 8 * v86));
              v30 = v92 <= v89;
              v93 = fmax(v92, v89);
              if ( !v30 )
                v88 = v86;
              v86 = v90;
              v89 = v93;
              if ( v90 == v91 )
                break;
              ++v90;
            }
          }
          v94 = (int *)(v107 + 4LL * v88);
          *v76 = *v94;
          v95 = (double *)(v104 + 8LL * v88);
          *v77 = *v95;
          *v94 = v87;
          *v95 = v85;
        }
        else
        {
          v81 = (__int64 *)(v104 + 8 * v75);
          v82 = (__int64 *)(v104 + v111 - 8);
          v83 = *v82;
          *v82 = *v81;
          v84 = *v77;
          *v108 = a2;
          LODWORD(v82) = *v76;
          *(double *)v81 = v84;
          *v80 = (_DWORD)v82;
          *(_QWORD *)v77 = v83;
          *v76 = v110;
        }
      }
      --*v36;
      ++v33;
      ++*(_DWORD *)(v102 + v35);
      ++*v53;
      v32 = *((_DWORD *)this + 78);
    }
    while ( (int *)v99 != v33 );
LABEL_54:
    v27 = v100;
    v54 = v96;
  }
  v55 = 0;
  v30 = v32 <= -2;
  v56 = v98;
  if ( v30 )
    v56 = 0;
  v57 = (int *)(v56 + v101);
  if ( *((int *)this + 72) <= -2 )
    v54 = 0;
  if ( *((int *)this + 84) > -2 )
    v55 = v27;
  v58 = v55;
  v59 = *v57;
  v60 = *(_DWORD *)(v58 + v101);
  if ( v60 < 0 )
    *(_DWORD *)(v54 + 4LL * (-2 - v60)) = v59;
  else
    *(_DWORD *)(v56 + 4LL * v60) = v59;
  if ( (int)v59 >= 0 )
    *(_DWORD *)(v58 + 4 * v59) = v60;
  *v57 = -2;
  *(_DWORD *)(v58 + v101) = -2;
  v61 = v98;
  v62 = v96;
  if ( *((int *)this + 78) <= -2 )
    v61 = 0;
  if ( *((int *)this + 72) <= -2 )
    v62 = 0;
  v97 = v62;
  if ( *((int *)this + 84) <= -2 )
    v27 = 0;
  v63 = 4LL * (*((_DWORD *)this + 8) + a3);
  v64 = (int *)(v61 + v63);
  v65 = (int *)(v27 + v63);
  v66 = *v65;
  v67 = *v64;
  if ( *v65 < 0 )
    *(_DWORD *)(v97 + 4LL * (-2 - v66)) = v67;
  else
    *(_DWORD *)(v61 + 4LL * v66) = v67;
  if ( (int)v67 >= 0 )
    *(_DWORD *)(v27 + 4 * v67) = v66;
  *v64 = -2;
  *v65 = -2;
  v68 = *((_QWORD *)this + 95);
  *v106 = 0;
  v69 = *((_DWORD *)this + 176);
  if ( *((int *)this + 192) <= -2 )
    v68 = 0;
  *(_DWORD *)(v68 + 4LL * *((int *)this + 15)) = v69;
  v70 = *((_DWORD *)this + 15) + 1;
  *((_DWORD *)this + 15) = v70;
  *(_DWORD *)(v68 + 4LL * v70) = v69;
  return 1;
}

