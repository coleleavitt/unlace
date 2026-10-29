__int64 __fastcall ClpPackedMatrix3::sortBlocks(ClpPackedMatrix3 *this, const ClpSimplex *a2)
{
  __int64 result; // rax
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // r8
  int v10; // eax
  int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // r12
  int *v14; // r11
  __int64 v15; // r13
  __int64 v16; // rcx
  int *v17; // r15
  __int64 v18; // rbx
  int v19; // ebp
  int *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r11
  __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // r11
  __int64 v30; // rsi
  __int64 v31; // rbx
  int v32; // r12d
  __int64 v33; // xmm0_8
  __int64 v34; // xmm1_8
  int v35; // edx
  int v36; // eax
  __int64 v37; // rbx
  int *v38; // r11
  __int64 v39; // r13
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rbx
  int *v43; // r11
  __int64 v44; // r13
  __int64 v45; // rcx
  int *v46; // r15
  __int64 v47; // rbp
  int v48; // r12d
  int *v49; // rcx
  __int64 v50; // r11
  __int64 v51; // rbx
  __int64 v52; // r11
  __int64 v53; // rsi
  __int64 v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rbp
  __int64 v58; // r11
  __int64 v59; // rsi
  __int64 v60; // rbx
  int v61; // r12d
  __int64 v62; // xmm0_8
  __int64 v63; // xmm1_8
  __int64 v64; // rdx
  int *v65; // r15
  __int64 v66; // rbp
  int v67; // r12d
  int *v68; // rdx
  __int64 v69; // rbp
  __int64 v70; // rbx
  __int64 v71; // rbp
  __int64 v72; // r11
  __int64 v73; // rsi
  __int64 v74; // r11
  __int64 v75; // rdx
  __int64 v76; // rbp
  __int64 v77; // rbx
  __int64 v78; // r11
  __int64 v79; // rsi
  int v80; // r12d
  __int64 v81; // xmm0_8
  __int64 v82; // xmm1_8
  int v83; // [rsp+0h] [rbp-74h]
  __int64 v84; // [rsp+4h] [rbp-70h]
  __int64 v85; // [rsp+Ch] [rbp-68h]
  int *v86; // [rsp+14h] [rbp-60h]
  int v87; // [rsp+1Ch] [rbp-58h]
  unsigned int v88; // [rsp+20h] [rbp-54h]
  __int64 v89; // [rsp+24h] [rbp-50h]
  __int64 v90; // [rsp+2Ch] [rbp-48h]
  __int64 v91; // [rsp+34h] [rbp-40h]

  result = *((int *)this + 4);
  v3 = *((_DWORD *)this + 2);
  v4 = *((_QWORD *)this + 4);
  *((_DWORD *)this + 20) = 1;
  v89 = v4;
  v5 = v4 + 4 * result;
  if ( v3 < 0 )
    return result;
  v88 = 0;
  v90 = *((_QWORD *)this + 6);
  v91 = *((_QWORD *)this + 7);
  v86 = *((int **)this + 9);
  do
  {
    v7 = *v86;
    v8 = v86[8];
    v83 = v8;
    v84 = v90 + 4 * v7;
    v85 = v91 + 8 * v7;
    v9 = v89 + 4LL * v86[2];
    v10 = v86[3] - 1;
    if ( v10 < 0 )
    {
      v86[7] = 0;
      v86[6] = 0;
      v41 = 0;
      goto LABEL_28;
    }
    v11 = 0;
    v87 = 4 * v8;
    v12 = 16 * (((unsigned int)(4 * v8 - 1) >> 2) + 1LL);
    while ( 1 )
    {
      v13 = *((_QWORD *)a2 + 33);
      v14 = (int *)(v9 + 4LL * v11);
      while ( 1 )
      {
        v15 = *v14;
        if ( (*(_BYTE *)(v13 + v15) & 3) == 1 )
          break;
        ++v11;
        ++v14;
        if ( v10 < v11 )
          goto LABEL_18;
      }
      if ( v10 > v11 )
        break;
      if ( v10 == v11 )
        goto LABEL_18;
LABEL_17:
      if ( v10 < v11 )
        goto LABEL_18;
    }
    v16 = 4LL * v10;
    v17 = (int *)(v9 + v16);
    v18 = *(int *)(v9 + v16);
    v19 = *(_DWORD *)(v9 + v16);
    if ( (*(_BYTE *)(v13 + v18) & 3) != 1 )
    {
LABEL_13:
      *v17 = *v14;
      *(_DWORD *)(v5 + 4 * v15) = v10;
      *v14 = v19;
      *(_DWORD *)(v5 + 4 * v18) = v11;
      v21 = (int)(v11 - (v11 & 0xFFFFFFFC) + (v11 & 0xFFFFFFFC) * v83);
      v22 = 8 * v21;
      v23 = 4 * v21;
      v24 = (int)(v10 - (v10 & 0xFFFFFFFC) + (v10 & 0xFFFFFFFC) * v83);
      v25 = 8 * v24;
      v26 = 4 * v24;
      if ( v87 > 0 )
      {
        v27 = 0;
        v28 = v84 + v23;
        v29 = v84 + v26;
        v30 = v85 + v25;
        v31 = v85 + v22;
        do
        {
          v32 = *(_DWORD *)(v28 + v27);
          v33 = *(_QWORD *)(v31 + 2 * v27);
          v34 = *(_QWORD *)(v30 + 2 * v27);
          *(_DWORD *)(v28 + v27) = *(_DWORD *)(v29 + v27);
          *(_QWORD *)(v31 + 2 * v27) = v34;
          *(_DWORD *)(v29 + v27) = v32;
          *(_QWORD *)(v30 + 2 * v27) = v33;
          v27 += 16;
        }
        while ( v12 != v27 );
      }
      --v10;
      ++v11;
      goto LABEL_17;
    }
    v20 = (int *)(v9 + v16 - 4);
    while ( --v10 != v11 )
    {
      v18 = *v20;
      v17 = v20--;
      v19 = v18;
      if ( (*(_BYTE *)(v13 + v18) & 3) != 1 )
        goto LABEL_13;
    }
LABEL_18:
    v86[7] = v11;
    v35 = v11 - 1;
    if ( v35 < 0 )
    {
      v86[6] = 0;
      v41 = 0;
      goto LABEL_28;
    }
    v36 = 0;
    while ( 2 )
    {
      v37 = *((_QWORD *)a2 + 33);
      v38 = (int *)(v9 + 4LL * v36);
      while ( 1 )
      {
        v39 = *v38;
        if ( (*(_BYTE *)(v37 + v39) & 7) == 2 )
          break;
        ++v36;
        ++v38;
        if ( v36 > v35 )
          goto LABEL_23;
      }
      if ( v35 <= v36 )
      {
        if ( v35 == v36 )
          goto LABEL_55;
        goto LABEL_39;
      }
      v45 = 4LL * v35;
      v46 = (int *)(v9 + v45);
      v47 = *(int *)(v9 + v45);
      v48 = *(_DWORD *)(v9 + v45);
      if ( (*(_BYTE *)(v37 + v47) & 7) != 2 )
      {
LABEL_35:
        *v46 = *v38;
        *(_DWORD *)(v5 + 4 * v39) = v35;
        *v38 = v48;
        *(_DWORD *)(v5 + 4 * v47) = v36;
        v50 = (int)(v36 - (v36 & 0xFFFFFFFC) + (v36 & 0xFFFFFFFC) * v83);
        v51 = 8 * v50;
        v52 = 4 * v50;
        v53 = (int)(v35 - (v35 & 0xFFFFFFFC) + (v35 & 0xFFFFFFFC) * v83);
        v54 = 8 * v53;
        v55 = 4 * v53;
        if ( v87 > 0 )
        {
          v56 = 0;
          v57 = v84 + v52;
          v58 = v84 + v55;
          v59 = v85 + v54;
          v60 = v85 + v51;
          do
          {
            v61 = *(_DWORD *)(v57 + v56);
            v62 = *(_QWORD *)(v60 + 2 * v56);
            v63 = *(_QWORD *)(v59 + 2 * v56);
            *(_DWORD *)(v57 + v56) = *(_DWORD *)(v58 + v56);
            *(_QWORD *)(v60 + 2 * v56) = v63;
            *(_DWORD *)(v58 + v56) = v61;
            *(_QWORD *)(v59 + 2 * v56) = v62;
            v56 += 16;
          }
          while ( v12 != v56 );
        }
        --v35;
        ++v36;
LABEL_39:
        if ( v35 < v36 )
        {
LABEL_23:
          v40 = v36 - 1;
          goto LABEL_24;
        }
        continue;
      }
      break;
    }
    v49 = (int *)(v9 + v45 - 4);
    while ( --v35 != v36 )
    {
      v47 = *v49;
      v46 = v49--;
      v48 = v47;
      if ( (*(_BYTE *)(v37 + v47) & 7) != 2 )
        goto LABEL_35;
    }
LABEL_55:
    v40 = v35 - 1;
    v36 = v35;
LABEL_24:
    v86[6] = v36;
    v41 = 0;
    if ( v40 < 0 )
      goto LABEL_28;
    while ( 2 )
    {
      v42 = *((_QWORD *)a2 + 33);
      v43 = (int *)(v9 + 4LL * v41);
      while ( 1 )
      {
        v44 = *v43;
        if ( (*(_BYTE *)(v42 + v44) & 7) == 3 )
          break;
        ++v41;
        ++v43;
        if ( v41 > v40 )
          goto LABEL_28;
      }
      if ( v40 <= v41 )
      {
        if ( v40 == v41 )
          goto LABEL_28;
        goto LABEL_50;
      }
      v64 = 4LL * v40;
      v65 = (int *)(v9 + v64);
      v66 = *(int *)(v9 + v64);
      v67 = *(_DWORD *)(v9 + v64);
      if ( (*(_BYTE *)(v42 + v66) & 7) != 3 )
      {
LABEL_46:
        *v65 = *v43;
        *(_DWORD *)(v5 + 4 * v44) = v40;
        *v43 = v67;
        *(_DWORD *)(v5 + 4 * v66) = v41;
        v69 = (int)(v41 - (v41 & 0xFFFFFFFC) + (v41 & 0xFFFFFFFC) * v83);
        v70 = 8 * v69;
        v71 = 4 * v69;
        v72 = (int)(v40 - (v40 & 0xFFFFFFFC) + (v40 & 0xFFFFFFFC) * v83);
        v73 = 8 * v72;
        v74 = 4 * v72;
        if ( v87 > 0 )
        {
          v75 = 0;
          v76 = v84 + v71;
          v77 = v85 + v70;
          v78 = v84 + v74;
          v79 = v85 + v73;
          do
          {
            v80 = *(_DWORD *)(v76 + v75);
            v81 = *(_QWORD *)(v77 + 2 * v75);
            v82 = *(_QWORD *)(v79 + 2 * v75);
            *(_DWORD *)(v76 + v75) = *(_DWORD *)(v78 + v75);
            *(_QWORD *)(v77 + 2 * v75) = v82;
            *(_DWORD *)(v78 + v75) = v80;
            *(_QWORD *)(v79 + 2 * v75) = v81;
            v75 += 16;
          }
          while ( v12 != v75 );
        }
        --v40;
        ++v41;
LABEL_50:
        if ( v40 < v41 )
          goto LABEL_28;
        continue;
      }
      break;
    }
    v68 = (int *)(v9 + v64 - 4);
    while ( --v40 != v41 )
    {
      v66 = *v68;
      v65 = v68--;
      v67 = v66;
      if ( (*(_BYTE *)(v42 + v66) & 7) != 3 )
        goto LABEL_46;
    }
LABEL_28:
    ++v88;
    v86[5] = v41;
    v86 += 10;
    result = v88;
  }
  while ( *((_DWORD *)this + 2) >= (signed int)v88 );
  return result;
}

