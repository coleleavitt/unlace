__int64 __fastcall sub_3A8020(__int64 *a1, __int64 a2, __int64 a3, int a4, __int64 *a5, __int64 *a6)
{
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rdi
  _DWORD *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // r11
  __int64 *v25; // r13
  __int64 v26; // rax
  int v27; // ecx
  unsigned int v28; // r13d
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rax
  int v34; // r10d
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  void *v38; // rdi
  _QWORD *v39; // rbx
  void *v40; // rdi
  int v41; // r8d
  __int64 v42; // r10
  unsigned __int64 v43; // rdx
  _BYTE *v44; // rsi
  __int64 v45; // r15
  __int64 v46; // r15
  unsigned __int64 v47; // rdx
  size_t v48; // r10
  __int64 v49; // r15
  size_t v50; // r11
  _BYTE *v51; // rsi
  __int64 v52; // r14
  unsigned __int64 v53; // rdx
  __int64 v54; // r15
  _BYTE *v55; // rsi
  __int64 v56; // r14
  unsigned __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rax
  const void *v60; // r14
  void *v61; // rdi
  __int64 v62; // r15
  __int64 v63; // rsi
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  size_t v66; // r10
  __int64 v67; // r15
  unsigned __int64 v68; // rdx
  __int64 v69; // r10
  _BYTE *v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  int v78; // [rsp+10h] [rbp-58h]
  int v79; // [rsp+10h] [rbp-58h]
  unsigned __int64 v80; // [rsp+10h] [rbp-58h]
  unsigned __int64 v81; // [rsp+10h] [rbp-58h]
  int v82; // [rsp+10h] [rbp-58h]
  int v83; // [rsp+10h] [rbp-58h]
  __int64 v84; // [rsp+10h] [rbp-58h]
  unsigned __int64 v85; // [rsp+10h] [rbp-58h]
  unsigned __int64 v86; // [rsp+10h] [rbp-58h]
  int v87; // [rsp+10h] [rbp-58h]
  int v89; // [rsp+18h] [rbp-50h]
  int v90; // [rsp+18h] [rbp-50h]
  size_t v91; // [rsp+18h] [rbp-50h]
  int v92; // [rsp+18h] [rbp-50h]
  int v93; // [rsp+18h] [rbp-50h]
  __int64 v94; // [rsp+20h] [rbp-48h]
  size_t v95; // [rsp+20h] [rbp-48h]
  __int64 v96; // [rsp+20h] [rbp-48h]
  size_t v97; // [rsp+28h] [rbp-40h]

  v10 = *(_QWORD *)(a3 + 48);
  v11 = *(_QWORD *)(qword_2CA1698 + 1384) + 120LL;
  if ( !v10 )
  {
    v19 = *a1;
    v20 = a1[1];
    v21 = v19 + 8 * v20;
    if ( v19 != v21 )
      goto LABEL_13;
LABEL_55:
    v28 = 0;
    goto LABEL_30;
  }
  v12 = 0;
  v13 = 0;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(a3 + 40) + 8 * v13;
      v15 = *(_DWORD **)v14;
      if ( *(_DWORD *)(*(_QWORD *)v14 + 56LL) != a4 )
      {
        ++v12;
        goto LABEL_4;
      }
      v78 = a4;
      memmove((void *)v14, (const void *)(v14 + 8), 8 * (v10 - v13) - 8);
      --*(_QWORD *)(a3 + 48);
      v16 = a1[1];
      v17 = *a1;
      a4 = v78;
      if ( a1[2] < (unsigned __int64)(v16 + 1) )
      {
        v33 = qvector_reserve(a1, v17, v16 + 1, 8);
        a4 = v78;
        *a1 = v33;
        v17 = v33;
        v16 = a1[1];
      }
      *(_QWORD *)(v17 + 8 * v16) = v15;
      ++a1[1];
      if ( v15[10] == 3
        && *(int *)(*(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1384) + 48LL) + 32LL * (unsigned int)v15[13] + 8) > 1 )
      {
        break;
      }
      v18 = v15[17];
      if ( v11 != a2 )
      {
        v15[17] = v18 & 0xFFFFFFB6;
        goto LABEL_11;
      }
      v15[17] = v18 & 0xFFFFFFB6 | 8;
      v10 = *(_QWORD *)(a3 + 48);
