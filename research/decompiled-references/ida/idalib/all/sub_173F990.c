unsigned __int64 __fastcall sub_173F990(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        _WORD **a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  unsigned __int64 v7; // rbx
  unsigned __int8 v8; // r13
  __int64 *v10; // rbp
  __int64 v11; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r15
  _QWORD *v26; // rbx
  _QWORD *v27; // r14
  __int64 v28; // r15
  unsigned __int8 v29; // al
  char *v30; // r15
  char *v31; // rbx
  _BYTE *i; // rdx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rdi
  __int64 *v36; // r15
  __int64 *v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rdi
  _QWORD *v40; // rbx
  _QWORD *v41; // rdi
  _QWORD *v42; // r15
  _QWORD *v43; // r14
  char *v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  _WORD **v54; // r13
  unsigned int v55; // ebp
  unsigned int *v56; // rdi
  _WORD *v57; // r8
  __int16 v58; // di
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // r15
  unsigned int v64; // r13d
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned int v67; // eax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned __int64 v71; // rdx
  unsigned int v72; // r14d
  unsigned int v73; // ebp
  unsigned int v74; // r13d
  __int64 v76; // [rsp+8h] [rbp-2020h]
  _QWORD *v77; // [rsp+8h] [rbp-2020h]
  __int64 v79; // [rsp+10h] [rbp-2018h]
  __int64 v82; // [rsp+20h] [rbp-2008h]
  __int64 v83; // [rsp+28h] [rbp-2000h]
  __int64 *v84; // [rsp+40h] [rbp-1FE8h]
  unsigned int v85; // [rsp+48h] [rbp-1FE0h]
  unsigned int v86; // [rsp+4Ch] [rbp-1FDCh]
  void *ptr; // [rsp+60h] [rbp-1FC8h] BYREF
  __int64 v88; // [rsp+68h] [rbp-1FC0h]
  _BYTE v89[192]; // [rsp+70h] [rbp-1FB8h] BYREF
  __m128i v90; // [rsp+130h] [rbp-1EF8h] BYREF
  _BYTE v91[2688]; // [rsp+140h] [rbp-1EE8h] BYREF
  void *v92; // [rsp+BC0h] [rbp-1468h]
  __int64 v93; // [rsp+BC8h] [rbp-1460h]
  int v94; // [rsp+BD0h] [rbp-1458h]
  char v95; // [rsp+BD4h] [rbp-1454h]
  _QWORD v96[17]; // [rsp+BD8h] [rbp-1450h] BYREF
  int v97; // [rsp+C60h] [rbp-13C8h]
  __int64 v98; // [rsp+C68h] [rbp-13C0h]
  __int64 v99; // [rsp+C70h] [rbp-13B8h]
  void *v100; // [rsp+C78h] [rbp-13B0h]
  __int64 v101; // [rsp+C80h] [rbp-13A8h]
  _BYTE v102[32]; // [rsp+C88h] [rbp-13A0h] BYREF
  __int64 *v103; // [rsp+CA8h] [rbp-1380h]
  __int64 v104; // [rsp+CB0h] [rbp-1378h]
  _QWORD v105[2]; // [rsp+CB8h] [rbp-1370h] BYREF
  unsigned int v106; // [rsp+CC8h] [rbp-1360h]
  int v107; // [rsp+CCCh] [rbp-135Ch]
  __int64 v108; // [rsp+CD0h] [rbp-1358h]
  char v109; // [rsp+CD8h] [rbp-1350h]
  int v110; // [rsp+CDCh] [rbp-134Ch]
  int v111; // [rsp+1FE0h] [rbp-48h]

  v7 = 0;
  v8 = a7;
  if ( !a1[1] )
    return v7;
  v10 = a1;
  v11 = *a1;
  v7 = a2;
  v13 = a3;
  ptr = v89;
  v88 = 0x800000000LL;
  if ( !(unsigned __int8)sub_1E63330(v11, a3, a2, 1, 0) )
  {
    v20 = sub_F63240(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), v13, v14, v15, v16, v17);
    v21 = (__int64)v20;
    if ( v20 )
    {
      if ( (*((_BYTE *)v20 + 28) & 0x7Fu) - 59 > 2 )
      {
        if ( !a7 )
          goto LABEL_46;
        if ( *((_BYTE *)v20 + 73) >> 5 == 2 )
          goto LABEL_46;
        v77 = v20;
        v59 = sub_168B6E0((__int64)v10);
        v21 = (__int64)v77;
        if ( (*(_BYTE *)(v59 + 1) & 8) != 0 )
          goto LABEL_46;
        v82 = 0;
      }
      else
      {
        if ( !a7 || *((_BYTE *)v20 + 73) >> 5 == 2 )
          goto LABEL_9;
        v76 = (__int64)v20;
        v46 = sub_168B6E0((__int64)v10);
        v21 = v76;
        v82 = v76;
        if ( (*(_BYTE *)(v46 + 1) & 8) != 0 )
        {
          v13 = *(_QWORD *)(v76 + 104);
          sub_7052B0((__int64 *)(v13 + 96), v13, v76, v47, v48, v49);
          v21 = v76;
          if ( **(char **)(v76 + 128) >= 0 )
            goto LABEL_9;
          v82 = v76;
        }
      }
      v90.m128i_i64[1] = v21;
      v90.m128i_i32[0] = 5;
      v85 = sub_15A5EC0((__int64)&v90, v13, v21, v47, v48, v49);
      if ( &a4[a5] != a4 )
      {
        v51 = (__int64)a4;
        v52 = 0;
        v84 = v10;
        v53 = 0;
        v54 = a4;
        v55 = 0;
        do
        {
          v57 = *v54;
          v58 = **v54 & 0x1FF;
          if ( v58 == 68 )
          {
            if ( v57[10] >> 1 != 1 )
              goto LABEL_3;
            v56 = *((unsigned int **)v57 + 3);
            v55 = *v56;
            if ( *v56 )
              goto LABEL_3;
            v53 = sub_C00930((__int64)v56);
          }
          else
          {
            if ( v58 == 67 )
              goto LABEL_3;
            ++v55;
          }
          ++v54;
        }
        while ( &a4[a5] != v54 );
        v86 = v55;
        v8 = a7;
        v10 = v84;
        v83 = v53;
        if ( v53 )
        {
          v63 = (_QWORD *)sub_B7E900(v90.m128i_i64[1], 0, v52, v51, (__int64)v57, v50);
          if ( v63 )
          {
            v64 = 0;
LABEL_83:
            v65 = v63[5];
            if ( (v65 & 7) != 0 || v83 != (v65 & 0xFFFFFFFFFFFFFFF8LL) )
            {
              while ( 1 )
              {
                v66 = v63[1] & 0xFFFFFFFFFFFFFFF8LL;
                v63 = (_QWORD *)v66;
                if ( !v66 )
                  break;
                if ( (*(_BYTE *)(v66 + 28) & 0x7Fu) - 49 <= 2 )
                {
                  ++v64;
                  goto LABEL_83;
                }
              }
            }
            else
            {
              v67 = sub_15A5EC0((__int64)&v90, v83, v86, v60, v61, v62);
              v71 = v86;
              v72 = v67;
              if ( v67 > v64 )
              {
                v73 = v64;
                do
                {
                  if ( sub_15A6530(v90.m128i_i32, (_QWORD *)v73, v71, v68, v69, v70) == v63 )
                    break;
                  ++v73;
                }
                while ( v72 != v73 );
                LODWORD(v71) = v86;
                v64 = v73;
                v10 = v84;
              }
              v74 = v64 + v71 + 1;
              if ( v85 > v74 )
              {
                sub_1706280((__int64)&ptr, &v90);
                v7 = sub_17007F0(*v10, (__int64)ptr, (_QWORD *)(unsigned int)v88, v74, a6, 1);
              }
            }
          }
          goto LABEL_3;
        }
      }
      if ( v85 > a5 )
        sub_1706280((__int64)&ptr, &v90);
      if ( !v82 )
      {
LABEL_46:
        v45 = sub_17007F0(*v10, (__int64)ptr, (_QWORD *)(unsigned int)v88, (unsigned int)a5, a6, v8);
        v18 = ptr;
        v7 = v45;
        if ( ptr == v89 )
          return v7;
        goto LABEL_4;
      }
      v21 = v82;
LABEL_9:
      v22 = *v10;
      v93 = 16;
      v90.m128i_i64[0] = (__int64)v91;
      v90.m128i_i64[1] = 0x1000000000LL;
      v92 = v96;
      v100 = v102;
      v101 = 0x400000000LL;
      v103 = v105;
      v94 = 0;
      v95 = 1;
      v96[16] = 0;
      v97 = 0;
      v98 = 0;
      v99 = 0;
      v104 = 0;
      v105[0] = 0;
      v105[1] = 1;
      v106 = a3;
      v107 = 5;
      v108 = 0;
      v109 = 0;
      v110 = 0;
      v111 = 0;
      v23 = sub_1A3D890(v22, v21);
      if ( v23 )
      {
        v24 = v23;
        do
        {
          v25 = v24;
          v26 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
          v27 = v26;
          v28 = (v25 >> 2) & 1;
          if ( (_DWORD)v28 )
          {
            v27 = nullptr;
            if ( v26 )
              v27 = (_QWORD *)*v26;
          }
          v29 = *((_BYTE *)v27 + 28) & 0x7F;
          if ( (unsigned int)v29 - 34 > 5 )
          {
            if ( v29 == 71
              && (!a7
               || (*(_BYTE *)(sub_168B6E0((__int64)v10) + 1) & 8) == 0
               || !(unsigned __int8)sub_1844E80(*v10, v27[6])) )
            {
              sub_1BF2330(
                *v10,
                (_DWORD)v27,
                (unsigned int)v27 | (*((_BYTE *)v27 + 29) >> 5) & 3,
                0,
                (_DWORD)a4,
                a5,
                (__int64)&v90,
                0,
                1,
                1,
                0,
                0,
                0);
            }
          }
          else if ( !a7
                 || (*(_BYTE *)(sub_168B6E0((__int64)v10) + 1) & 8) == 0
                 || !(unsigned __int8)sub_1844E80(*v10, v27) )
          {
            sub_1BF10B0(
              *v10,
              (_DWORD)v27,
              (unsigned int)v27 | (*((_BYTE *)v27 + 29) >> 5) & 3,
              (_DWORD)a4,
              a5,
              (unsigned int)&v90,
              0,
              1,
              1,
              0,
              0,
              0,
              0,
              0,
              0,
              0);
          }
          if ( !(_DWORD)v28 )
            break;
          if ( !v26 )
            break;
          v24 = v26[1];
        }
        while ( v24 );
      }
      sub_173E490(*v10, (__int64)&ptr, (__int64)&v90, a3, a5);
      sub_1BD27A0(&v90);
      v30 = (char *)v100;
      v31 = (char *)v100 + 8 * (unsigned int)v101;
      if ( v100 != v31 )
      {
        for ( i = v100; ; i = v100 )
        {
          v33 = 0x40000000000LL;
          v34 = (unsigned int)((v30 - i) >> 3) >> 7;
          if ( v34 <= 0x1D )
            v33 = 4096LL << v34;
          v35 = *(_QWORD *)v30;
          v30 += 8;
          operator delete(v35, v33, 16);
          if ( v31 == v30 )
            break;
        }
      }
      v36 = v103;
      v37 = &v103[2 * (unsigned int)v104];
      if ( v103 != v37 )
      {
        do
        {
          v38 = v36[1];
          v39 = *v36;
          v36 += 2;
          operator delete(v39, v38, 16);
        }
        while ( v37 != v36 );
        v37 = v103;
      }
      if ( v37 != v105 )
        free(v37);
      if ( v100 != v102 )
        free(v100);
      if ( !v95 )
        free(v92);
      v79 = v90.m128i_i64[0];
      v40 = (_QWORD *)(v90.m128i_i64[0] + 168LL * v90.m128i_u32[2]);
      if ( (_QWORD *)v90.m128i_i64[0] != v40 )
      {
        do
        {
          while ( 1 )
          {
            v40 -= 21;
            v41 = (_QWORD *)v40[8];
            v42 = (_QWORD *)v40[9];
            v43 = v41;
            if ( v42 != v41 )
            {
              do
              {
                while ( 1 )
                {
                  v44 = (char *)v43[3];
                  if ( v44 == (char *)(v43 + 5) )
                    break;
                  operator delete(v44);
                  v43 += 8;
                  if ( v42 == v43 )
                    goto LABEL_40;
                }
                v43 += 8;
              }
              while ( v42 != v43 );
LABEL_40:
              v41 = (_QWORD *)v40[8];
            }
            if ( !v41 )
              break;
            operator delete(v41);
            if ( (_QWORD *)v79 == v40 )
              goto LABEL_43;
          }
        }
        while ( (_QWORD *)v79 != v40 );
LABEL_43:
        v40 = (_QWORD *)v90.m128i_i64[0];
      }
      if ( v40 != (_QWORD *)v91 )
        free(v40);
      goto LABEL_46;
    }
  }
LABEL_3:
  v18 = ptr;
  if ( ptr != v89 )
LABEL_4:
    free(v18);
  return v7;
}
