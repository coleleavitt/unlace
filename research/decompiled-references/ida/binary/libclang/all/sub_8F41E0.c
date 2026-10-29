__int64 __fastcall sub_8F41E0(__int64 a1, int a2, unsigned __int8 a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // r13d
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rsi
  _BYTE *v13; // rcx
  char v14; // bl
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rsi
  _BYTE *v18; // rcx
  __int64 v19; // r8
  __int16 v20; // bx
  __int64 v21; // r13
  __int64 v22; // r15
  __int64 v23; // rsi
  _BYTE *v24; // rcx
  __int64 v25; // r8
  int v26; // ebx
  __int64 v27; // r13
  __int64 v29; // rcx
  __int64 v30; // rax
  char *v31; // rcx
  __int64 v32; // r13
  char *v33; // rdx
  int v34; // eax
  __int64 v35; // r8
  void *v36; // r12
  unsigned __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // r15
  __int64 v47; // rsi
  _BYTE *v48; // rcx
  __int64 v49; // r8
  void *v50; // r15
  __int64 v51; // r14
  __int64 v52; // rbp
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // r13
  __int64 v56; // r15
  __int64 v57; // rsi
  _BYTE *v58; // rcx
  __int64 v59; // r8
  bool v60; // bl
  __int64 v61; // r13
  __int64 v62; // r15
  __int64 v63; // rsi
  _BYTE *v64; // rcx
  __int64 v65; // rax
  __int64 v66; // r13
  __int64 v67; // r15
  __int64 v68; // rsi
  _BYTE *v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rbx
  unsigned int v72; // eax
  __int64 v73; // [rsp-10h] [rbp-148h]
  __int64 v74; // [rsp-10h] [rbp-148h]
  __int64 v75; // [rsp+10h] [rbp-128h]
  __int64 v76; // [rsp+10h] [rbp-128h]
  __int64 v77; // [rsp+10h] [rbp-128h]
  __int64 v78; // [rsp+10h] [rbp-128h]
  __int64 v79; // [rsp+10h] [rbp-128h]
  __int64 v80; // [rsp+10h] [rbp-128h]
  __int64 v81; // [rsp+10h] [rbp-128h]
  __int64 v82; // [rsp+10h] [rbp-128h]
  __int64 v83; // [rsp+10h] [rbp-128h]
  __int64 v84; // [rsp+18h] [rbp-120h]
  unsigned int v85; // [rsp+18h] [rbp-120h]
  unsigned __int8 v86; // [rsp+2Fh] [rbp-109h] BYREF
  void *v87; // [rsp+30h] [rbp-108h] BYREF
  unsigned int v88; // [rsp+38h] [rbp-100h]
  void *v89; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v90; // [rsp+48h] [rbp-F0h]
  void *v91; // [rsp+60h] [rbp-D8h] BYREF
  unsigned int v92; // [rsp+68h] [rbp-D0h]
  _BYTE v93[64]; // [rsp+80h] [rbp-B8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-70h]
  _BYTE s[96]; // [rsp+D8h] [rbp-60h] BYREF

  v6 = 1;
  switch ( a2 )
  {
    case 0:
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v10 = *(_QWORD *)(a1 + 792);
        v11 = a1 + 384;
        v12 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v75 = v10;
        sub_8F41A0((__int64)v93, v12);
        v6 = sub_9E4580(a1 + 384, v10, v93, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_81;
        v13 = s;
        ptr = s;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
        if ( a4 >> 3 )
        {
          sub_8CC2E0(&ptr, a4 >> 3);
          LODWORD(v13) = (_DWORD)ptr;
        }
        LOBYTE(v91) = 0;
        if ( (unsigned __int8)sub_99D500(v11, v75, (unsigned int)v93, (_DWORD)v13, a4, a4, (__int64)&v91) )
        {
          v6 = sub_9C9D40(v11, v75, (unsigned __int8)v91, a3, v73);
          if ( (_BYTE)v6 )
          {
            v14 = *(_BYTE *)ptr;
            *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v14;
            goto LABEL_79;
          }
        }
        goto LABEL_82;
      }
      return v6;
    case 2:
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v15 = *(_QWORD *)(a1 + 792);
        v16 = a1 + 384;
        v17 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v76 = v15;
        sub_8F41A0((__int64)v93, v17);
        v6 = sub_9E4580(a1 + 384, v15, v93, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_81;
        v18 = s;
        ptr = s;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
        if ( a4 >> 3 )
        {
          sub_8CC2E0(&ptr, a4 >> 3);
          LODWORD(v18) = (_DWORD)ptr;
        }
        LOBYTE(v91) = 0;
        if ( (unsigned __int8)sub_99D500(v16, v76, (unsigned int)v93, (_DWORD)v18, a4, a4, (__int64)&v91) )
        {
          v6 = sub_9C9D40(v16, v76, (unsigned __int8)v91, a3, v19);
          if ( (_BYTE)v6 )
          {
            v20 = *(_WORD *)ptr;
            *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v20;
            goto LABEL_79;
          }
        }
        goto LABEL_82;
      }
      return v6;
    case 4:
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v21 = *(_QWORD *)(a1 + 792);
        v22 = a1 + 384;
        v23 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v77 = v21;
        sub_8F41A0((__int64)v93, v23);
        v6 = sub_9E4580(a1 + 384, v21, v93, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_81;
        v24 = s;
        ptr = s;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
        if ( a4 >> 3 )
        {
          sub_8CC2E0(&ptr, a4 >> 3);
          LODWORD(v24) = (_DWORD)ptr;
        }
        LOBYTE(v91) = 0;
        if ( (unsigned __int8)sub_99D500(v22, v77, (unsigned int)v93, (_DWORD)v24, a4, a4, (__int64)&v91) )
        {
          v6 = sub_9C9D40(v22, v77, (unsigned __int8)v91, a3, v25);
          if ( (_BYTE)v6 )
          {
            v26 = *(_DWORD *)ptr;
            *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v26;
            goto LABEL_79;
          }
        }
        goto LABEL_82;
      }
      return v6;
    case 6:
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v66 = *(_QWORD *)(a1 + 792);
        v67 = a1 + 384;
        v68 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v83 = v66;
        sub_8F41A0((__int64)v93, v68);
        v6 = sub_9E4580(a1 + 384, v66, v93, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_81;
        v69 = s;
        ptr = s;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
        if ( a4 >> 3 )
        {
          sub_8CC2E0(&ptr, a4 >> 3);
          LODWORD(v69) = (_DWORD)ptr;
        }
        LOBYTE(v91) = 0;
        if ( (unsigned __int8)sub_99D500(v67, v83, (unsigned int)v93, (_DWORD)v69, a4, a4, (__int64)&v91) )
        {
          v6 = sub_9C9D40(v67, v83, (unsigned __int8)v91, a3, v70);
          if ( (_BYTE)v6 )
          {
            v71 = *(_QWORD *)ptr;
            *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v71;
            goto LABEL_79;
          }
        }
        goto LABEL_82;
      }
      return v6;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v45 = *(_QWORD *)(a1 + 792);
        v46 = a1 + 384;
        v47 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v80 = v45;
        sub_8F41A0((__int64)v93, v47);
        v6 = sub_9E4580(a1 + 384, v45, v93, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_81;
        v48 = s;
        v85 = a4 >> 3;
        ptr = s;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
        if ( a4 >> 3 )
        {
          sub_8CC2E0(&ptr, a4 >> 3);
          LODWORD(v48) = (_DWORD)ptr;
        }
        v86 = 0;
        if ( !(unsigned __int8)sub_99D500(v46, v80, (unsigned int)v93, (_DWORD)v48, a4, a4, (__int64)&v86) )
          goto LABEL_82;
        v6 = sub_9C9D40(v46, v80, v86, a3, v49);
        if ( !(_BYTE)v6 )
          goto LABEL_82;
        v90 = a4;
        v50 = ptr;
        v51 = *(_QWORD *)(a1 + 568);
        if ( a4 <= 0x40 )
          goto LABEL_69;
        sub_2585A50(&v89, 0, 0);
        goto LABEL_70;
      }
      return v6;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v61 = *(_QWORD *)(a1 + 792);
        v62 = a1 + 384;
        v63 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v82 = v61;
        sub_8F41A0((__int64)v93, v63);
        v6 = sub_9E4580(a1 + 384, v61, v93, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_81;
        v64 = s;
        v85 = a4 >> 3;
        ptr = s;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
        if ( a4 >> 3 )
        {
          sub_8CC2E0(&ptr, a4 >> 3);
          LODWORD(v64) = (_DWORD)ptr;
        }
        v86 = 0;
        if ( (unsigned __int8)sub_99D500(v62, v82, (unsigned int)v93, (_DWORD)v64, a4, a4, (__int64)&v86) )
        {
          v6 = sub_9C9D40(v62, v82, v86, a3, v74);
          if ( (_BYTE)v6 )
          {
            v90 = a4;
            v50 = ptr;
            v51 = *(_QWORD *)(a1 + 568);
            if ( a4 > 0x40 )
              sub_2585A50(&v89, 0, 1);
            else
LABEL_69:
              v89 = nullptr;
LABEL_70:
            sub_2592D00(&v89, v50, v85);
            v92 = v90;
            if ( v90 > 0x40 )
            {
              sub_2585B30(&v91);
              v88 = v92;
              if ( v92 <= 0x40 )
              {
                v72 = v90;
                v87 = v91;
              }
              else
              {
                sub_2585B30(&v87);
                if ( v92 > 0x40 && v91 )
                  operator delete[](v91);
                v72 = v90;
              }
              if ( v72 > 0x40 && v89 )
                operator delete[](v89);
            }
            else
            {
              v88 = v90;
              v87 = v89;
            }
            v65 = sub_A1A4E0(v51, 16);
            *(_DWORD *)(v65 + 8) = v88;
            *(_QWORD *)v65 = v87;
            goto LABEL_79;
          }
        }
        goto LABEL_82;
      }
      return v6;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v55 = *(_QWORD *)(a1 + 792);
        v56 = a1 + 384;
        v57 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        v81 = v55;
        sub_8F41A0((__int64)v93, v57);
        v6 = sub_9E4580(a1 + 384, v55, v93, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_81;
        v58 = s;
        ptr = s;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
        if ( a4 >> 3 )
        {
          sub_8CC2E0(&ptr, a4 >> 3);
          LODWORD(v58) = (_DWORD)ptr;
        }
        LOBYTE(v91) = 0;
        if ( (unsigned __int8)sub_99D500(v56, v81, (unsigned int)v93, (_DWORD)v58, a4, a4, (__int64)&v91) )
        {
          v6 = sub_9C9D40(v56, v81, (unsigned __int8)v91, a3, v59);
          if ( (_BYTE)v6 )
          {
            v60 = *(_BYTE *)ptr != 0;
            *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v60;
            goto LABEL_79;
          }
        }
        goto LABEL_82;
      }
      return v6;
    case 11:
    case 13:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v52 = *(_QWORD *)(a1 + 792);
        v53 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a6;
        sub_8F41A0((__int64)&ptr, v53);
        v6 = sub_9E4580(a1 + 384, v52, &ptr, 0);
        if ( (_BYTE)v6 )
        {
          v54 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
          *(_QWORD *)v54 = 0;
          *(_DWORD *)(v54 + 48) = 1;
          *(_QWORD *)(v54 + 32) = 0;
          *(_QWORD *)(v54 + 24) = 0;
          *(_OWORD *)(v54 + 8) = 0;
        }
        sub_A1C0C0(&ptr);
      }
      return v6;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v27 = *(_QWORD *)(a1 + 568);
        v29 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a6;
        v84 = v29;
        v78 = a1 + 384;
        v30 = sub_A1A5A0(v27, 56);
        sub_A1C070(v93, v30);
        sub_A1A5E0(v27, 56);
        v6 = sub_9E4580(a1 + 384, v84, v93, 0);
        if ( !(_BYTE)v6 )
        {
LABEL_81:
          sub_A1C0C0(v93);
          return v6;
        }
        v31 = s;
        ptr = s;
        v32 = a4 >> 3;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
        if ( !(a4 >> 3) )
        {
LABEL_31:
          v86 = 0;
          v34 = sub_2575E10(a5);
          if ( (unsigned __int8)sub_99D500(v78, v84, (unsigned int)v93, (_DWORD)ptr, v34, a4, (__int64)&v86)
            && (v6 = sub_9C9D40(v78, v84, v86, a3, v35), (_BYTE)v6) )
          {
            v36 = ptr;
            v79 = *(_QWORD *)(a1 + 568);
            v88 = sub_2575D80(a5);
            v37 = v88;
            if ( v88 > 0x40 )
              sub_2585A50(&v87, 1, 0);
            else
              v87 = &dword_0 + 1;
            sub_2592D00(&v87, v36, v37 >> 3);
            v39 = sub_2575D20(&v87, v36, v38);
            v40 = (void *)v39;
            if ( a5 == v39 )
              sub_2581430(&v91, v39, &v87);
            else
              sub_2583C60(&v91, a5, &v87);
            sub_835150((__int64)&v89, (__int64 *)&v91, v41);
            sub_5FF3B0((__int64 *)&v91);
            if ( v88 > 0x40 && v87 )
              operator delete[](v87);
            v44 = sub_A1A4E0(v79, 24);
            if ( v89 == v40 )
              sub_257D000(v44, &v89, v42, v43);
            else
              sub_2576960(v44, &v89);
            sub_5FF3B0((__int64 *)&v89);
          }
          else
          {
LABEL_82:
            v6 = 0;
          }
LABEL_79:
          if ( ptr != s )
            free(ptr);
          goto LABEL_81;
        }
        v33 = &s[v32];
        if ( a4 >> 3 > 0x28 )
        {
          sub_25D6230(&ptr, s, a4 >> 3, 1);
          if ( v32 == si128.m128i_i64[0] )
            goto LABEL_30;
          v31 = (char *)ptr + si128.m128i_i64[0];
          v33 = (char *)ptr + v32;
        }
        memset(v31, 0, v33 - v31);
LABEL_30:
        si128.m128i_i64[0] = a4 >> 3;
        goto LABEL_31;
      }
      return v6;
  }
}

