void __fastcall sub_496900(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 *a6, __int128 a7)
{
  __int64 v7; // r15
  __int64 *v9; // rdi
  __int64 *v11; // rcx
  __int64 v12; // rax
  __m128i v13; // xmm0
  char *v14; // r14
  __int64 v15; // r8
  __int64 v16; // r11
  char *v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r9
  char *v20; // rbp
  _DWORD *v21; // rax
  _DWORD *v22; // rcx
  char v23; // al
  __int64 v24; // r11
  __int64 *v25; // rbx
  __int64 v26; // r10
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // dx
  bool v29; // al
  __int64 v30; // r13
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // r11
  _DWORD *v34; // rdx
  __int64 v35; // r13
  char v36; // di
  _DWORD *v37; // rdx
  __int64 v38; // r10
  char *v39; // rbp
  __int64 v40; // r9
  unsigned __int16 v41; // dx
  unsigned __int16 v42; // ax
  char *v43; // rax
  int v44; // ecx
  __int64 v45; // rdx
  __int64 *v46; // rax
  int *v47; // rcx
  int *v48; // rdx
  int v49; // edi
  int v50; // eax
  bool v51; // al
  __int64 v52; // r13
  int *v53; // rcx
  int *v54; // rdx
  int v55; // edi
  int v56; // eax
  bool v57; // cf
  bool v58; // cf
  int v59; // ecx
  int v60; // edx
  int v61; // ecx
  int v62; // edx
  _DWORD *v63; // rax
  _DWORD *v64; // rax
  _DWORD *v65; // rdx
  unsigned __int16 v66; // ax
  unsigned int v67; // edx
  unsigned int v68; // eax
  _DWORD *v69; // rax
  _DWORD *v70; // rdx
  unsigned __int16 v71; // ax
  unsigned int v72; // edx
  unsigned int v73; // eax
  __int64 v74; // r9
  _DWORD *v75; // rax
  __int128 v76; // [rsp-8h] [rbp-A8h]
  char *v77; // [rsp+20h] [rbp-80h]
  __m128i v79; // [rsp+38h] [rbp-68h] BYREF
  void *dest; // [rsp+48h] [rbp-58h]
  __int64 *v81; // [rsp+50h] [rbp-50h]
  void *v82; // [rsp+58h] [rbp-48h]
  _DWORD *v83; // [rsp+60h] [rbp-40h]

  v7 = a5;
  v9 = a3;
  v11 = a6;
  v12 = a4;
  if ( a5 <= a4 )
    v12 = a5;
  v13 = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
  if ( (__int64)a7 >= v12 )
  {
    v46 = a1;
    goto LABEL_86;
  }
  v77 = (char *)a1;
  v14 = (char *)a2;
  v81 = a3;
  v79 = v13;
  while ( 1 )
  {
    if ( v7 >= a4 )
    {
      v17 = v77;
      v31 = v7 / 2;
      v30 = v7 / 2;
      v20 = &v14[8 * (v7 / 2)];
      v32 = (v14 - v77) >> 3;
      if ( v14 - v77 <= 0 )
      {
        v16 = 0;
LABEL_40:
        v7 -= v31;
        goto LABEL_41;
      }
      dest = (void *)(v7 / 2);
      v33 = *(_QWORD *)v20;
      v82 = &v14[8 * (v7 / 2)];
      while ( 1 )
      {
        v38 = v32 >> 1;
        v39 = &v17[8 * (v32 >> 1)];
        v40 = *(_QWORD *)v39;
        if ( *(_QWORD *)v39 == v33 )
          goto LABEL_32;
        v41 = *(_WORD *)(v33 + 4);
        v42 = *(_WORD *)(v40 + 4);
        if ( v41 )
          break;
        v34 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL);
        if ( v34 && !*v34 && v34[1] == 8 && *(_DWORD *)(v33 + 24) == 1 )
        {
          v35 = *(_QWORD *)(v33 + 32);
          if ( v42 )
          {
            if ( v40 == v35 )
              goto LABEL_32;
            v41 = *(_WORD *)(v35 + 4);
            if ( v41 == v42 )
              goto LABEL_62;
            goto LABEL_37;
          }
          v37 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
          if ( !v37 )
          {
LABEL_31:
            if ( v40 == v35 )
              goto LABEL_32;
            v41 = *(_WORD *)(v35 + 4);
            goto LABEL_70;
          }
          v36 = 1;
LABEL_30:
          if ( *v37 || v37[1] != 8 || *(_DWORD *)(v40 + 24) != 1 )
            goto LABEL_31;
          v40 = *(_QWORD *)(v40 + 32);
          if ( v40 == v35 )
          {
            if ( !v36 )
              goto LABEL_38;
            goto LABEL_32;
          }
          v41 = *(_WORD *)(v35 + 4);
          v42 = *(_WORD *)(v40 + 4);
LABEL_70:
          if ( v41 == v42 )
          {
            if ( v41 )
              goto LABEL_62;
LABEL_46:
            v47 = *(int **)(*(_QWORD *)(v35 + 16) + 24LL);
            v48 = *(int **)(*(_QWORD *)(v40 + 16) + 24LL);
            if ( v47 )
            {
              v49 = *v47;
              if ( v48 )
              {
                v50 = *v48;
                if ( v49 != *v48 )
                  goto LABEL_49;
                v50 = v47[1];
                v59 = v48[1];
                v60 = v59;
                if ( v50 != v59 )
                {
LABEL_93:
                  v51 = v50 < v60;
                  goto LABEL_64;
                }
                if ( v49 != 5 )
                  goto LABEL_62;
                if ( v59 != 2 )
                {
                  if ( v59 != 4 && v59 != 3 )
                  {
                    if ( v59 == 5 )
                      goto LABEL_120;
LABEL_121:
                    v64 = nullptr;
                    if ( v59 == 2 )
                    {
                      if ( *(_DWORD *)(v40 + 24) != 2 )
                        goto LABEL_62;
                    }
                    else
                    {
LABEL_122:
                      if ( v59 != 4 && v59 != 3 && v59 != 5 )
                        goto LABEL_124;
LABEL_123:
                      if ( *(_DWORD *)(v40 + 24) != 2 )
                      {
LABEL_124:
                        if ( v64 )
                          goto LABEL_32;
                        goto LABEL_62;
                      }
                    }
                    v70 = *(_DWORD **)(v40 + 40);
                    v40 = *(_QWORD *)(v40 + 32);
                    if ( !v64 )
                    {
                      if ( v70 )
                        goto LABEL_38;
                      goto LABEL_62;
                    }
                    if ( !v70 )
                      goto LABEL_32;
                    if ( v35 == v40 )
                    {
                      v51 = *v64 < *v70;
                      goto LABEL_64;
                    }
                    v71 = *(_WORD *)(v35 + 4);
                    v57 = v71 < *(_WORD *)(v40 + 4);
                    if ( v71 == *(_WORD *)(v40 + 4) )
                    {
                      if ( v71 )
                        goto LABEL_62;
                      v72 = *(unsigned __int16 *)(v35 + 28);
                      v73 = *(unsigned __int16 *)(v40 + 28);
                      v57 = v72 < v73;
                      if ( v72 == v73 )
                      {
                        v83 = sub_490FE0(v35);
                        v75 = sub_490FE0(v74);
                        if ( v83 && v75 )
                        {
                          if ( v83 == v75 )
                            goto LABEL_62;
                          v51 = *v83 < *v75;
LABEL_64:
                          if ( v51 )
                            goto LABEL_38;
                          goto LABEL_32;
                        }
                        v57 = v83 < v75;
                        if ( v83 == v75 )
                          goto LABEL_62;
                      }
                    }
LABEL_63:
                    v51 = v57;
                    goto LABEL_64;
                  }
                  v64 = nullptr;
                  if ( *(_DWORD *)(v35 + 24) == 2 )
                  {
LABEL_174:
                    v64 = *(_DWORD **)(v35 + 40);
                    v35 = *(_QWORD *)(v35 + 32);
                  }
                  if ( v59 != 2 )
                    goto LABEL_122;
                  goto LABEL_123;
                }
LABEL_120:
                if ( *(_DWORD *)(v35 + 24) != 2 )
                  goto LABEL_121;
                goto LABEL_174;
              }
              v50 = -1;
              if ( v49 == -1 )
              {
                v50 = v47[1];
                v60 = -1;
                if ( v50 != -1 )
                  goto LABEL_93;
LABEL_62:
                v57 = *(_DWORD *)v35 < *(_DWORD *)v40;
                goto LABEL_63;
              }
            }
            else
            {
              if ( !v48 )
                goto LABEL_62;
              v50 = *v48;
              if ( *v48 == -1 )
              {
                v60 = v48[1];
                if ( v60 != -1 )
                  goto LABEL_93;
                goto LABEL_62;
              }
              v49 = -1;
            }
LABEL_49:
            v51 = v50 > v49;
            goto LABEL_64;
          }
LABEL_37:
          if ( v41 < v42 )
            goto LABEL_38;
LABEL_32:
          v17 = v39 + 8;
          v32 = v32 - v38 - 1;
          if ( v32 <= 0 )
            goto LABEL_39;
        }
        else
        {
          if ( !v42 )
            goto LABEL_29;
LABEL_38:
          v32 = v38;
          if ( v38 <= 0 )
          {
LABEL_39:
            v30 = (__int64)dest;
            v20 = (char *)v82;
            v16 = (v17 - v77) >> 3;
            a4 -= v16;
            goto LABEL_40;
          }
        }
      }
      if ( v42 )
      {
        v35 = v33;
        if ( v41 == v42 )
          goto LABEL_62;
        goto LABEL_37;
      }
LABEL_29:
      v35 = v33;
      v36 = 0;
      v37 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
      if ( !v37 )
      {
        if ( *(_WORD *)(v33 + 4) )
          goto LABEL_32;
        goto LABEL_46;
      }
      goto LABEL_30;
    }
    v15 = a4 / 2;
    v16 = a4 / 2;
    v17 = &v77[8 * (a4 / 2)];
    v18 = ((char *)v81 - v14) >> 3;
    if ( (char *)v81 - v14 > 0 )
    {
      dest = (void *)(a4 / 2);
      v19 = *(_QWORD *)v17;
      v20 = v14;
      v82 = &v77[8 * (a4 / 2)];
      while ( 1 )
      {
        v24 = v18 >> 1;
        v25 = (__int64 *)&v20[8 * (v18 >> 1)];
        v26 = *v25;
        if ( v19 == *v25 )
          goto LABEL_14;
        v27 = *(_WORD *)(v26 + 4);
        v28 = *(_WORD *)(v19 + 4);
        if ( v27 )
          break;
        v21 = *(_DWORD **)(*(_QWORD *)(v26 + 16) + 24LL);
        if ( v21 && !*v21 && v21[1] == 8 && *(_DWORD *)(v26 + 24) == 1 )
        {
          v26 = *(_QWORD *)(v26 + 32);
          if ( v28 )
          {
            if ( v19 == v26 )
              goto LABEL_14;
            v27 = *(_WORD *)(v26 + 4);
            if ( v27 != v28 )
            {
LABEL_19:
              v29 = v27 < v28;
              goto LABEL_20;
            }
            goto LABEL_78;
          }
          v22 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
          if ( !v22 )
          {
LABEL_13:
            if ( v19 == v26 )
              goto LABEL_14;
LABEL_50:
            v27 = *(_WORD *)(v26 + 4);
            v52 = v19;
            goto LABEL_51;
          }
          v23 = 1;
LABEL_12:
          if ( *v22 || v22[1] != 8 || *(_DWORD *)(v19 + 24) != 1 )
            goto LABEL_13;
          v52 = *(_QWORD *)(v19 + 32);
          if ( v52 == v26 )
          {
            if ( !v23 )
              goto LABEL_21;
            goto LABEL_14;
          }
          v27 = *(_WORD *)(v26 + 4);
          v28 = *(_WORD *)(v52 + 4);
LABEL_51:
          if ( v28 != v27 )
            goto LABEL_19;
          if ( v28 )
            goto LABEL_79;
          v53 = *(int **)(*(_QWORD *)(v26 + 16) + 24LL);
          v54 = *(int **)(*(_QWORD *)(v52 + 16) + 24LL);
          if ( !v53 )
          {
            if ( !v54 )
              goto LABEL_79;
            v56 = *v54;
            if ( *v54 != -1 )
            {
              v55 = -1;
LABEL_56:
              v29 = v56 > v55;
              goto LABEL_20;
            }
            v62 = v54[1];
            if ( v62 == -1 )
              goto LABEL_79;
            goto LABEL_95;
          }
          v55 = *v53;
          if ( !v54 )
          {
            v56 = -1;
            if ( v55 != -1 )
              goto LABEL_56;
            v56 = v53[1];
            v62 = -1;
            if ( v56 == -1 )
              goto LABEL_79;
LABEL_95:
            v29 = v56 < v62;
            goto LABEL_20;
          }
          v56 = *v54;
          if ( v55 != *v54 )
            goto LABEL_56;
          v56 = v53[1];
          v61 = v54[1];
          v62 = v61;
          if ( v61 != v56 )
            goto LABEL_95;
          if ( v55 != 5 )
            goto LABEL_79;
          if ( v61 != 2 )
          {
            if ( v61 == 4 || v61 == 3 )
            {
              v63 = nullptr;
              if ( *(_DWORD *)(v26 + 24) == 2 )
                goto LABEL_186;
            }
            else
            {
              if ( v56 != 5 || *(_DWORD *)(v26 + 24) != 2 )
              {
LABEL_110:
                v63 = nullptr;
                if ( v61 == 2 )
                {
                  if ( *(_DWORD *)(v52 + 24) != 2 )
                    goto LABEL_79;
                  goto LABEL_145;
                }
                goto LABEL_111;
              }
LABEL_186:
              v63 = *(_DWORD **)(v26 + 40);
              v26 = *(_QWORD *)(v26 + 32);
            }
LABEL_111:
            if ( v61 != 4 && v61 != 3 && v61 != 5 )
            {
LABEL_113:
              if ( v63 )
                goto LABEL_14;
              goto LABEL_79;
            }
            goto LABEL_112;
          }
          if ( *(_DWORD *)(v26 + 24) != 2 )
            goto LABEL_110;
          v63 = *(_DWORD **)(v26 + 40);
          v26 = *(_QWORD *)(v26 + 32);
LABEL_112:
          if ( *(_DWORD *)(v52 + 24) != 2 )
            goto LABEL_113;
LABEL_145:
          v65 = *(_DWORD **)(v52 + 40);
          v52 = *(_QWORD *)(v52 + 32);
          if ( !v63 )
          {
            if ( v65 )
              goto LABEL_21;
            goto LABEL_79;
          }
          if ( !v65 )
            goto LABEL_14;
          if ( v26 != v52 )
          {
            v66 = *(_WORD *)(v26 + 4);
            v58 = v66 < *(_WORD *)(v52 + 4);
            if ( v66 == *(_WORD *)(v52 + 4) )
            {
              if ( v66 )
                goto LABEL_79;
              v67 = *(unsigned __int16 *)(v26 + 28);
              v68 = *(unsigned __int16 *)(v52 + 28);
              v58 = v67 < v68;
              if ( v67 == v68 )
              {
                v83 = sub_490FE0(v26);
                v69 = sub_490FE0(v52);
                if ( v83 && v69 )
                {
                  if ( v83 != v69 )
                  {
                    if ( *v83 < *v69 )
                      goto LABEL_21;
                    goto LABEL_14;
                  }
LABEL_79:
                  v58 = *(_DWORD *)v26 < *(_DWORD *)v52;
                }
                else
                {
                  v58 = v83 < v69;
                  if ( v83 == v69 )
                    goto LABEL_79;
                }
              }
            }
            v29 = v58;
            goto LABEL_20;
          }
          v29 = *v63 < *v65;
LABEL_20:
          if ( v29 )
            goto LABEL_21;
LABEL_14:
          v18 = v24;
          if ( v24 <= 0 )
            goto LABEL_22;
        }
        else
        {
          if ( !v28 )
            goto LABEL_11;
LABEL_21:
          v20 = (char *)(v25 + 1);
          v18 = v18 - v24 - 1;
          if ( v18 <= 0 )
          {
LABEL_22:
            v16 = (__int64)dest;
            v17 = (char *)v82;
            v30 = (v20 - v14) >> 3;
            v7 -= v30;
            goto LABEL_23;
          }
        }
      }
      if ( v28 )
      {
        if ( v27 != v28 )
          goto LABEL_19;
LABEL_78:
        v52 = v19;
        goto LABEL_79;
      }
LABEL_11:
      v22 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
      v23 = 0;
      if ( !v22 )
        goto LABEL_50;
      goto LABEL_12;
    }
    v20 = v14;
    v30 = 0;
LABEL_23:
    a4 -= v15;
LABEL_41:
    dest = (void *)v16;
    v43 = sub_495E80(v17, v14, v20, a4, v30, a6, a7);
    *((_QWORD *)&v76 + 1) = _mm_load_si128(&v79).m128i_u64[0];
    *(_QWORD *)&v76 = a7;
    v44 = (int)dest;
    dest = v43;
    sub_496900((_DWORD)v77, (_DWORD)v17, (_DWORD)v43, v44, v30, (_DWORD)a6, v76);
    v45 = v7;
    if ( a4 <= v7 )
      v45 = a4;
    v46 = (__int64 *)dest;
    if ( (__int64)a7 >= v45 )
      break;
    v77 = (char *)dest;
    v14 = v20;
  }
  v9 = v81;
  v11 = a6;
  a2 = (__int64 *)v20;
  v13.m128i_i64[1] = _mm_load_si128(&v79).m128i_i64[1];
LABEL_86:
  *((_QWORD *)&a7 + 1) = v13.m128i_i64[1];
  sub_494DE0(v46, a2, v9, a4, v7, v11);
}

