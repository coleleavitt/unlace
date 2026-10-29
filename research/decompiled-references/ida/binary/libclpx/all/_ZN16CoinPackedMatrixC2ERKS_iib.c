// Alternative name is '_ZN16CoinPackedMatrixC1ERKS_iib'
void __fastcall CoinPackedMatrix::CoinPackedMatrix(
        CoinPackedMatrix *this,
        const CoinPackedMatrix *a2,
        int a3,
        int a4,
        char a5)
{
  char v7; // r9
  int v8; // eax
  __int64 v9; // rsi
  int v10; // edi
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  int v25; // r13d
  int v26; // esi
  int v27; // eax
  int v28; // edi
  int v29; // edi
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r10
  __int64 v41; // r9
  __int64 v42; // rdi
  int v43; // edx
  __int64 v44; // r8
  __int64 v45; // rcx
  int *v46; // rax
  unsigned __int64 v47; // rsi
  __int64 v48; // rdx
  int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // r8
  __int64 v53; // rax
  int v54; // edx
  int v55; // esi
  int v56; // ecx
  __int64 v57; // r15
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // r13
  __int64 v61; // r12
  __int64 v62; // r8
  __int64 v63; // r11
  __int64 v64; // r10
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // xmm0_8
  int *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // edx
  int v73; // eax
  int *v74; // rdx
  __int64 v75; // rsi
  __int64 v76; // rcx
  int *v77; // rax
  __int64 v78; // rsi
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // r12
  __int64 v84; // r11
  __int64 v85; // r13
  __int64 v86; // rbp
  __int64 v87; // r14
  __int64 v88; // rsi
  int v89; // edi
  int v90; // r8d
  int v91; // ecx
  __int64 v92; // rdx
  __int64 v93; // r10
  __int64 v94; // r8
  __int64 v95; // r10
  __int64 v96; // rcx
  int v97; // r15d
  int v98; // r9d
  int v99; // edx
  int v100; // ecx
  int v101; // r8d
  int v102; // r9d
  int v103; // r9d
  _DWORD *v104; // rax
  unsigned __int64 v105; // rax
  __int64 v106; // [rsp+8h] [rbp-40h]

  v7 = *((_BYTE *)a2 + 8);
  v8 = *((_DWORD *)a2 + 18);
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *(_QWORD *)this = off_4D1A60;
  v9 = *((int *)a2 + 16);
  *((_BYTE *)this + 8) = v7;
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = v9;
  v10 = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = v8;
  *(_QWORD *)((char *)this + 76) = 0;
  *((_DWORD *)this + 17) = v10;
  if ( a5 )
  {
    v26 = *((_DWORD *)a2 + 16);
    v27 = a4 + v8;
    *((_BYTE *)this + 8) = v7 ^ 1;
    *((_DWORD *)this + 17) = v26;
    v28 = *((_DWORD *)a2 + 17);
    *((_DWORD *)this + 16) = v28;
    v29 = a3 + v28;
    *((_DWORD *)this + 19) = v29;
    if ( v27 <= 0 )
      v27 = 1;
    *((_DWORD *)this + 20) = v27;
    if ( (unsigned __int64)v29 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_72;
    *((_QWORD *)this + 7) = operator new[](4LL * v29);
    v30 = *((_DWORD *)this + 19) + 1;
    if ( v30 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_72;
    v31 = operator new[](4 * v30);
    v32 = *((int *)this + 20);
    *((_QWORD *)this + 6) = v31;
    if ( v32 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_72;
    v33 = operator new[](8 * v32);
    v34 = *((int *)this + 20);
    *((_QWORD *)this + 4) = v33;
    if ( v34 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_72;
    v35 = operator new[](4 * v34);
    v36 = *((int *)a2 + 16);
    v37 = *((_DWORD *)this + 16);
    v38 = *((_QWORD *)a2 + 6);
    *((_QWORD *)this + 5) = v35;
    v39 = v36;
    if ( v37 )
    {
      sub_223D80(*((_DWORD **)this + 7), v37);
      v39 = *((int *)a2 + 16);
      if ( v102 < v101 )
      {
LABEL_22:
        if ( (int)v39 > 0 )
        {
          v40 = *((_QWORD *)a2 + 6);
          v41 = *((_QWORD *)a2 + 7);
          v42 = 1;
          do
          {
            v43 = *(_DWORD *)(v40 + 4 * v42 - 4);
            if ( v43 < v43 + *(_DWORD *)(v41 + 4 * v42 - 4) )
            {
              v44 = *((_QWORD *)a2 + 5);
              v45 = *((_QWORD *)this + 7);
              v46 = (int *)(v44 + 4LL * v43);
              v47 = v44 + 4 * (v43 + (unsigned __int64)(unsigned int)(*(_DWORD *)(v41 + 4 * v42 - 4) - 1)) + 4;
              do
              {
                v48 = *v46++;
                ++*(_DWORD *)(v45 + 4 * v48);
              }
              while ( (int *)v47 != v46 );
              LODWORD(v39) = *((_DWORD *)a2 + 16);
            }
            v49 = v42++;
          }
          while ( v49 < (int)v39 );
        }
LABEL_29:
        v50 = *((int *)this + 16);
        v51 = *((_QWORD *)this + 6);
        if ( (int)v50 <= 0 )
        {
          v54 = 0;
        }
        else
        {
          v52 = *((_QWORD *)this + 7);
          v53 = 1;
          v54 = 0;
          do
          {
            *(_DWORD *)(v51 + 4 * v53 - 4) = v54;
            v50 = *((int *)this + 16);
            v55 = v53;
            v54 += *(_DWORD *)(v52 + 4 * v53++ - 4);
          }
          while ( (int)v50 > v55 );
        }
        *(_DWORD *)(v51 + 4 * v50) = v54;
        v56 = *((_DWORD *)a2 + 16);
        if ( v56 > 0 )
        {
          v57 = *((_QWORD *)a2 + 6);
          v58 = 0;
          v106 = *((_QWORD *)a2 + 7);
          do
          {
            v59 = *(int *)(v57 + 4 * v58);
            if ( (int)v59 < (int)v59 + *(_DWORD *)(v106 + 4 * v58) )
            {
              v60 = *((_QWORD *)this + 4);
              v61 = *((_QWORD *)this + 5);
              v62 = (unsigned int)(*(_DWORD *)(v106 + 4 * v58) - 1) + 1LL;
              v63 = *((_QWORD *)a2 + 5) + 4 * v59;
              v64 = *((_QWORD *)a2 + 4) + 8 * v59;
              v65 = 0;
              do
              {
                v66 = *(int *)(v63 + 4 * v65);
                v67 = *(_QWORD *)(v64 + 8 * v65++);
                v68 = (int *)(v51 + 4 * v66);
                v69 = *v68;
                *v68 = v69 + 1;
                *(_QWORD *)(v60 + 8 * v69) = v67;
                *(_DWORD *)(v61 + 4 * v69) = v58;
              }
              while ( v62 != v65 );
              v56 = *((_DWORD *)a2 + 16);
            }
            ++v58;
          }
          while ( (int)v58 < v56 );
        }
        if ( *((int *)this + 16) > 0 )
        {
          v70 = *((_QWORD *)this + 7);
          v71 = 1;
          do
          {
            *(_DWORD *)(v51 + 4 * v71 - 4) -= *(_DWORD *)(v70 + 4 * v71 - 4);
            v72 = v71++;
          }
          while ( *((_DWORD *)this + 16) > v72 );
        }
        return;
      }
    }
    else if ( *((_DWORD *)a2 + 18) < *(_DWORD *)(v38 + 4 * v36) )
    {
      goto LABEL_22;
    }
    v73 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4 * v39);
    if ( v73 > 0 )
    {
      v74 = *((int **)a2 + 5);
      v75 = (unsigned int)(v73 - 1);
      v76 = *((_QWORD *)this + 7);
      v77 = v74 + 1;
      v78 = (__int64)&v74[v75 + 1];
      while ( 1 )
      {
        ++*(_DWORD *)(v76 + 4LL * *v74);
        v74 = v77;
        if ( (int *)v78 == v77 )
          break;
        ++v77;
      }
    }
    goto LABEL_29;
  }
  if ( a3 >= 0 )
  {
    v11 = a3 + v9;
    *((_DWORD *)this + 19) = v11;
    *((_DWORD *)this + 20) = a4 + v8;
    if ( (unsigned __int64)v11 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v12 = operator new[](4LL * v11);
      v13 = *((unsigned int *)this + 16);
      *((_QWORD *)this + 7) = v12;
      CoinMemcpyN<int>(*((_QWORD *)a2 + 7), v13, v12);
      v14 = *((_DWORD *)this + 19) + 1;
      if ( v14 <= 0x1FFFFFFFFFFFFFFELL )
      {
        v15 = operator new[](4 * v14);
        v16 = *((int *)this + 20);
        *((_QWORD *)this + 6) = v15;
        if ( v16 <= 0xFFFFFFFFFFFFFFFLL )
        {
          v17 = operator new[](8 * v16);
          v18 = *((int *)this + 20);
          *((_QWORD *)this + 4) = v17;
          if ( v18 <= 0x1FFFFFFFFFFFFFFELL )
          {
            v19 = operator new[](4 * v18);
            v20 = *((int *)a2 + 16);
            v21 = *((_QWORD *)a2 + 6);
            *((_QWORD *)this + 5) = v19;
            if ( *((_DWORD *)a2 + 18) >= *(_DWORD *)(v21 + 4 * v20) )
            {
              CoinMemcpyN<int>(v21, (unsigned int)(*((_DWORD *)this + 16) + 1), *((_QWORD *)this + 6));
              CoinMemcpyN<int>(*((_QWORD *)a2 + 5), *((unsigned int *)this + 18), *((_QWORD *)this + 5));
              CoinMemcpyN<double>(*((_QWORD *)a2 + 4), *((unsigned int *)this + 18), *((_QWORD *)this + 4));
            }
            else
            {
              v22 = *((int *)this + 16);
              if ( (int)v22 <= 0 )
              {
                v25 = 0;
              }
              else
              {
                v23 = *((_QWORD *)this + 7);
                v24 = 0;
                v25 = 0;
                while ( 1 )
                {
                  *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v24) = v25;
                  CoinMemcpyN<int>(
                    *((_QWORD *)a2 + 5) + 4LL * *(int *)(v21 + 4 * v24),
                    *(unsigned int *)(v23 + 4 * v24),
                    v19 + 4LL * v25);
                  CoinMemcpyN<double>(
                    *((_QWORD *)a2 + 4) + 8LL * *(int *)(*((_QWORD *)a2 + 6) + 4 * v24),
                    *(unsigned int *)(*((_QWORD *)this + 7) + 4 * v24),
                    *((_QWORD *)this + 4) + 8LL * v25);
                  v22 = *((int *)this + 16);
                  v23 = *((_QWORD *)this + 7);
                  v25 += *(_DWORD *)(v23 + 4 * v24++);
                  if ( (int)v22 <= (int)v24 )
                    break;
                  v19 = *((_QWORD *)this + 5);
                  v21 = *((_QWORD *)a2 + 6);
                }
              }
              *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v22) = v25;
            }
            return;
          }
        }
      }
    }
LABEL_72:
    __cxa_throw_bad_array_new_length();
  }
  *((_DWORD *)this + 19) = v9;
  *((_DWORD *)this + 20) = v8;
  if ( (int)v9 <= 0 )
  {
    v104 = (_DWORD *)operator new[](4u);
    *((_QWORD *)this + 6) = v104;
    *v104 = 0;
    return;
  }
  *((_QWORD *)this + 7) = operator new[](4 * v9);
  v79 = *((_DWORD *)this + 19) + 1;
  if ( v79 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_72;
  v80 = operator new[](4 * v79);
  v81 = *((int *)this + 20);
  *((_QWORD *)this + 6) = v80;
  if ( (int)v81 > 0 )
  {
    *((_QWORD *)this + 4) = operator new[](8 * v81);
    v105 = *((int *)this + 20);
    if ( v105 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_72;
    *((_QWORD *)this + 5) = operator new[](4 * v105);
    v80 = *((_QWORD *)this + 6);
  }
  v82 = *((int *)this + 16);
  v83 = *((_QWORD *)a2 + 4);
  v84 = *((_QWORD *)a2 + 6);
  v85 = *((_QWORD *)a2 + 5);
  v86 = *((_QWORD *)a2 + 7);
  if ( (int)v82 <= 0 )
  {
    v89 = 0;
  }
  else
  {
    v87 = *((_QWORD *)this + 7);
    v88 = 1;
    v89 = 0;
    do
    {
      *(_DWORD *)(v80 + 4 * v88 - 4) = v89;
      v90 = *(_DWORD *)(v84 + 4 * v88 - 4);
      v91 = v90 + *(_DWORD *)(v86 + 4 * v88 - 4);
      if ( v90 >= v91 )
      {
        v99 = 0;
      }
      else
      {
        v92 = v90 + 1;
        v93 = 4LL * v90 - 4 * v92;
        v94 = v83 + -8 * v92 + 8LL * v90;
        v95 = v85 + v93;
        do
        {
          while ( fabs(*(double *)(v94 + 8 * v92)) > 9.999999999999999e-22 )
          {
            v96 = v89;
            v97 = *(_DWORD *)(v95 + 4 * v92);
            ++v89;
            *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v96) = *(_QWORD *)(v94 + 8 * v92);
            *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v96) = v97;
            v98 = v92;
            v91 = *(_DWORD *)(v84 + 4 * v88 - 4) + *(_DWORD *)(v86 + 4 * v88 - 4);
            ++v92;
            if ( v91 <= v98 )
              goto LABEL_57;
          }
          v103 = v92++;
        }
        while ( v91 > v103 );
LABEL_57:
        v99 = v89 - *(_DWORD *)(v80 + 4 * v88 - 4);
      }
      *(_DWORD *)(v87 + 4 * v88 - 4) = v99;
      v82 = *((int *)this + 16);
      v100 = v88++;
    }
    while ( (int)v82 > v100 );
  }
  *(_DWORD *)(v80 + 4 * v82) = v89;
  *((_DWORD *)this + 18) = v89;
}

