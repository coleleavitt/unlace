void __fastcall sub_B3D780(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  __int64 v3; // r10
  __int64 v4; // r9
  int *v5; // rdi
  int v6; // eax
  __int64 v7; // r8
  int v8; // esi
  int v9; // r11d
  __int64 v10; // r11
  __int64 v11; // r12
  int *v12; // r13
  int v13; // esi
  int v14; // r15d
  __int64 v15; // rbp
  int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // r14
  __int64 v19; // rbx
  double v20; // xmm0_8
  unsigned int v21; // edi
  __int64 *v22; // rsi
  __int64 v23; // r14
  double v24; // xmm2_8
  unsigned int *v25; // rbx
  __int64 v26; // r13
  double v27; // xmm0_8
  __int64 v28; // rdx
  int v29; // r9d
  unsigned int *v30; // r12
  unsigned int v31; // esi
  int v32; // eax
  int *v33; // rcx
  int v34; // eax
  __int64 v35; // rsi
  int v36; // edi
  int v37; // r8d
  __int64 v38; // r14
  __int64 v39; // rdi
  int *v40; // r13
  int v41; // ecx
  int v42; // r11d
  __int64 v43; // r10
  int v44; // r12d
  unsigned int v45; // r8d
  __int64 v46; // rbp
  __int64 v47; // rbx
  double v48; // xmm0_8
  unsigned int v49; // ecx
  __int64 v50; // rbx
  __int64 v51; // rbp
  double v52; // xmm2_8
  unsigned int *v53; // r13
  __int64 v54; // r15
  double v55; // xmm0_8
  __int64 v56; // r8
  int v57; // r12d
  unsigned int *v58; // rbx
  unsigned int v59; // edx
  double v60; // xmm1_8
  __int64 v61; // rdi
  unsigned int v62; // edx
  double v63; // xmm1_8
  __int64 v64; // r11
  int v66; // [rsp+0h] [rbp-50h]
  int v67; // [rsp+Ch] [rbp-44h]
  __int64 v68; // [rsp+18h] [rbp-38h]

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    if ( (int)a2 >= *(_DWORD *)(v3 - 4) )
      goto LABEL_20;
    v5 = (int *)(v3 + 4LL * (unsigned int)a2);
    v6 = *v5;
    if ( !*v5 )
      goto LABEL_20;
    goto LABEL_4;
  }
  if ( (int)a2 >= 0 )
  {
    if ( !v4 )
      return;
    goto LABEL_21;
  }
  a2 = (unsigned int)a2;
  v6 = *(_DWORD *)(4LL * (unsigned int)a2);
  v5 = (int *)(4LL * (unsigned int)a2);
  if ( v6 )
  {
LABEL_4:
    v7 = *(_QWORD *)(a1 + 32);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 - 4);
      v9 = v8 - 1;
    }
    else
    {
      v9 = -1;
      v8 = 0;
    }
    if ( v6 == v9 )
    {
      *v5 = 0;
      --*(_DWORD *)(v7 - 4);
    }
    else
    {
      v10 = (unsigned int)v6;
      v11 = *(unsigned int *)(v7 + 4LL * (unsigned int)(v8 - 1));
      v12 = (int *)(v7 + 4LL * (unsigned int)v6);
      v13 = v6 >> 1;
      *v12 = v11;
      *(_DWORD *)(v3 + 4 * v11) = v6;
      *v5 = 0;
      v14 = *(_DWORD *)(v7 - 4) - 1;
      *(_DWORD *)(v7 - 4) = v14;
      v15 = (unsigned int)*v12;
      v16 = *v12;
      if ( v6 >> 1
        && (v17 = *(_DWORD *)(v7 + 4LL * (unsigned int)v13),
            v18 = **(_QWORD **)(a1 + 24),
            v19 = v17,
            v20 = *(double *)(v18 + 8LL * v17),
            *(double *)(v18 + 8 * v11) > v20) )
      {
        v63 = *(double *)(v18 + 8 * v15);
        while ( 1 )
        {
          v64 = 4 * v10;
          if ( v63 <= v20 )
            break;
          *(_DWORD *)(v7 + v64) = v17;
          *(_DWORD *)(v3 + 4 * v19) = v6;
          if ( !(v13 >> 1) )
          {
            v64 = 4;
            v6 = 1;
            break;
          }
          v19 = *(unsigned int *)(v7 + 4LL * (unsigned int)(v13 >> 1));
          v6 = v13;
          v13 >>= 1;
          v10 = (unsigned int)v6;
          v20 = *(double *)(v18 + 8 * v19);
          v17 = v19;
        }
        *(_DWORD *)(v7 + v64) = v16;
        *(_DWORD *)(v3 + 4 * v15) = v6;
      }
      else
      {
        v21 = 2 * v6;
        if ( 2 * v6 < v14 )
        {
          v67 = *v12;
          v22 = *(__int64 **)(a1 + 24);
          v68 = v4;
          v23 = *v22;
          v24 = *(double *)(*v22 + 8 * v15);
          while ( 1 )
          {
            v31 = v21 + 1;
            v30 = (unsigned int *)(v7 + 4LL * v21);
            v28 = *v30;
            v27 = *(double *)(v23 + 8 * v28);
            v29 = *v30;
            if ( v14 <= (int)(v21 + 1)
              || (v25 = (unsigned int *)(v7 + 4LL * v31), v26 = *v25, *(double *)(v23 + 8 * v26) <= v27) )
            {
              v31 = v21;
            }
            else
            {
              v27 = *(double *)(v23 + 8 * v26);
              v28 = *v25;
              v29 = *v25;
              v30 = (unsigned int *)(v7 + 4LL * v31);
            }
            v12 = (int *)(v7 + 4 * v10);
            if ( v27 <= v24 )
            {
              v16 = v67;
              v4 = v68;
              goto LABEL_19;
            }
            v21 = 2 * v31;
            *v12 = v29;
            *(_DWORD *)(v3 + 4 * v28) = v6;
            if ( v14 <= (int)(2 * v31) )
              break;
            v10 = v31;
            v6 = v31;
          }
          v16 = v67;
          v12 = (int *)v30;
          v6 = v31;
          v4 = v68;
        }
LABEL_19:
        *v12 = v16;
        *(_DWORD *)(v3 + 4 * v15) = v6;
      }
    }
