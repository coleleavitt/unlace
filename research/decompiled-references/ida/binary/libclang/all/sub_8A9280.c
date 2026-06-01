__int64 __fastcall sub_8A9280(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned int v10; // r12d
  __int16 v11; // ax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned int v14; // ebp
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 v19; // rbp
  int *v20; // rbx
  __int64 v21; // r12
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r12
  __int64 *v32; // rbx
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 *v35; // rbp
  __int64 v36; // r13
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r15
  _QWORD *v46; // rax
  int *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rsi
  char *v50; // rcx
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // r14
  __int64 v54; // r12
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 *v58; // rbx
  __int64 v59; // rbp
  __int64 *v60; // rbx
  __int64 v61; // rsi
  unsigned __int64 v62; // rdx
  __int64 v63; // rbp
  __int64 v64; // r12
  __int64 v65; // r13
  unsigned int v66; // eax
  _QWORD *v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 *v71; // r14
  __int64 v72; // r12
  __int64 v73; // r15
  int *v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // r15
  __int32 v77; // eax
  __int64 v78; // rdx
  __int64 v79; // r13
  unsigned int v80; // eax
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdi
  unsigned __int8 **v85; // rax
  unsigned __int8 **v86; // rbp
  __int64 v87; // rbp
  __int64 v88; // rbx
  __int64 v89; // rdi
  __int64 *v90; // rbp
  __int64 v91; // r14
  __m128i v92; // xmm1
  __m128i v93; // [rsp+0h] [rbp-208h] BYREF
  __m128i *v94; // [rsp+10h] [rbp-1F8h]
  __int64 v95; // [rsp+18h] [rbp-1F0h]
  __int64 *v96; // [rsp+20h] [rbp-1E8h]
  unsigned __int8 v97; // [rsp+2Eh] [rbp-1DAh]
  unsigned __int8 v98; // [rsp+2Fh] [rbp-1D9h]
  __int64 v99; // [rsp+30h] [rbp-1D8h]
  __int64 v100; // [rsp+38h] [rbp-1D0h]
  __int64 v101[4]; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int v102; // [rsp+60h] [rbp-1A8h] BYREF
  char v103; // [rsp+64h] [rbp-1A4h]
  __int64 v104; // [rsp+68h] [rbp-1A0h]
  __m128i v105; // [rsp+A0h] [rbp-168h] BYREF
  unsigned int v106; // [rsp+B0h] [rbp-158h]
  __int64 *v107; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v108; // [rsp+E8h] [rbp-120h]
  __int64 v109; // [rsp+F0h] [rbp-118h] BYREF
  char v110; // [rsp+F8h] [rbp-110h]
  __int64 v111; // [rsp+108h] [rbp-100h]
  void *ptr; // [rsp+110h] [rbp-F8h]
  __int64 v113; // [rsp+118h] [rbp-F0h]
  char v114; // [rsp+120h] [rbp-E8h] BYREF
  char v115[56]; // [rsp+128h] [rbp-E0h] BYREF
  _BYTE v116[56]; // [rsp+160h] [rbp-A8h] BYREF
  char v117[112]; // [rsp+198h] [rbp-70h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 56 > 1 )
    v8 = sub_B0D320(v8);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_DWORD *)(v8 + 20);
  v11 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x1A )
  {
    v33 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v103 &= ~1u;
    v102 = 0;
    v34 = *(_QWORD *)v33;
    v35 = (__int64 *)v33;
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v37 = *(_BYTE *)(v36 + 16);
    switch ( v37 )
    {
      case 13:
        if ( (((*(_WORD *)(v36 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
          break;
LABEL_104:
        v78 = *a1;
        v105.m128i_i32[2] = 1;
        v105.m128i_i8[12] = 0;
        v105.m128i_i64[0] = 0;
        v94 = &v105;
        if ( (unsigned __int8)sub_87D880(v9, (__int64)&v105, v78, v9, a5, a6) )
        {
          BYTE4(v107) &= ~1u;
          LODWORD(v109) = v105.m128i_i32[2];
          v108 = v105.m128i_i64[0];
          v105.m128i_i32[2] = 0;
          BYTE4(v109) = v105.m128i_i8[12];
          v95 = (__int64)&v102;
          LODWORD(v107) = 2;
          sub_6A01B0((__int64)&v102, (__int64)&v107);
          if ( (unsigned int)v107 > 1 )
            sub_69F740((__int64)&v107);
          if ( v105.m128i_i32[2] > 0x40u && v105.m128i_i64[0] )
            operator delete[]((void *)v105.m128i_i64[0]);
LABEL_50:
          v93.m128i_i64[1] = (__int64)&v109;
          v107 = &v109;
          v108 = 0x400000000LL;
          if ( v10 > 4 )
          {
            v87 = v10;
            v93.m128i_i64[0] = (__int64)a1;
            v45 = sub_25D5F70(&v107, v93.m128i_i64[1], v10, 56, v94);
            v88 = v45;
            do
            {
              v89 = v88;
              v88 += 56;
              sub_6A4260(v89, (int *)v95);
              --v87;
            }
            while ( v87 );
            a1 = (__int64 *)v93.m128i_i64[0];
            v90 = &v107[7 * (unsigned int)v108];
            if ( v107 != v90 )
            {
              v91 = (__int64)v107;
              do
              {
                v90 -= 7;
                if ( *(_DWORD *)v90 > 1u )
                  sub_69F740((__int64)v90);
              }
              while ( (__int64 *)v91 != v90 );
              v90 = v107;
            }
            v92 = _mm_loadl_epi64(&v105);
            if ( v90 != (__int64 *)v93.m128i_i64[1] )
            {
              v93.m128i_i64[0] = v92.m128i_i64[0];
              free(v90);
              v92 = _mm_loadl_epi64(&v93);
            }
            v105.m128i_i8[4] &= ~1u;
            v107 = (__int64 *)v45;
            v105.m128i_i64[1] = 0;
            v95 = 56LL * v10;
            v93.m128i_i64[0] = v95 + 8;
            v106 = 0;
            v105.m128i_i32[0] = 8;
            v108 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), v92).m128i_u64[0];
            v46 = (_QWORD *)operator new[](v95 + 8);
            v47 = (int *)v93.m128i_i64[0];
            v48 = v95;
            *v46 = v10;
            v49 = (__int64)(v46 + 1);
          }
          else
          {
            v45 = v93.m128i_i64[1];
            if ( v10 )
            {
              sub_6A4260(v93.m128i_i64[1], (int *)v95);
              if ( v10 != 1 )
              {
                sub_6A4260((__int64)v115, (int *)v95);
                if ( v10 != 2 )
                {
                  sub_6A4260((__int64)v116, (int *)v95);
                  if ( v10 != 3 )
                    sub_6A4260((__int64)v117, (int *)v95);
                }
              }
              v45 = (__int64)v107;
            }
            v105.m128i_i8[4] &= ~1u;
            LODWORD(v108) = v10;
            v105.m128i_i64[1] = 0;
            v95 = 56LL * v10;
            v93.m128i_i64[0] = v95 + 8;
            v106 = 0;
            v105.m128i_i32[0] = 8;
            v46 = (_QWORD *)operator new[](v95 + 8);
            v47 = (int *)(v95 + 8);
            v48 = v95;
            *v46 = v10;
            v49 = (__int64)(v46 + 1);
            if ( !v10 )
            {
              v105.m128i_i64[1] = (__int64)(v46 + 1);
              v106 = 0;
LABEL_62:
              v57 = a1[1];
              v58 = (__int64 *)v94;
              sub_6A01B0(v57, (__int64)v94);
              if ( v105.m128i_i32[0] > 1u )
                sub_69F740((__int64)v58);
              v59 = (__int64)v107;
              v60 = &v107[7 * (unsigned int)v108];
              if ( v107 != v60 )
              {
                do
                {
                  v60 -= 7;
                  if ( *(_DWORD *)v60 > 1u )
                    sub_69F740((__int64)v60);
                }
                while ( (__int64 *)v59 != v60 );
                v60 = v107;
              }
              if ( v60 != (__int64 *)v93.m128i_i64[1] )
                free(v60);
              v14 = 1;
              goto LABEL_107;
            }
          }
          v50 = (char *)v47 + (_QWORD)v46;
          v51 = v49;
          v52 = v49;
          do
          {
            *(_BYTE *)(v52 + 4) &= ~1u;
            v52 += 56;
            *(_DWORD *)(v52 - 56) = 0;
          }
          while ( (char *)v52 != v50 );
          v105.m128i_i64[1] = v49;
          v53 = v45;
          v106 = v10;
          v54 = v45 + v48;
          do
          {
            v55 = v53;
            v56 = v51;
            v53 += 56;
            v51 += 56;
            sub_6A63E0(v56, v55);
          }
          while ( v54 != v53 );
          goto LABEL_62;
        }
        if ( v105.m128i_i32[2] > 0x40u && v105.m128i_i64[0] )
          operator delete[]((void *)v105.m128i_i64[0]);
LABEL_106:
        v14 = 0;
LABEL_107:
        if ( v102 > 1 )
          sub_69F740((__int64)&v102);
        return v14;
      case 46:
        v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v33 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v93.m128i_i64[0] = v9;
        v69 = sub_B14A40(v68);
        v9 = v93.m128i_i64[0];
        if ( (*(_BYTE *)(v69 + 74) & 1) != 0 || *(_QWORD *)(v69 + 128) > 7u )
        {
          v70 = sub_B14A40(v36);
          v9 = v93.m128i_i64[0];
          if ( *(char *)(v70 + 76) >= 0 )
            goto LABEL_104;
        }
        v34 = *v35;
        break;
      case 10:
        goto LABEL_104;
    }
    v93.m128i_i64[0] = v9;
    if ( (unsigned __int8)sub_B080B0(v34) )
    {
      v39 = sub_2575D00(v34, a2, v38);
      sub_2580BE0(&v107, 0.0);
      sub_257EDC0(v101, &v107, v39);
      sub_25769A0(&v107);
      v40 = *a1;
      v108 = (__int64)v101;
      v107 = (__int64 *)v40;
      if ( (unsigned __int8)sub_883160((__int64 *)&v107, v93.m128i_i64[0]) )
      {
        v42 = sub_2575D20(&v107, v93.m128i_i64[0], v41);
        v94 = &v105;
        if ( v101[0] == v42 )
          sub_257D000(&v105, v101, v43, v44);
        else
          sub_2576960(&v105, v101);
        sub_835390((__int64)&v107, v94->m128i_i64);
        v95 = (__int64)&v102;
        sub_6A01B0((__int64)&v102, (__int64)&v107);
        if ( (unsigned int)v107 > 1 )
          sub_69F740((__int64)&v107);
        sub_5FF3B0(v94->m128i_i64);
        sub_5FF3B0(v101);
        goto LABEL_50;
      }
      sub_5FF3B0(v101);
    }
    else
    {
      sub_8272B0(*a1, a2, 110);
    }
    goto LABEL_106;
  }
  switch ( (_BYTE)v11 )
  {
    case 0x41:
      v16 = *(_QWORD *)(a2 + 16);
      v103 &= ~1u;
      v93.m128i_i64[1] = (__int64)&v109;
      v107 = &v109;
      v102 = 0;
      v108 = 0x400000000LL;
      v105.m128i_i64[0] = *a1;
      v95 = (__int64)&v102;
      v105.m128i_i64[1] = (__int64)&v102;
      v94 = &v105;
      v14 = sub_8A87B0(v105.m128i_i64, v16);
      if ( (_BYTE)v14 )
      {
        v17 = (unsigned int)v108;
        if ( v10 )
        {
          v97 = v14;
          v18 = 0;
          v96 = a1;
          v93.m128i_i64[0] = 56LL * v10;
          do
          {
            v19 = (__int64)v107;
            v20 = (int *)(v18 + v104);
            if ( HIDWORD(v108) < (unsigned __int64)(v17 + 1) )
            {
              if ( v20 >= (int *)v107 && v20 < (int *)&v107[7 * v17] )
              {
                v98 = v97;
                v99 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v20 - (char *)v107) >> 3);
              }
              else
              {
                v99 = -1;
                v98 = 0;
              }
              v19 = sub_25D5F70(&v107, v93.m128i_i64[1], v17 + 1, 56, v94);
              v71 = &v107[7 * (unsigned int)v108];
              if ( v107 != v71 )
              {
                v72 = (__int64)v107;
                v73 = v19;
                do
                {
                  v74 = (int *)v72;
                  v75 = v73;
                  v72 += 56;
                  v73 += 56;
                  sub_69F700(v75, v74);
                }
                while ( v71 != (__int64 *)v72 );
                v76 = (__int64)v107;
                v71 = &v107[7 * (unsigned int)v108];
                if ( v107 != v71 )
                {
                  do
                  {
                    v71 -= 7;
                    if ( *(_DWORD *)v71 > 1u )
                      sub_69F740((__int64)v71);
                  }
                  while ( (__int64 *)v76 != v71 );
                  v71 = v107;
                }
              }
              v77 = v105.m128i_i32[0];
              if ( v71 != (__int64 *)v93.m128i_i64[1] )
              {
                v100 = v105.m128i_i64[0];
                free(v71);
                v77 = v100;
              }
              v107 = (__int64 *)v19;
              HIDWORD(v108) = v77;
              v17 = (unsigned int)v108;
              if ( v98 )
                v20 = (int *)(v19 + 56 * v99);
            }
            v18 += 56;
            sub_6A4260(v19 + 56 * v17, v20);
            v17 = (unsigned int)(v108 + 1);
            LODWORD(v108) = v108 + 1;
          }
          while ( v93.m128i_i64[0] != v18 );
          v14 = v97;
          a1 = v96;
        }
        v105.m128i_i8[4] &= ~1u;
        v21 = (__int64)v107;
        v105.m128i_i64[1] = 0;
        v106 = 0;
        v105.m128i_i32[0] = 8;
        v93.m128i_i64[0] = 56LL * (unsigned int)v17;
        v22 = (_QWORD *)operator new[](v93.m128i_i64[0] + 8);
        *v22 = (unsigned int)v17;
        v23 = (__int64)(v22 + 1);
        if ( (_DWORD)v17 )
        {
          v24 = v93.m128i_i64[0];
          v25 = v23;
          v26 = v23;
          v27 = v23 + v93.m128i_i64[0];
          do
          {
            *(_BYTE *)(v26 + 4) &= ~1u;
            v26 += 56;
            *(_DWORD *)(v26 - 56) = 0;
          }
          while ( v27 != v26 );
          v105.m128i_i64[1] = v23;
          v106 = v17;
          v28 = v21 + v24;
          do
          {
            v29 = v21;
            v30 = v25;
            v21 += 56;
            v25 += 56;
            sub_6A63E0(v30, v29);
          }
          while ( v28 != v21 );
        }
        else
        {
          v105.m128i_i64[1] = v23;
          v106 = 0;
        }
        sub_6A01B0(a1[1], (__int64)v94);
        if ( v105.m128i_i32[0] > 1u )
          sub_69F740((__int64)v94);
      }
      else
      {
        sub_8272B0(*a1, a2, 110);
      }
      v31 = (__int64)v107;
      v32 = &v107[7 * (unsigned int)v108];
      if ( v107 != v32 )
      {
        do
        {
          v32 -= 7;
          if ( *(_DWORD *)v32 > 1u )
            sub_69F740((__int64)v32);
        }
        while ( (__int64 *)v31 != v32 );
        v32 = v107;
      }
      if ( v32 != (__int64 *)v93.m128i_i64[1] )
        free(v32);
      if ( v102 > 1 )
        sub_69F740(v95);
      return v14;
    case 1:
      v61 = *a1;
      v62 = *(_QWORD *)(a2 + 16);
      BYTE4(v107) &= ~1u;
      LODWORD(v107) = 0;
      if ( (unsigned __int8)sub_856400((__int64)&v107, v61, v62) )
      {
        v63 = *a1;
        if ( (unsigned int)((_DWORD)v107 - 2) <= 1 || (_DWORD)v107 == 8 )
        {
          v64 = a1[1];
          v65 = *(_QWORD *)(a2 + 8);
          v66 = sub_AC6DA0(a2);
          v67 = *(_QWORD **)(v63 + 16);
          if ( (unsigned __int8)sub_83BCC0(v66, v65, v63, v67, 1u) )
          {
            v79 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
            v80 = sub_AC6DA0(a2);
            if ( (unsigned __int8)sub_83BCC0(v80, v79, v63, v67, 0) )
            {
              v14 = sub_8435C0(v63, v64, (__int64)&v107, a2);
              goto LABEL_77;
            }
          }
        }
        else
        {
          v85 = (unsigned __int8 **)sub_A2E130(*a1, a2, 2215, 0);
          v86 = v85;
          if ( v85 )
          {
            sub_823450(v85, 2);
            sub_8356A0(v86, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2160LL) + 1LL) & 8) != 0, 3u);
          }
        }
      }
      v14 = 0;
      goto LABEL_77;
    case 0x13:
      return sub_8A87B0(a1, *(_QWORD *)(a2 + 16));
  }
  if ( (unsigned __int8)v11 > 0x13u )
  {
    if ( (_BYTE)v11 != 58 && (_BYTE)v11 != 63 )
      goto LABEL_123;
    BYTE4(v107) &= ~1u;
    LODWORD(v107) = 0;
    v14 = sub_856400((__int64)&v107, *a1, v9);
    if ( (_BYTE)v14 )
      sub_6A63E0(a1[1], (__int64)&v107);
LABEL_77:
    if ( (unsigned int)v107 > 1 )
      sub_69F740((__int64)&v107);
    return v14;
  }
  if ( (_BYTE)v11 == 4 )
  {
    v81 = *(_QWORD *)(a2 + 16);
    v110 |= 1u;
    v113 = 0x800000000LL;
    v82 = *a1;
    v107 = nullptr;
    v108 = 0;
    v109 = 0;
    v111 = 0;
    ptr = &v114;
    v116[1] = 0;
    v105.m128i_i64[0] = v82;
    v105.m128i_i64[1] = (__int64)&v107;
    LOBYTE(v106) = 0;
    v94 = &v105;
    v14 = sub_869D30(&v105, v81);
    if ( (_BYTE)v14 )
    {
      v83 = *(_QWORD *)(a2 + 16);
      v84 = *a1;
      v105.m128i_i8[4] &= ~1u;
      v105.m128i_i32[0] = 0;
      v14 = sub_85F440(v84, (_DWORD *)a2, *(_QWORD *)(v83 + 8), (__int64)&v107, (__int64)&v105, 0);
      if ( (_BYTE)v14 )
        sub_6A63E0(a1[1], (__int64)&v105);
      if ( v105.m128i_i32[0] > 1u )
        sub_69F740((__int64)v94);
    }
    if ( ptr != &v114 )
      free(ptr);
    return v14;
  }
  if ( (_BYTE)v11 != 5 )
  {
    if ( (_BYTE)v11 == 3 )
    {
      v12 = *a1;
      v13 = *(_QWORD *)(a2 + 16);
      v105.m128i_i8[4] &= ~1u;
      BYTE4(v107) &= ~1u;
      v105.m128i_i32[0] = 0;
      LODWORD(v107) = 0;
      if ( (unsigned __int8)sub_856400((__int64)&v107, v12, v13)
        && (v14 = sub_867E00(*a1, (__int64)&v105, (__int64)&v107, a2), (_BYTE)v14) )
      {
        sub_6A63E0(a1[1], (__int64)&v105);
      }
      else
      {
        v14 = 0;
      }
      if ( (unsigned int)v107 > 1 )
        sub_69F740((__int64)&v107);
      if ( v105.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v105);
      return v14;
    }
LABEL_123:
    v14 = 0;
    sub_8272B0(*a1, a2, 110);
    return v14;
  }
  return sub_8A87B0(a1, *(_QWORD *)(a2 + 16));
}