LABEL_4:
      v13 = v12;
      if ( v12 >= v10 )
        goto LABEL_12;
    }
    v30 = a5[1];
    v31 = (_QWORD *)(*a5 + 8 * v30);
    if ( (_QWORD *)*a5 == v31 )
      goto LABEL_38;
    v32 = (_QWORD *)*a5;
    while ( v15 != (_DWORD *)*v32 )
    {
      if ( v31 == ++v32 )
        goto LABEL_38;
    }
    if ( v31 == v32 )
    {
LABEL_38:
      if ( a5[2] < (unsigned __int64)(v30 + 1) )
      {
        v87 = a4;
        v74 = qvector_reserve(a5, *a5, v30 + 1, 8);
        a4 = v87;
        v75 = a5[1];
        *a5 = v74;
        v31 = (_QWORD *)(v74 + 8 * v75);
      }
      *v31 = v15;
      ++a5[1];
      v10 = *(_QWORD *)(a3 + 48);
      goto LABEL_4;
    }
LABEL_11:
    v10 = *(_QWORD *)(a3 + 48);
    v13 = v12;
  }
  while ( v12 < v10 );
LABEL_12:
  v19 = *a1;
  v20 = a1[1];
  v21 = *a1 + 8 * v20;
  if ( *a1 != v21 )
  {
LABEL_13:
    v22 = v19;
    v23 = 0;
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)v22 + 64LL) & 0x10) != 0 )
        v23 -= (*(_QWORD *)(*(_QWORD *)v22 + 16LL) < 2u) - 1;
      v22 += 8;
    }
    while ( v21 != v22 );
    if ( v23 )
    {
      if ( v11 != a2 )
      {
        v24 = *(_QWORD *)(a3 + 40);
        goto LABEL_20;
      }
      goto LABEL_22;
    }
  }
  v24 = *(_QWORD *)(a3 + 40);
  v34 = 0;
  v35 = v24 + 8 * v10;
  v36 = v24;
  if ( v24 == v35 )
    goto LABEL_55;
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)v36 + 64LL) & 0x10) != 0 )
      v34 -= (*(_QWORD *)(*(_QWORD *)v36 + 16LL) < 2u) - 1;
    v36 += 8;
  }
  while ( v36 != v35 );
  if ( !v34 )
    goto LABEL_55;
  if ( v11 != a2 )
  {
LABEL_20:
    v19 = v24;
    v20 = v10;
    v21 = v24 + 8 * v10;
  }
  if ( v19 != v21 )
  {
LABEL_22:
    v25 = (__int64 *)v19;
    v26 = v19;
    v27 = 0;
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)v26 + 64LL) & 0x10) != 0 )
        v27 -= (*(_QWORD *)(*(_QWORD *)v26 + 16LL) < 2u) - 1;
      v26 += 8;
    }
    while ( v26 != v21 );
    if ( v27 <= 0 || v20 != v27 )
      goto LABEL_28;
    v41 = 0;
    while ( 2 )
    {
      v56 = *v25;
      if ( (*(_BYTE *)(*v25 + 64) & 0x10) != 0 )
      {
        v57 = *(_QWORD *)(v56 + 16);
        if ( v57 > 1 )
        {
          if ( v41 )
          {
            if ( v41 != 1 )
              goto LABEL_74;
            v62 = a6[1];
            v63 = *a6;
            v64 = a6[2];
            if ( v62 )
            {
              v65 = v62 + 1;
              v66 = v62 - 1;
              if ( v64 >= v62 + 1 )
              {
LABEL_85:
                a6[1] = v65;
                *(_BYTE *)(v63 + v62) = 0;
                if ( v66 )
                {
                  v83 = v41;
                  memmove((void *)(*a6 + 1), (const void *)*a6, v66);
                  v41 = v83;
                }
                goto LABEL_87;
              }
LABEL_96:
              v91 = v66;
              v84 = v65;
              v71 = qvector_reserve(a6, v63, v65, 1);
              v41 = 1;
              v66 = v91;
              *a6 = v71;
              v65 = v84;
              v63 = v71;
              goto LABEL_85;
            }
            if ( v64 <= 1 )
            {
              v66 = 0;
              v62 = 1;
              v65 = 2;
              goto LABEL_96;
            }
            a6[1] = 2;
            *(_BYTE *)(v63 + 1) = 0;
LABEL_87:
            *(_BYTE *)*a6 = 40;
            v67 = a6[1];
            if ( v67 )
            {
              v68 = v67 + 1;
              v69 = a6[1];
              --v67;
            }
            else
            {
              v69 = 1;
              v68 = 2;
            }
            v70 = (_BYTE *)*a6;
            if ( a6[2] < v68 )
            {
              v96 = v69;
              v93 = v41;
              v86 = v68;
              v73 = qvector_reserve(a6, v70, v68, 1);
              v69 = v96;
              v41 = v93;
              *a6 = v73;
              v68 = v86;
              v70 = (_BYTE *)v73;
            }
            a6[1] = v68;
            v70[v67] = 41;
            *(_BYTE *)(*a6 + v69) = 0;
LABEL_74:
            v45 = a6[1];
            if ( v45 )
            {
              v42 = v45 + 2;
              v43 = v45 + 3;
              v44 = (_BYTE *)*a6;
              --v45;
              if ( a6[2] < v43 )
                goto LABEL_76;
            }
            else
            {
              v44 = (_BYTE *)*a6;
              v43 = 4;
              v42 = 3;
              if ( (unsigned __int64)a6[2] < 4 )
              {
LABEL_76:
                v94 = v42;
                v89 = v41;
                v80 = v43;
                v58 = qvector_reserve(a6, v44, v43, 1);
                v42 = v94;
                v41 = v89;
                *a6 = v58;
                v43 = v80;
                v44 = (_BYTE *)v58;
              }
            }
            a6[1] = v43;
            v44[v42] = 0;
            v46 = *a6 + v45;
            *(_WORD *)v46 = 31868;
            *(_BYTE *)(v46 + 2) = 40;
            v47 = *(_QWORD *)(v56 + 16);
            if ( v47 )
            {
              v48 = v47 - 1;
              if ( v47 != 1 )
              {
                v49 = a6[1];
                v50 = v47 - 1;
                if ( v49 )
                {
                  --v49;
                  v50 = v48 + v49;
                  v47 += v49;
                }
                v51 = (_BYTE *)*a6;
                if ( a6[2] < v47 )
                {
                  v97 = v50;
                  v95 = v48;
                  v92 = v41;
                  v85 = v47;
                  v72 = qvector_reserve(a6, v51, v47, 1);
                  v50 = v97;
                  v48 = v95;
                  *a6 = v72;
                  v41 = v92;
                  v51 = (_BYTE *)v72;
                  v47 = v85;
                }
                a6[1] = v47;
                v51[v50] = 0;
                v79 = v41;
                memcpy((void *)(v49 + *a6), *(const void **)(v56 + 8), v48);
                v41 = v79;
              }
            }
            v52 = a6[1];
            if ( v52 )
            {
              v53 = v52 + 1;
              v54 = a6[1];
              v55 = (_BYTE *)*a6;
              --v52;
              if ( a6[2] >= v53 )
                goto LABEL_67;
LABEL_78:
              v90 = v41;
              v81 = v53;
              v59 = qvector_reserve(a6, v55, v53, 1);
              v41 = v90;
              v53 = v81;
              *a6 = v59;
              v55 = (_BYTE *)v59;
            }
            else
            {
              v55 = (_BYTE *)*a6;
              v53 = 2;
              v54 = 1;
              if ( (unsigned __int64)a6[2] < 2 )
                goto LABEL_78;
            }
LABEL_67:
            a6[1] = v53;
            v55[v54] = 0;
            *(_BYTE *)(*a6 + v52) = 41;
          }
          else if ( a6 != (__int64 *)(v56 + 8) )
          {
            v60 = *(const void **)(v56 + 8);
            if ( a6[2] < v57 )
            {
              v76 = qvector_reserve(a6, *a6, v57, 1);
              v41 = 0;
              *a6 = v76;
              v61 = (void *)v76;
            }
            else
            {
              v61 = (void *)*a6;
            }
            a6[1] = v57;
            v82 = v41;
            memmove(v61, v60, v57 - 1);
            v41 = v82;
            *(_BYTE *)(*a6 + v57 - 1) = 0;
          }
          ++v41;
        }
      }
      if ( (__int64 *)v21 == ++v25 )
        goto LABEL_29;
      continue;
    }
  }
LABEL_28:
  a6[1] = 0;
LABEL_29:
  v28 = 1;
LABEL_30:
  if ( !*(_QWORD *)(a3 + 48) )
  {
    v37 = std::_Rb_tree_rebalance_for_erase();
    v38 = *(void **)(v37 + 64);
    v39 = (_QWORD *)v37;
    if ( v38 )
    {
      *(_QWORD *)(v37 + 72) = 0;
      qfree(v38);
    }
    v40 = (void *)v39[5];
    if ( v40 )
    {
      v39[6] = 0;
      qfree(v40);
    }
    operator delete(v39, 0x58u);
    --*(_QWORD *)(a2 + 40);
  }
  return v28;
}

