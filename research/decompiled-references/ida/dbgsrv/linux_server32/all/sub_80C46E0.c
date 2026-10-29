/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C46E0
// Address: 0x080C46E0

//----- (080C46E0) --------------------------------------------------------
char *__cdecl sub_80C46E0(char **a1, size_t *a2, char *a3, char a4)
{
  char *v4; // eax
  char v5; // dl
  char *v6; // esi
  char v7; // di
  char v8; // si
  char *v9; // eax
  char *v10; // edx
  char *v11; // eax
  void *v12; // ecx
  void *v13; // edx
  unsigned int v14; // esi
  unsigned int v15; // edi
  int v16; // eax
  char *v17; // eax
  char *v18; // edx
  char *v19; // eax
  void *v20; // ecx
  void *v21; // edx
  unsigned __int64 v22; // xmm0_8
  void *v23; // edx
  char *v24; // esi
  unsigned int v26; // ecx
  void *v27; // eax
  char v28; // dl
  char *v29; // eax
  char *v30; // edi
  char *v31; // ecx
  char *v32; // esi
  unsigned int v33; // edi
  size_t v34; // eax
  unsigned int v35; // edi
  char *v36; // edx
  int *v37; // edi
  void *v38; // edx
  void *v39; // eax
  __int64 v40; // xmm0_8
  int v41; // edx
  void *v42; // eax
  unsigned int v43; // ecx
  void *v44; // eax
  char *v45; // edx
  char *v46; // eax
  char *v47; // eax
  void *v48; // esi
  int v49; // ecx
  char v50; // al
  char v51; // al
  char *i; // edx
  int v53; // edi
  void *v54; // eax
  void *v55; // eax
  int v56; // edx
  __int64 v57; // rax
  void *v58; // ebx
  void *v59; // edx
  size_t v60; // ecx
  void *v61; // edi
  char *v62; // ecx
  _DWORD *v63; // esi
  _DWORD *v64; // edi
  int v65; // ebx
  __int64 v66; // xmm1_8
  int v67; // ebx
  __int64 v68; // xmm2_8
  void *v69; // ebx
  char v70; // dl
  int v71; // ecx
  int v72; // [esp+0h] [ebp-8Ch]
  int v73; // [esp+4h] [ebp-88h]
  char *v74; // [esp+18h] [ebp-74h]
  char *v75; // [esp+18h] [ebp-74h]
  char *v76; // [esp+1Ch] [ebp-70h]
  __int64 v77; // [esp+1Ch] [ebp-70h]
  char *v78; // [esp+1Ch] [ebp-70h]
  int v79; // [esp+24h] [ebp-68h]
  char v80; // [esp+24h] [ebp-68h]
  char v81; // [esp+24h] [ebp-68h]
  char v82; // [esp+28h] [ebp-64h]
  char v83; // [esp+28h] [ebp-64h]
  void *v84; // [esp+28h] [ebp-64h]
  void *v85; // [esp+28h] [ebp-64h]
  char *v86; // [esp+28h] [ebp-64h]
  void *v87; // [esp+28h] [ebp-64h]
  char *v88; // [esp+28h] [ebp-64h]
  char *v89; // [esp+28h] [ebp-64h]
  bool v90; // [esp+2Ch] [ebp-60h]
  char *v91; // [esp+2Ch] [ebp-60h]
  char v92; // [esp+2Ch] [ebp-60h]
  char *v93; // [esp+2Ch] [ebp-60h]
  size_t v94; // [esp+2Ch] [ebp-60h]
  unsigned int v95; // [esp+2Ch] [ebp-60h]
  char *n; // [esp+38h] [ebp-54h]
  size_t na; // [esp+38h] [ebp-54h]
  char nb; // [esp+38h] [ebp-54h]
  char *nc; // [esp+38h] [ebp-54h]
  size_t nd; // [esp+38h] [ebp-54h]
  size_t ne; // [esp+38h] [ebp-54h]
  size_t nf; // [esp+38h] [ebp-54h]
  void *ng; // [esp+38h] [ebp-54h]
  size_t nh; // [esp+38h] [ebp-54h]
  size_t ni; // [esp+38h] [ebp-54h]
  void *v106; // [esp+44h] [ebp-48h] BYREF
  unsigned __int64 v107; // [esp+48h] [ebp-44h]
  void *v108; // [esp+54h] [ebp-38h] BYREF
  __int64 v109; // [esp+58h] [ebp-34h]
  void *ptr; // [esp+64h] [ebp-28h] BYREF
  __int64 v111; // [esp+68h] [ebp-24h]
  unsigned int v112; // [esp+70h] [ebp-1Ch]

  v112 = __readgsdword(0x14u);
  if ( !a3 )
  {
    v24 = nullptr;
    goto LABEL_25;
  }
  v106 = nullptr;
  v107 = 0;
  v90 = (a4 & 4) != 0;
  v4 = sub_80D3D40(a3);
  v5 = *v4;
  v6 = v4;
  v7 = 0;
  if ( *v4 )
  {
    while ( 1 )
    {
      n = v6 + 1;
      if ( v5 == 34 || v5 == 39 )
        break;
      if ( v7 )
        goto LABEL_28;
      if ( (unsigned int)v5 > 0x7F )
        goto LABEL_61;
      v82 = v5;
      v16 = isspace(v5);
      v5 = v82;
      if ( !v16 )
      {
LABEL_28:
        if ( v5 != 92 || v7 == 39 )
          goto LABEL_61;
        v5 = v6[1];
        if ( v5 != 34 && v5 != 92 )
        {
          v43 = 2;
          nd = v107;
          if ( (_DWORD)v107 )
          {
            v43 = v107 + 1;
            nd = v107 - 1;
          }
          v44 = v106;
          if ( HIDWORD(v107) < v43 )
          {
            v81 = v6[1];
            v85 = (void *)v43;
            v44 = sub_80CF920((int)&v106, v106, v43, 1u);
            v5 = v81;
            v43 = (unsigned int)v85;
            v106 = v44;
          }
          LODWORD(v107) = v43;
          *((_BYTE *)v44 + nd) = 92;
          *((_BYTE *)v106 + nd + 1) = 0;
          if ( !v5 )
            goto LABEL_21;
        }
        v6 += 2;
LABEL_32:
        v26 = 2;
        na = v107;
        if ( (_DWORD)v107 )
        {
          v26 = v107 + 1;
          na = v107 - 1;
        }
        v27 = v106;
        if ( HIDWORD(v107) < v26 )
        {
          v80 = v5;
          v84 = (void *)v26;
          v27 = sub_80CF920((int)&v106, v106, v26, 1u);
          v5 = v80;
          v26 = (unsigned int)v84;
          v106 = v27;
        }
        LODWORD(v107) = v26;
        *((_BYTE *)v27 + na) = v5;
        *((_BYTE *)v106 + na + 1) = 0;
        if ( (v5 & 0xFD) != 0x3C || v7 || v90 )
          goto LABEL_13;
        v79 = v107;
        if ( !(_DWORD)v107 )
          goto LABEL_60;
        v7 = 0;
        v90 = a2 != nullptr && (unsigned int)(v107 - 1) <= 2;
        if ( v90 )
        {
          if ( (_DWORD)v107 == 1 )
            goto LABEL_60;
          v28 = *((char *)v106 + v107 - 2);
          if ( v28 == 62 )
          {
            v70 = *v6;
            if ( (_DWORD)v107 != 2 )
            {
              v71 = *(char *)v106;
              if ( (unsigned __int8)(v71 - 48) <= 9u )
              {
                if ( v70 == 62 )
                {
                  v73 = 6;
                  v29 = v6 + 1;
                  v72 = v71 - 48;
                }
                else
                {
                  v73 = 2;
                  v72 = v71 - 48;
                  v29 = v6;
                }
                goto LABEL_45;
              }
LABEL_60:
              v90 = 0;
              v7 = 0;
              goto LABEL_13;
            }
            if ( v70 == 62 )
            {
              v73 = 6;
              v29 = v6 + 1;
            }
            else
            {
              v73 = 2;
              v29 = v6;
            }
            v72 = 1;
LABEL_45:
            v108 = nullptr;
            v109 = 0;
            v30 = sub_80D3D40(v29);
            v83 = *v30;
            if ( *v30 == 34 || *v30 == 39 )
            {
              v51 = v30[1];
              for ( i = v30 + 1; v51; v51 = v31[1] )
              {
                v31 = i + 1;
                if ( v51 == 92 )
                {
                  v92 = i[1];
                  if ( !v92 )
                    break;
                }
                else
                {
                  if ( v83 == v51 )
                  {
                    v73 |= 8u;
                    v33 = v109;
                    goto LABEL_53;
                  }
                  v31 = i;
                  v92 = *i;
                }
                v53 = v109;
                ne = 2;
                i = v31 + 1;
                if ( (_DWORD)v109 )
                {
                  v53 = v109 - 1;
                  ne = v109 + 1;
                }
                v54 = v108;
                if ( HIDWORD(v109) < ne )
                {
                  v74 = v31;
                  v76 = v31 + 1;
                  v54 = sub_80CF920((int)&v108, v108, ne, 1u);
                  v31 = v74;
                  i = v76;
                  v108 = v54;
                }
                LODWORD(v109) = ne;
                *((_BYTE *)v54 + v53) = v92;
                *((_BYTE *)v108 + v53 + 1) = 0;
              }
            }
            else
            {
              v31 = v30;
              if ( !v83 )
                goto LABEL_52;
              v91 = v6;
              v32 = v30;
              nb = *v30;
              do
              {
                if ( (unsigned int)nb <= 0x7F && (isspace(nb) || (nb & 0xFD) == 0x3C) )
                  break;
                v50 = *++v32;
                nb = v50;
              }
              while ( v50 );
              v31 = v32;
              v6 = v91;
              if ( v30 < v31 )
              {
                ptr = nullptr;
                v111 = 0;
                nf = v31 - v30;
                v55 = nullptr;
                v56 = v31 - v30 + 1;
                if ( v31 - v30 != -1 )
                {
                  v89 = v31;
                  v95 = v31 - v30 + 1;
                  v55 = sub_80CF920((int)&ptr, nullptr, v95, 1u);
                  v31 = v89;
                  v56 = v95;
                  ptr = v55;
                }
                v93 = v31;
                LODWORD(v111) = v56;
                memmove(v55, v30, nf);
                *((_BYTE *)ptr + nf) = 0;
                v57 = v111;
                v58 = ptr;
                v111 = 0;
                ng = ptr;
                v31 = v93;
                v33 = v57;
                ptr = nullptr;
                if ( v108 )
                {
                  v77 = v57;
                  LODWORD(v109) = 0;
                  sub_80CF780(v108);
                  v108 = ng;
                  v109 = v77;
                  v31 = v93;
                  if ( ptr )
                  {
                    LODWORD(v111) = 0;
                    sub_80CF780(ptr);
                    v33 = v109;
                    v31 = v93;
                  }
                }
                else
                {
                  v108 = v58;
                  v109 = v57;
                }
              }
              else
              {
LABEL_52:
                v33 = v109;
              }
LABEL_53:
              if ( v33 > 1 )
              {
                v34 = a2[1];
                v35 = a2[2];
                if ( v35 < v34 + 1 )
                {
                  v86 = v31;
                  v59 = sub_80CF920((int)a2, nullptr, v34 + 1, 0x1Cu);
                  v60 = a2[2];
                  a2[2] = v35;
                  v61 = (void *)*a2;
                  v94 = v60;
                  v62 = v86;
                  if ( (int)(a2[1] - 1) >= 0 )
                  {
                    v87 = v59;
                    v78 = v62;
                    nh = a2[1] - 1;
                    v75 = v6;
                    v63 = (_DWORD *)*a2;
                    v64 = v59;
                    do
                    {
                      *v64 = *v63;
                      v65 = v63[1];
                      v66 = *((_QWORD *)v63 + 1);
                      v63[1] = 0;
                      v64[1] = v65;
                      *((_QWORD *)v64 + 1) = v66;
                      v67 = v63[6];
                      v68 = *((_QWORD *)v63 + 2);
                      v63[3] = 0;
                      v64[6] = v67;
                      *((_QWORD *)v64 + 2) = v68;
                      v69 = (void *)v63[1];
                      if ( v69 )
                      {
                        v63[2] = 0;
                        sub_80CF780(v69);
                      }
                      --nh;
                      v63 += 7;
                      v64 += 7;
                    }
                    while ( nh != -1 );
                    v59 = v87;
                    v62 = v78;
                    v6 = v75;
                    v61 = (void *)*a2;
                  }
                  v88 = v62;
                  ni = (size_t)v59;
                  sub_80CF780(v61);
                  v36 = (char *)ni;
                  a2[2] = v94;
                  v31 = v88;
                  *a2 = ni;
                  v34 = a2[1];
                }
                else
                {
                  v36 = (char *)*a2;
                }
                v37 = (int *)&v36[28 * v34];
                v38 = v108;
                v37[1] = 0;
                v37[2] = 0;
                v37[3] = 0;
                ++a2[1];
                v39 = (void *)v37[1];
                v37[1] = (int)v38;
                v108 = v39;
                v40 = *((_QWORD *)v37 + 1);
                v37[2] = v109;
                v37[4] = v73;
                v41 = HIDWORD(v109);
                v109 = v40;
                v37[3] = v41;
                *v37 = v72;
                nc = sub_80D3D40(v31);
                v37[5] = &v6[-v79 + 1] - a3;
                v42 = v108;
                v37[6] = nc - &v6[-v79 + 1];
                if ( v42 )
                {
                  LODWORD(v109) = 0;
                  sub_80CF780(v42);
                }
                if ( nc )
                {
                  LODWORD(v107) = 0;
                  v6 = nc;
                }
                goto LABEL_60;
              }
            }
            if ( v108 )
            {
              LODWORD(v109) = 0;
              v7 = 0;
              sub_80CF780(v108);
              v90 = 0;
              goto LABEL_13;
            }
            goto LABEL_60;
          }
          v90 = (_DWORD)v107 == 2 && v28 == 60;
          if ( v90 )
          {
            v73 = 1;
            v29 = v6;
            v72 = 0;
            goto LABEL_45;
          }
        }
LABEL_13:
        v5 = *v6;
        if ( !*v6 )
          goto LABEL_21;
      }
      else
      {
        v17 = a1[1];
        v18 = *a1;
        if ( a1[2] < v17 + 1 )
        {
          v18 = (char *)sub_80CF920((int)a1, v18, (unsigned int)(v17 + 1), 0xCu);
          *a1 = v18;
          v17 = a1[1];
        }
        v19 = &v18[12 * (_DWORD)v17];
        *(_DWORD *)v19 = 0;
        v20 = v106;
        *((_DWORD *)v19 + 1) = 0;
        *((_DWORD *)v19 + 2) = 0;
        ++a1[1];
        v21 = *(void **)v19;
        *(_DWORD *)v19 = v20;
        v22 = *(_QWORD *)(v19 + 4);
        v106 = v21;
        *(_QWORD *)(v19 + 4) = v107;
        v107 = v22;
        v6 = sub_80D3D40(n);
        v90 = 0;
        v5 = *v6;
        if ( !*v6 )
          goto LABEL_21;
      }
    }
    if ( !v7 )
    {
      ++v6;
      v7 = v5;
      goto LABEL_13;
    }
    if ( v5 == v7 )
    {
      v8 = v6[1];
      if ( (unsigned int)v8 <= 0x7F && (isspace(v8) || !v8) )
      {
        v9 = a1[1];
        v10 = *a1;
        if ( a1[2] < v9 + 1 )
        {
          v10 = (char *)sub_80CF920((int)a1, v10, (unsigned int)(v9 + 1), 0xCu);
          *a1 = v10;
          v9 = a1[1];
        }
        v90 = 0;
        v11 = &v10[12 * (_DWORD)v9];
        *(_DWORD *)v11 = 0;
        v12 = v106;
        *((_DWORD *)v11 + 1) = 0;
        *((_DWORD *)v11 + 2) = 0;
        ++a1[1];
        v13 = *(void **)v11;
        v14 = *((_DWORD *)v11 + 1);
        v15 = *((_DWORD *)v11 + 2);
        *(_DWORD *)v11 = v12;
        v106 = v13;
        *(_QWORD *)(v11 + 4) = v107;
        v107 = __PAIR64__(v15, v14);
      }
      v6 = sub_80D3D40(n);
      v7 = 0;
      goto LABEL_13;
    }
LABEL_61:
    ++v6;
    goto LABEL_32;
  }
LABEL_21:
  if ( (unsigned int)v107 > 1 )
  {
    v45 = a1[1];
    v46 = *a1;
    if ( a1[2] < v45 + 1 )
    {
      v46 = (char *)sub_80CF920((int)a1, v46, (unsigned int)(v45 + 1), 0xCu);
      v45 = a1[1];
      *a1 = v46;
    }
    v47 = &v46[12 * (_DWORD)v45];
    *(_DWORD *)v47 = 0;
    v48 = v106;
    *((_DWORD *)v47 + 1) = 0;
    *((_DWORD *)v47 + 2) = 0;
    ++a1[1];
    v23 = *(void **)v47;
    *(_DWORD *)v47 = v48;
    v49 = *((_DWORD *)v47 + 2);
    v106 = v23;
    *(_QWORD *)(v47 + 4) = v107;
    HIDWORD(v107) = v49;
  }
  else
  {
    v23 = v106;
  }
  v24 = a1[1];
  if ( v23 )
  {
    LODWORD(v107) = 0;
    sub_80CF780(v23);
  }
LABEL_25:
  if ( v112 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v24;
}
// 80C4B9A: conditional instruction was optimized away because di.1!=0
