void __fastcall sub_2033CF0(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned int *a8)
{
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rbx
  char v14; // al
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rax
  int v20; // edx
  int v21; // eax
  __int64 v22; // rbp
  __int64 *i; // r15
  char v24; // dl
  unsigned int v25; // eax
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 *v33; // rsi
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  unsigned int v36; // r12d
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 *v41; // rsi
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  char v44; // dl
  unsigned int v45; // eax
  __int64 v46; // r13
  __int64 *v47; // r12
  __int64 v48; // r15
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  unsigned int v53; // ecx
  __int64 *v54; // rsi
  __int64 v55; // r10
  unsigned __int64 v56; // rax
  unsigned int v57; // ebp
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rcx
  unsigned int v61; // eax
  __int64 *v62; // rsi
  __int64 v63; // r10
  unsigned __int64 v64; // rax
  unsigned int v65; // ebx
  bool v66; // al
  unsigned int v67; // ebx
  int v68; // esi
  int v69; // r9d
  int v70; // esi
  int v71; // r9d
  int v72; // esi
  int v73; // esi
  unsigned int v74; // r12d
  bool v75; // al
  char *v76; // r13
  __int64 v77; // rbp
  __int64 v78; // r12
  __int64 v79; // rbx
  __int64 v80; // r9
  unsigned int v81; // r8d
  __int64 v82; // rcx
  __int64 *v83; // rbx
  __int64 v84; // rcx
  unsigned int v85; // r8d
  unsigned int v86; // r12d
  __int64 v87; // rax
  int v88; // edx
  int v89; // eax
  bool v90; // zf
  int v91; // edx
  int v92; // eax
  int v93; // edx
  int v94; // eax
  int v95; // r9d
  int v96; // r9d
  char *v97; // [rsp+8h] [rbp-C0h]
  unsigned int *v98; // [rsp+10h] [rbp-B8h]
  __int64 *v99; // [rsp+18h] [rbp-B0h]
  __int64 *v100; // [rsp+18h] [rbp-B0h]
  char *v101; // [rsp+20h] [rbp-A8h]
  char *v102; // [rsp+28h] [rbp-A0h]
  __int64 v103; // [rsp+30h] [rbp-98h]
  unsigned __int64 v104; // [rsp+38h] [rbp-90h]
  unsigned __int64 v105; // [rsp+38h] [rbp-90h]
  unsigned __int64 v106; // [rsp+38h] [rbp-90h]
  unsigned __int64 v107; // [rsp+38h] [rbp-90h]
  __int64 *v108; // [rsp+40h] [rbp-88h]
  __int64 v109; // [rsp+48h] [rbp-80h]
  __int128 v110; // [rsp+50h] [rbp-78h]
  __int64 v111; // [rsp+60h] [rbp-68h]
  __int128 v112; // [rsp+70h] [rbp-58h] BYREF
  unsigned int *v113; // [rsp+80h] [rbp-48h]

  v8 = (__int64)&a2[-a1];
  v102 = a2;
  v103 = a3;
  if ( (__int64)&a2[-a1] > 256 )
  {
    v9 = a1;
    if ( !a3 )
    {
      v108 = (__int64 *)a2;
      goto LABEL_78;
    }
    v109 = a1 + 16;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v9 + 16);
      --v103;
      v11 = v9 + 16 * (v8 >> 5);
      v101 = *((char **)&a7 + 1);
      v12 = *(_QWORD *)v11;
      v13 = a7;
      v112 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
      v98 = a8;
      v113 = a8;
      v14 = sub_2033A10((__int64)&v112, v10, v12);
      v15 = *((_QWORD *)v102 - 2);
      if ( v14 )
      {
        if ( !(unsigned __int8)sub_2033A10((__int64)&v112, *(_QWORD *)v11, v15) )
        {
          v90 = (unsigned __int8)sub_2033A10((__int64)&v112, *(_QWORD *)(v9 + 16), *((_QWORD *)v102 - 2)) == 0;
          v87 = *(_QWORD *)v9;
          if ( !v90 )
          {
            *(_QWORD *)v9 = *((_QWORD *)v102 - 2);
            v91 = *((_DWORD *)v102 - 2);
            *((_QWORD *)v102 - 2) = v87;
            v92 = *(_DWORD *)(v9 + 8);
            *(_DWORD *)(v9 + 8) = v91;
            *((_DWORD *)v102 - 2) = v92;
            v22 = *(_QWORD *)v9;
            goto LABEL_8;
          }
          goto LABEL_86;
        }
        v19 = *(_QWORD *)v9;
      }
      else
      {
        if ( (unsigned __int8)sub_2033A10((__int64)&v112, *(_QWORD *)(v9 + 16), v15) )
        {
          v87 = *(_QWORD *)v9;
LABEL_86:
          v22 = *(_QWORD *)(v9 + 16);
          v88 = *(_DWORD *)(v9 + 24);
          *(_QWORD *)(v9 + 16) = v87;
          v89 = *(_DWORD *)(v9 + 8);
          *(_QWORD *)v9 = v22;
          *(_DWORD *)(v9 + 8) = v88;
          *(_DWORD *)(v9 + 24) = v89;
          goto LABEL_8;
        }
        v90 = (unsigned __int8)sub_2033A10((__int64)&v112, *(_QWORD *)v11, *((_QWORD *)v102 - 2)) == 0;
        v19 = *(_QWORD *)v9;
        if ( !v90 )
        {
          *(_QWORD *)v9 = *((_QWORD *)v102 - 2);
          v93 = *((_DWORD *)v102 - 2);
          *((_QWORD *)v102 - 2) = v19;
          v94 = *(_DWORD *)(v9 + 8);
          v22 = *(_QWORD *)v9;
          *(_DWORD *)(v9 + 8) = v93;
          *((_DWORD *)v102 - 2) = v94;
          goto LABEL_8;
        }
      }
      *(_QWORD *)v9 = *(_QWORD *)v11;
      v20 = *(_DWORD *)(v11 + 8);
      *(_QWORD *)v11 = v19;
      v21 = *(_DWORD *)(v9 + 8);
      *(_DWORD *)(v9 + 8) = v20;
      *(_DWORD *)(v11 + 8) = v21;
      v22 = *(_QWORD *)v9;
LABEL_8:
      v97 = (char *)v9;
      v99 = (__int64 *)v102;
      for ( i = (__int64 *)v109; ; i += 2 )
      {
        v28 = *i;
        v108 = i;
        if ( *i == v22 )
          break;
        v29 = *(unsigned int *)(v13 + 16);
        v30 = *(_QWORD *)(v28 + 24);
        v31 = *(_QWORD *)v13;
        if ( !(_DWORD)v29 )
          goto LABEL_63;
        v32 = (v29 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
        v33 = (__int64 *)(v31 + 16LL * v32);
        v34 = *v33;
        if ( v30 != *v33 )
        {
          v72 = 1;
          if ( v34 == -4096 )
          {
LABEL_63:
            sub_2033890(
              (__m128 *)&v112,
              (_QWORD *)(v31 + 16LL * (unsigned int)v29),
              (_QWORD *)(v31 + 16LL * (unsigned int)v29),
              v13,
              1);
            v35 = v112;
            goto LABEL_20;
          }
          while ( 1 )
          {
            v95 = v72 + 1;
            v32 = (v29 - 1) & (v32 + v72);
            v33 = (__int64 *)(v31 + 16LL * v32);
            if ( v30 == *v33 )
              break;
            if ( *v33 == -4096 )
              goto LABEL_63;
            v72 = v95;
          }
        }
        sub_2033890((__m128 *)&v112, v33, (_QWORD *)(16 * v29 + v31), v13, 1);
        v35 = v112;
LABEL_20:
        v104 = v35;
        v36 = 0;
        sub_2033890(
          (__m128 *)&v112,
          (_QWORD *)(*(_QWORD *)v13 + 16LL * *(unsigned int *)(v13 + 16)),
          (_QWORD *)(*(_QWORD *)v13 + 16LL * *(unsigned int *)(v13 + 16)),
          v13,
          1);
        if ( v104 != (_QWORD)v112 )
          v36 = *(_DWORD *)(*(_QWORD *)(v13 + 24) + 16LL * *(unsigned int *)(v104 + 8) + 8);
        v37 = *(unsigned int *)(v13 + 16);
        v38 = *(_QWORD *)(v22 + 24);
        v39 = *(_QWORD *)v13;
        if ( (_DWORD)v37 )
        {
          v40 = (v37 - 1) & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
          v41 = (__int64 *)(v39 + 16LL * v40);
          v42 = *v41;
          if ( *v41 == v38 )
            goto LABEL_24;
          v73 = 1;
          if ( v42 != -4096 )
          {
            while ( 1 )
            {
              v96 = v73 + 1;
              v40 = (v37 - 1) & (v73 + v40);
              v41 = (__int64 *)(v39 + 16LL * v40);
              if ( v38 == *v41 )
                break;
              if ( *v41 == -4096 )
                goto LABEL_70;
              v73 = v96;
            }
LABEL_24:
            sub_2033890((__m128 *)&v112, v41, (_QWORD *)(v39 + 16 * v37), v13, 1);
            v43 = v112;
            goto LABEL_25;
          }
        }
LABEL_70:
        sub_2033890(
          (__m128 *)&v112,
          (_QWORD *)(v39 + 16LL * (unsigned int)v37),
          (_QWORD *)(v39 + 16LL * (unsigned int)v37),
          v13,
          1);
        v43 = v112;
LABEL_25:
        v105 = v43;
        sub_2033890(
          (__m128 *)&v112,
          (_QWORD *)(*(_QWORD *)v13 + 16LL * *(unsigned int *)(v13 + 16)),
          (_QWORD *)(*(_QWORD *)v13 + 16LL * *(unsigned int *)(v13 + 16)),
          v13,
          1);
        if ( v105 == (_QWORD)v112 )
        {
          v44 = *v101;
          v45 = 0;
        }
        else
        {
          v44 = *v101;
          v45 = *(_DWORD *)(*(_QWORD *)(v13 + 24) + 16LL * *(unsigned int *)(v105 + 8) + 8);
          if ( v45 > v36 )
          {
            v22 = *(_QWORD *)v97;
            if ( !v44 || *v98 < v45 )
              break;
            continue;
          }
        }
        if ( v36 <= v45 )
        {
          if ( v44 && *v98 >= v36 )
          {
            v86 = sub_20C9A20(v28);
            v75 = v86 < (unsigned int)sub_20C9A20(v22);
          }
          else
          {
            v74 = sub_20C9A20(v28);
            v75 = v74 > (unsigned int)sub_20C9A20(v22);
          }
          v22 = *(_QWORD *)v97;
          if ( !v75 )
            break;
        }
        else
        {
          v22 = *(_QWORD *)v97;
          if ( v44 && *v98 >= v36 )
            break;
        }
LABEL_15:
        ;
      }
      v46 = *(v99 - 2);
      v47 = v99 - 2;
      if ( v46 != v22 )
      {
        v100 = i;
        v48 = v13;
        v49 = v22;
        v50 = *(unsigned int *)(v48 + 16);
        v51 = *(_QWORD *)(v22 + 24);
        v52 = *(_QWORD *)v48;
        if ( (_DWORD)v50 )
        {
LABEL_31:
          v53 = (v50 - 1) & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
          v54 = (__int64 *)(v52 + 16LL * v53);
          v55 = *v54;
          if ( *v54 != v51 )
          {
            v70 = 1;
            if ( v55 == -4096 )
              goto LABEL_45;
            while ( 1 )
            {
              v71 = v70 + 1;
              v53 = (v50 - 1) & (v53 + v70);
              v54 = (__int64 *)(v52 + 16LL * v53);
              if ( v51 == *v54 )
                break;
              if ( *v54 == -4096 )
                goto LABEL_45;
              v70 = v71;
            }
          }
          sub_2033890((__m128 *)&v112, v54, (_QWORD *)(16 * v50 + v52), v48, 1);
          v56 = v112;
          goto LABEL_33;
        }
LABEL_45:
        while ( 2 )
        {
          sub_2033890(
            (__m128 *)&v112,
            (_QWORD *)(v52 + 16LL * (unsigned int)v50),
            (_QWORD *)(v52 + 16LL * (unsigned int)v50),
            v48,
            1);
          v56 = v112;
LABEL_33:
          v106 = v56;
          v57 = 0;
          sub_2033890(
            (__m128 *)&v112,
            (_QWORD *)(*(_QWORD *)v48 + 16LL * *(unsigned int *)(v48 + 16)),
            (_QWORD *)(*(_QWORD *)v48 + 16LL * *(unsigned int *)(v48 + 16)),
            v48,
            1);
          if ( v106 != (_QWORD)v112 )
            v57 = *(_DWORD *)(*(_QWORD *)(v48 + 24) + 16LL * *(unsigned int *)(v106 + 8) + 8);
          v58 = *(unsigned int *)(v48 + 16);
          v59 = *(_QWORD *)(v46 + 24);
          v60 = *(_QWORD *)v48;
          if ( !(_DWORD)v58 )
            goto LABEL_53;
          v61 = (v58 - 1) & (((unsigned int)v59 >> 9) ^ ((unsigned int)v59 >> 4));
          v62 = (__int64 *)(v60 + 16LL * v61);
          v63 = *v62;
          if ( v59 == *v62 )
            goto LABEL_37;
          v68 = 1;
          if ( v63 != -4096 )
          {
            while ( 1 )
            {
              v69 = v68 + 1;
              v61 = (v58 - 1) & (v68 + v61);
              v62 = (__int64 *)(v60 + 16LL * v61);
              if ( v59 == *v62 )
                break;
              if ( *v62 == -4096 )
                goto LABEL_53;
              v68 = v69;
            }
LABEL_37:
            sub_2033890((__m128 *)&v112, v62, (_QWORD *)(v60 + 16 * v58), v48, 1);
            v64 = v112;
          }
          else
          {
LABEL_53:
            sub_2033890(
              (__m128 *)&v112,
              (_QWORD *)(v60 + 16LL * (unsigned int)v58),
              (_QWORD *)(v60 + 16LL * (unsigned int)v58),
              v48,
              1);
            v64 = v112;
          }
          v107 = v64;
          sub_2033890(
            (__m128 *)&v112,
            (_QWORD *)(*(_QWORD *)v48 + 16LL * *(unsigned int *)(v48 + 16)),
            (_QWORD *)(*(_QWORD *)v48 + 16LL * *(unsigned int *)(v48 + 16)),
            v48,
            1);
          if ( (_QWORD)v112 == v107 )
          {
            v24 = *v101;
            v25 = 0;
            goto LABEL_40;
          }
          v16 = (int)v101;
          v24 = *v101;
          v25 = *(_DWORD *)(*(_QWORD *)(v48 + 24) + 16LL * *(unsigned int *)(v107 + 8) + 8);
          if ( v25 <= v57 )
          {
LABEL_40:
            if ( v57 <= v25 )
            {
              if ( v24 && *v98 >= v57 )
              {
                v67 = sub_20C9A20(v49);
                v66 = v67 < (unsigned int)sub_20C9A20(v46);
              }
              else
              {
                v65 = sub_20C9A20(v49);
                v66 = v65 > (unsigned int)sub_20C9A20(v46);
              }
              if ( !v66 )
              {
LABEL_12:
                v13 = v48;
                i = v100;
                break;
              }
            }
            else if ( v24 && *v98 >= v57 )
            {
              goto LABEL_12;
            }
          }
          else if ( !v24 || *v98 < v25 )
          {
            goto LABEL_12;
          }
          v47 -= 2;
          v46 = *v47;
          v49 = *(_QWORD *)v97;
          if ( *(_QWORD *)v97 == *v47 )
            goto LABEL_12;
          v50 = *(unsigned int *)(v48 + 16);
          v51 = *(_QWORD *)(v49 + 24);
          v52 = *(_QWORD *)v48;
          if ( (_DWORD)v50 )
            goto LABEL_31;
          continue;
        }
      }
      if ( i < v47 )
      {
        v26 = *i;
        v99 = v47;
        *i = *v47;
        v27 = *((_DWORD *)v47 + 2);
        *v47 = v26;
        LODWORD(v26) = *((_DWORD *)i + 2);
        *((_DWORD *)i + 2) = v27;
        *((_DWORD *)v47 + 2) = v26;
        v22 = *(_QWORD *)v97;
        goto LABEL_15;
      }
      v76 = (char *)i;
      v9 = (__int64)v97;
      v8 = v76 - v97;
      sub_2033CF0((_DWORD)v76, (_DWORD)v102, v103, v16, v17, v18, a7, (__int64)a8);
      if ( v76 - v97 <= 256 )
        return;
      v102 = v76;
      if ( !v103 )
      {
LABEL_78:
        v77 = v8 >> 4;
        v78 = (v77 - 2) >> 1;
        v111 = (__int64)a8;
        v110 = (__int128)_mm_loadu_si128((const __m128i *)&a7);
        v112 = v110;
        v113 = a8;
        v79 = v9 + 16 * v78;
        sub_2033B00(v9, v78, v77, *(_QWORD *)v79, *(_DWORD *)(v79 + 8), a6, v110, (__int64)a8);
        do
        {
          v81 = *(_DWORD *)(v79 - 8);
          v82 = *(_QWORD *)(v79 - 16);
          --v78;
          v79 -= 16;
          sub_2033B00(v9, v78, v77, v82, v81, v80, v112, (__int64)v113);
        }
        while ( v78 );
        v83 = v108;
        do
        {
          v83 -= 2;
          v84 = *v83;
          v85 = *((_DWORD *)v83 + 2);
          *v83 = *(_QWORD *)v9;
          *((_DWORD *)v83 + 2) = *(_DWORD *)(v9 + 8);
          sub_2033B00(v9, 0, ((__int64)v83 - v9) >> 4, v84, v85, v80, v110, v111);
        }
        while ( (__int64)v83 - v9 > 16 );
        return;
      }
    }
  }
}
