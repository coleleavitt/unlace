unsigned __int64 __fastcall sub_6525A0(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        char a8,
        unsigned __int8 a9)
{
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v18; // r14d
  unsigned int v19; // ebx
  int v20; // ebp
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  unsigned int v26; // edx
  unsigned int v27; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // rdx
  char v32; // r9
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rbp
  _QWORD *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rsi
  bool v54; // cf
  __int64 v55; // rax
  unsigned __int64 v56; // rcx
  _QWORD *v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // r10
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  _QWORD *v63; // rdi
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // r10
  __int64 v67; // rax
  unsigned __int64 v68; // rcx
  _QWORD *v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // r10
  __int64 v73; // [rsp+0h] [rbp-E8h]
  unsigned int v75; // [rsp+20h] [rbp-C8h]
  __int64 *v77; // [rsp+28h] [rbp-C0h]
  __int64 v78; // [rsp+30h] [rbp-B8h]
  __int64 v79; // [rsp+38h] [rbp-B0h]
  __int64 v80; // [rsp+40h] [rbp-A8h]
  unsigned int v81; // [rsp+50h] [rbp-98h]
  unsigned int v82; // [rsp+54h] [rbp-94h]
  unsigned int v83; // [rsp+58h] [rbp-90h]
  unsigned int v84; // [rsp+5Ch] [rbp-8Ch]
  int v85; // [rsp+68h] [rbp-80h]
  unsigned int v86; // [rsp+68h] [rbp-80h]
  unsigned __int64 v87; // [rsp+68h] [rbp-80h]
  unsigned __int64 v88; // [rsp+68h] [rbp-80h]
  unsigned int v89; // [rsp+68h] [rbp-80h]
  unsigned int v90; // [rsp+68h] [rbp-80h]
  unsigned __int64 v91; // [rsp+68h] [rbp-80h]
  unsigned int v92; // [rsp+68h] [rbp-80h]
  char v93; // [rsp+72h] [rbp-76h]
  char v94; // [rsp+73h] [rbp-75h]
  unsigned int v95; // [rsp+74h] [rbp-74h]
  char v96; // [rsp+7Ch] [rbp-6Ch]
  char v97; // [rsp+7Ch] [rbp-6Ch]
  unsigned int v98; // [rsp+7Ch] [rbp-6Ch]
  char v99; // [rsp+7Ch] [rbp-6Ch]
  unsigned __int64 v100; // [rsp+80h] [rbp-68h]
  unsigned __int64 v101; // [rsp+80h] [rbp-68h]
  unsigned __int64 v102; // [rsp+80h] [rbp-68h]
  char v103; // [rsp+80h] [rbp-68h]
  unsigned __int64 v104; // [rsp+80h] [rbp-68h]
  unsigned __int64 v105; // [rsp+80h] [rbp-68h]
  unsigned __int64 v106; // [rsp+88h] [rbp-60h]
  unsigned __int64 v107; // [rsp+88h] [rbp-60h]
  unsigned __int64 v108; // [rsp+88h] [rbp-60h]
  unsigned __int64 v109; // [rsp+98h] [rbp-50h] BYREF
  int v110; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v111; // [rsp+A8h] [rbp-40h]

  v75 = a5;
  v111 = __readfsqword(0x28u);
  if ( a8 )
  {
    if ( a7 )
    {
      v94 = 100;
      v79 = (__int64)(a1 + 213);
      v78 = (__int64)(a1 + 226);
      v83 = 26;
      v93 = 68;
      v84 = 28;
    }
    else
    {
      v94 = 120;
      v79 = (__int64)(a1 + 239);
      v78 = (__int64)(a1 + 252);
      v83 = 30;
      v93 = 88;
      v84 = 32;
    }
  }
  else if ( a7 )
  {
    v94 = 68;
    v79 = (__int64)(a1 + 226);
    v78 = (__int64)(a1 + 213);
    v83 = 28;
    v93 = 100;
    v84 = 26;
  }
  else
  {
    v94 = 88;
    v79 = (__int64)(a1 + 252);
    v78 = (__int64)(a1 + 239);
    v83 = 32;
    v93 = 120;
    v84 = 30;
  }
  v11 = *a1;
  v109 = 0;
  v77 = a1;
  sub_6141A0(v11, 26, &v109, 8u, a5);
  v82 = v109 + a4 - v75;
  v81 = a4 - v75 + HIDWORD(v109);
  v12 = *(_QWORD *)(v79 + 72);
  v13 = v79 + 64;
  v80 = v79 + 64;
  if ( v12 )
  {
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v12 + 16);
        v15 = *(_QWORD *)(v12 + 24);
        if ( *(_DWORD *)(v12 + 32) < a4 )
          break;
        v13 = v12;
        v12 = *(_QWORD *)(v12 + 16);
        if ( !v14 )
          goto LABEL_11;
      }
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v15 );
LABEL_11:
    if ( v80 != v13 )
    {
      v16 = v94;
      BYTE1(v16) = (v94 >> 7) | 1;
      v95 = v16;
      do
      {
        v18 = *(_DWORD *)(v13 + 32);
        if ( v18 >= a4 + a6 )
          return v111 - __readfsqword(0x28u);
        v19 = *(_DWORD *)(v13 + 36);
        v20 = sub_665E90(v77, v18, a4, v75, a6, a9, 0);
        LODWORD(v73) = v19 >= v81 || v19 < v82;
        v21 = sub_665E90(v77, v19, a4, v75, a6, a9, v73);
        if ( a9 )
        {
          if ( !a3 )
            goto LABEL_36;
        }
        else
        {
          v85 = v21;
          v29 = sub_3B90A0(v77, v20);
          netnode_supdel(v29, v19, v95);
          v30 = sub_3B90A0(v77, v85);
          v31 = (unsigned int)v93;
          BYTE1(v31) = (v93 >> 7) | 1;
          netnode_supdel(v30, v18, v31);
          v21 = v85;
          if ( !a3 )
          {
LABEL_36:
            v32 = *(_BYTE *)(v13 + 40);
            v109 = __PAIR64__(v21, v20);
            v33 = a2[1];
            v34 = a2[2];
            BYTE1(v110) = v94;
            v35 = *a2;
            LOBYTE(v110) = v32;
            v36 = v33 + 1;
            if ( (unsigned __int64)&v109 < v35 || (unsigned __int64)&v109 >= v35 + 12 * v34 )
            {
              if ( v34 < v36 )
              {
                v100 = v34;
                v96 = v32;
                v89 = v21;
                v55 = qvector_reserve(a2, 0, v33 + 1, 12);
                v56 = a2[2];
                v57 = (_QWORD *)*a2;
                v58 = a2[1] - 1;
                a2[2] = v100;
                if ( v58 >= 0 )
                {
                  v59 = v55;
                  do
                  {
                    v60 = *v57;
                    v59 += 12;
                    v57 = (_QWORD *)((char *)v57 + 12);
                    *(_QWORD *)(v59 - 12) = v60;
                    *(_DWORD *)(v59 - 4) = *((_DWORD *)v57 - 1);
                    v54 = v58-- == 0;
                  }
                  while ( !v54 );
                  v57 = (_QWORD *)*a2;
                }
                v106 = v56;
                v101 = v55;
                qfree(v57);
                v35 = v101;
                v33 = a2[1];
                v32 = v96;
                *a2 = v101;
                v21 = v89;
                a2[2] = v106;
              }
              v46 = v35 + 12 * v33;
              *(_QWORD *)v46 = v109;
              *(_DWORD *)(v46 + 8) = v110;
            }
            else
            {
              if ( v34 < v36 )
              {
                v104 = v34;
                v99 = v32;
                v92 = v21;
                v67 = qvector_reserve(a2, 0, v33 + 1, 12);
                v68 = a2[2];
                v69 = (_QWORD *)*a2;
                v70 = a2[1] - 1;
                a2[2] = v104;
                if ( v70 >= 0 )
                {
                  v71 = v67;
                  do
                  {
                    v72 = *v69;
                    v71 += 12;
                    v69 = (_QWORD *)((char *)v69 + 12);
                    *(_QWORD *)(v71 - 12) = v72;
                    *(_DWORD *)(v71 - 4) = *((_DWORD *)v69 - 1);
                    v54 = v70-- == 0;
                  }
                  while ( !v54 );
                  v69 = (_QWORD *)*a2;
                }
                v108 = v68;
                v105 = v67;
                qfree(v69);
                v35 = v105;
                v33 = a2[1];
                v32 = v99;
                *a2 = v105;
                v21 = v92;
                a2[2] = v108;
              }
              v37 = v35 + 12 * v33;
              *(_DWORD *)v37 = v20;
              *(_DWORD *)(v37 + 4) = v21;
              *(_BYTE *)(v37 + 8) = v32;
              *(_BYTE *)(v37 + 9) = v94;
            }
            v38 = a2[1];
            v109 = __PAIR64__(v20, v21);
            v39 = a2[2];
            BYTE1(v110) = v93;
            v40 = *a2;
            v41 = v38 + 1;
            v42 = v38 + 2;
            a2[1] = v38 + 1;
            LOBYTE(v110) = v32;
            if ( (unsigned __int64)&v109 < v40 || (unsigned __int64)&v109 >= v40 + 12 * v39 )
            {
              if ( v39 < v42 )
              {
                v87 = v39;
                v47 = qvector_reserve(a2, 0, v42, 12);
                v48 = a2[1];
                v49 = a2[2];
                v50 = (_QWORD *)*a2;
                a2[2] = v87;
                v51 = v48 - 1;
                if ( v51 >= 0 )
                {
                  v52 = v47;
                  do
                  {
                    v53 = *v50;
                    v52 += 12;
                    v50 = (_QWORD *)((char *)v50 + 12);
                    *(_QWORD *)(v52 - 12) = v53;
                    *(_DWORD *)(v52 - 4) = *((_DWORD *)v50 - 1);
                    v54 = v51-- == 0;
                  }
                  while ( !v54 );
                  v50 = (_QWORD *)*a2;
                }
                v88 = v47;
                qfree(v50);
                v40 = v88;
                a2[2] = v49;
                v41 = a2[1];
                *a2 = v88;
              }
              v45 = v40 + 12 * v41;
              *(_QWORD *)v45 = v109;
              *(_DWORD *)(v45 + 8) = v110;
            }
            else
            {
              if ( v39 < v42 )
              {
                v102 = v39;
                v97 = v32;
                v90 = v21;
                v61 = qvector_reserve(a2, 0, v42, 12);
                v62 = a2[2];
                v63 = (_QWORD *)*a2;
                v64 = a2[1] - 1;
                a2[2] = v102;
                if ( v64 >= 0 )
                {
                  v65 = v61;
                  do
                  {
                    v66 = *v63;
                    v65 += 12;
                    v63 = (_QWORD *)((char *)v63 + 12);
                    *(_QWORD *)(v65 - 12) = v66;
                    *(_DWORD *)(v65 - 4) = *((_DWORD *)v63 - 1);
                    v54 = v64-- == 0;
                  }
                  while ( !v54 );
                  v63 = (_QWORD *)*a2;
                }
                v107 = v62;
                v103 = v97;
                v98 = v90;
                v91 = v61;
                qfree(v63);
                v40 = v91;
                v41 = a2[1];
                v32 = v103;
                *a2 = v91;
                v21 = v98;
                a2[2] = v107;
              }
              v43 = v40 + 12 * v41;
              *(_DWORD *)v43 = v21;
              *(_DWORD *)(v43 + 4) = v20;
              *(_BYTE *)(v43 + 8) = v32;
              *(_BYTE *)(v43 + 9) = v93;
            }
            ++a2[1];
            goto LABEL_19;
          }
        }
        v22 = a3[1];
        v23 = *a3;
        if ( a3[2] < (unsigned __int64)(v22 + 1) )
        {
          v86 = v21;
          v44 = qvector_reserve(a3, v23, v22 + 1, 4);
          v21 = v86;
          *a3 = v44;
          v23 = v44;
          v22 = a3[1];
        }
        *(_DWORD *)(v23 + 4 * v22) = v20;
        ++a3[1];
        auto_mark_range(v21, v21 + 1, 40);
LABEL_19:
        v24 = *(_QWORD *)(v78 + 72);
        if ( v24 )
        {
          v25 = v78 + 64;
          do
          {
            while ( 1 )
            {
              v26 = *(_DWORD *)(v24 + 32);
              if ( v26 < v19 || v19 >= v26 && *(_DWORD *)(v24 + 36) < v18 )
                break;
              v25 = v24;
              v24 = *(_QWORD *)(v24 + 16);
              if ( !v24 )
                goto LABEL_26;
            }
            v24 = *(_QWORD *)(v24 + 24);
          }
          while ( v24 );
LABEL_26:
          if ( v78 + 64 != v25 )
          {
            v27 = *(_DWORD *)(v25 + 32);
            if ( v19 >= v27 && (v27 < v19 || v18 >= *(_DWORD *)(v25 + 36)) )
              sub_6522E0(v78, v25, v84);
          }
        }
        v13 = sub_6522E0(v79, v13, v83);
      }
      while ( v80 != v13 );
    }
  }
  return v111 - __readfsqword(0x28u);
}

