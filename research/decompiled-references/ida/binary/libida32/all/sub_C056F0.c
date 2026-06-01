__int64 __fastcall sub_C056F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v6; // rax
  char v7; // r10
  unsigned int v8; // r14d
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rbx
  unsigned int v24; // r14d
  __int64 v25; // rbx
  unsigned int v26; // eax
  unsigned __int8 **v27; // rax
  __int64 v28; // r15
  __int64 v29; // rsi
  char v30; // r14
  __int64 v31; // rbp
  __int64 v32; // rsi
  unsigned int v33; // r13d
  __int64 v34; // rax
  char v35; // r15
  __int64 v36; // rax
  unsigned int j; // r15d
  __int64 v38; // rdx
  char *v39; // rdi
  _BYTE *v40; // rsi
  char *v41; // rax
  char *v42; // rdi
  char *v43; // rdx
  char v44; // cl
  char v45; // si
  char *v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // r10
  unsigned __int64 v49; // rdx
  __m128i v50; // xmm1
  __int64 v51; // rax
  __m128i v52; // xmm2
  unsigned __int64 v53; // rdx
  char *v54; // rax
  char *v55; // r8
  _BYTE *v56; // r8
  _BYTE *v57; // r8
  _BYTE *v58; // r8
  _BYTE *v59; // r8
  _BYTE *v60; // r8
  _BYTE *v61; // r8
  _BYTE *v62; // r8
  _BYTE *v63; // r8
  _BYTE *v64; // r8
  _BYTE *v65; // r8
  _BYTE *v66; // r8
  _BYTE *v67; // r8
  unsigned __int64 v68; // r8
  unsigned __int64 v69; // rdx
  _BYTE *v70; // r8
  char v71; // cl
  char *v72; // rax
  __int64 v73; // r15
  __int64 v74; // rbp
  __int64 v75; // r13
  __int64 v76; // rcx
  unsigned int i; // r15d
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rax
  char v81; // cl
  __int64 v82; // [rsp+0h] [rbp-88h]
  __int64 v83; // [rsp+0h] [rbp-88h]
  __int64 v84; // [rsp+8h] [rbp-80h]
  __int64 v85; // [rsp+8h] [rbp-80h]
  __int64 v86; // [rsp+8h] [rbp-80h]
  __int64 v87; // [rsp+8h] [rbp-80h]
  __int64 v88; // [rsp+8h] [rbp-80h]
  unsigned int v89; // [rsp+10h] [rbp-78h]
  __int64 v90; // [rsp+10h] [rbp-78h]
  int v91; // [rsp+1Ch] [rbp-6Ch]
  unsigned int v92; // [rsp+1Ch] [rbp-6Ch]
  void *v93; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v94; // [rsp+28h] [rbp-60h]
  char v95; // [rsp+2Ch] [rbp-5Ch]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i si128; // [rsp+38h] [rbp-50h]
  _BYTE v98[64]; // [rsp+48h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 != 13 || (v8 = 1, ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) != 0x1E8) )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 0:
      case 1:
        return 1;
      case 2:
        return (unsigned int)sub_BF0BD0((__int64)a1, a2 + 8, a3, a4);
      case 3:
        v13 = a2 + 8;
        if ( *(_QWORD *)(a2 + 8) == sub_21D5390() )
          sub_21DD3B0(&ptr, v13);
        else
          sub_21DB0C0(&ptr, v13);
        v95 = 1;
        v14 = a4;
        v15 = a3;
        v94 = si128.m128i_i32[0];
        v93 = ptr;
        goto LABEL_7;
      case 4:
      case 7:
      case 0xB:
      case 0xC:
      case 0xD:
        v25 = *a1;
        v26 = sub_EC7AA0(a1[13]);
        v27 = (unsigned __int8 **)sub_E0FF40(v25, v26, 2391, 0);
        if ( v27 )
          sub_AC60B0(v27, a3, 8u);
        return 0;
      case 5:
      case 6:
        if ( *(_BYTE *)(v5 + 16) != 14 )
          v5 = sub_F3F310(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
        v28 = *(_QWORD *)(v5 + 32);
        v85 = sub_A8AC40(*(_QWORD *)(*a1 + 16LL), v28);
        if ( *(_DWORD *)a2 == 5 )
        {
          if ( !(unsigned __int8)sub_BF0BD0((__int64)a1, a2 + 8, v28, a4) )
            return 0;
          return (unsigned int)sub_BF0BD0((__int64)a1, a2 + 24, v28, a4 + v85);
        }
        v29 = a2 + 8;
        v90 = sub_21D5390();
        if ( *(_QWORD *)(a2 + 8) == v90 )
          sub_21DD3B0(&ptr, v29);
        else
          sub_21DB0C0(&ptr, v29);
        v95 = 1;
        v94 = si128.m128i_i32[0];
        v93 = ptr;
        v30 = sub_BF0BD0((__int64)a1, (__int64)&v93, v28, a4);
        if ( v94 > 0x40 && v93 )
          operator delete[](v93);
        if ( !v30 )
          return 0;
        v31 = v85 + a4;
        v32 = a2 + 32;
        if ( v90 == *(_QWORD *)(a2 + 32) )
          sub_21DD3B0(&ptr, v32);
        else
          sub_21DB0C0(&ptr, v32);
        v95 = 1;
        v14 = v31;
        v15 = v28;
        v94 = si128.m128i_i32[0];
        v93 = ptr;
LABEL_7:
        v8 = sub_BF0BD0((__int64)a1, (__int64)&v93, v15, v14);
        goto LABEL_8;
      case 8:
        if ( (unsigned int)*(unsigned __int8 *)(v5 + 16) - 57 > 1 )
          v5 = sub_F3F310(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
        v33 = *(_DWORD *)(v5 + 20);
        v83 = *(_QWORD *)(v5 + 32);
        v8 = sub_F33C90(v5, *(_QWORD *)(*a1 + 16LL));
        v34 = *a1;
        if ( (_BYTE)v8 )
        {
          v35 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v34 + 16) + 17448LL) + 272LL);
          v94 = v33;
          v92 = v33 >> 3;
          if ( v33 > 0x40 )
          {
            sub_21E1730(&v93, 0, 0);
          }
          else
          {
            v93 = nullptr;
            if ( !v33 )
            {
              ptr = v98;
              si128 = _mm_load_si128((const __m128i *)&xmmword_2384E70);
              sub_21E7D20(&v93, v98, v92);
              goto LABEL_55;
            }
          }
          if ( v35 )
          {
            v76 = 0;
            for ( i = 0; i < v33; ++i )
            {
              v88 = v76;
              v78 = v33 - 1 - i;
              sub_21E22E0(&v93, *(_QWORD *)(a2 + 8) + v76 + 8, v78);
              v76 = v88 + 56;
            }
          }
          else
          {
            v36 = 0;
            for ( j = 0; j < v33; ++j )
            {
              v38 = j;
              v86 = v36;
              sub_21E22E0(&v93, *(_QWORD *)(a2 + 8) + v36 + 8, v38);
              v36 = v86 + 56;
            }
          }
          v39 = v98;
          ptr = v98;
          v40 = v98;
          si128 = _mm_load_si128((const __m128i *)&xmmword_2384E70);
          if ( v92 )
          {
            if ( v92 > 8uLL )
            {
              sub_22130D0(&ptr, v98, v92, 1);
              v40 = ptr;
              v39 = (char *)ptr + si128.m128i_i64[0];
            }
            if ( &v40[v92] != v39 )
            {
              memset(v39, 0, &v40[v92] - v39);
              v40 = ptr;
            }
            si128.m128i_i64[0] = v92;
          }
          sub_21E7D20(&v93, v40, v92);
