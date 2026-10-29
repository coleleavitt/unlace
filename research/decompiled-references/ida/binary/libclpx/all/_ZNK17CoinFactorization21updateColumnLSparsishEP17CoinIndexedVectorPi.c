CoinIndexedVector *__fastcall CoinFactorization::updateColumnLSparsish(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        int *a3)
{
  __int64 v4; // r8
  int v5; // edx
  double v6; // xmm3_8
  __int64 v7; // rbx
  __int64 v8; // rax
  int v9; // r15d
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // r11
  signed int v13; // ebx
  int *v14; // rax
  int v15; // r10d
  int *v16; // rsi
  __int64 v17; // rdx
  int v18; // ecx
  signed int v19; // eax
  int v20; // esi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rdi
  double v25; // xmm1_8
  int v26; // r14d
  __int64 v27; // rax
  int v28; // r9d
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 v32; // rsi
  int v33; // ecx
  int v34; // edi
  _BYTE *v35; // rax
  __int64 v36; // rax
  signed int v37; // eax
  int v38; // ebx
  int v39; // eax
  __int64 v40; // r12
  __int64 v41; // r15
  __int64 v42; // rdi
  __int64 v43; // r15
  double v44; // xmm1_8
  int v45; // r14d
  __int64 v46; // rax
  int v47; // r9d
  __int64 v48; // rsi
  __int64 v49; // r9
  __int64 v50; // rbp
  __int64 v51; // rbx
  int v52; // ecx
  int v53; // edi
  _BYTE *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rbp
  double v59; // xmm1_8
  int v60; // r12d
  __int64 v61; // rax
  int v62; // ecx
  __int64 v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  double v68; // xmm2_8
  __int64 v69; // rax
  double *v70; // rax
  int v71; // edx
  int v72; // eax
  CoinIndexedVector *result; // rax
  int v74; // esi
  _BYTE *v75; // r11
  int v76; // esi
  __int64 v77; // rdx
  unsigned int v78; // ecx
  _QWORD *v79; // rdx
  __int64 v81; // [rsp+8h] [rbp-98h]
  __int64 v82; // [rsp+10h] [rbp-90h]
  __int64 v83; // [rsp+18h] [rbp-88h]
  __int64 v84; // [rsp+20h] [rbp-80h]
  __int64 v85; // [rsp+20h] [rbp-80h]
  signed int v86; // [rsp+28h] [rbp-78h]
  __int64 v87; // [rsp+28h] [rbp-78h]
  CoinFactorization *v88; // [rsp+30h] [rbp-70h]
  int v89; // [rsp+30h] [rbp-70h]
  __int64 v91; // [rsp+40h] [rbp-60h]
  __int64 v92; // [rsp+50h] [rbp-50h]
  __int64 v93; // [rsp+58h] [rbp-48h]
  int v94; // [rsp+60h] [rbp-40h]
  int v95; // [rsp+64h] [rbp-3Ch]
  CoinFactorization *v96; // [rsp+68h] [rbp-38h]

  v4 = *((_QWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 4);
  v6 = *((double *)this + 1);
  v7 = *((_QWORD *)this + 95);
  v8 = 0;
  v9 = *((_DWORD *)this + 8);
  if ( *((int *)this + 192) <= -2 )
    v7 = 0;
  v83 = v7;
  v10 = *((_QWORD *)this + 92);
  if ( *((int *)this + 186) <= -2 )
    v10 = 0;
  v82 = v10;
  v11 = *((_QWORD *)this + 89);
  if ( *((int *)this + 180) <= -2 )
    v11 = 0;
  v81 = v11;
  if ( *((int *)this + 284) > -2 )
    v8 = *((_QWORD *)this + 141);
  v93 = v8;
  v92 = 12LL * *((_DWORD *)this + 10);
  v12 = v92 + v8;
  v13 = *((_DWORD *)this + 9);
  v94 = v13;
  if ( v5 <= 0 )
  {
    v15 = 0;
  }
  else
  {
    v14 = a3;
    v15 = 0;
    v16 = &a3[v5 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v18 = *v14;
        if ( *((_DWORD *)this + 175) <= *v14 )
          break;
        ++v14;
        v17 = v15++;
        a3[v17] = v18;
        if ( v16 == v14 )
          goto LABEL_16;
      }
      if ( v13 > v18 )
        v13 = *v14;
      ++v14;
      *(_BYTE *)(v12 + (v18 >> 3)) |= 1 << (v18 & 7);
    }
    while ( v16 != v14 );
LABEL_16:
    v94 = v13;
  }
  v19 = (v13 + 7) & 0xFFFFFFF8;
  if ( v19 > v9 )
    v19 = v9;
  v20 = v19;
  v86 = v19;
  if ( v19 > v13 )
  {
    v21 = v13;
    v88 = this;
    v22 = ~v13;
    v23 = v13 + 1LL;
    v24 = v23 + (unsigned int)(v20 + v22);
    while ( 1 )
    {
      v25 = *(double *)(v4 + 8 * v21);
      v26 = v21;
      if ( fabs(v25) <= v6 )
      {
        *(_QWORD *)(v4 + 8 * v21) = 0;
        v21 = v23;
        if ( v24 == v23 )
          goto LABEL_30;
      }
      else
      {
        v27 = *(int *)(v83 + 4 * v21);
        v28 = *(_DWORD *)(v83 + 4 * v21 + 4);
        if ( (int)v27 < v28 )
        {
          v84 = v24;
          v29 = (unsigned int)(v28 - 1 - v27) + 1LL;
          v30 = v82 + 4 * v27;
          v31 = v81 + 8 * v27;
          v32 = 0;
          do
          {
            while ( 1 )
            {
              v33 = *(_DWORD *)(v30 + 4 * v32);
              *(double *)(v4 + 8LL * v33) = *(double *)(v4 + 8LL * v33) - *(double *)(v31 + 8 * v32) * v25;
              v34 = 1 << (v33 & 7);
              v35 = (_BYTE *)(v12 + (v33 >> 3));
              if ( !*v35 )
                break;
              ++v32;
              *v35 |= v34;
              if ( v32 == v29 )
                goto LABEL_28;
            }
            ++v32;
            *v35 = v34;
          }
          while ( v32 != v29 );
LABEL_28:
          v24 = v84;
        }
        v36 = v15++;
        v21 = v23;
        a3[v36] = v26;
        if ( v24 == v23 )
        {
LABEL_30:
          v37 = v86;
          this = v88;
          v20 = v86;
          goto LABEL_31;
        }
      }
      ++v23;
    }
  }
  v37 = v13;
LABEL_31:
  v38 = v9 >> 3;
  v89 = v9 >> 3;
  if ( v9 <= v20 )
    goto LABEL_49;
  v39 = v20 >> 3;
  if ( v38 <= v20 >> 3 )
    goto LABEL_48;
  v95 = v9;
  v40 = v39 + 1LL;
  v41 = v39;
  v96 = this;
  v87 = v40 + (unsigned int)(v38 - 1 - v39);
  while ( !*(_BYTE *)(v12 + v41) )
  {
    v41 = v40;
    if ( v87 == v40 )
      goto LABEL_47;
LABEL_35:
    ++v40;
  }
  v91 = v41;
  v42 = 8 * (int)v41;
  v43 = v42 + 8;
  do
  {
    while ( 1 )
    {
      v44 = *(double *)(v4 + 8 * v42);
      v45 = v42;
      if ( fabs(v44) > v6 )
        break;
      *(_QWORD *)(v4 + 8 * v42++) = 0;
      if ( v42 == v43 )
        goto LABEL_46;
    }
    v46 = *(int *)(v83 + 4 * v42);
    v47 = *(_DWORD *)(v83 + 4 * v42 + 4);
    if ( (int)v46 < v47 )
    {
      v48 = 0;
      v85 = v42;
      v49 = (unsigned int)(v47 - 1 - v46) + 1LL;
      v50 = v82 + 4 * v46;
      v51 = v81 + 8 * v46;
      do
      {
        while ( 1 )
        {
          v52 = *(_DWORD *)(v50 + 4 * v48);
          *(double *)(v4 + 8LL * v52) = *(double *)(v4 + 8LL * v52) - *(double *)(v51 + 8 * v48) * v44;
          v53 = 1 << (v52 & 7);
          v54 = (_BYTE *)(v12 + (v52 >> 3));
          if ( !*v54 )
            break;
          ++v48;
          *v54 |= v53;
          if ( v49 == v48 )
            goto LABEL_44;
        }
        ++v48;
        *v54 = v53;
      }
      while ( v48 != v49 );
LABEL_44:
      v42 = v85;
    }
    ++v42;
    v55 = v15++;
    a3[v55] = v45;
  }
  while ( v42 != v43 );
LABEL_46:
  *(_BYTE *)(v12 + v91) = 0;
  v41 = v40;
  if ( v87 != v40 )
    goto LABEL_35;
LABEL_47:
  v9 = v95;
  this = v96;
LABEL_48:
  v37 = v9 & 0xFFFFFFF8;
LABEL_49:
  if ( v9 > v37 )
  {
    v56 = v37;
    v57 = v37 + 1LL;
    v58 = v57 + (unsigned int)(v9 - 1 - v37);
    while ( 1 )
    {
      v59 = *(double *)(v4 + 8 * v56);
      v60 = v56;
      if ( fabs(v59) <= v6 )
      {
        *(_QWORD *)(v4 + 8 * v56) = 0;
        v56 = v57;
        if ( v58 == v57 )
          goto LABEL_58;
      }
      else
      {
        v61 = *(int *)(v83 + 4 * v56);
        v62 = *(_DWORD *)(v83 + 4 * v56 + 4);
        if ( (int)v61 < v62 )
        {
          v63 = v82 + 4 * v61;
          v64 = (unsigned int)(v62 - 1 - v61) + 1LL;
          v65 = v81 + 8 * v61;
          v66 = 0;
          do
          {
            v67 = *(int *)(v63 + 4 * v66);
            v68 = *(double *)(v65 + 8 * v66++);
            *(double *)(v4 + 8 * v67) = *(double *)(v4 + 8 * v67) - v68 * v59;
          }
          while ( v66 != v64 );
        }
        v69 = v15++;
        v56 = v57;
        a3[v69] = v60;
        if ( v58 == v57 )
          goto LABEL_58;
      }
      ++v57;
    }
  }
  v9 = v37;
LABEL_58:
  if ( *((_DWORD *)this + 8) <= v9 )
  {
LABEL_64:
    *(_BYTE *)(v12 + (v94 >> 3)) = 0;
    v72 = ((*((_DWORD *)this + 8) + 7) >> 3) - v89;
    if ( v72 )
      goto LABEL_70;
  }
  else
  {
    v70 = (double *)(v4 + 8LL * v9);
    while ( fabs(*v70) <= v6 )
    {
LABEL_63:
      *v70 = 0.0;
      ++v9;
      ++v70;
      if ( *((_DWORD *)this + 8) <= v9 )
        goto LABEL_64;
    }
    while ( 1 )
    {
      v71 = v15 + 1;
      ++v70;
      a3[v15] = v9++;
      if ( v9 >= *((_DWORD *)this + 8) )
        break;
      ++v15;
      if ( fabs(*v70) <= v6 )
        goto LABEL_63;
    }
    ++v15;
    *(_BYTE *)(v12 + (v94 >> 3)) = 0;
    v72 = ((*((_DWORD *)this + 8) + 7) >> 3) - v89;
    if ( !v72 )
    {
      *((_DWORD *)a2 + 4) = v71;
      return a2;
    }
LABEL_70:
    v74 = v72 + 7;
    v75 = (_BYTE *)(v89 + v12);
    if ( v72 >= 0 )
      v74 = v72;
    v76 = v74 >> 3;
    if ( v76 > 0 )
    {
      if ( v76 == 1 )
      {
        v79 = v75;
        goto LABEL_77;
      }
      v77 = v93 + v92 + v89;
      v78 = 0;
      do
      {
        ++v78;
        v77 += 16;
        *(_OWORD *)(v77 - 16) = 0;
      }
      while ( (unsigned int)v76 >> 1 > v78 );
      v79 = &v75[8 * (v76 & 0xFFFFFFFE)];
      if ( (v76 & 0xFFFFFFFE) != v76 )
LABEL_77:
        *v79 = 0;
      v75 += 8 * v76;
    }
    switch ( v72 % 8 )
    {
      case 1:
        goto LABEL_86;
      case 2:
        goto LABEL_85;
      case 3:
        goto LABEL_84;
      case 4:
        goto LABEL_83;
      case 5:
        goto LABEL_82;
      case 6:
        goto LABEL_81;
      case 7:
        v75[6] = 0;
LABEL_81:
        v75[5] = 0;
LABEL_82:
        v75[4] = 0;
LABEL_83:
        v75[3] = 0;
LABEL_84:
        v75[2] = 0;
LABEL_85:
        v75[1] = 0;
LABEL_86:
        *v75 = 0;
        break;
      default:
        break;
    }
  }
  result = a2;
  *((_DWORD *)a2 + 4) = v15;
  if ( !v15 )
    *((_BYTE *)a2 + 28) = 0;
  return result;
}