LABEL_20:
    if ( !v4 )
    {
      v32 = 0;
      goto LABEL_22;
    }
LABEL_21:
    v32 = *(_DWORD *)(v4 - 4);
LABEL_22:
    if ( (int)v2 >= v32 )
      return;
    a2 = v2;
    goto LABEL_24;
  }
  if ( v4 )
    goto LABEL_21;
LABEL_24:
  v33 = (int *)(v4 + 4 * a2);
  v34 = *v33;
  if ( *v33 )
  {
    v35 = *(_QWORD *)(a1 + 56);
    if ( v35 )
    {
      v36 = *(_DWORD *)(v35 - 4);
      v37 = v36 - 1;
    }
    else
    {
      v37 = -1;
      v36 = 0;
    }
    if ( v34 == v37 )
    {
      *v33 = 0;
      --*(_DWORD *)(v35 - 4);
    }
    else
    {
      v38 = *(unsigned int *)(v35 + 4LL * (unsigned int)(v36 - 1));
      v39 = (unsigned int)v34;
      v40 = (int *)(v35 + 4LL * (unsigned int)v34);
      *v40 = v38;
      *(_DWORD *)(v4 + 4 * v38) = v34;
      *v33 = 0;
      v41 = v34 >> 1;
      v42 = *(_DWORD *)(v35 - 4) - 1;
      *(_DWORD *)(v35 - 4) = v42;
      v43 = (unsigned int)*v40;
      v44 = *v40;
      if ( v34 >> 1
        && (v45 = *(_DWORD *)(v35 + 4LL * (unsigned int)v41),
            v46 = **(_QWORD **)(a1 + 48),
            v47 = v45,
            v48 = *(double *)(v46 + 8LL * v45),
            *(double *)(v46 + 8 * v38) > v48) )
      {
        v60 = *(double *)(v46 + 8 * v43);
        while ( 1 )
        {
          v61 = 4 * v39;
          if ( v60 <= v48 )
            break;
          *(_DWORD *)(v35 + v61) = v45;
          v62 = v41 >> 1;
          *(_DWORD *)(v4 + 4 * v47) = v34;
          if ( !(v41 >> 1) )
          {
            v61 = 4;
            v34 = 1;
            break;
          }
          v39 = (unsigned int)v41;
          v41 >>= 1;
          v47 = *(unsigned int *)(v35 + 4LL * v62);
          v34 = v39;
          v48 = *(double *)(v46 + 8 * v47);
          v45 = *(_DWORD *)(v35 + 4LL * v62);
        }
        *(_DWORD *)(v35 + v61) = v44;
        *(_DWORD *)(v4 + 4 * v43) = v34;
      }
      else
      {
        v49 = 2 * v34;
        if ( 2 * v34 < v42 )
        {
          v50 = a1;
          v66 = *v40;
          v51 = **(_QWORD **)(v50 + 48);
          v52 = *(double *)(v51 + 8 * v43);
          while ( 1 )
          {
            v59 = v49 + 1;
            v58 = (unsigned int *)(v35 + 4LL * v49);
            v56 = *v58;
            v55 = *(double *)(v51 + 8 * v56);
            v57 = *v58;
            if ( v42 <= (int)(v49 + 1)
              || (v53 = (unsigned int *)(v35 + 4LL * v59), v54 = *v53, *(double *)(v51 + 8 * v54) <= v55) )
            {
              v59 = v49;
            }
            else
            {
              v55 = *(double *)(v51 + 8 * v54);
              v56 = *v53;
              v57 = *v53;
              v58 = (unsigned int *)(v35 + 4LL * v59);
            }
            v40 = (int *)(v35 + 4 * v39);
            if ( v55 <= v52 )
            {
              v44 = v66;
              goto LABEL_40;
            }
            v49 = 2 * v59;
            *v40 = v57;
            *(_DWORD *)(v4 + 4 * v56) = v34;
            if ( v42 <= (int)(2 * v59) )
              break;
            v39 = v59;
            v34 = v59;
          }
          v44 = v66;
          v40 = (int *)v58;
          v34 = v59;
        }
LABEL_40:
        *v40 = v44;
        *(_DWORD *)(v4 + 4 * v43) = v34;
      }
    }
  }
}

