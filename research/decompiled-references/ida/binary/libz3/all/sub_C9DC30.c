__int64 __fastcall sub_C9DC30(__int64 *a1)
{
  __int64 v1; // rdx
  char v2; // al
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rbx
  char v6; // al
  int v7; // edx
  _QWORD *v8; // rbp
  __int64 *v9; // rbp
  __int64 v10; // rax
  __int16 v11; // dx
  __int64 *v12; // r12
  unsigned int v13; // r15d
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // r13
  char v17; // al
  int v18; // edx
  _QWORD *v19; // r9
  __int16 v20; // ax
  __int64 v21; // rdx
  _DWORD *v22; // rdx
  void *v23; // rdi
  char *v24; // rcx
  bool v25; // si
  char *v26; // rax
  __int64 v27; // rdx
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // edi
  __int64 v32; // r15
  char v33; // dl
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 *v36; // rdx
  __int64 v37; // rdx
  int v38; // eax
  int v39; // edx
  _QWORD *v40; // rbp
  _DWORD *v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 *v44; // rdx
  __int64 v45; // rbp
  char *v46; // rax
  char *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // r10
  __int64 v50; // rbx
  char *v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rbx
  char *v55; // rax
  char *v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rbx
  char *v60; // rdi
  unsigned __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // edx
  __int64 *v65; // rax
  __int64 v66; // rax
  _DWORD *v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // r11
  int v70; // edx
  __int64 v71; // rdx
  _DWORD *v72; // rdx
  __int64 v73; // r14
  char *v74; // rax
  char *v75; // rdi
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  unsigned __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 *v81; // rax
  __int64 v82; // rdx
  _DWORD *v83; // rdx
  __int64 v84; // rbx
  char *v85; // rdi
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  unsigned __int64 v88; // rax
  __int64 v89; // rsi
  __int64 i; // [rsp+8h] [rbp-220h]
  __int64 v92; // [rsp+20h] [rbp-208h]
  _QWORD *v93; // [rsp+28h] [rbp-200h]
  char v94[24]; // [rsp+38h] [rbp-1F0h] BYREF
  void *v95; // [rsp+50h] [rbp-1D8h]
  __int64 v96; // [rsp+58h] [rbp-1D0h]
  _BYTE v97[128]; // [rsp+60h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+E0h] [rbp-148h]
  __int64 v99; // [rsp+E8h] [rbp-140h]
  __int64 v100; // [rsp+F0h] [rbp-138h] BYREF
  int v101; // [rsp+F8h] [rbp-130h]

  sub_16669D0(v94, *a1);
  v1 = a1[9];
  v95 = v97;
  v96 = 0x1000000000LL;
  if ( !v1 )
    return 0;
  v2 = *(_BYTE *)(v1 + 3) >> 6;
  if ( v2 )
  {
    if ( v2 != 1 )
    {
LABEL_4:
      if ( v2 == 2 )
        v3 = (unsigned int)(*(_DWORD *)(v1 + 4) - 1);
      else
        v3 = *(unsigned int *)(v1 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v1 = *(_QWORD *)(v1 + 16);
      v2 = *(_BYTE *)(v1 + 3) >> 6;
    }
    while ( !v2 );
    if ( v2 != 1 )
      goto LABEL_4;
  }
  v3 = (unsigned int)(*(_DWORD *)(v1 + 4) + 1);
LABEL_6:
  if ( !(_DWORD)v3 )
    return 0;
  v92 = v3;
  for ( i = 0; i != v92; ++i )
  {
    v4 = *a1;
    if ( (*((_BYTE *)a1 + 123) & 0x20) != 0 )
    {
      v5 = *(_QWORD *)(v4 + 864);
      goto LABEL_10;
    }
    v63 = a1[9];
    v64 = 17;
    while ( 1 )
    {
      if ( *(char *)(v63 + 3) < 0 )
      {
        if ( *(_BYTE *)(v63 + 3) >> 6 != 2 )
        {
          v65 = (__int64 *)(*(_QWORD *)(v63 + 16) + 8 * i);
          goto LABEL_113;
        }
        goto LABEL_115;
      }
      if ( *(_DWORD *)(v63 + 4) == (_DWORD)i )
        break;
LABEL_115:
      v63 = *(_QWORD *)(v63 + 16);
      if ( !--v64 )
      {
        sub_233F80((__int64 *)(v4 + 616), (_DWORD *)a1 + 18);
        v65 = (__int64 *)(*(_QWORD *)(a1[9] + 16) + 8 * i);
        goto LABEL_113;
      }
    }
    v65 = (__int64 *)(v63 + 8);
LABEL_113:
    v5 = *v65;
LABEL_10:
    if ( *(_DWORD *)(v5 + 8) <= 1u )
    {
LABEL_15:
      v100 = v5;
      ptr = &v100;
      v9 = &v100;
      v101 = 0;
      v99 = 0x1000000001LL;
      LODWORD(v10) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v11 = *(_WORD *)(v5 + 4);
          v12 = &v9[2 * (unsigned int)v10];
          if ( v11 == 1 )
            goto LABEL_37;
          if ( v11 != 2 )
          {
            if ( v11 )
            {
              sub_1872CE0("");
              sub_1873130(114, 100);
            }
            v13 = *(_DWORD *)(v5 + 24);
            v14 = *((_DWORD *)v12 + 2);
            if ( v14 < v13 )
            {
              while ( 1 )
              {
                v15 = v14++;
                v16 = *(_QWORD *)(v5 + 8 * v15 + 32);
                *((_DWORD *)v12 + 2) = v14;
                if ( *(_DWORD *)(v16 + 8) <= 1u )
                  goto LABEL_25;
                v17 = *(_BYTE *)(v16 + 6);
                if ( (v17 & 1) == 0 )
                  break;
LABEL_30:
                if ( v14 >= v13 )
                {
                  LODWORD(v10) = v99 - 1;
                  goto LABEL_32;
                }
              }
              *(_BYTE *)(v16 + 6) = v17 | 1;
              v18 = v96;
              if ( (unsigned int)v96 >= HIDWORD(v96) )
              {
                v45 = (unsigned int)(2 * HIDWORD(v96));
                v46 = (char *)sub_186B270(8 * v45);
                v18 = v96;
                v47 = (char *)v95;
                v19 = v46;
                if ( (_DWORD)v96 )
                {
                  if ( (unsigned int)(v96 - 1) <= 2 || v46 == (char *)v95 + 8 )
                  {
                    v68 = 0;
                    v69 = 8LL * (unsigned int)v96;
                    do
                    {
                      v19[v68 / 8] = *(_QWORD *)&v47[v68];
                      v68 += 8LL;
                    }
                    while ( v69 != v68 );
                  }
                  else
                  {
                    v48 = 0;
                    v49 = 16LL * ((unsigned int)v96 >> 1);
                    do
                    {
                      *(__m128i *)&v19[v48 / 8] = _mm_loadu_si128((const __m128i *)&v47[v48]);
                      v48 += 16LL;
                    }
                    while ( v49 != v48 );
                    if ( (v18 & 1) != 0 )
                      v19[v18 & 0xFFFFFFFE] = *(_QWORD *)&v47[8 * (v18 & 0xFFFFFFFE)];
                  }
                }
                if ( v47 != v97 && v47 )
                {
                  v93 = v19;
                  sub_186B220(v47);
                  v18 = v96;
                  v19 = v93;
                }
                v95 = v19;
                HIDWORD(v96) = v45;
              }
              else
              {
                v19 = v95;
              }
              v19[v18] = v16;
              LODWORD(v96) = v18 + 1;
LABEL_25:
              v20 = *(_WORD *)(v16 + 4);
              if ( v20 != 1 )
              {
                if ( v20 == 2 )
                {
                  v43 = (unsigned int)v99;
                  if ( (unsigned int)v99 >= HIDWORD(v99) )
                  {
                    v59 = (unsigned int)(2 * HIDWORD(v99));
                    v9 = (__int64 *)sub_186B270(16 * v59);
                    v60 = (char *)ptr;
                    v61 = 0;
                    v43 = (unsigned int)v99;
                    v62 = 16LL * (unsigned int)v99;
                    if ( (_DWORD)v99 )
                    {
                      do
                      {
                        *(__m128i *)&v9[v61 / 8] = _mm_loadu_si128((const __m128i *)&v60[v61]);
                        v61 += 16LL;
                      }
                      while ( v62 != v61 );
                    }
                    if ( v60 != (char *)&v100 && v60 )
                    {
                      sub_186B220(v60);
                      v43 = (unsigned int)v99;
                    }
                    ptr = v9;
                    HIDWORD(v99) = v59;
                  }
                  else
                  {
                    v9 = (__int64 *)ptr;
                  }
                  v44 = &v9[2 * v43];
                  *v44 = v16;
                  *((_DWORD *)v44 + 2) = 0;
                  v37 = (unsigned int)v99;
                  v38 = v99 + 1;
                  goto LABEL_61;
                }
                if ( v20 )
                {
                  sub_1872CE0("");
                  sub_1873130(114, 73);
                }
                if ( *(_DWORD *)(v16 + 24) )
                {
                  v80 = (unsigned int)v99;
                  if ( (unsigned int)v99 >= HIDWORD(v99) )
                  {
                    v84 = (unsigned int)(2 * HIDWORD(v99));
                    v9 = (__int64 *)sub_186B270(16 * v84);
                    v85 = (char *)ptr;
                    v86 = 0;
                    v80 = (unsigned int)v99;
                    v87 = 16LL * (unsigned int)v99;
                    if ( (_DWORD)v99 )
                    {
                      do
                      {
                        *(__m128i *)&v9[v86 / 8] = _mm_loadu_si128((const __m128i *)&v85[v86]);
                        v86 += 16LL;
                      }
                      while ( v87 != v86 );
                    }
                    if ( v85 != (char *)&v100 && v85 )
                    {
                      sub_186B220(v85);
                      v80 = (unsigned int)v99;
                    }
                    ptr = v9;
                    HIDWORD(v99) = v84;
                  }
                  else
                  {
                    v9 = (__int64 *)ptr;
                  }
                  v81 = &v9[2 * v80];
                  *((_DWORD *)v81 + 2) = 0;
                  v37 = (unsigned int)v99;
                  *v81 = v16;
                  v38 = v37 + 1;
                  goto LABEL_61;
                }
                v41 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
                if ( v41 )
                {
                  if ( *v41 == 5 )
                  {
                    v42 = v41[1];
                    if ( v42 <= 11 )
                    {
                      if ( v42 <= 9 )
                      {
                        if ( v42 == 9 )
                          JUMPOUT(0x16265A);
                        goto LABEL_29;
                      }
LABEL_119:
                      v66 = *(_QWORD *)(v16 + 40);
                      if ( *(_WORD *)(v66 + 4)
                        || (v67 = *(_DWORD **)(*(_QWORD *)(v66 + 16) + 24LL)) == nullptr
                        || *v67 != 5
                        || v67[1] )
                      {
                        sub_161E20();
                      }
                      goto LABEL_29;
                    }
                    if ( v42 > 16 )
                    {
                      if ( v42 == 22 )
                        sub_161E20();
                      goto LABEL_29;
                    }
                    if ( v42 > 14 )
                      goto LABEL_119;
                  }
                }
              }
LABEL_29:
              v14 = *((_DWORD *)v12 + 2);
              goto LABEL_30;
            }
LABEL_32:
            v21 = *(_QWORD *)(v5 + 16);
            LODWORD(v99) = v10;
            v22 = *(_DWORD **)(v21 + 24);
            if ( !v22 || *v22 != 5 )
              goto LABEL_34;
            v70 = v22[1];
            if ( v70 > 11 )
            {
              if ( v70 <= 16 )
              {
                if ( v70 <= 14 )
                  goto LABEL_34;
                goto LABEL_160;
              }
              if ( v70 == 22 )
                JUMPOUT(0x162655);
            }
            else
            {
              if ( v70 <= 9 )
              {
                if ( v70 == 9 )
                {
                  if ( *(_DWORD *)(v5 + 24) != 2
                    || (v71 = *(_QWORD *)(v5 + 32), *(_WORD *)(v71 + 4))
                    || (v72 = *(_DWORD **)(*(_QWORD *)(v71 + 16) + 24LL)) == nullptr
                    || *v72 != 5
                    || v72[1] )
                  {
                    sub_161E20();
                  }
                }
                goto LABEL_34;
              }
LABEL_160:
              v82 = *(_QWORD *)(v5 + 40);
              if ( *(_WORD *)(v82 + 4)
                || (v83 = *(_DWORD **)(*(_QWORD *)(v82 + 16) + 24LL)) == nullptr
                || *v83 != 5
                || v83[1] )
              {
                sub_161E20();
              }
            }
LABEL_34:
            v9 = (__int64 *)ptr;
            if ( !(_DWORD)v10 )
              goto LABEL_38;
            goto LABEL_35;
          }
          v29 = *(_DWORD *)(v5 + 72);
          v30 = *((_DWORD *)v12 + 2);
          v31 = v29 + *(_DWORD *)(v5 + 76) + 1;
          if ( v30 < v31 )
            break;
LABEL_36:
          LODWORD(v10) = v99 - 1;
LABEL_37:
          LODWORD(v99) = v10;
          if ( !(_DWORD)v10 )
          {
LABEL_38:
            if ( v9 && v9 != &v100 )
              sub_186B220(v9);
            goto LABEL_41;
          }
LABEL_35:
          v10 = (unsigned int)(v10 - 1);
          v5 = v9[2 * v10];
        }
        if ( v30 )
          break;
        v32 = *(_QWORD *)(v5 + 24);
        v30 = 1;
        *((_DWORD *)v12 + 2) = 1;
        if ( *(_DWORD *)(v32 + 8) > 1u )
          goto LABEL_52;
LABEL_58:
        v35 = (unsigned int)v99;
        if ( (unsigned int)v99 >= HIDWORD(v99) )
        {
          v50 = (unsigned int)(2 * HIDWORD(v99));
          v9 = (__int64 *)sub_186B270(16 * v50);
          v51 = (char *)ptr;
          v52 = 0;
          v35 = (unsigned int)v99;
          v53 = 16LL * (unsigned int)v99;
          if ( (_DWORD)v99 )
          {
            do
            {
              *(__m128i *)&v9[v52 / 8] = _mm_loadu_si128((const __m128i *)&v51[v52]);
              v52 += 16LL;
            }
            while ( v53 != v52 );
          }
          if ( v51 != (char *)&v100 && v51 )
          {
            sub_186B220(v51);
            v35 = (unsigned int)v99;
          }
          ptr = v9;
          HIDWORD(v99) = v50;
        }
        else
        {
          v9 = (__int64 *)ptr;
        }
        v36 = &v9[2 * v35];
        *v36 = v32;
        *((_DWORD *)v36 + 2) = 0;
        v37 = (unsigned int)v99;
        v38 = v99 + 1;
LABEL_61:
        LODWORD(v99) = v38;
        LODWORD(v10) = v38 - 1;
        v5 = v9[2 * v37];
      }
      while ( 2 )
      {
        v34 = v30 - 1;
        if ( v29 < v30 )
          v34 = (unsigned int)v34 - v29;
        ++v30;
        v32 = *(_QWORD *)(16LL * *(unsigned int *)(v5 + 20) + v5 + 8 * v34 + 80);
        *((_DWORD *)v12 + 2) = v30;
        if ( *(_DWORD *)(v32 + 8) <= 1u )
          goto LABEL_58;
LABEL_52:
        v33 = *(_BYTE *)(v32 + 6);
        if ( (v33 & 1) == 0 )
        {
          *(_BYTE *)(v32 + 6) = v33 | 1;
          v39 = v96;
          if ( (unsigned int)v96 >= HIDWORD(v96) )
          {
            v54 = (unsigned int)(2 * HIDWORD(v96));
            v55 = (char *)sub_186B270(8 * v54);
            v39 = v96;
            v56 = (char *)v95;
            v40 = v55;
            if ( (_DWORD)v96 )
            {
              if ( (unsigned int)(v96 - 1) <= 2 || v55 == (char *)v95 + 8 )
              {
                v78 = 0;
                v79 = 8LL * (unsigned int)v96;
                do
                {
                  v40[v78 / 8] = *(_QWORD *)&v56[v78];
                  v78 += 8LL;
                }
                while ( v79 != v78 );
              }
              else
              {
                v57 = 0;
                v58 = 16LL * ((unsigned int)v96 >> 1);
                do
                {
                  *(__m128i *)&v40[v57 / 8] = _mm_loadu_si128((const __m128i *)&v56[v57]);
                  v57 += 16LL;
                }
                while ( v58 != v57 );
                if ( (v39 & 1) != 0 )
                  v40[v39 & 0xFFFFFFFE] = *(_QWORD *)&v56[8 * (v39 & 0xFFFFFFFE)];
              }
            }
            if ( v56 && v56 != v97 )
            {
              sub_186B220(v56);
              v39 = v96;
            }
            v95 = v40;
            HIDWORD(v96) = v54;
          }
          else
          {
            v40 = v95;
          }
          v40[v39] = v32;
          LODWORD(v96) = v39 + 1;
          goto LABEL_58;
        }
        if ( v30 < v31 )
        {
          v29 = *(_DWORD *)(v5 + 72);
          continue;
        }
        goto LABEL_36;
      }
    }
    v6 = *(_BYTE *)(v5 + 6);
    if ( (v6 & 1) == 0 )
    {
      *(_BYTE *)(v5 + 6) = v6 | 1;
      v7 = v96;
      if ( (unsigned int)v96 >= HIDWORD(v96) )
      {
        v73 = (unsigned int)(2 * HIDWORD(v96));
        v74 = (char *)sub_186B270(8 * v73);
        v7 = v96;
        v75 = (char *)v95;
        v8 = v74;
        if ( (_DWORD)v96 )
        {
          if ( (unsigned int)(v96 - 1) <= 2 || v74 == (char *)v95 + 8 )
          {
            v88 = 0;
            v89 = 8LL * (unsigned int)v96;
            do
            {
              v8[v88 / 8] = *(_QWORD *)&v75[v88];
              v88 += 8LL;
            }
            while ( v88 != v89 );
          }
          else
          {
            v76 = 0;
            v77 = 16LL * ((unsigned int)v96 >> 1);
            do
            {
              *(__m128i *)&v8[v76 / 8] = _mm_loadu_si128((const __m128i *)&v75[v76]);
              v76 += 16LL;
            }
            while ( v77 != v76 );
            if ( (v7 & 1) != 0 )
              v8[v7 & 0xFFFFFFFE] = *(_QWORD *)&v75[8 * (v7 & 0xFFFFFFFE)];
          }
        }
        if ( v75 != v97 && v75 )
        {
          sub_186B220(v75);
          v7 = v96;
        }
        v95 = v8;
        HIDWORD(v96) = v73;
      }
      else
      {
        v8 = v95;
      }
      v8[v7] = v5;
      LODWORD(v96) = v7 + 1;
      goto LABEL_15;
    }
LABEL_41:
    ;
  }
  v23 = v95;
  v24 = (char *)v95 + 8 * (unsigned int)v96;
  v25 = v95 == v97 || v95 == nullptr;
  if ( v95 != v24 )
  {
    v26 = (char *)v95;
    do
    {
      v27 = *(_QWORD *)v26;
      v26 += 8;
      *(_BYTE *)(v27 + 6) &= ~1u;
    }
    while ( v24 != v26 );
  }
  LODWORD(v96) = 0;
  if ( !v25 )
    sub_186B220(v23);
  return 0;
}