LABEL_55:
          if ( !*((_BYTE *)a1 + 96) )
          {
            v41 = (char *)ptr;
            v42 = (char *)ptr + si128.m128i_i64[0];
            if ( ptr == (char *)ptr + si128.m128i_i64[0] )
              goto LABEL_80;
            v43 = v42 - 1;
            if ( ptr >= v42 - 1 )
            {
              v46 = (char *)ptr + si128.m128i_i64[0];
              v42 = (char *)ptr;
LABEL_60:
              v47 = a1[1];
              v48 = v46 - v42;
              v49 = v47 + 2 * a4;
              if ( ((unsigned __int64)v46 <= v49 || (unsigned __int64)v42 >= v47 + 2 * (&v46[a4] - v42))
                && (unsigned __int64)(v46 - 1 - v42) > 0xE )
              {
                v50 = _mm_load_si128((const __m128i *)&xmmword_2384E80);
                v51 = 0;
                do
                {
                  v52 = _mm_loadu_si128((const __m128i *)&v42[v51]);
                  *(__m128i *)(v49 + 2 * v51 + 16) = _mm_unpackhi_epi8(v52, v50);
                  *(__m128i *)(v49 + 2 * v51) = _mm_unpacklo_epi8(v52, v50);
                  v51 += 16;
                }
                while ( v51 != (v48 & 0xFFFFFFFFFFFFFFF0LL) );
                v53 = v48 & 0xFFFFFFFFFFFFFFF0LL;
                v54 = &v42[v48 & 0xFFFFFFFFFFFFFFF0LL];
                if ( (v48 & 0xFFFFFFFFFFFFFFF0LL) != v48 )
                {
                  v55 = (char *)(v47 + 2 * (v53 + a4));
                  *v55 = *v54;
                  v55[1] = 1;
                  if ( v46 != v54 + 1 )
                  {
                    v56 = (_BYTE *)(v47 + 2 * (a4 + v53 + 1));
                    *v56 = v54[1];
                    v56[1] = 1;
                    if ( v46 != v54 + 2 )
                    {
                      v57 = (_BYTE *)(v47 + 2 * (a4 + v53 + 2));
                      *v57 = v54[2];
                      v57[1] = 1;
                      if ( v46 != v54 + 3 )
                      {
                        v58 = (_BYTE *)(v47 + 2 * (a4 + v53 + 3));
                        *v58 = v54[3];
                        v58[1] = 1;
                        if ( v46 != v54 + 4 )
                        {
                          v59 = (_BYTE *)(v47 + 2 * (a4 + v53 + 4));
                          *v59 = v54[4];
                          v59[1] = 1;
                          if ( v46 != v54 + 5 )
                          {
                            v60 = (_BYTE *)(v47 + 2 * (a4 + v53 + 5));
                            *v60 = v54[5];
                            v60[1] = 1;
                            if ( v46 != v54 + 6 )
                            {
                              v61 = (_BYTE *)(v47 + 2 * (a4 + v53 + 6));
                              *v61 = v54[6];
                              v61[1] = 1;
                              if ( v46 != v54 + 7 )
                              {
                                v62 = (_BYTE *)(v47 + 2 * (a4 + v53 + 7));
                                *v62 = v54[7];
                                v62[1] = 1;
                                if ( v46 != v54 + 8 )
                                {
                                  v63 = (_BYTE *)(v47 + 2 * (a4 + v53 + 8));
                                  *v63 = v54[8];
                                  v63[1] = 1;
                                  if ( v46 != v54 + 9 )
                                  {
                                    v64 = (_BYTE *)(v47 + 2 * (a4 + v53 + 9));
                                    *v64 = v54[9];
                                    v64[1] = 1;
                                    if ( v46 != v54 + 10 )
                                    {
                                      v65 = (_BYTE *)(v47 + 2 * (a4 + v53 + 10));
                                      *v65 = v54[10];
                                      v65[1] = 1;
                                      if ( v46 != v54 + 11 )
                                      {
                                        v66 = (_BYTE *)(v47 + 2 * (a4 + v53 + 11));
                                        *v66 = v54[11];
                                        v66[1] = 1;
                                        if ( v46 != v54 + 12 )
                                        {
                                          v67 = (_BYTE *)(v47 + 2 * (a4 + v53 + 12));
                                          *v67 = v54[12];
                                          v67[1] = 1;
                                          v68 = v53 + 13;
                                          if ( v46 != v54 + 13 )
                                          {
                                            v69 = v53 + 14;
                                            v70 = (_BYTE *)(v47 + 2 * (a4 + v68));
                                            *v70 = v54[13];
                                            v70[1] = 1;
                                            if ( v46 != v54 + 14 )
                                            {
                                              v71 = v54[14];
                                              v72 = (char *)(v47 + 2 * (a4 + v69));
                                              *v72 = v71;
                                              v72[1] = 1;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                v80 = 0;
                do
                {
                  v81 = v42[v80];
                  *(_BYTE *)(v49 + 2 * v80 + 1) = 1;
                  *(_BYTE *)(v49 + 2 * v80++) = v81;
                }
                while ( v80 != v48 );
              }
LABEL_80:
              if ( v42 != v98 )
                free(v42);
LABEL_8:
              if ( v94 > 0x40 && v93 )
                operator delete[](v93);
              return v8;
            }
            do
            {
              v44 = *v41;
              v45 = *v43;
              ++v41;
              --v43;
              *(v41 - 1) = v45;
              v43[1] = v44;
            }
            while ( v41 < v43 );
          }
          v42 = (char *)ptr;
          v46 = (char *)ptr + si128.m128i_i64[0];
          if ( ptr == (char *)ptr + si128.m128i_i64[0] )
            goto LABEL_80;
          goto LABEL_60;
        }
        v87 = sub_A8AC40(*(_QWORD *)(v34 + 16), v83);
        if ( !v33 )
          return 1;
        v73 = a4;
        v74 = 0;
        v75 = 56 * (v33 - 1 + 1LL);
        while ( 1 )
        {
          v8 = sub_C056F0(a1, v74 + *(_QWORD *)(a2 + 8), v83, v73);
          if ( !(_BYTE)v8 )
            break;
          v74 += 56;
          v73 += v87;
          if ( v74 == v75 )
            return 1;
        }
        break;
      case 9:
        v17 = *(unsigned __int8 *)(v5 + 16);
        if ( (unsigned __int8)(v17 - 2) <= 4u )
          goto LABEL_13;
        if ( (unsigned __int8)(v7 - 2) > 4u )
          return 0;
        v79 = sub_F3F310(v5, a2, (unsigned int)(v17 - 2), a4);
        v5 = v79;
        if ( !v79 )
          return 0;
        v17 = *(unsigned __int8 *)(v79 + 16);
LABEL_13:
        if ( (unsigned int)(v17 - 2) > 1 )
          return 0;
        v82 = sub_A8AC40(*(_QWORD *)(*a1 + 16LL), *(_QWORD *)(v5 + 32));
        v18 = *(_DWORD *)(a2 + 16);
        v91 = *(_DWORD *)(a2 + 20);
        v89 = v18;
        if ( v18 )
        {
          v19 = a4;
          v20 = 0;
          v84 = 56 * (v18 - 1 + 1LL);
          do
          {
            if ( !(unsigned __int8)sub_C056F0(a1, v20 + *(_QWORD *)(a2 + 8), *(_QWORD *)(v5 + 32), v19) )
              return 0;
            v20 += 56;
            v19 += v82;
          }
          while ( v20 != v84 );
          v21 = *(unsigned int *)(a2 + 16);
          v22 = *(_DWORD *)(a2 + 20);
        }
        else
        {
          v22 = *(_DWORD *)(a2 + 20);
          v21 = 0;
        }
        if ( (_DWORD)v21 == v22 )
          return 1;
        v23 = *(_QWORD *)(a2 + 8) + 56 * v21;
        if ( v89 == v91 )
          return 1;
        while ( 1 )
        {
          v24 = v89;
          if ( !(unsigned __int8)sub_C056F0(a1, v23, *(_QWORD *)(v5 + 32), a4 + v82 * v89) )
            break;
          ++v89;
          if ( v91 == v24 + 1 )
            return 1;
        }
        return 0;
      case 0xA:
        return (unsigned int)sub_C04CF0(a1, a2, a3, a4, a5);
    }
  }
  return v8;
}

