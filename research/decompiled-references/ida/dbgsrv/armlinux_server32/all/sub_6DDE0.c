/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DDE0
// Address: 0x0006DDE0

//----- (0006DDE0) --------------------------------------------------------
void __fastcall sub_6DDE0(char **a1, __int64 *a2)
{
  char *v3; // r0
  char *v5; // r3
  char *v6; // r7
  char *i; // r6
  void *v8; // r0
  char *v9; // r3
  char *v10; // r0
  char *v11; // r3
  char *v12; // r7
  char *j; // r6
  void *v14; // r0
  char *v15; // r3
  __int64 v16; // kr00_8
  unsigned int v17; // r0
  unsigned int v18; // r3
  unsigned int v19; // r10
  unsigned int v20; // r8
  char *v21; // r3
  char *v22; // r1
  char *v23; // r0
  int v24; // r5
  __int64 v25; // kr10_8
  unsigned __int8 *v26; // r3
  int *v28; // r5
  unsigned __int64 v29; // kr18_8
  unsigned int v30; // r0
  char *v31; // r0
  unsigned int v32; // r3
  int v33; // r3
  int v34; // r5
  void **v35; // r1
  unsigned int v36; // r2
  unsigned int v37; // r0
  unsigned int v38; // r0
  unsigned int v39; // r6
  void **v40; // r1
  int v41; // r0
  unsigned int v42; // r3
  int v43; // r3
  void **v44; // r1
  unsigned int v45; // r1
  char **v46; // r8
  unsigned int v47; // r0
  unsigned int v48; // r10
  unsigned int v49; // r3
  int v50; // r7
  unsigned __int8 *v51; // r5
  unsigned __int8 *v52; // r3
  int v54; // r10
  char *v55; // r6
  char *v56; // r1
  unsigned int v57; // r2
  char *v58; // r0
  char *v59; // r3
  unsigned int v60; // r7
  char *v61; // r5
  char *v62; // r1
  char *v63; // r0
  int v64; // r6
  __int64 v65; // kr28_8
  unsigned __int8 *v66; // r3
  int *v68; // r3
  unsigned int v69; // r0
  size_t v70; // r9
  char *v71; // r3
  char *v72; // r1
  int v73; // r3
  char *v74; // r2
  void *v75; // r0
  __int64 v76; // kr38_8
  void *v77; // lr
  int *v78; // r2
  char *v79; // r0
  char *v80; // r1
  size_t v81; // r0
  size_t v82; // r9
  unsigned int v83; // r2
  void *v84; // r0
  size_t v85; // r0
  size_t v86; // r9
  unsigned int v87; // r2
  void *v88; // r0
  unsigned int v89; // r2
  int v90; // r2
  char *v91; // r0
  void **v92; // r0
  int v93; // r2
  unsigned int v94; // r8
  int v95; // r7
  char *v96; // r3
  void *v97; // r0
  char *v98; // r3
  char *v99; // r0
  int v100; // r3
  void **v101; // r1
  void **v102; // r0
  void **v103; // r0
  int v104; // [sp+8h] [bp-34h]
  unsigned int v105; // [sp+8h] [bp-34h]
  int v106; // [sp+Ch] [bp-30h]
  unsigned int v107; // [sp+Ch] [bp-30h]
  int v108; // [sp+10h] [bp-2Ch]
  int v109; // [sp+14h] [bp-28h]
  unsigned int v110; // [sp+14h] [bp-28h]
  unsigned int v111; // [sp+18h] [bp-24h]
  unsigned int v112; // [sp+24h] [bp-18h]
  void *ptr; // [sp+28h] [bp-14h] BYREF
  __int64 v114; // [sp+2Ch] [bp-10h]

  if ( a1 )
  {
    v3 = *a1;
    if ( v3 )
    {
      a1[1] = nullptr;
      sub_77F70(v3);
      *a1 = nullptr;
      a1[2] = nullptr;
    }
    v5 = a1[3];
    if ( v5 )
    {
      v6 = a1[4];
      if ( v6 )
      {
        for ( i = nullptr; i != v6; ++i )
        {
          v8 = *(void **)&v5[12 * (_DWORD)i];
          v9 = &v5[12 * (_DWORD)i];
          if ( v8 )
          {
            *((_DWORD *)v9 + 1) = 0;
            sub_77F70(v8);
          }
          v5 = a1[3];
        }
      }
      a1[4] = nullptr;
      sub_77F70(v5);
      a1[3] = nullptr;
      a1[5] = nullptr;
    }
    v10 = a1[6];
    if ( v10 )
    {
      a1[7] = nullptr;
      sub_77F70(v10);
      a1[6] = nullptr;
      a1[8] = nullptr;
    }
    v11 = a1[9];
    if ( v11 )
    {
      v12 = a1[10];
      if ( v12 )
      {
        for ( j = nullptr; j != v12; ++j )
        {
          v14 = *(void **)&v11[12 * (_DWORD)j];
          v15 = &v11[12 * (_DWORD)j];
          if ( v14 )
          {
            *((_DWORD *)v15 + 1) = 0;
            sub_77F70(v14);
          }
          v11 = a1[9];
        }
      }
      a1[10] = nullptr;
      sub_77F70(v11);
      a1[9] = nullptr;
      a1[11] = nullptr;
    }
    v16 = *a2;
    if ( HIDWORD(v16) > (unsigned int)v16 )
    {
      v17 = sub_762E4((unsigned __int8 **)a2, HIDWORD(v16));
      v18 = v17 & 0xFFFFFF00;
      v108 = (int)(a1 + 3);
      if ( (v17 & 0xFFFFFF00) != 0xFFFFFF00 )
        v18 = 0;
      v19 = v17;
      v106 = (int)(a1 + 6);
      if ( (v17 & 0xFFFFFF00) == 0xFFFFFF00 )
      {
        v112 = (unsigned __int8)v17;
        if ( !(_BYTE)v17 )
        {
          v19 = v18;
          goto LABEL_28;
        }
        v19 = sub_762E4((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
      }
      else
      {
        v112 = v18;
      }
      if ( v19 )
      {
LABEL_28:
        v20 = 0;
        while ( 1 )
        {
          v21 = a1[4];
          v22 = a1[3];
          if ( v21 + 1 > a1[5] )
          {
            v23 = (char *)sub_78018(v108, v22, (unsigned int)(v21 + 1), 0xCu);
            v21 = a1[4];
            v22 = v23;
            a1[3] = v23;
          }
          v24 = (int)&v22[12 * (_DWORD)v21];
          *(_DWORD *)v24 = 0;
          *(_DWORD *)(v24 + 4) = 0;
          *(_DWORD *)(v24 + 8) = 0;
          ++a1[4];
          v25 = *a2;
          if ( HIDWORD(v25) > (unsigned int)v25 )
          {
            v26 = (unsigned __int8 *)(v25 + 1);
            if ( *(_BYTE *)v25 )
            {
              while ( (unsigned __int8 *)HIDWORD(v25) != v26 )
              {
                if ( !*v26++ )
                  goto LABEL_104;
              }
            }
            else
            {
LABEL_104:
              *(_DWORD *)a2 = v26;
              if ( (_DWORD)v25 )
              {
                v81 = strlen((const char *)v25);
                v82 = v81;
                if ( v81 )
                {
                  v83 = v81 + 1;
                  v110 = v83;
                  v84 = *(void **)v24;
                  if ( v83 > *(_DWORD *)(v24 + 8) )
                  {
                    v84 = sub_78018(v24, *(void **)v24, v83, 1u);
                    *(_DWORD *)v24 = v84;
                  }
                  *(_DWORD *)(v24 + 4) = v110;
                  memmove(v84, (const void *)v25, v82);
                  *(_BYTE *)(*(_DWORD *)v24 + v82) = 0;
                  if ( *(_DWORD *)(v24 + 4) )
                    v28 = *(int **)v24;
                  else
                    v28 = &dword_8DB98;
                  goto LABEL_37;
                }
              }
            }
          }
          *(_DWORD *)(v24 + 4) = 0;
          v28 = &dword_8DB98;
LABEL_37:
          v29 = *((_QWORD *)a1 + 3);
          v30 = (unsigned int)a1[8];
          ptr = v28;
          if ( v30 < HIDWORD(v29) + 1 )
          {
            v31 = (char *)sub_78018(v106, (void *)v29, HIDWORD(v29) + 1, 4u);
            v32 = (unsigned int)a1[7];
            a1[6] = v31;
            v29 = __PAIR64__(v32, (unsigned int)v31);
          }
          *(_DWORD *)(v29 + 4 * HIDWORD(v29)) = v28;
          ++v20;
          v33 = (int)(a1[7] + 1);
          a1[7] = (char *)v33;
          v34 = v33;
          if ( v19 <= v20 )
            goto LABEL_40;
        }
      }
      v34 = (int)a1[7];
      v33 = v34;
LABEL_40:
      v35 = (void **)a1[6];
      ptr = nullptr;
      v36 = v33 + 1;
      v37 = (unsigned int)a1[8];
      if ( v35 > &ptr || &ptr >= &v35[v37] )
      {
        if ( v37 < v36 )
        {
          v91 = (char *)sub_78018(v106, v35, v36, 4u);
          v34 = (int)a1[7];
          a1[6] = v91;
        }
        *(_DWORD *)&a1[6][4 * v34] = 0;
      }
      else
      {
        if ( v37 < v36 )
        {
          v92 = (void **)sub_78018(v106, v35, v36, 4u);
          v33 = (int)a1[7];
          v35 = v92;
          a1[6] = (char *)v92;
        }
        v35[v33] = nullptr;
      }
      ++a1[7];
      v38 = sub_762E4((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
      v39 = (unsigned int)a1[10];
      v111 = v38;
      if ( v38 == v39 )
        goto LABEL_56;
      ptr = nullptr;
      v114 = 0;
      if ( v38 >= v39 )
      {
        if ( v38 <= v39 )
        {
LABEL_56:
          v45 = *((_DWORD *)a2 + 1);
          if ( v111 )
          {
            v104 = 0;
            v109 = 0;
            while ( 1 )
            {
              v46 = (char **)&a1[9][v104];
              v47 = sub_762E4((unsigned __int8 **)a2, v45);
              ptr = nullptr;
              v48 = v47;
              v49 = (unsigned int)v46[1];
              if ( v49 > v47 )
                goto LABEL_103;
              if ( v49 < v47 )
                break;
LABEL_60:
              v45 = *((_DWORD *)a2 + 1);
              v50 = 0;
              if ( v48 )
              {
                do
                {
                  v51 = *(unsigned __int8 **)a2;
                  if ( v45 > *(_DWORD *)a2 )
                  {
                    v52 = v51 + 1;
                    if ( *v51 )
                    {
                      while ( (unsigned __int8 *)v45 != v52 )
                      {
                        if ( !*v52++ )
                          goto LABEL_89;
                      }
                      goto LABEL_66;
                    }
LABEL_89:
                    *(_DWORD *)a2 = v52;
                    ptr = nullptr;
                    v114 = 0;
                    if ( v51 )
                    {
                      v70 = strlen((const char *)v51);
                      ptr = sub_78018((int)&ptr, nullptr, v70 + 1, 1u);
                      LODWORD(v114) = v70 + 1;
                      memmove(ptr, v51, v70);
                      *((_BYTE *)ptr + v70) = 0;
                      if ( (unsigned int)v114 <= 1 )
                      {
                        if ( ptr )
                        {
                          LODWORD(v114) = 0;
                          sub_77F70(ptr);
                        }
LABEL_99:
                        v45 = *((_DWORD *)a2 + 1);
                        goto LABEL_66;
                      }
                      v71 = a1[4];
                      v72 = a1[3];
                      if ( v71 + 1 > a1[5] )
                      {
                        v72 = (char *)sub_78018(v108, v72, (unsigned int)(v71 + 1), 0xCu);
                        v71 = a1[4];
                        a1[3] = v72;
                      }
                      v73 = 3 * (_DWORD)v71;
                      v74 = &v72[4 * v73];
                      *(_DWORD *)v74 = 0;
                      *((_DWORD *)v74 + 1) = 0;
                      *((_DWORD *)v74 + 2) = 0;
                      v75 = ptr;
                      ++a1[4];
                      v76 = *(_QWORD *)(v74 + 4);
                      v77 = *(void **)v74;
                      *(_DWORD *)v74 = v75;
                      *(_QWORD *)(v74 + 4) = v114;
                      ptr = v77;
                      v114 = v76;
                      if ( *((_DWORD *)v74 + 1) )
                        v78 = *(int **)&v72[4 * v73];
                      else
                        v78 = &dword_8DB98;
                      *(_DWORD *)&(*v46)[4 * v50] = v78;
                      if ( !ptr )
                        goto LABEL_99;
                      LODWORD(v114) = 0;
                      sub_77F70(ptr);
                      v45 = *((_DWORD *)a2 + 1);
                    }
                  }
LABEL_66:
                  ++v50;
                }
                while ( v50 != v48 );
              }
              v104 += 12;
              if ( ++v109 == v111 )
                goto LABEL_68;
            }
            v80 = *v46;
            v89 = (unsigned int)v46[2];
            if ( *v46 <= (char *)&ptr && &ptr < (void **)&v80[4 * v89] )
            {
              if ( v47 <= v89
                || (v99 = (char *)sub_78018((int)v46, v80, v47, 4u),
                    v49 = (unsigned int)v46[1],
                    v80 = v99,
                    *v46 = v99,
                    v48 > v49) )
              {
                v93 = 4 * v49;
                while ( 1 )
                {
                  ++v49;
                  *(_DWORD *)&v80[v93] = 0;
                  v93 += 4;
                  if ( v48 <= v49 )
                    break;
                  v80 = *v46;
                }
              }
            }
            else if ( v47 <= v89
                   || (v79 = (char *)sub_78018((int)v46, v80, v47, 4u),
                       v49 = (unsigned int)v46[1],
                       v80 = v79,
                       *v46 = v79,
                       v48 > v49) )
            {
              v90 = 4 * v49;
              while ( 1 )
              {
                ++v49;
                *(_DWORD *)&v80[v90] = 0;
                v90 += 4;
                if ( v48 <= v49 )
                  break;
                v80 = *v46;
              }
              v46[1] = (char *)v48;
              goto LABEL_60;
            }
LABEL_103:
            v46[1] = (char *)v48;
            goto LABEL_60;
          }
LABEL_68:
          v105 = sub_762E4((unsigned __int8 **)a2, v45);
          if ( !v105 )
          {
LABEL_84:
            if ( v112 )
              a1[12] = (char *)sub_762E4((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
            return;
          }
          v54 = 0;
          while ( 1 )
          {
            v55 = a1[1];
            v56 = *a1;
            v57 = (unsigned int)(v55 + 1);
            if ( v55 + 1 > a1[2] )
            {
              v58 = (char *)sub_78018((int)a1, v56, v57, 0x14u);
              v55 = a1[1];
              v56 = v58;
              *a1 = v58;
              v57 = (unsigned int)(v55 + 1);
            }
            v59 = a1[4];
            v60 = (unsigned int)a1[5];
            a1[1] = (char *)v57;
            v61 = &v56[20 * (_DWORD)v55];
            v62 = a1[3];
            if ( (unsigned int)(v59 + 1) > v60 )
            {
              v63 = (char *)sub_78018(v108, v62, (unsigned int)(v59 + 1), 0xCu);
              v59 = a1[4];
              v62 = v63;
              a1[3] = v63;
            }
            v64 = (int)&v62[12 * (_DWORD)v59];
            *(_DWORD *)v64 = 0;
            *(_DWORD *)(v64 + 4) = 0;
            *(_DWORD *)(v64 + 8) = 0;
            ++a1[4];
            v65 = *a2;
            if ( HIDWORD(v65) > (unsigned int)v65 )
            {
              v66 = (unsigned __int8 *)(v65 + 1);
              if ( *(_BYTE *)v65 )
              {
                while ( v66 != (unsigned __int8 *)HIDWORD(v65) )
                {
                  if ( !*v66++ )
                    goto LABEL_110;
                }
              }
              else
              {
LABEL_110:
                *(_DWORD *)a2 = v66;
                if ( (_DWORD)v65 )
                {
                  v85 = strlen((const char *)v65);
                  v86 = v85;
                  if ( v85 )
                  {
                    v87 = v85 + 1;
                    v107 = v87;
                    v88 = *(void **)v64;
                    if ( v87 > *(_DWORD *)(v64 + 8) )
                    {
                      v88 = sub_78018(v64, *(void **)v64, v87, 1u);
                      *(_DWORD *)v64 = v88;
                    }
                    *(_DWORD *)(v64 + 4) = v107;
                    memmove(v88, (const void *)v65, v86);
                    *(_BYTE *)(*(_DWORD *)v64 + v86) = 0;
                    if ( *(_DWORD *)(v64 + 4) )
                      v68 = *(int **)v64;
                    else
                      v68 = &dword_8DB98;
                    goto LABEL_80;
                  }
                }
              }
            }
            *(_DWORD *)(v64 + 4) = 0;
            v68 = &dword_8DB98;
LABEL_80:
            *(_DWORD *)v61 = v68;
            *((_DWORD *)v61 + 1) = sub_762E4((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
            v61[8] = sub_762E4((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
            v61[9] = sub_762E4((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
            v69 = sub_762E4((unsigned __int8 **)a2, *((_DWORD *)a2 + 1));
            if ( v69 && (unsigned int)a1[10] >= v69 )
              *((_DWORD *)v61 + 3) = *(_DWORD *)&a1[9][12 * v69 - 12];
            else
              *((_DWORD *)v61 + 3) = 0;
            ++v54;
            *((_DWORD *)v61 + 4) = sub_763AC((unsigned __int8 **)a2, *((_DWORD *)a2 + 1)) - 1;
            if ( v54 == v105 )
              goto LABEL_84;
          }
        }
        v40 = (void **)a1[9];
        v41 = (int)(a1 + 9);
        v42 = (unsigned int)a1[11];
        if ( v40 <= &ptr && &ptr < &v40[3 * v42] )
        {
          if ( v111 <= v42
            || (v103 = (void **)sub_78018(v41, v40, v111, 0xCu),
                v39 = (unsigned int)a1[10],
                v40 = v103,
                a1[9] = (char *)v103,
                v111 > v39) )
          {
            v100 = 3 * v39;
            while ( 1 )
            {
              v40[v100] = nullptr;
              v101 = &v40[v100];
              v101[1] = nullptr;
              ++v39;
              v101[2] = nullptr;
              v100 += 3;
              if ( v111 <= v39 )
                break;
              v40 = (void **)a1[9];
            }
          }
        }
        else if ( v111 <= v42
               || (v102 = (void **)sub_78018(v41, v40, v111, 0xCu),
                   v39 = (unsigned int)a1[10],
                   v40 = v102,
                   a1[9] = (char *)v102,
                   v111 > v39) )
        {
          v43 = 3 * v39;
          while ( 1 )
          {
            ++v39;
            v40[v43] = nullptr;
            v44 = &v40[v43];
            v44[1] = nullptr;
            v43 += 3;
            v44[2] = nullptr;
            if ( v111 <= v39 )
              break;
            v40 = (void **)a1[9];
          }
        }
      }
      else
      {
        v94 = v38;
        v95 = 12 * v38;
        do
        {
          v96 = a1[9];
          v97 = *(void **)&v96[v95];
          v98 = &v96[v95];
          if ( v97 )
          {
            *((_DWORD *)v98 + 1) = 0;
            sub_77F70(v97);
          }
          ++v94;
          v95 += 12;
        }
        while ( v39 != v94 );
      }
      a1[10] = (char *)v111;
      goto LABEL_56;
    }
  }
}
// 8DB98: using guessed type int dword_8DB98;
