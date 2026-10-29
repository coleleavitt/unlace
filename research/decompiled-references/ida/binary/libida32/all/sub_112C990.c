__int64 __fastcall sub_112C990(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // r12
  _QWORD *v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r12
  _QWORD *v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // r12
  _QWORD *v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r12
  _QWORD *v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // r12
  _QWORD *v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rbp
  _QWORD *v26; // r12
  __int64 v27; // r13
  __int64 v28; // rax
  const char **v29; // rax
  char *v30; // rcx
  const char *v31; // rdi
  size_t v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // r8
  __m128i *v36; // rdi
  __m128i *v37; // rdx
  void *v38; // rdx
  __m128i v40; // xmm7
  __m128i v41; // xmm4
  __int64 v42; // rdx
  _BYTE *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r12
  void **v46; // rdi
  __int64 v47; // rax
  __m128i v48; // xmm5
  __m128i v49; // xmm7
  __m128i v50; // xmm6
  __m128i v51; // xmm6
  __m128i v52; // xmm5
  int v53; // eax
  void *v54; // rax
  __int64 v55; // rax
  __m128i v56; // xmm2
  __m128i v57; // xmm5
  __m128i v58; // xmm4
  __m128i v59; // xmm7
  __m128i v60; // xmm6
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  char *v64; // [rsp+8h] [rbp-180h]
  char *v65; // [rsp+8h] [rbp-180h]
  __int64 v66; // [rsp+10h] [rbp-178h]
  __int64 v67; // [rsp+20h] [rbp-168h]
  __m128i v68; // [rsp+40h] [rbp-148h] BYREF
  void *v69; // [rsp+50h] [rbp-138h]
  __int64 v70; // [rsp+58h] [rbp-130h]
  __m128i v71; // [rsp+60h] [rbp-128h] BYREF
  void *v72; // [rsp+70h] [rbp-118h]
  __int64 v73; // [rsp+78h] [rbp-110h]
  __m128i v74; // [rsp+80h] [rbp-108h] BYREF
  void *v75; // [rsp+90h] [rbp-F8h]
  __int64 v76; // [rsp+98h] [rbp-F0h]
  __m128i v77; // [rsp+A0h] [rbp-E8h] BYREF
  void *v78; // [rsp+B0h] [rbp-D8h]
  __int64 v79; // [rsp+B8h] [rbp-D0h]
  __m128i v80; // [rsp+C0h] [rbp-C8h] BYREF
  void *v81; // [rsp+D0h] [rbp-B8h]
  __int64 v82; // [rsp+D8h] [rbp-B0h]
  __m128i v83; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i *v84; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v85; // [rsp+F8h] [rbp-90h]
  __m128i v86; // [rsp+100h] [rbp-88h] BYREF
  void *v87; // [rsp+110h] [rbp-78h] BYREF
  __int64 v88; // [rsp+118h] [rbp-70h]
  void *v89[2]; // [rsp+120h] [rbp-68h] BYREF
  __m128i v90; // [rsp+130h] [rbp-58h] BYREF
  __int64 v91; // [rsp+140h] [rbp-48h]

  LODWORD(v87) = 2323;
  v3 = sub_2193060(a2, &v87, 1);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = (_QWORD *)(v4 + 8LL * (unsigned int)v3);
  v6 = (_QWORD *)(v4 + 8 * HIDWORD(v3));
  if ( v5 != v6 )
  {
    while ( !*v5 || !(unsigned __int8)sub_2195AD0(*v5, 2323) )
    {
      if ( v6 == ++v5 )
        goto LABEL_5;
    }
    if ( v5 != v6 )
    {
      do
      {
        v27 = *v5;
        v28 = *(_QWORD *)(*v5 + 16LL);
        if ( !v28 )
          v28 = *v5;
        ++v5;
        *(_BYTE *)(v28 + 44) |= 1u;
        if ( v5 == v6 )
          break;
        while ( !*v5 || !(unsigned __int8)sub_2195AD0(*v5, 2323) )
        {
          if ( v6 == ++v5 )
            goto LABEL_34;
        }
      }
      while ( v6 != v5 );
LABEL_34:
      v29 = *(const char ***)(v27 + 48);
      v30 = (char *)*v29;
      if ( *v29 )
      {
        v31 = *v29;
        v64 = (char *)*v29;
        v32 = strlen(*v29);
        v34 = a1 + 16;
        v30 = v64;
        v35 = v32;
        if ( v32 == 6 )
        {
          if ( *(_DWORD *)v64 != 1769234798 || *((_WORD *)v64 + 2) != 25974 )
            goto LABEL_37;
          v43 = (_BYTE *)sub_227F670(v31, 2323, v33, v64, 6);
          v87 = v89;
          sub_112C830(&v87, v43, (__int64)&v43[v44]);
          v30 = v64;
          v34 = a1 + 16;
          v45 = v88;
          v35 = 6;
          if ( v88 )
          {
            v53 = sub_990D60((__int64)&v87, "generic");
            v30 = v64;
            v34 = a1 + 16;
            v46 = (void **)v87;
            v35 = 6;
            if ( v53 )
            {
              *(_QWORD *)a1 = a1 + 16;
              if ( v46 == v89 )
              {
                *(__m128i *)(a1 + 16) = _mm_load_si128((const __m128i *)v89);
              }
              else
              {
                v54 = v89[0];
                *(_QWORD *)a1 = v46;
                *(_QWORD *)(a1 + 16) = v54;
              }
              *(_QWORD *)(a1 + 8) = v45;
              return a1;
            }
          }
          else
          {
            v46 = (void **)v87;
          }
          if ( v46 != v89 )
          {
            v66 = v34;
            v65 = v30;
            operator delete(v46);
            v30 = v65;
            v34 = v66;
            v35 = 6;
            if ( *(_DWORD *)v65 == 1835888483 )
            {
LABEL_99:
              if ( *((_WORD *)v30 + 2) == 28271 )
              {
                *(_QWORD *)a1 = v34;
                *(_DWORD *)(a1 + 16) = 1701733735;
                *(_WORD *)(v34 + 4) = 26994;
                *(_BYTE *)(v34 + 6) = 99;
                *(_QWORD *)(a1 + 8) = 7;
                *(_BYTE *)(a1 + 23) = 0;
                return a1;
              }
            }
          }
          else
          {
LABEL_37:
            if ( *(_DWORD *)v30 == 1835888483 )
              goto LABEL_99;
          }
          strcpy(v68.m128i_i8, "M68000");
          v87 = v30;
          v88 = 6;
          v91 = 0;
          if ( *(_DWORD *)v30 == 808990317 && *((_WORD *)v30 + 2) == 12336 )
          {
            v56 = _mm_load_si128(&v68);
            strcpy(v71.m128i_i8, "M68010");
            v89[0] = &v90;
            v69 = &v71;
            v90 = v56;
            v89[1] = &byte_6;
            v68.m128i_i8[0] = 0;
            LOBYTE(v91) = 1;
            v70 = 6;
LABEL_40:
            strcpy(v74.m128i_i8, "M68020");
            v72 = &v74;
            v73 = 6;
LABEL_75:
            strcpy(v77.m128i_i8, "M68030");
            v76 = 6;
            v75 = &v77;
LABEL_44:
            strcpy(v80.m128i_i8, "M68040");
            v78 = &v80;
            v79 = 6;
LABEL_79:
            strcpy(v83.m128i_i8, "M68060");
            v82 = 6;
            v81 = &v83;
            goto LABEL_48;
          }
          strcpy(v71.m128i_i8, "M68010");
          v70 = 6;
          v69 = &v71;
          goto LABEL_104;
        }
        v88 = v32;
        strcpy(v68.m128i_i8, "M68000");
        v87 = v64;
        v91 = 0;
        if ( v32 == 5 )
        {
          if ( *(_DWORD *)v64 == 808466486 && v64[4] == 48 )
          {
            v52 = _mm_load_si128(&v68);
            v89[1] = &byte_6;
            v89[0] = &v90;
            v90 = v52;
            v68.m128i_i8[0] = 0;
            LOBYTE(v91) = 1;
          }
          strcpy(v71.m128i_i8, "M68010");
          v70 = 6;
          v69 = &v71;
          if ( (_BYTE)v91 )
            goto LABEL_40;
          if ( *(_DWORD *)v64 == 825243702 && v64[4] == 48 )
          {
            v50 = _mm_load_si128(&v71);
            v89[1] = &byte_6;
            v89[0] = &v90;
            v90 = v50;
            v70 = 0;
            v71.m128i_i8[0] = 0;
            LOBYTE(v91) = 1;
          }
          goto LABEL_74;
        }
      }
      else
      {
        v34 = a1 + 16;
        strcpy(v68.m128i_i8, "M68000");
        v35 = 0;
        v87 = nullptr;
        v88 = 0;
        v91 = 0;
      }
      strcpy(v71.m128i_i8, "M68010");
      v69 = &v71;
      v70 = 6;
      if ( v35 == 6 )
      {
LABEL_104:
        if ( *(_DWORD *)v30 == 808990317 && *((_WORD *)v30 + 2) == 12337 )
        {
          v58 = _mm_load_si128(&v71);
          strcpy(v74.m128i_i8, "M68020");
          v89[0] = &v90;
          v35 = 6;
          v90 = v58;
          v89[1] = &byte_6;
          v70 = 0;
          v71.m128i_i8[0] = 0;
          LOBYTE(v91) = 1;
          v72 = &v74;
          v73 = 6;
          goto LABEL_75;
        }
        strcpy(v74.m128i_i8, "M68020");
        v72 = &v74;
        v73 = 6;
        if ( *(_DWORD *)v30 == 808990317 && *((_WORD *)v30 + 2) == 12338 )
        {
          v57 = _mm_load_si128(&v74);
          strcpy(v77.m128i_i8, "M68030");
          v89[0] = &v90;
          v35 = 6;
          v75 = &v77;
          v90 = v57;
          v89[1] = &byte_6;
          v73 = 0;
          v74.m128i_i8[0] = 0;
          LOBYTE(v91) = 1;
          v76 = 6;
          goto LABEL_44;
        }
        strcpy(v77.m128i_i8, "M68030");
        v76 = 6;
        v75 = &v77;
        if ( *(_DWORD *)v30 == 808990317 && *((_WORD *)v30 + 2) == 12339 )
        {
          v60 = _mm_load_si128(&v77);
          strcpy(v80.m128i_i8, "M68040");
          v89[0] = &v90;
          v35 = 6;
          v78 = &v80;
          v90 = v60;
          v89[1] = &byte_6;
          v76 = 0;
          v77.m128i_i8[0] = 0;
          LOBYTE(v91) = 1;
          v79 = 6;
          goto LABEL_79;
        }
        strcpy(v80.m128i_i8, "M68040");
        v78 = &v80;
        v79 = 6;
        if ( *(_DWORD *)v30 == 808990317 && *((_WORD *)v30 + 2) == 12340 )
        {
          v59 = _mm_load_si128(&v80);
          strcpy(v83.m128i_i8, "M68060");
          v89[0] = &v90;
          v35 = 6;
          v90 = v59;
          v89[1] = &byte_6;
          v79 = 0;
          v80.m128i_i8[0] = 0;
          LOBYTE(v91) = 1;
          v81 = &v83;
          v82 = 6;
        }
        else
        {
          strcpy(v83.m128i_i8, "M68060");
          v81 = &v83;
          v82 = 6;
          if ( *(_DWORD *)v30 == 808990317 && *((_WORD *)v30 + 2) == 12342 )
          {
            v41 = _mm_load_si128(&v83);
            v89[1] = &byte_6;
            v35 = 6;
            v89[0] = &v90;
            v82 = 0;
            v83.m128i_i8[0] = 0;
            LOBYTE(v91) = 1;
            v90 = v41;
            goto LABEL_90;
          }
          v35 = 6;
        }
        goto LABEL_48;
      }
LABEL_74:
      strcpy(v74.m128i_i8, "M68020");
      v72 = &v74;
      v73 = 6;
      if ( (_BYTE)v91 )
        goto LABEL_75;
      if ( v35 == 5 && *(_DWORD *)v30 == 842020918 && v30[4] == 48 )
      {
        v49 = _mm_load_si128(&v74);
        v89[1] = &byte_6;
        v89[0] = &v90;
        v90 = v49;
        v73 = 0;
        v74.m128i_i8[0] = 0;
        LOBYTE(v91) = 1;
      }
      strcpy(v77.m128i_i8, "M68030");
      v75 = &v77;
      v76 = 6;
      if ( (_BYTE)v91 )
        goto LABEL_44;
      if ( v35 == 5 && *(_DWORD *)v30 == 858798134 && v30[4] == 48 )
      {
        v48 = _mm_load_si128(&v77);
        v89[1] = &byte_6;
        v89[0] = &v90;
        v90 = v48;
        v76 = 0;
        v77.m128i_i8[0] = 0;
        LOBYTE(v91) = 1;
      }
      strcpy(v80.m128i_i8, "M68040");
      v78 = &v80;
      v79 = 6;
      if ( (_BYTE)v91 )
        goto LABEL_79;
      if ( v35 == 5 && *(_DWORD *)v30 == 875575350 && v30[4] == 48 )
      {
        v51 = _mm_load_si128(&v80);
        v89[1] = &byte_6;
        v89[0] = &v90;
        v90 = v51;
        v79 = 0;
        v80.m128i_i8[0] = 0;
        LOBYTE(v91) = 1;
      }
      strcpy(v83.m128i_i8, "M68060");
      v81 = &v83;
      v82 = 6;
      if ( !(_BYTE)v91 && v35 == 5 && *(_DWORD *)v30 == 909129782 && v30[4] == 48 )
      {
        v40 = _mm_load_si128(&v83);
        v89[1] = &byte_6;
        v89[0] = &v90;
        v90 = v40;
        v82 = 0;
        v83.m128i_i8[0] = 0;
        LOBYTE(v91) = 1;
      }
LABEL_48:
      if ( !v30 )
      {
        v85 = 0;
        v36 = &v86;
        v86.m128i_i8[0] = 0;
        v84 = &v86;
        if ( (_BYTE)v91 )
          goto LABEL_50;
        *(_QWORD *)a1 = v34;
        goto LABEL_102;
      }
LABEL_90:
      v67 = v34;
      v84 = &v86;
      sub_112C830(&v84, v30, (__int64)&v30[v35]);
      v36 = v84;
      v34 = v67;
      if ( (_BYTE)v91 )
      {
LABEL_50:
        v37 = (__m128i *)v89[0];
        *(_QWORD *)a1 = v34;
        if ( v37 == &v90 )
        {
          *(__m128i *)(a1 + 16) = _mm_load_si128(&v90);
        }
        else
        {
          *(_QWORD *)a1 = v37;
          *(_QWORD *)(a1 + 16) = v90.m128i_i64[0];
        }
        v38 = v89[1];
        v89[1] = nullptr;
        v90.m128i_i8[0] = 0;
        *(_QWORD *)(a1 + 8) = v38;
        v89[0] = &v90;
        if ( v36 != &v86 )
          operator delete(v36);
        goto LABEL_54;
      }
      *(_QWORD *)a1 = v67;
      if ( v36 != &v86 )
      {
        v42 = v86.m128i_i64[0];
        *(_QWORD *)a1 = v36;
        *(_QWORD *)(a1 + 16) = v42;
LABEL_93:
        *(_QWORD *)(a1 + 8) = v85;
LABEL_54:
        if ( v81 != &v83 )
          operator delete(v81);
        if ( v78 != &v80 )
          operator delete(v78);
        if ( v75 != &v77 )
          operator delete(v75);
        if ( v72 != &v74 )
          operator delete(v72);
        if ( v69 != &v71 )
          operator delete(v69);
        if ( (_BYTE)v91 && v89[0] != &v90 )
          operator delete(v89[0]);
        return a1;
      }
LABEL_102:
      *(__m128i *)(a1 + 16) = _mm_load_si128(&v86);
      goto LABEL_93;
    }
  }
LABEL_5:
  LODWORD(v87) = 2211;
  v7 = sub_2193060(a2, &v87, 1);
  v8 = *(_QWORD *)(a2 + 8);
  v9 = (_QWORD *)(v8 + 8LL * (unsigned int)v7);
  v10 = (_QWORD *)(v8 + 8 * HIDWORD(v7));
  if ( v9 == v10 )
    goto LABEL_9;
  while ( !*v9 || !(unsigned __int8)sub_2195AD0(*v9, 2211) )
  {
    if ( v10 == ++v9 )
      goto LABEL_9;
  }
  if ( v9 == v10 )
  {
LABEL_9:
    LODWORD(v87) = 2212;
    v11 = sub_2193060(a2, &v87, 1);
    v12 = *(_QWORD *)(a2 + 8);
    v13 = (_QWORD *)(v12 + 8LL * (unsigned int)v11);
    v14 = (_QWORD *)(v12 + 8 * HIDWORD(v11));
    if ( v13 == v14 )
      goto LABEL_13;
    while ( !*v13 || !(unsigned __int8)sub_2195AD0(*v13, 2212) )
    {
      if ( v14 == ++v13 )
        goto LABEL_13;
    }
    if ( v14 == v13 )
    {
LABEL_13:
      LODWORD(v87) = 2213;
      v15 = sub_2193060(a2, &v87, 1);
      v16 = *(_QWORD *)(a2 + 8);
      v17 = (_QWORD *)(v16 + 8LL * (unsigned int)v15);
      v18 = (_QWORD *)(v16 + 8 * HIDWORD(v15));
      if ( v17 == v18 )
        goto LABEL_17;
      while ( !*v17 || !(unsigned __int8)sub_2195AD0(*v17, 2213) )
      {
        if ( v18 == ++v17 )
          goto LABEL_17;
      }
      if ( v18 == v17 )
      {
LABEL_17:
        LODWORD(v87) = 2214;
        v19 = sub_2193060(a2, &v87, 1);
        v20 = *(_QWORD *)(a2 + 8);
        v21 = (_QWORD *)(v20 + 8LL * (unsigned int)v19);
        v22 = (_QWORD *)(v20 + 8 * HIDWORD(v19));
        if ( v21 == v22 )
          goto LABEL_21;
        while ( !*v21 || !(unsigned __int8)sub_2195AD0(*v21, 2214) )
        {
          if ( v22 == ++v21 )
            goto LABEL_21;
        }
        if ( v21 == v22 )
        {
LABEL_21:
          LODWORD(v87) = 2215;
          v23 = sub_2193060(a2, &v87, 1);
          v24 = *(_QWORD *)(a2 + 8);
          v25 = (_QWORD *)(v24 + 8LL * (unsigned int)v23);
          v26 = (_QWORD *)(v24 + 8 * HIDWORD(v23));
          if ( v25 == v26 )
            goto LABEL_25;
          while ( !*v25 || !(unsigned __int8)sub_2195AD0(*v25, 2215) )
          {
            if ( v26 == ++v25 )
              goto LABEL_25;
          }
          if ( v26 == v25 )
          {
LABEL_25:
            if ( sub_10B8FF0(a2, 0x8A8u) )
              sub_112C8F0((__int64 *)a1, "M68060");
            else
              sub_112C8F0((__int64 *)a1, &byte_22CD811);
          }
          else
          {
            do
            {
              v63 = *(_QWORD *)(*v25 + 16LL);
              if ( !v63 )
                v63 = *v25;
              ++v25;
              *(_BYTE *)(v63 + 44) |= 1u;
              if ( v25 == v26 )
                break;
              while ( !*v25 || !(unsigned __int8)sub_2195AD0(*v25, 2215) )
              {
                if ( v26 == ++v25 )
                  goto LABEL_182;
              }
            }
            while ( v25 != v26 );
LABEL_182:
            sub_112C8F0((__int64 *)a1, "M68040");
          }
        }
        else
        {
          do
          {
            v62 = *(_QWORD *)(*v21 + 16LL);
            if ( !v62 )
              v62 = *v21;
            ++v21;
            *(_BYTE *)(v62 + 44) |= 1u;
            if ( v21 == v22 )
              break;
            while ( !*v21 || !(unsigned __int8)sub_2195AD0(*v21, 2214) )
            {
              if ( v22 == ++v21 )
                goto LABEL_172;
            }
          }
          while ( v21 != v22 );
LABEL_172:
          strcpy((char *)(a1 + 16), "M68030");
          *(_QWORD *)a1 = a1 + 16;
          *(_QWORD *)(a1 + 8) = 6;
        }
      }
      else
      {
        do
        {
          v61 = *(_QWORD *)(*v17 + 16LL);
          if ( !v61 )
            v61 = *v17;
          ++v17;
          *(_BYTE *)(v61 + 44) |= 1u;
          if ( v17 == v18 )
            break;
          while ( !*v17 || !(unsigned __int8)sub_2195AD0(*v17, 2213) )
          {
            if ( v18 == ++v17 )
              goto LABEL_161;
          }
        }
        while ( v18 != v17 );
LABEL_161:
        strcpy((char *)(a1 + 16), "M68020");
        *(_QWORD *)a1 = a1 + 16;
        *(_QWORD *)(a1 + 8) = 6;
      }
    }
    else
    {
      do
      {
        v55 = *(_QWORD *)(*v13 + 16LL);
        if ( !v55 )
          v55 = *v13;
        ++v13;
        *(_BYTE *)(v55 + 44) |= 1u;
        if ( v13 == v14 )
          break;
        while ( !*v13 || !(unsigned __int8)sub_2195AD0(*v13, 2212) )
        {
          if ( v14 == ++v13 )
            goto LABEL_141;
        }
      }
      while ( v14 != v13 );
LABEL_141:
      strcpy((char *)(a1 + 16), "M68010");
      *(_QWORD *)a1 = a1 + 16;
      *(_QWORD *)(a1 + 8) = 6;
    }
  }
  else
  {
    do
    {
      v47 = *(_QWORD *)(*v9 + 16LL);
      if ( !v47 )
        v47 = *v9;
      ++v9;
      *(_BYTE *)(v47 + 44) |= 1u;
      if ( v9 == v10 )
        break;
      while ( !*v9 || !(unsigned __int8)sub_2195AD0(*v9, 2211) )
      {
        if ( v10 == ++v9 )
          goto LABEL_117;
      }
    }
    while ( v10 != v9 );
LABEL_117:
    strcpy((char *)(a1 + 16), "M68000");
    *(_QWORD *)a1 = a1 + 16;
    *(_QWORD *)(a1 + 8) = 6;
  }
  return a1;
}

