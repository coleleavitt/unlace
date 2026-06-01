unsigned __int64 __fastcall subst_constraint_action::postsolve(subst_constraint_action *this, CoinPostsolveMatrix *a2)
{
  int *v2; // r15
  unsigned __int64 result; // rax
  int v4; // ebx
  int v5; // r12d
  int *v6; // r13
  __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rcx
  double *v14; // rdi
  bool v15; // zf
  int v16; // ecx
  __int64 v17; // rsi
  double v18; // xmm1_8
  __int64 v19; // rax
  double v20; // xmm0_8
  int *v21; // r14
  __int64 v22; // rbx
  int v23; // r13d
  int *v24; // r12
  int *v25; // rbx
  int v26; // ebx
  __int64 v27; // r12
  double *v28; // rbp
  double v29; // xmm1_8
  int *v30; // r14
  __int64 v31; // r13
  int *v32; // r15
  int *v33; // rbx
  int minor3; // eax
  double v35; // xmm0_8
  double *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  double v39; // xmm0_8
  __int64 v40; // rax
  int *v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // xmm0_8
  double *v45; // rsi
  double v46; // xmm1_8
  __int64 v47; // rax
  double v48; // xmm0_8
  char *v49; // rdx
  char v50; // al
  __int64 v51; // xmm0_8
  __int64 v52; // rax
  int *v53; // rcx
  double *v54; // [rsp+8h] [rbp-160h]
  int *v55; // [rsp+10h] [rbp-158h]
  int *v56; // [rsp+18h] [rbp-150h]
  int *v57; // [rsp+20h] [rbp-148h]
  int v58; // [rsp+28h] [rbp-140h]
  __int64 v59; // [rsp+28h] [rbp-140h]
  __int64 v60; // [rsp+30h] [rbp-138h]
  __int64 v61; // [rsp+38h] [rbp-130h]
  int *v62; // [rsp+40h] [rbp-128h]
  __int64 v63; // [rsp+48h] [rbp-120h]
  int *v64; // [rsp+50h] [rbp-118h]
  double *v65; // [rsp+58h] [rbp-110h]
  int v66; // [rsp+64h] [rbp-104h]
  int *v67; // [rsp+68h] [rbp-100h]
  int *v68; // [rsp+70h] [rbp-F8h]
  int *v69; // [rsp+78h] [rbp-F0h]
  int v71; // [rsp+88h] [rbp-E0h]
  int v72; // [rsp+8Ch] [rbp-DCh]
  __int64 v73; // [rsp+90h] [rbp-D8h]
  double v74; // [rsp+98h] [rbp-D0h]
  double v75; // [rsp+A0h] [rbp-C8h]
  double *v76; // [rsp+A8h] [rbp-C0h]
  __int64 v77; // [rsp+B0h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+B8h] [rbp-B0h]
  __int64 v79; // [rsp+C0h] [rbp-A8h]
  __int64 v80; // [rsp+C8h] [rbp-A0h]
  __int64 v81; // [rsp+D0h] [rbp-98h]
  __int64 v82; // [rsp+D8h] [rbp-90h]
  __int64 v83; // [rsp+E0h] [rbp-88h]
  double *v84; // [rsp+E8h] [rbp-80h]
  __int64 v85; // [rsp+F0h] [rbp-78h]
  int v86; // [rsp+F8h] [rbp-70h]
  unsigned int v87; // [rsp+FCh] [rbp-6Ch]
  __int64 v88; // [rsp+100h] [rbp-68h]
  __int64 v89; // [rsp+108h] [rbp-60h]
  double v90; // [rsp+110h] [rbp-58h]
  unsigned __int64 v91; // [rsp+118h] [rbp-50h]
  __int64 v92; // [rsp+120h] [rbp-48h]
  __int64 v93; // [rsp+128h] [rbp-40h]

  v2 = *((int **)a2 + 6);
  v57 = *((int **)a2 + 5);
  v55 = *((int **)a2 + 7);
  v63 = *((_QWORD *)a2 + 8);
  v92 = *((_QWORD *)a2 + 13);
  v93 = *((_QWORD *)a2 + 14);
  v88 = *((_QWORD *)a2 + 9);
  v61 = *((_QWORD *)a2 + 20);
  v89 = *((_QWORD *)a2 + 23);
  v79 = *((_QWORD *)a2 + 22);
  v82 = *((_QWORD *)a2 + 21);
  v56 = *((int **)a2 + 33);
  v69 = (int *)((char *)a2 + 256);
  v90 = *((double *)a2 + 19);
  v91 = *((_QWORD *)this + 3);
  result = v91 + 80LL * *((int *)this + 4) - 80;
  v78 = result;
  if ( v91 <= result )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(result + 72);
      v5 = *(_DWORD *)(result + 64);
      v6 = *(int **)(result + 24);
      v7 = *(_QWORD *)(result + 32);
      v8 = *(_QWORD *)result;
      v9 = *(_QWORD *)(result + 8);
      v66 = *(_DWORD *)(result + 68);
      v72 = v4;
      v80 = *(_QWORD *)(result + 16);
      v67 = v6;
      v81 = *(_QWORD *)(result + 56);
      v73 = v7;
      v64 = *(int **)(result + 40);
      v65 = *(double **)(result + 48);
      v77 = v5;
      if ( v4 <= 0 )
      {
        v74 = 0.0;
        *(double *)(v61 + 8LL * v5) = 1.0e50 / 0.0;
        v2[v5] = 0;
        v85 = v66;
        v83 = 8LL * v66;
        v75 = 1.0e50;
        v36 = (double *)(v83 + v79);
      }
      else
      {
        v10 = (unsigned int)(v4 - 1);
        v87 = v10;
        v11 = 0;
        v12 = 0;
        v75 = 1.0e50;
        v74 = 0.0;
        v76 = nullptr;
        v68 = nullptr;
        v86 = -1;
        do
        {
          v13 = v6[v11 / 4];
          v14 = (double *)(v92 + 8 * v13);
          v15 = v66 == v6[v11 / 4];
          *v14 = *(double *)(v8 + 2 * v11);
          *(_QWORD *)(v93 + 8 * v13) = *(_QWORD *)(v9 + 2 * v11);
          v16 = *(_DWORD *)(v7 + v11);
          if ( v15 )
          {
            v86 = *(_DWORD *)(v7 + v11);
            v75 = *v14;
            v68 = &v64[v12];
            v76 = &v65[v12];
            v74 = *(double *)(v80 + 2 * v11);
          }
          v11 += 4LL;
          v12 += v16;
        }
        while ( 4 * v10 + 4 != v11 );
        v54 = (double *)(v61 + 8LL * v5);
        *v54 = 0.0;
        if ( v86 <= 0 )
        {
          *v54 = v75 / v74;
          v2[v5] = 0;
          v85 = v66;
          v83 = 8LL * v66;
          v84 = (double *)(v83 + v79);
        }
        else
        {
          v17 = (unsigned int)(v86 - 1);
          v18 = v75;
          v19 = 0;
          do
          {
            v20 = *(double *)(v61 + 8LL * v68[v19]) * v76[v19];
            ++v19;
            v18 = v18 - v20;
          }
          while ( v17 + 1 != v19 );
          v58 = v5;
          v21 = v68;
          v22 = (__int64)&v6[v10 + 1];
          *(double *)(v61 + 8LL * v5) = v18 / v74;
          do
          {
            v23 = *v21;
            if ( v58 != *v21 )
            {
              v24 = (int *)v22;
              v25 = v67;
              do
              {
                if ( *v25 != v66 )
                  presolve_delete_from_major2(v23, *v25, v57, v2, v55, v56, v69);
                ++v25;
              }
              while ( v24 != v25 );
              v22 = (__int64)v24;
            }
            ++v21;
          }
          while ( &v68[v17 + 1] != v21 );
          v2[v77] = 0;
          v85 = v66;
          v83 = 8LL * v66;
          v84 = (double *)(v83 + v79);
        }
        v59 = 0;
        v62 = v2;
        do
        {
          v26 = *(_DWORD *)(v73 + 4 * v59);
          v27 = v67[v59];
          v71 = v26;
          if ( v66 != (_DWORD)v27 )
          {
            if ( v26 <= 0 )
            {
              v29 = 0.0;
            }
            else
            {
              v28 = v65;
              v29 = 0.0;
              v30 = v64;
              v60 = (__int64)&v64[v26 - 1 + 1];
              do
              {
                while ( 1 )
                {
                  v31 = *v30;
                  v32 = &v62[v31];
                  v33 = &v57[v31];
                  minor3 = presolve_find_minor3(v27, *v33, *v32, v55, v56);
                  if ( minor3 == -1 )
                    break;
                  v35 = *v28;
                  ++v30;
                  ++v28;
                  *(double *)(v63 + 8LL * minor3) = v35;
                  v29 = v29 + *(double *)(v61 + 8 * v31) * *(v28 - 1);
                  if ( v30 == (int *)v60 )
                    goto LABEL_25;
                }
                ++v30;
                v51 = *(_QWORD *)v28++;
                v52 = *((int *)a2 + 64);
                v53 = &v56[v52];
                *((_DWORD *)a2 + 64) = *v53;
                *v53 = *v33;
                *v33 = v52;
                *(_QWORD *)(v63 + 8 * v52) = v51;
                v55[v52] = v27;
                ++*v32;
                v29 = v29 + *(double *)(v61 + 8 * v31) * *(v28 - 1);
              }
              while ( (int *)v60 != v30 );
            }
LABEL_25:
            *(double *)(v79 + 8 * v27) = v29;
          }
          ++v59;
          v65 += v71;
          v64 += v71;
        }
        while ( v72 > (int)v59 );
        v2 = v62;
        v36 = v84;
        if ( v86 > 0 )
        {
          v37 = 0;
          do
          {
            v38 = *((int *)a2 + 64);
            v39 = v76[v37];
            v40 = v68[v37++];
            v41 = &v56[v38];
            v40 *= 4;
            *((_DWORD *)a2 + 64) = *v41;
            *v41 = *(int *)((char *)v57 + v40);
            *(int *)((char *)v57 + v40) = v38;
            *(double *)(v63 + 8 * v38) = v39;
            v55[v38] = v66;
            ++*(int *)((char *)v62 + v40);
          }
          while ( (unsigned int)(v86 - 1) + 1LL != v37 );
          *v84 = v75;
          v42 = 0;
          if ( v81 )
          {
            do
            {
              v43 = v68[v42];
              v44 = *(_QWORD *)(v81 + 8 * v42++);
              *(_QWORD *)(v88 + 8 * v43) = v44;
            }
            while ( v42 != v37 );
          }
          v45 = (double *)(v82 + v83);
          v46 = v90 * *(double *)(v88 + 8 * v77);
          *(_QWORD *)(v82 + v83) = 0;
          goto LABEL_33;
        }
      }
      *v36 = v75;
      v45 = (double *)(v82 + v83);
      v46 = v90 * *(double *)(v88 + 8 * v77);
      *(_QWORD *)(v82 + v83) = 0;
      if ( v72 > 0 )
      {
        v87 = v72 - 1;
LABEL_33:
        v47 = 0;
        do
        {
          v48 = *(double *)(v82 + 8LL * v67[v47]) * *(double *)(v80 + 8 * v47);
          ++v47;
          v46 = v46 - v48;
        }
        while ( v87 + 1LL != v47 );
      }
      v49 = (char *)(*((_QWORD *)a2 + 25) + v85);
      *v45 = v46 / v74;
      *(_QWORD *)(v89 + 8 * v77) = 0;
      v50 = *v49;
      if ( *v45 <= 0.0 )
      {
        v78 -= 80LL;
        *v49 = v50 & 0xF8 | 3;
        *(_BYTE *)(*((_QWORD *)a2 + 24) + v77) = *(_BYTE *)(*((_QWORD *)a2 + 24) + v77) & 0xF8 | 1;
        result = v78;
        if ( v91 > v78 )
          return result;
      }
      else
      {
        v78 -= 80LL;
        *v49 = v50 & 0xF8 | 2;
        *(_BYTE *)(v77 + *((_QWORD *)a2 + 24)) = *(_BYTE *)(v77 + *((_QWORD *)a2 + 24)) & 0xF8 | 1;
        result = v78;
        if ( v78 < v91 )
          return result;
      }
    }
  }
  return result;
}

