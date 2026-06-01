/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42EE18
// Address: 0x000000000042EE18

//----- (000000000042EE18) ----------------------------------------------------
__int64 __fastcall sub_42EE18(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  char **v10; // x19
  unsigned __int64 v11; // x21
  char *v12; // x1
  char *v13; // x4
  unsigned __int64 v14; // x2
  char *v15; // x0
  __int64 v16; // x0
  unsigned __int64 v17; // x26
  __int64 v18; // x28
  int v19; // w27
  __int64 v20; // x26
  char v21; // w1
  char *v22; // x0
  __int64 v23; // x3
  __int64 v24; // x21
  unsigned __int64 v25; // x23
  char *v26; // x2
  __int64 v27; // x2
  __int64 v28; // x21
  __int64 v29; // x22
  __int64 v30; // x0
  __int64 v31; // x3
  unsigned __int64 v32; // x2
  char *v33; // x24
  __int64 v34; // x21
  __int64 v35; // x0
  unsigned __int64 v36; // x2
  _QWORD *v37; // x4
  __int64 v38; // x1
  unsigned int v39; // w3
  char v40; // w1
  _QWORD *v41; // x1
  _QWORD *v42; // x1
  __int64 v43; // x0
  unsigned __int64 v44; // x28
  __int64 v45; // x0
  __int64 v46; // x28
  char v47; // w1
  char *v48; // x0
  __int64 v49; // x3
  __int64 v50; // x23
  char *v51; // x1
  __int64 v52; // x0
  _QWORD *v53; // x4
  __int64 v54; // x1
  unsigned int v55; // w3
  __int64 v56; // x2
  unsigned __int64 v57; // x24
  char v58; // w1
  __int64 v59; // x23
  __int64 v60; // x22
  __int64 v61; // x3
  unsigned __int64 v62; // x2
  char *v63; // x0
  char *v64; // x26
  __int64 v65; // x0
  _QWORD *v66; // x4
  __int64 v67; // x1
  unsigned int v68; // w3
  unsigned int v69; // w3
  _QWORD *v70; // x1
  _QWORD *v71; // x1
  __int64 v72; // x2
  unsigned __int16 *v73; // x0
  _QWORD *v74; // x0
  _QWORD *v75; // x0
  char *v76; // x0
  __int64 v77; // x3
  char *v78; // x0
  __int64 v79; // x3
  char *v80; // x4
  unsigned int v81; // w3
  _QWORD *v82; // x0
  __int64 v83; // x3
  unsigned __int16 *v84; // x0
  int v85; // [xsp+70h] [xbp-170h]
  __int64 v86; // [xsp+78h] [xbp-168h]
  __int64 v89; // [xsp+D0h] [xbp-110h]
  __int64 v90; // [xsp+D8h] [xbp-108h]
  unsigned __int16 v91; // [xsp+EAh] [xbp-F6h] BYREF
  int v92; // [xsp+ECh] [xbp-F4h] BYREF
  __int64 v93; // [xsp+F0h] [xbp-F0h] BYREF
  __int64 v94; // [xsp+F8h] [xbp-E8h] BYREF
  __int64 v95; // [xsp+100h] [xbp-E0h] BYREF
  unsigned __int16 *v96; // [xsp+108h] [xbp-D8h] BYREF
  unsigned __int16 *v97; // [xsp+110h] [xbp-D0h] BYREF
  unsigned int v98; // [xsp+118h] [xbp-C8h] BYREF
  unsigned int v99; // [xsp+11Ch] [xbp-C4h] BYREF
  _BYTE v100[2]; // [xsp+120h] [xbp-C0h] BYREF
  __int16 v101; // [xsp+122h] [xbp-BEh] BYREF
  __int16 v102; // [xsp+124h] [xbp-BCh] BYREF
  unsigned __int16 v103; // [xsp+126h] [xbp-BAh] BYREF
  unsigned int v104; // [xsp+128h] [xbp-B8h] BYREF
  unsigned int v105; // [xsp+12Ch] [xbp-B4h] BYREF
  unsigned int v106; // [xsp+130h] [xbp-B0h] BYREF
  __int64 v107; // [xsp+138h] [xbp-A8h] BYREF
  int v108; // [xsp+140h] [xbp-A0h] BYREF
  _QWORD *v109; // [xsp+148h] [xbp-98h]
  int *v110; // [xsp+150h] [xbp-90h]
  int *v111; // [xsp+158h] [xbp-88h]
  __int64 v112; // [xsp+160h] [xbp-80h]
  __int64 v113; // [xsp+168h] [xbp-78h] BYREF
  int v114; // [xsp+170h] [xbp-70h] BYREF
  _QWORD *v115; // [xsp+178h] [xbp-68h]
  int *v116; // [xsp+180h] [xbp-60h]
  int *v117; // [xsp+188h] [xbp-58h]
  __int64 v118; // [xsp+190h] [xbp-50h]
  _QWORD v119[3]; // [xsp+198h] [xbp-48h] BYREF
  __int64 v120; // [xsp+1B0h] [xbp-30h]
  unsigned __int64 v121; // [xsp+1B8h] [xbp-28h]

  if ( (unsigned __int8)sub_4271E0(v119, &v92, a1, 21, a3, 0xDu, a4) )
  {
    v43 = *(_QWORD *)(a1 + 472);
    v44 = v121;
    v85 = v92;
    v86 = v120;
    v93 = v120;
    v45 = sub_48C428(v43, 0, 1);
    v108 = 0;
    v90 = v45 - *(_QWORD *)(a1 + 480);
    v109 = nullptr;
    v110 = &v108;
    v46 = v93 + v44;
    v111 = &v108;
    v112 = 0;
    if ( v93 >= v46 )
    {
      v71 = nullptr;
    }
    else
    {
      do
      {
        sub_42E618(&v107, &v93);
        if ( !v47
          || sub_48C428(*(_QWORD *)(a1 + 472), v93 + *(_QWORD *)(a1 + 480), 0) == -1
          || (sub_420C98(a1, &v97, 2u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, (char *)&v97 + 2, 2u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, (char *)&v97 + 4, 4u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, &v98, 4u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, &v99, 4u, 1u) & 0x80000000) != 0 )
        {
          break;
        }
        v48 = *(char **)(a2 + 24);
        v49 = *(_QWORD *)(a2 + 32);
        v50 = v93 - v86;
        if ( (unsigned __int64)(v49 + 1) > *(_QWORD *)(a2 + 40) )
        {
          v48 = (char *)sub_491288(a2 + 24, *(void **)(a2 + 24), v49 + 1, 0x28u);
          *(_QWORD *)(a2 + 24) = v48;
          v49 = *(_QWORD *)(a2 + 32);
        }
        v51 = &v48[40 * v49];
        *((_QWORD *)v51 + 2) = 0;
        *((_QWORD *)v51 + 3) = 0;
        *((_QWORD *)v51 + 4) = 0;
        ++*(_QWORD *)(a2 + 32);
        *(_QWORD *)v51 = v50;
        *((_QWORD *)v51 + 1) = *(_QWORD *)(a2 + 88);
        v52 = *(_QWORD *)(a2 + 88);
        if ( (unsigned __int64)(v52 + 1) > *(_QWORD *)(a2 + 96) )
        {
          v75 = sub_491288(a2 + 80, *(void **)(a2 + 80), v52 + 1, 0x18u);
          *(_QWORD *)(a2 + 80) = v75;
          v53 = v75;
          v52 = *(_QWORD *)(a2 + 88);
        }
        else
        {
          v53 = *(_QWORD **)(a2 + 80);
        }
        v53[3 * v52] = 0;
        v54 = (__int64)&v53[3 * v52];
        *(_QWORD *)(v54 + 8) = 0;
        *(_QWORD *)(v54 + 16) = 0;
        v55 = HIDWORD(v97);
        ++*(_QWORD *)(a2 + 88);
        sub_42ABB0(a1, v54, v85, v55);
        v56 = v93;
        v114 = 0;
        v95 = v98 + v93;
        v115 = nullptr;
        v116 = &v114;
        v117 = &v114;
        v118 = 0;
        if ( v46 <= v95 )
        {
          v70 = nullptr;
        }
        else
        {
          v57 = 0;
          sub_42E618(&v113, &v95);
          while ( v58
               && WORD1(v97) > v57
               && sub_48C428(*(_QWORD *)(a1 + 472), v95 + *(_QWORD *)(a1 + 480), 0) != -1
               && (sub_420C98(a1, v100, 4u, 1u) & 0x80000000) == 0
               && (sub_420C98(a1, &v102, 2u, 1u) & 0x80000000) == 0
               && (sub_420C98(a1, &v103, 2u, 1u) & 0x80000000) == 0
               && (sub_420C98(a1, &v104, 4u, 1u) & 0x80000000) == 0
               && (sub_420C98(a1, &v105, 4u, 1u) & 0x80000000) == 0 )
          {
            ++v57;
            v59 = v95 - v86;
            v60 = *(_QWORD *)(a2 + 24) + 40LL * *(_QWORD *)(a2 + 32) - 40;
            v61 = *(_QWORD *)(v60 + 24);
            v62 = v61 + 1;
            v63 = *(char **)(v60 + 16);
            if ( (unsigned __int64)(v61 + 1) > *(_QWORD *)(v60 + 32) )
            {
              v63 = (char *)sub_491288(v60 + 16, *(void **)(v60 + 16), v62, 0x18u);
              *(_QWORD *)(v60 + 16) = v63;
              v61 = *(_QWORD *)(v60 + 24);
              v62 = v61 + 1;
            }
            *(_QWORD *)(v60 + 24) = v62;
            v64 = &v63[24 * v61];
            *(_QWORD *)v64 = v59;
            *((_QWORD *)v64 + 1) = *(_QWORD *)(a2 + 112);
            v65 = *(_QWORD *)(a2 + 112);
            if ( (unsigned __int64)(v65 + 1) > *(_QWORD *)(a2 + 120) )
            {
              v74 = sub_491288(a2 + 104, *(void **)(a2 + 104), v65 + 1, 0x18u);
              *(_QWORD *)(a2 + 104) = v74;
              v66 = v74;
              v65 = *(_QWORD *)(a2 + 112);
            }
            else
            {
              v66 = *(_QWORD **)(a2 + 104);
            }
            v66[3 * v65] = 0;
            v67 = (__int64)&v66[3 * v65];
            *(_QWORD *)(v67 + 8) = 0;
            *(_QWORD *)(v67 + 16) = 0;
            v68 = v104;
            ++*(_QWORD *)(a2 + 112);
            sub_42ABB0(a1, v67, v85, v68);
            v69 = v103 & 0x7FFF;
            LOWORD(v94) = v103 & 0x7FFF;
            if ( (v103 & 0x7FFF) != 0 )
            {
              v72 = *(_QWORD *)(a2 + 144);
              v73 = (unsigned __int16 *)(a2 + 136);
              if ( !v72 )
                goto LABEL_82;
              do
              {
                if ( *(unsigned __int16 *)(v72 + 32) < v69 )
                {
                  v72 = *(_QWORD *)(v72 + 24);
                }
                else
                {
                  v73 = (unsigned __int16 *)v72;
                  v72 = *(_QWORD *)(v72 + 16);
                }
              }
              while ( v72 );
              if ( v73 == (unsigned __int16 *)(a2 + 136) || v73[16] > v69 )
              {
LABEL_82:
                v96 = (unsigned __int16 *)&v94;
                v73 = sub_42E950((_QWORD *)(a2 + 128), (__int64)v73, &v96);
              }
              *((_QWORD *)v73 + 5) = *(_QWORD *)(v60 + 8);
              *((_QWORD *)v73 + 6) = *((_QWORD *)v64 + 1);
            }
            v95 += v105;
            if ( v46 <= v95 )
              break;
            sub_42E618(&v113, &v95);
          }
          v56 = v93;
          v70 = v115;
        }
        v93 = v99 + v56;
        sub_42E5D0((__int64)&v113, v70);
      }
      while ( v46 > v93 );
      v71 = v109;
    }
    sub_42E5D0((__int64)&v107, v71);
    sub_48C428(*(_QWORD *)(a1 + 472), v90 + *(_QWORD *)(a1 + 480), 0);
  }
  if ( (unsigned __int8)sub_4271E0(v119, &v92, a1, 20, a3, 0xCu, a4) )
  {
    v16 = *(_QWORD *)(a1 + 472);
    v18 = v120;
    v17 = v121;
    v19 = v92;
    v94 = v120;
    v89 = sub_48C428(v16, 0, 1) - *(_QWORD *)(a1 + 480);
    v108 = 0;
    v20 = v94 + v17;
    v109 = nullptr;
    v110 = &v108;
    v111 = &v108;
    v112 = 0;
    if ( v94 >= v20 )
    {
      v42 = nullptr;
    }
    else
    {
      do
      {
        sub_42E618(&v107, &v94);
        if ( !v21
          || sub_48C428(*(_QWORD *)(a1 + 472), v94 + *(_QWORD *)(a1 + 480), 0) == -1
          || (sub_420C98(a1, v100, 2u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, &v101, 2u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, &v102, 2u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, &v103, 2u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, &v104, 4u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, &v105, 4u, 1u) & 0x80000000) != 0
          || (sub_420C98(a1, &v106, 4u, 1u) & 0x80000000) != 0 )
        {
          break;
        }
        v22 = *(char **)a2;
        v23 = *(_QWORD *)(a2 + 8);
        v24 = v94 - v18;
        if ( (unsigned __int64)(v23 + 1) > *(_QWORD *)(a2 + 16) )
        {
          v22 = (char *)sub_491288(a2, *(void **)a2, v23 + 1, 0x28u);
          v23 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v22;
        }
        v25 = 0;
        v26 = &v22[40 * v23];
        *((_QWORD *)v26 + 1) = 0;
        *((_QWORD *)v26 + 2) = 0;
        *((_QWORD *)v26 + 3) = 0;
        ++*(_QWORD *)(a2 + 8);
        *(_QWORD *)v26 = v24;
        *((_WORD *)v26 + 16) = v101;
        *((_WORD *)v26 + 17) = v102;
        v114 = 0;
        v27 = v94;
        v115 = nullptr;
        v116 = &v114;
        v95 = v105 + v94;
        v117 = &v114;
        v118 = 0;
        if ( v20 > v95 )
        {
          while ( 1 )
          {
            sub_42E618(&v113, &v95);
            if ( !v40
              || v103 <= v25
              || sub_48C428(*(_QWORD *)(a1 + 472), v95 + *(_QWORD *)(a1 + 480), 0) == -1
              || (sub_420C98(a1, &v96, 4u, 1u) & 0x80000000) != 0
              || (sub_420C98(a1, (char *)&v96 + 4, 4u, 1u) & 0x80000000) != 0 )
            {
LABEL_39:
              v27 = v94;
              v41 = v115;
              goto LABEL_40;
            }
            ++v25;
            v28 = v95 - v18;
            v29 = *(_QWORD *)a2 + 40LL * *(_QWORD *)(a2 + 8) - 40;
            v30 = *(_QWORD *)(v29 + 8);
            v31 = *(_QWORD *)(v29 + 16);
            v32 = v31 + 1;
            if ( (unsigned __int64)(v31 + 1) > *(_QWORD *)(v29 + 24) )
            {
              v76 = (char *)sub_491288(v29 + 8, *(void **)(v29 + 8), v32, 0x10u);
              *(_QWORD *)(v29 + 8) = v76;
              v77 = *(_QWORD *)(v29 + 16);
              *(_QWORD *)(v29 + 16) = v77 + 1;
              v33 = &v76[16 * v77];
              *(_QWORD *)v33 = v28;
              if ( (*(_WORD *)(v29 + 32) & 1) == 0 )
              {
LABEL_30:
                v34 = a2 + 104;
                *((_QWORD *)v33 + 1) = *(_QWORD *)(a2 + 112);
                v35 = *(_QWORD *)(a2 + 112);
                v36 = v35 + 1;
                if ( (unsigned __int64)(v35 + 1) <= *(_QWORD *)(a2 + 120) )
                  goto LABEL_31;
                goto LABEL_92;
              }
            }
            else
            {
              *(_QWORD *)(v29 + 16) = v32;
              v33 = (char *)(v30 + 16 * v31);
              *(_QWORD *)v33 = v28;
              if ( (*(_WORD *)(v29 + 32) & 1) == 0 )
                goto LABEL_30;
            }
            v78 = *(char **)(a2 + 80);
            v79 = *(_QWORD *)(a2 + 88);
            *(_QWORD *)(a2 + 72) = v79;
            if ( (unsigned __int64)(v79 + 1) > *(_QWORD *)(a2 + 96) )
            {
              v78 = (char *)sub_491288(a2 + 80, v78, v79 + 1, 0x18u);
              *(_QWORD *)(a2 + 80) = v78;
              v79 = *(_QWORD *)(a2 + 88);
            }
            v80 = &v78[24 * v79];
            *(_QWORD *)v80 = 0;
            *((_QWORD *)v80 + 1) = 0;
            *((_QWORD *)v80 + 2) = 0;
            v81 = (unsigned int)v96;
            ++*(_QWORD *)(a2 + 88);
            sub_42ABB0(a1, (__int64)v80, v19, v81);
            v34 = a2 + 104;
            *((_QWORD *)v33 + 1) = *(_QWORD *)(a2 + 112);
            v35 = *(_QWORD *)(a2 + 112);
            v36 = v35 + 1;
            if ( (unsigned __int64)(v35 + 1) <= *(_QWORD *)(a2 + 120) )
            {
LABEL_31:
              v37 = *(_QWORD **)(a2 + 104);
              goto LABEL_32;
            }
LABEL_92:
            v82 = sub_491288(v34, *(void **)(a2 + 104), v36, 0x18u);
            *(_QWORD *)(a2 + 104) = v82;
            v37 = v82;
            v35 = *(_QWORD *)(v34 + 8);
LABEL_32:
            v37[3 * v35] = 0;
            v38 = (__int64)&v37[3 * v35];
            *(_QWORD *)(v38 + 8) = 0;
            *(_QWORD *)(v38 + 16) = 0;
            v39 = (unsigned int)v96;
            ++*(_QWORD *)(v34 + 8);
            sub_42ABB0(a1, v38, v19, v39);
            v91 = *(_WORD *)(v29 + 34);
            if ( v91 && *(_QWORD *)(v29 + 16) == 1 )
            {
              v83 = *(_QWORD *)(a2 + 144);
              v84 = (unsigned __int16 *)(a2 + 136);
              if ( !v83 )
                goto LABEL_99;
              do
              {
                if ( *(unsigned __int16 *)(v83 + 32) < (unsigned int)v91 )
                {
                  v83 = *(_QWORD *)(v83 + 24);
                }
                else
                {
                  v84 = (unsigned __int16 *)v83;
                  v83 = *(_QWORD *)(v83 + 16);
                }
              }
              while ( v83 );
              if ( v84 == (unsigned __int16 *)(a2 + 136) || v84[16] > (unsigned int)v91 )
              {
LABEL_99:
                v97 = &v91;
                v84 = sub_42E950((_QWORD *)(a2 + 128), (__int64)v84, &v97);
              }
              *((_QWORD *)v84 + 5) = *(_QWORD *)(a2 + 72);
              *((_QWORD *)v84 + 6) = *((_QWORD *)v33 + 1);
            }
            v95 += HIDWORD(v96);
            if ( v20 <= v95 )
              goto LABEL_39;
          }
        }
        v41 = nullptr;
LABEL_40:
        v94 = v106 + v27;
        sub_42E5D0((__int64)&v113, v41);
      }
      while ( v20 > v94 );
      v42 = v109;
    }
    sub_42E5D0((__int64)&v107, v42);
    sub_48C428(*(_QWORD *)(a1 + 472), v89 + *(_QWORD *)(a1 + 480), 0);
  }
  if ( (unsigned __int8)sub_4271E0(v119, &v92, a1, 22, a3, 0xEu, a4) )
  {
    v7 = sub_48C428(*(_QWORD *)(a1 + 472), 0, 1);
    v8 = *(_QWORD *)(a1 + 480);
    v9 = v7 - v8;
    if ( sub_48C428(*(_QWORD *)(a1 + 472), v8 + v120, 0) != -1 && v121 >> 1 )
    {
      v10 = (char **)(a2 + 48);
      v11 = 0;
      do
      {
        v12 = *v10;
        v13 = v10[1];
        v14 = (unsigned __int64)(v13 + 1);
        if ( v13 + 1 > v10[2] )
        {
          v15 = (char *)sub_491288((__int64)v10, v12, v14, 2u);
          v13 = v10[1];
          v12 = v15;
          *v10 = v15;
          v14 = (unsigned __int64)(v13 + 1);
        }
        v10[1] = (char *)v14;
        if ( (sub_420C98(a1, &v12[2 * (_QWORD)v13], 2u, 1u) & 0x80000000) != 0 )
          break;
        ++v11;
      }
      while ( v11 < v121 >> 1 );
    }
    sub_48C428(*(_QWORD *)(a1 + 472), v9 + *(_QWORD *)(a1 + 480), 0);
  }
  return 1;
}
// 42F058: variable 'v21' is possibly undefined
// 42F2B4: variable 'v40' is possibly undefined
// 42F3D0: variable 'v47' is possibly undefined
// 42F684: variable 'v58' is possibly undefined
