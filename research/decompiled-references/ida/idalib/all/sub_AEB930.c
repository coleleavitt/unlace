__int64 __fastcall sub_AEB930(char *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned int *v12; // rsi
  size_t v13; // r9
  const char *v14; // rsi
  int v15; // r8d
  unsigned __int64 v16; // r15
  unsigned int *v17; // rdi
  size_t v18; // rdx
  const void *v19; // rdi
  int v20; // eax
  _QWORD *v21; // r10
  __int64 v22; // r15
  unsigned __int64 v23; // r9
  unsigned int *v24; // rsi
  const char *v25; // rsi
  unsigned __int64 v26; // r12
  unsigned int *v27; // rdi
  size_t v28; // rdx
  const void *v29; // rdi
  int v30; // eax
  unsigned __int64 v31; // r15
  unsigned int *v32; // rsi
  unsigned __int64 v33; // rbx
  const void *v34; // rsi
  unsigned int *v35; // rdi
  size_t v36; // rdx
  size_t v37; // rbp
  const void *v38; // rdi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r15
  unsigned int *v42; // rsi
  unsigned __int64 v43; // r9
  const char *v44; // rsi
  unsigned int *v45; // rdi
  size_t v46; // rdx
  size_t v47; // r8
  const void *v48; // rdi
  int v49; // eax
  unsigned __int64 v50; // r15
  unsigned int *v51; // rsi
  size_t v52; // r15
  const char *v53; // rsi
  unsigned __int64 v54; // r12
  unsigned int *v55; // rdi
  size_t v56; // rdx
  const void *v57; // rdi
  int v58; // eax
  __int64 v59; // rax
  char *v60; // r12
  unsigned __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // r15
  unsigned __int64 v64; // r8
  int v65; // r10d
  unsigned int *v66; // rsi
  __int64 v67; // rbp
  size_t v68; // r14
  const char *v69; // rsi
  unsigned __int64 v70; // rbp
  unsigned int *v71; // rdi
  const void *v72; // rdi
  size_t v73; // rdx
  int v74; // eax
  unsigned int *v75; // r14
  __int64 v76; // rbp
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  unsigned int *v79; // rsi
  size_t v80; // r14
  const void *v81; // rsi
  size_t v82; // rdx
  int v83; // eax
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rbp
  __int64 *v88; // rbx
  __int64 v89; // rcx
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  unsigned int *v94; // rax
  unsigned int *v95; // rax
  char *v96; // [rsp+8h] [rbp-80h]
  __int64 v97; // [rsp+10h] [rbp-78h]
  void *s1; // [rsp+18h] [rbp-70h]
  _QWORD *s1b; // [rsp+18h] [rbp-70h]
  int s1c; // [rsp+18h] [rbp-70h]
  void *s1a; // [rsp+18h] [rbp-70h]
  int v102; // [rsp+20h] [rbp-68h]
  _QWORD *v103; // [rsp+20h] [rbp-68h]
  _QWORD *v104; // [rsp+20h] [rbp-68h]
  unsigned __int64 v105; // [rsp+20h] [rbp-68h]
  unsigned __int64 v106; // [rsp+20h] [rbp-68h]
  size_t v107; // [rsp+28h] [rbp-60h]
  unsigned __int64 v108; // [rsp+28h] [rbp-60h]
  _QWORD *v109; // [rsp+28h] [rbp-60h]
  __int64 v110; // [rsp+28h] [rbp-60h]
  int v111; // [rsp+30h] [rbp-58h]
  size_t v112; // [rsp+30h] [rbp-58h]
  __int64 *v113; // [rsp+30h] [rbp-58h]
  char *v114; // [rsp+38h] [rbp-50h]
  int v115; // [rsp+40h] [rbp-48h]
  unsigned __int64 v116; // [rsp+40h] [rbp-48h]
  int v117; // [rsp+4Ch] [rbp-3Ch]

  result = a2 - a1;
  v96 = a2;
  v97 = a3;
  if ( a2 - a1 > 128 )
  {
    v6 = a2 - a1;
    if ( a3 )
    {
      v114 = a1 + 8;
      while ( 1 )
      {
        v7 = *((_QWORD **)a1 + 1);
        --v97;
        v8 = &a1[8 * (v6 >> 4)];
        v9 = *(_QWORD *)v8;
        s1 = v7;
        v10 = *(_QWORD *)(*(_QWORD *)v8 + 40LL);
        v102 = *(_DWORD *)(*(_QWORD *)v8 + 40LL) & 7;
        if ( (v10 & 7) != 0 || (v10 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v14 = &byte_22F0C30;
          v13 = 0;
          v11 = v7[5];
          v15 = v11 & 7;
          if ( (v11 & 7) != 0 )
            goto LABEL_36;
        }
        else
        {
          v11 = v7[5];
          v12 = *(unsigned int **)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 16);
          v13 = *v12;
          v14 = (const char *)(v12 + 4);
          v15 = v11 & 7;
          if ( (v11 & 7) != 0 )
          {
            v16 = 0;
            goto LABEL_12;
          }
        }
        v16 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_121;
        v17 = *(unsigned int **)(v16 + 16);
        v18 = v13;
        v16 = *v17;
        v19 = v17 + 4;
        if ( v16 <= v13 )
          v18 = v16;
        if ( v18 )
        {
          v107 = v13;
          v20 = memcmp(v19, v14, v18);
          v15 = 0;
          v13 = v107;
          if ( v20 )
          {
            if ( v20 >= 0 )
              goto LABEL_36;
            goto LABEL_14;
          }
        }
        else
        {
LABEL_121:
          v15 = 0;
        }
LABEL_12:
        if ( v13 == v16 || v13 <= v16 )
        {
LABEL_36:
          v21 = *((_QWORD **)v96 - 1);
          v41 = v21[5];
          v117 = v21[5] & 7;
          if ( (v41 & 7) != 0 )
          {
            v44 = &byte_22F0C30;
            v43 = 0;
            if ( !v15 )
            {
LABEL_39:
              if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
                goto LABEL_124;
              v45 = *(unsigned int **)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 16);
              v46 = v43;
              v47 = *v45;
              v48 = v45 + 4;
              if ( v47 <= v43 )
                v46 = v47;
              if ( !v46 )
                goto LABEL_44;
              v116 = v43;
              v112 = v47;
              v109 = *((_QWORD **)v96 - 1);
              v49 = memcmp(v48, v44, v46);
              v21 = v109;
              v47 = v112;
              v43 = v116;
              if ( !v49 )
                goto LABEL_44;
              if ( v49 < 0 )
                goto LABEL_118;
              goto LABEL_46;
            }
          }
          else
          {
            if ( (v41 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v42 = *(unsigned int **)((v41 & 0xFFFFFFFFFFFFFFF8LL) + 16);
              v43 = *v42;
              v44 = (const char *)(v42 + 4);
              if ( !v15 )
                goto LABEL_39;
LABEL_124:
              v47 = 0;
              goto LABEL_44;
            }
            if ( v15 )
              goto LABEL_149;
            v43 = v11 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              goto LABEL_124;
            v94 = *(unsigned int **)(v43 + 16);
            v43 = 0;
            v47 = *v94;
LABEL_44:
            if ( v43 != v47 && v43 > v47 )
            {
LABEL_118:
              *((_QWORD *)a1 + 1) = *(_QWORD *)a1;
              *(_QWORD *)a1 = s1;
              goto LABEL_57;
            }
LABEL_46:
            if ( !v117 )
            {
LABEL_149:
              v50 = v41 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v50 )
              {
                v51 = *(unsigned int **)(v50 + 16);
                v52 = *v51;
                v53 = (const char *)(v51 + 4);
                if ( v102 )
                {
                  v54 = 0;
                }
                else
                {
LABEL_49:
                  v54 = v10 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v54 )
                  {
                    v55 = *(unsigned int **)(v54 + 16);
                    v56 = v52;
                    v54 = *v55;
                    v57 = v55 + 4;
                    if ( v54 <= v52 )
                      v56 = v54;
                    if ( v56 )
                    {
                      s1b = v21;
                      v58 = memcmp(v57, v53, v56);
                      v21 = s1b;
                      if ( v58 )
                      {
                        if ( v58 >= 0 )
                          goto LABEL_56;
                        goto LABEL_34;
                      }
                    }
                  }
                }
                if ( v52 == v54 || v52 <= v54 )
                {
LABEL_56:
                  v59 = *(_QWORD *)a1;
                  *(_QWORD *)a1 = v9;
                  *(_QWORD *)v8 = v59;
                  v11 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
                  goto LABEL_57;
                }
                goto LABEL_34;
              }
            }
          }
          v53 = &byte_22F0C30;
          v52 = 0;
          if ( v102 )
            goto LABEL_56;
          goto LABEL_49;
        }
LABEL_14:
        v21 = *((_QWORD **)v96 - 1);
        v22 = v21[5];
        v115 = v21[5] & 7;
        if ( (v22 & 7) != 0 )
        {
          v25 = &byte_22F0C30;
          v23 = 0;
          if ( v102 )
          {
LABEL_129:
            if ( v15 )
              goto LABEL_118;
            v33 = v11 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v95 = *(unsigned int **)(v33 + 16);
              v33 = 0;
              v37 = *v95;
            }
            else
            {
LABEL_131:
              v37 = 0;
            }
LABEL_32:
            if ( v33 == v37 || v33 <= v37 )
              goto LABEL_118;
            goto LABEL_34;
          }
LABEL_17:
          v26 = v10 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v26 )
            goto LABEL_22;
          v27 = *(unsigned int **)(v26 + 16);
          v28 = v23;
          v26 = *v27;
          v29 = v27 + 4;
          if ( v26 <= v23 )
            v28 = v26;
          if ( v28
            && (v111 = v15,
                v108 = v23,
                v103 = *((_QWORD **)v96 - 1),
                v30 = memcmp(v29, v25, v28),
                v21 = v103,
                v23 = v108,
                v15 = v111,
                v30) )
          {
            if ( v30 < 0 )
              goto LABEL_56;
          }
          else
          {
LABEL_22:
            if ( v23 != v26 && v23 > v26 )
              goto LABEL_56;
          }
          if ( v115 )
            goto LABEL_129;
          goto LABEL_25;
        }
        v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v22 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v24 = *(unsigned int **)(v23 + 16);
          v23 = *v24;
          v25 = (const char *)(v24 + 4);
          if ( !v102 )
            goto LABEL_17;
          v26 = 0;
          goto LABEL_22;
        }
        v25 = &byte_22F0C30;
        if ( !v102 )
          goto LABEL_17;
