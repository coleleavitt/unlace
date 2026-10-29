__int64 __fastcall CoinFactorization::getRowSpaceIterate(CoinFactorization *this, int a2, int a3)
{
  __int64 v3; // rax
  CoinFactorization *v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r15
  bool v8; // cc
  unsigned int v9; // r11d
  __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // rdi
  int *v13; // rsi
  int v14; // ecx
  __int64 v15; // rbx
  int v16; // r8d
  int v17; // edi
  int v18; // r14d
  __int64 v19; // r13
  int *v20; // rax
  int v21; // r15d
  int v22; // r12d
  int v23; // r15d
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  int v28; // edi
  unsigned int v29; // eax
  int v30; // ecx
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r10d
  __int64 v36; // r11
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // r8d
  __int64 v41; // rax
  int v42; // edi
  int v43; // eax
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  int v47; // ecx
  int v48; // edx
  int v49; // ecx
  int v50; // ecx
  int v51; // edx
  int v52; // eax
  int v53; // edi
  __int64 v54; // rax
  int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // rdi
  __int64 v59; // r12
  int v60; // esi
  __int64 v61; // r11
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // r15
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r13
  unsigned __int64 v67; // r12
  __int64 v68; // rax
  unsigned int v69; // r12d
  int v70; // r9d
  int v71; // r8d
  int v72; // r10d
  unsigned int v73; // r11d
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r15
  __int64 v77; // rbx
  __int64 v78; // r13
  __int64 v79; // rdx
  __int64 v80; // r15
  __int64 v81; // rax
  unsigned int v82; // esi
  unsigned int v83; // r12d
  int v84; // r8d
  int v85; // eax
  int v86; // edx
  int v87; // eax
  int v88; // edx
  int v89; // eax
  int v90; // edx
  int v91; // eax
  int v92; // edx
  int v93; // r8d
  int v94; // eax
  __int64 v96; // rdx
  __int64 v97; // rdx
  unsigned __int64 v98; // [rsp+0h] [rbp-B0h]
  __int64 v99; // [rsp+8h] [rbp-A8h]
  __int64 v100; // [rsp+18h] [rbp-98h]
  __int64 v101; // [rsp+28h] [rbp-88h]
  int v102; // [rsp+30h] [rbp-80h]
  __int64 v103; // [rsp+38h] [rbp-78h]
  __int64 v104; // [rsp+38h] [rbp-78h]
  __int64 v105; // [rsp+40h] [rbp-70h]
  int *v106; // [rsp+50h] [rbp-60h]
  __int64 v107; // [rsp+58h] [rbp-58h]
  __int64 v108; // [rsp+60h] [rbp-50h]
  unsigned int v109; // [rsp+68h] [rbp-48h]
  int v112; // [rsp+74h] [rbp-3Ch]

  v3 = 0;
  v4 = this;
  v5 = *((_QWORD *)this + 26);
  v6 = *((_QWORD *)this + 84);
  v7 = *((_QWORD *)this + 53);
  if ( *((int *)this + 54) <= -2 )
    v5 = 0;
  v107 = 4LL * a2;
  v8 = *((_DWORD *)this + 48) <= -2;
  v9 = *(_DWORD *)(v5 + v107);
  v105 = v5;
  v10 = *((_QWORD *)this + 23);
  v103 = *((_QWORD *)this + 63);
  v11 = v103;
  v12 = *((int *)this + 10);
  if ( v8 )
    v10 = 0;
  v109 = v9;
  v99 = v10;
  v13 = (int *)(v10 + 4 * v12);
  if ( *((int *)v4 + 128) <= -2 )
    v11 = 0;
  v14 = *v13;
  if ( *((int *)v4 + 170) <= -2 )
    v6 = 0;
  v15 = *((_QWORD *)v4 + 50);
  if ( *((int *)v4 + 102) <= -2 )
    v15 = 0;
  v101 = v15;
  if ( *((int *)v4 + 108) > -2 )
    v3 = v7;
  v108 = v3;
  v112 = v9 + a3 + 1;
  if ( v112 < *((_DWORD *)v4 + 148) - v14 )
  {
LABEL_37:
    v56 = *(int *)(v107 + v101);
    v57 = *(int *)(v107 + v108);
    *(_DWORD *)(v101 + 4 * v57) = v56;
    *(_DWORD *)(v108 + 4 * v56) = v57;
    v58 = *(int *)(v108 + 4LL * *((int *)v4 + 10));
    *(_DWORD *)(v101 + 4 * v58) = a2;
    *(_DWORD *)(v108 + 4LL * *((int *)v4 + 10)) = a2;
    *(_DWORD *)(v107 + v108) = v58;
    *(_DWORD *)(v107 + v101) = *((_DWORD *)v4 + 10);
    v59 = 0;
    v8 = *((_DWORD *)v4 + 128) <= -2;
    v60 = *(_DWORD *)(v107 + v99);
    *(_DWORD *)(v107 + v99) = v14;
    if ( !v8 )
      v59 = v103;
    if ( !v109 )
      goto LABEL_58;
    v61 = v60;
    v104 = v59;
    v62 = 4LL * v14 + 16;
    v63 = 4LL * v60;
    v64 = 4LL * v14;
    v65 = v59 + v63;
    v98 = v6 + v63;
    v66 = v59 + v64;
    v67 = v62 + v59;
    if ( v65 < v6 + v62 && v6 + v64 < (unsigned __int64)(v63 + 16 + v104)
      || v66 < v6 + v62 && v6 + v64 < v67
      || v109 <= 0xA
      || v64 < v63 + 16 && v63 < v62
      || v98 < v67 && v66 < v6 + v63 + 16 )
    {
      v97 = 0;
      do
      {
        *(_DWORD *)(v66 + v97) = *(_DWORD *)(v65 + v97);
        *(_DWORD *)(v6 + v64 + v97) = *(_DWORD *)(v98 + v97);
        v97 += 4;
      }
      while ( v97 != 4LL * (v109 - 1) + 4 );
      v14 += v109;
      goto LABEL_58;
    }
    v68 = -(int)(v65 >> 2) & 3;
    v69 = v109 - 1;
    if ( v109 - 1 < (int)v68 + 3 )
    {
      v83 = v109;
      v84 = v14;
      v70 = v14 + 1;
    }
    else
    {
      if ( (_DWORD)v68 )
      {
        v70 = v14 + 1;
        *(_DWORD *)(v104 + 4LL * v14) = *(_DWORD *)(v104 + 4LL * v60);
        *(_DWORD *)(v6 + 4LL * v14) = *(_DWORD *)(v6 + 4LL * v60);
        v71 = v14 + 1;
        v72 = v60 + 1;
        if ( (_DWORD)v68 != 1 )
        {
          v69 = v109 - 2;
          *(_DWORD *)(v104 + 4LL * v70) = *(_DWORD *)(v104 + 4LL * v72);
          *(_DWORD *)(v6 + 4LL * v70) = *(_DWORD *)(v6 + 4LL * v72);
          v71 = v14 + 2;
          v72 = v60 + 2;
          if ( (_DWORD)v68 != 2 )
          {
            v69 = v109 - 3;
            *(_DWORD *)(v104 + 4LL * v71) = *(_DWORD *)(v104 + 4LL * v72);
            *(_DWORD *)(v6 + 4LL * v71) = *(_DWORD *)(v6 + 4LL * v72);
            v71 = v14 + 3;
            v72 = v60 + 3;
          }
        }
      }
      else
      {
        v69 = v109;
        v72 = v60;
        v71 = v14;
        v70 = v14 + 1;
      }
      v73 = v109 - v68;
      v74 = 4 * v68;
      v75 = v74 + v63;
      v76 = v74 + v64;
      v77 = v104 + v75;
      v78 = v104 + v76;
      v79 = v6 + v75;
      v80 = v6 + v76;
      v81 = 0;
      v82 = 0;
      do
      {
        ++v82;
        *(__m128i *)(v78 + v81) = _mm_load_si128((const __m128i *)(v77 + v81));
        *(__m128i *)(v80 + v81) = _mm_loadu_si128((const __m128i *)(v79 + v81));
        v81 += 16;
      }
      while ( v73 >> 2 > v82 );
      v83 = v69 - (v73 & 0xFFFFFFFC);
      v84 = (v73 & 0xFFFFFFFC) + v71;
      v60 = v72 + (v73 & 0xFFFFFFFC);
      if ( v73 == (v73 & 0xFFFFFFFC) )
        goto LABEL_57;
      v61 = v60;
    }
    *(_DWORD *)(v104 + 4LL * v84) = *(_DWORD *)(v104 + 4 * v61);
    *(_DWORD *)(v6 + 4LL * v84) = *(_DWORD *)(v6 + 4 * v61);
    v85 = v84 + 1;
    v86 = v60 + 1;
    if ( v83 != 1 )
    {
      *(_DWORD *)(v104 + 4LL * v85) = *(_DWORD *)(v104 + 4LL * v86);
      *(_DWORD *)(v6 + 4LL * v85) = *(_DWORD *)(v6 + 4LL * v86);
      v87 = v84 + 2;
      v88 = v60 + 2;
      if ( v83 != 2 )
      {
        *(_DWORD *)(v104 + 4LL * v87) = *(_DWORD *)(v104 + 4LL * v88);
        *(_DWORD *)(v6 + 4LL * v87) = *(_DWORD *)(v6 + 4LL * v88);
        v89 = v84 + 3;
        v90 = v60 + 3;
        if ( v83 != 3 )
        {
          *(_DWORD *)(v104 + 4LL * v89) = *(_DWORD *)(v104 + 4LL * v90);
          *(_DWORD *)(v6 + 4LL * v89) = *(_DWORD *)(v6 + 4LL * v90);
          v91 = v84 + 4;
          v92 = v60 + 4;
          if ( v83 != 4 )
          {
            v93 = v84 + 5;
            *(_DWORD *)(v104 + 4LL * v91) = *(_DWORD *)(v104 + 4LL * v92);
            *(_DWORD *)(v6 + 4LL * v91) = *(_DWORD *)(v6 + 4LL * v92);
            v94 = v60 + 5;
            if ( v83 != 5 )
            {
              *(_DWORD *)(v104 + 4LL * v93) = *(_DWORD *)(v104 + 4LL * v94);
              *(_DWORD *)(v6 + 4LL * v93) = *(_DWORD *)(v6 + 4LL * v94);
            }
          }
        }
      }
    }
LABEL_57:
    v14 = v109 - 1 + v70;
LABEL_58:
    *(_DWORD *)(v99 + 4LL * *((int *)v4 + 10)) = v14 + a3 + 4;
    return 1;
  }
  v16 = v12;
  v17 = *(_DWORD *)(v15 + 4 * v12);
  if ( v16 == v17 )
  {
    v55 = 0;
  }
  else
  {
    v106 = (int *)v4;
    v18 = 0;
    do
    {
      v19 = v17;
      v20 = (int *)(v99 + 4LL * v17);
      v21 = *(_DWORD *)(v105 + 4LL * v17);
      v22 = *v20;
      *v20 = v18;
      v23 = v22 + v21;
      if ( v22 < v23 )
      {
        v24 = 4LL * v18 + 16;
        v25 = 4LL * v22;
        v102 = v23 - v22;
        v26 = 4LL * v18;
        v27 = v11 + v25;
        v100 = v6 + v25;
        if ( (v6 + v25 >= (unsigned __int64)(v11 + v24) || v11 + v26 >= (unsigned __int64)(v6 + v25 + 16))
          && (v11 + v25 >= (unsigned __int64)(v6 + v24) || v6 + v26 >= (unsigned __int64)(v11 + v25 + 16))
          && (v24 <= v25 || v25 + 16 <= v26)
          && (unsigned int)(v23 - v22) > 0xA
          && (v11 + v26 >= (unsigned __int64)(v6 + v24) || v6 + v26 >= (unsigned __int64)(v11 + v24))
          && (v24 <= v25 || v25 + 16 <= v26) )
        {
          v28 = v18;
          v29 = -(int)(v27 >> 2) & 3;
          if ( v29 )
          {
            *(_DWORD *)(v11 + 4LL * v18) = *(_DWORD *)(v11 + 4LL * v22);
            *(_DWORD *)(v6 + 4LL * v18) = *(_DWORD *)(v6 + 4LL * v22);
            v28 = v18 + 1;
            v30 = v22 + 1;
            if ( v29 == 1
              || (*(_DWORD *)(v11 + 4LL * v28) = *(_DWORD *)(v11 + 4LL * v30),
                  *(_DWORD *)(v6 + 4LL * v28) = *(_DWORD *)(v6 + 4LL * v30),
                  v28 = v18 + 2,
                  v30 = v22 + 2,
                  v29 == 2) )
            {
              v22 = v30;
            }
            else
            {
              v22 += 3;
              *(_DWORD *)(v11 + 4LL * v28) = *(_DWORD *)(v11 + 4LL * v30);
              *(_DWORD *)(v6 + 4LL * v28) = *(_DWORD *)(v6 + 4LL * v30);
              v28 = v18 + 3;
            }
          }
          v31 = 0;
          v32 = 4LL * v29;
          v33 = v32 + v25;
          v34 = v26 + v32;
          v35 = v102 - v29;
          v36 = v11 + v33;
          v37 = v11 + v34;
          v38 = v6 + v33;
          v39 = v6 + v34;
          v40 = (v102 - v29) >> 2;
          v41 = 0;
          do
          {
            ++v31;
            *(__m128i *)(v37 + v41) = _mm_load_si128((const __m128i *)(v36 + v41));
            *(__m128i *)(v39 + v41) = _mm_loadu_si128((const __m128i *)(v38 + v41));
            v41 += 16;
          }
          while ( v40 > v31 );
          v42 = (v35 & 0xFFFFFFFC) + v28;
          v43 = v22 + (v35 & 0xFFFFFFFC);
          if ( v35 != (v35 & 0xFFFFFFFC) )
          {
            *(_DWORD *)(v11 + 4LL * v42) = *(_DWORD *)(v11 + 4LL * v43);
            *(_DWORD *)(v6 + 4LL * v42) = *(_DWORD *)(v6 + 4LL * v43);
            v44 = v43 + 1;
            v45 = v42 + 1;
            if ( v23 > v43 + 1 )
            {
              *(_DWORD *)(v11 + 4LL * v45) = *(_DWORD *)(v11 + 4LL * v44);
              *(_DWORD *)(v6 + 4LL * v45) = *(_DWORD *)(v6 + 4LL * v44);
              v46 = v43 + 2;
              v47 = v42 + 2;
              if ( v23 > v43 + 2 )
              {
                *(_DWORD *)(v11 + 4LL * v47) = *(_DWORD *)(v11 + 4LL * v46);
                *(_DWORD *)(v6 + 4LL * v47) = *(_DWORD *)(v6 + 4LL * v46);
                v48 = v43 + 3;
                v49 = v42 + 3;
                if ( v23 > v43 + 3 )
                {
                  *(_DWORD *)(v11 + 4LL * v49) = *(_DWORD *)(v11 + 4LL * v48);
                  *(_DWORD *)(v6 + 4LL * v49) = *(_DWORD *)(v6 + 4LL * v48);
                  v50 = v43 + 4;
                  v51 = v42 + 4;
                  if ( v23 > v43 + 4 )
                  {
                    v52 = v43 + 5;
                    v53 = v42 + 5;
                    *(_DWORD *)(v11 + 4LL * v51) = *(_DWORD *)(v11 + 4LL * v50);
                    *(_DWORD *)(v6 + 4LL * v51) = *(_DWORD *)(v6 + 4LL * v50);
                    if ( v23 > v52 )
                    {
                      *(_DWORD *)(v11 + 4LL * v53) = *(_DWORD *)(v11 + 4LL * v52);
                      *(_DWORD *)(v6 + 4LL * v53) = *(_DWORD *)(v6 + 4LL * v52);
                    }
                  }
                }
              }
            }
          }
        }
        else
        {
          v96 = 0;
          do
          {
            *(_DWORD *)(v11 + v26 + v96) = *(_DWORD *)(v27 + v96);
            *(_DWORD *)(v6 + v26 + v96) = *(_DWORD *)(v100 + v96);
            v96 += 4;
          }
          while ( v96 != 4LL * (unsigned int)(v102 - 1) + 4 );
        }
        v18 += v102;
      }
      v17 = *(_DWORD *)(v101 + 4 * v19);
      v54 = v106[10];
    }
    while ( (_DWORD)v54 != v17 );
    v55 = v18;
    v4 = (CoinFactorization *)v106;
    v13 = (int *)(v99 + 4 * v54);
  }
  ++*((_DWORD *)v4 + 230);
  *v13 = v55;
  if ( v112 < *((_DWORD *)v4 + 148) - v55 )
  {
    v14 = *(_DWORD *)(v99 + 4LL * *((int *)v4 + 10));
    goto LABEL_37;
  }
  *((_DWORD *)v4 + 44) = -99;
  return 0;
}