LABEL_25:
        v31 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v31 )
          goto LABEL_129;
        v32 = *(unsigned int **)(v31 + 16);
        v33 = *v32;
        v34 = v32 + 4;
        if ( v15 || (v11 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_131;
        v35 = *(unsigned int **)((v11 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v36 = v33;
        v37 = *v35;
        v38 = v35 + 4;
        if ( v37 <= v33 )
          v36 = v37;
        if ( !v36 )
          goto LABEL_32;
        v104 = v21;
        v39 = memcmp(v38, v34, v36);
        v21 = v104;
        if ( !v39 )
          goto LABEL_32;
        if ( v39 >= 0 )
          goto LABEL_118;
LABEL_34:
        v40 = *(_QWORD *)a1;
        *(_QWORD *)a1 = v21;
        *((_QWORD *)v96 - 1) = v40;
        v11 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
LABEL_57:
        v60 = v114;
        v61 = (unsigned __int64)v96;
        v62 = v11;
        while ( 1 )
        {
          v113 = (__int64 *)v60;
          v63 = *(_QWORD *)v60;
          v64 = v62 & 0xFFFFFFFFFFFFFFF8LL;
          v65 = v62 & 7;
          if ( (v62 & 7) != 0 )
          {
            v67 = *(_QWORD *)(v63 + 40);
            v69 = &byte_22F0C30;
            v68 = 0;
            if ( (v67 & 7) != 0 )
              goto LABEL_71;
          }
          else if ( v64 )
          {
            v66 = *(unsigned int **)(v64 + 16);
            v67 = *(_QWORD *)(v63 + 40);
            v68 = *v66;
            v69 = (const char *)(v66 + 4);
            if ( (v67 & 7) != 0 )
            {
              if ( !v68 )
              {
                v61 -= 8LL;
                goto LABEL_73;
              }
              v70 = 0;
              goto LABEL_70;
            }
          }
          else
          {
            v67 = *(_QWORD *)(v63 + 40);
            v68 = 0;
            v69 = &byte_22F0C30;
            if ( (v67 & 7) != 0 )
              goto LABEL_99;
          }
          v70 = v67 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v70 )
          {
            v71 = *(unsigned int **)(v70 + 16);
            v70 = *v71;
            v72 = v71 + 4;
            v73 = v70;
            if ( v68 <= v70 )
              v73 = v68;
            if ( v73 )
            {
              v110 = v62;
              v105 = v62 & 0xFFFFFFFFFFFFFFF8LL;
              s1c = v62 & 7;
              v74 = memcmp(v72, v69, v73);
              v65 = s1c;
              v64 = v105;
              v62 = v110;
              if ( v74 )
                break;
            }
          }
          if ( v68 == v70 )
            goto LABEL_71;
LABEL_70:
          if ( v68 <= v70 )
            goto LABEL_71;
LABEL_60:
          v60 += 8;
        }
        if ( v74 < 0 )
          goto LABEL_60;
LABEL_71:
        v61 -= 8LL;
        if ( !v64 )
        {
          if ( v65 )
          {
            while ( 1 )
            {
              v76 = *(_QWORD *)v61;
              v93 = *(_QWORD *)(*(_QWORD *)v61 + 40LL);
              if ( (v93 & 7) != 0 )
                break;
              v92 = v93 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v92 )
                break;
              v64 = **(unsigned int **)(v92 + 16);
              if ( !(_DWORD)v64 )
                break;
              v61 -= 8LL;
            }
          }
          else
          {
            while ( 1 )
            {
              v76 = *(_QWORD *)v61;
              v91 = *(_QWORD *)(*(_QWORD *)v61 + 40LL);
              if ( (v91 & 7) != 0 )
                break;
              v90 = v91 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v90 || !**(_DWORD **)(v90 + 16) )
                break;
LABEL_99:
              v61 -= 8LL;
            }
          }
LABEL_58:
          if ( (unsigned __int64)v60 >= v61 )
            goto LABEL_88;
LABEL_59:
          *(_QWORD *)v60 = v76;
          *(_QWORD *)v61 = v63;
          v62 = *(_QWORD *)(*(_QWORD *)a1 + 40LL);
          goto LABEL_60;
        }
        if ( !v65 )
        {
LABEL_73:
          v75 = *(unsigned int **)(v64 + 16);
          v64 = *v75;
          s1a = v75 + 4;
          while ( 1 )
          {
            v76 = *(_QWORD *)v61;
            v77 = *(_QWORD *)(*(_QWORD *)v61 + 40LL);
            if ( (v77 & 7) != 0 )
              goto LABEL_58;
            v78 = v77 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v78 )
              goto LABEL_58;
            v79 = *(unsigned int **)(v78 + 16);
            v80 = *v79;
            v81 = v79 + 4;
            v82 = v80;
            if ( v64 <= v80 )
              v82 = v64;
            if ( v82 && (v106 = v64, v83 = memcmp(s1a, v81, v82), v64 = v106, v83) )
            {
              if ( v83 >= 0 )
                goto LABEL_58;
              v61 -= 8LL;
            }
            else
            {
              if ( v64 == v80 || v64 >= v80 )
                goto LABEL_58;
              v61 -= 8LL;
            }
          }
        }
        while ( 1 )
        {
          v76 = *(_QWORD *)v61;
          v85 = *(_QWORD *)(*(_QWORD *)v61 + 40LL);
          if ( (v85 & 7) != 0 )
            break;
          v84 = v85 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v84 || !**(_DWORD **)(v84 + 16) )
            goto LABEL_58;
          v61 -= 8LL;
        }
        if ( (unsigned __int64)v60 < v61 )
          goto LABEL_59;
LABEL_88:
        result = sub_AEB930(v60, v96, v97, v62, v64);
        v6 = v60 - a1;
        if ( v60 - a1 <= 128 )
          return result;
        v96 = v60;
        if ( !v97 )
          goto LABEL_90;
      }
    }
    v113 = (__int64 *)a2;
LABEL_90:
    v86 = v6 >> 3;
    v87 = ((v6 >> 3) - 2) >> 1;
    sub_AEB390((__int64)a1, v87, v6 >> 3, *(_QWORD *)&a1[8 * v87]);
    do
    {
      --v87;
      sub_AEB390((__int64)a1, v87, v86, *(_QWORD *)&a1[8 * v87]);
    }
    while ( v87 );
    v88 = v113;
    do
    {
      v89 = *--v88;
      *v88 = *(_QWORD *)a1;
      result = sub_AEB390((__int64)a1, 0, ((char *)v88 - a1) >> 3, v89);
    }
    while ( (char *)v88 - a1 > 8 );
  }
  return result;
}
