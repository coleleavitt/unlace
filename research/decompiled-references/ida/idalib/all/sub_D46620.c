__int64 __fastcall sub_D46620(__int64 a1, int a2, unsigned __int8 a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  unsigned int v6; // r14d
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // r14
  _BYTE *v13; // rcx
  char v14; // bp
  __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r14
  _BYTE *v18; // rcx
  __int64 v19; // r8
  __int16 v20; // bp
  __int64 v21; // rsi
  __int64 v22; // r15
  __int64 v23; // r14
  _BYTE *v24; // rcx
  __int64 v25; // r8
  int v26; // ebp
  __int64 v28; // rsi
  int v29; // eax
  __int64 v30; // r8
  __m128i v31; // rax
  void *v32; // rbp
  unsigned int v33; // eax
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rsi
  _QWORD *v37; // r15
  __int64 v38; // r14
  _BYTE *v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  void *v45; // rax
  void *v46; // r15
  void *v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // r15
  __int64 v53; // r14
  _BYTE *v54; // rcx
  __int64 v55; // r8
  bool v56; // bp
  __int64 v57; // rsi
  _QWORD *v58; // r15
  __int64 v59; // r14
  _BYTE *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  void *v65; // rax
  void *v66; // r15
  void *v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // r15
  __int64 v70; // r14
  _BYTE *v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rbp
  __int64 v74; // [rsp-10h] [rbp-128h]
  __int64 v75; // [rsp-10h] [rbp-128h]
  __int64 v76; // [rsp+10h] [rbp-108h]
  __int64 v77; // [rsp+10h] [rbp-108h]
  __int64 v78; // [rsp+10h] [rbp-108h]
  __int64 v79; // [rsp+10h] [rbp-108h]
  __int64 v80; // [rsp+10h] [rbp-108h]
  __int64 v81; // [rsp+10h] [rbp-108h]
  __int64 v82; // [rsp+10h] [rbp-108h]
  __int64 v83; // [rsp+10h] [rbp-108h]
  unsigned __int64 v84; // [rsp+10h] [rbp-108h]
  _QWORD *v85; // [rsp+18h] [rbp-100h]
  unsigned __int8 v86; // [rsp+2Fh] [rbp-E9h] BYREF
  __m128i v87; // [rsp+30h] [rbp-E8h] BYREF
  void *v88[2]; // [rsp+40h] [rbp-D8h] BYREF
  void *v89; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v90; // [rsp+58h] [rbp-C0h]
  _BYTE v91[48]; // [rsp+70h] [rbp-A8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-70h]
  _BYTE v94[96]; // [rsp+B8h] [rbp-60h] BYREF

  v6 = 1;
  switch ( a2 )
  {
    case 0:
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v10 = *(_QWORD *)(a1 + 560);
        v11 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        v12 = *(_QWORD *)(a1 + 1232);
        v76 = v12;
        sub_D09010((__int64)v91, v10);
        v6 = sub_DCC160(a1 + 384, v12, v91, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_82;
        v13 = v94;
        ptr = v94;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        if ( a4 >> 3 )
        {
          sub_CF0880(&ptr, a4 >> 3);
          LODWORD(v13) = (_DWORD)ptr;
        }
        LOBYTE(v89) = 0;
        if ( (unsigned __int8)sub_DA93E0(v11, v76, (unsigned int)v91, (_DWORD)v13, a4, a4, (__int64)&v89) )
        {
          v6 = sub_DCD390(v11, v76, (unsigned __int8)v89, a3, v74);
          if ( (_BYTE)v6 )
          {
            v14 = *(_BYTE *)ptr;
            *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v14;
            goto LABEL_80;
          }
        }
        goto LABEL_83;
      }
      break;
    case 2:
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v15 = *(_QWORD *)(a1 + 560);
        v16 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        v17 = *(_QWORD *)(a1 + 1232);
        v77 = v17;
        sub_D09010((__int64)v91, v15);
        v6 = sub_DCC160(a1 + 384, v17, v91, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_82;
        v18 = v94;
        ptr = v94;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        if ( a4 >> 3 )
        {
          sub_CF0880(&ptr, a4 >> 3);
          LODWORD(v18) = (_DWORD)ptr;
        }
        LOBYTE(v89) = 0;
        if ( (unsigned __int8)sub_DA93E0(v16, v77, (unsigned int)v91, (_DWORD)v18, a4, a4, (__int64)&v89) )
        {
          v6 = sub_DCD390(v16, v77, (unsigned __int8)v89, a3, v19);
          if ( (_BYTE)v6 )
          {
            v20 = *(_WORD *)ptr;
            *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v20;
            goto LABEL_80;
          }
        }
        goto LABEL_83;
      }
      break;
    case 4:
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v21 = *(_QWORD *)(a1 + 560);
        v22 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        v23 = *(_QWORD *)(a1 + 1232);
        v78 = v23;
        sub_D09010((__int64)v91, v21);
        v6 = sub_DCC160(a1 + 384, v23, v91, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_82;
        v24 = v94;
        ptr = v94;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        if ( a4 >> 3 )
        {
          sub_CF0880(&ptr, a4 >> 3);
          LODWORD(v24) = (_DWORD)ptr;
        }
        LOBYTE(v89) = 0;
        if ( (unsigned __int8)sub_DA93E0(v22, v78, (unsigned int)v91, (_DWORD)v24, a4, a4, (__int64)&v89) )
        {
          v6 = sub_DCD390(v22, v78, (unsigned __int8)v89, a3, v25);
          if ( (_BYTE)v6 )
          {
            v26 = *(_DWORD *)ptr;
            *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v26;
            goto LABEL_80;
          }
        }
        goto LABEL_83;
      }
      break;
    case 6:
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v68 = *(_QWORD *)(a1 + 560);
        v69 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        v70 = *(_QWORD *)(a1 + 1232);
        v83 = v70;
        sub_D09010((__int64)v91, v68);
        v6 = sub_DCC160(a1 + 384, v70, v91, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_82;
        v71 = v94;
        ptr = v94;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        if ( a4 >> 3 )
        {
          sub_CF0880(&ptr, a4 >> 3);
          LODWORD(v71) = (_DWORD)ptr;
        }
        LOBYTE(v89) = 0;
        if ( (unsigned __int8)sub_DA93E0(v69, v83, (unsigned int)v91, (_DWORD)v71, a4, a4, (__int64)&v89) )
        {
          v6 = sub_DCD390(v69, v83, (unsigned __int8)v89, a3, v72);
          if ( (_BYTE)v6 )
          {
            v73 = *(_QWORD *)ptr;
            *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v73;
            goto LABEL_80;
          }
        }
        goto LABEL_83;
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v36 = *(_QWORD *)(a1 + 560);
        v37 = (_QWORD *)(a1 + 384);
        *(_QWORD *)(a1 + 1240) = *a6;
        v38 = *(_QWORD *)(a1 + 1232);
        v80 = v38;
        sub_D09010((__int64)v91, v36);
        v6 = sub_DCC160(a1 + 384, v38, v91, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_82;
        v39 = v94;
        ptr = v94;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        if ( a4 >> 3 )
        {
          sub_CF0880(&ptr, a4 >> 3);
          LODWORD(v39) = (_DWORD)ptr;
        }
        v87.m128i_i8[0] = 0;
        if ( (unsigned __int8)sub_DA93E0((_DWORD)v37, v80, (unsigned int)v91, (_DWORD)v39, a4, a4, (__int64)&v87) )
        {
          v6 = sub_DCD390(v37, v80, v87.m128i_u8[0], a3, v40);
          if ( (_BYTE)v6 )
          {
            v45 = (void *)sub_D45A20(v37, a4, v41, v42, v43, v44);
            v46 = ptr;
            v90 = a4;
            v88[0] = v45;
            v88[1] = v47;
            if ( a4 > 0x40 )
              sub_2205470(&v89, 0, 0);
            else
              v89 = nullptr;
            sub_220BA80(&v89, v46, a4 >> 3);
            sub_CF0850(v88, (__int64)&v89);
            if ( v90 > 0x40 && v89 )
              operator delete[](v89);
            goto LABEL_50;
          }
        }
        goto LABEL_83;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v57 = *(_QWORD *)(a1 + 560);
        v58 = (_QWORD *)(a1 + 384);
        *(_QWORD *)(a1 + 1240) = *a6;
        v59 = *(_QWORD *)(a1 + 1232);
        v82 = v59;
        sub_D09010((__int64)v91, v57);
        v6 = sub_DCC160(a1 + 384, v59, v91, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_82;
        v60 = v94;
        ptr = v94;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        if ( a4 >> 3 )
        {
          sub_CF0880(&ptr, a4 >> 3);
          LODWORD(v60) = (_DWORD)ptr;
        }
        v87.m128i_i8[0] = 0;
        if ( (unsigned __int8)sub_DA93E0((_DWORD)v58, v82, (unsigned int)v91, (_DWORD)v60, a4, a4, (__int64)&v87) )
        {
          v6 = sub_DCD390(v58, v82, v87.m128i_u8[0], a3, v75);
          if ( (_BYTE)v6 )
          {
            v65 = (void *)sub_D44EB0(v58, a4, v61, v62, v63, v64);
            v66 = ptr;
            v90 = a4;
            v88[0] = v65;
            v88[1] = v67;
            if ( a4 > 0x40 )
            {
              sub_2205470(&v89, 0, 1);
            }
            else
            {
              v89 = nullptr;
              sub_CF8100((unsigned __int64 *)&v89);
            }
            sub_220BA80(&v89, v66, a4 >> 3);
            sub_D0C590(v88, (__int64)&v89);
            if ( v90 > 0x40 && v89 )
              operator delete[](v89);
LABEL_50:
            *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128((const __m128i *)v88);
            goto LABEL_80;
          }
        }
        goto LABEL_83;
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v51 = *(_QWORD *)(a1 + 560);
        v52 = a1 + 384;
        *(_QWORD *)(a1 + 1240) = *a6;
        v53 = *(_QWORD *)(a1 + 1232);
        v81 = v53;
        sub_D09010((__int64)v91, v51);
        v6 = sub_DCC160(a1 + 384, v53, v91, 0);
        if ( !(_BYTE)v6 )
          goto LABEL_82;
        v54 = v94;
        ptr = v94;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
        if ( a4 >> 3 )
        {
          sub_CF0880(&ptr, a4 >> 3);
          LODWORD(v54) = (_DWORD)ptr;
        }
        LOBYTE(v89) = 0;
        if ( (unsigned __int8)sub_DA93E0(v52, v81, (unsigned int)v91, (_DWORD)v54, a4, a4, (__int64)&v89) )
        {
          v6 = sub_DCD390(v52, v81, (unsigned __int8)v89, a3, v55);
          if ( (_BYTE)v6 )
          {
            v56 = *(_BYTE *)ptr != 0;
            *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v56;
            goto LABEL_80;
          }
        }
        goto LABEL_83;
      }
      break;
    case 11:
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v48 = *(_QWORD *)(a1 + 1232);
        v49 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        sub_D09010((__int64)&ptr, v49);
        v6 = sub_DCC160(a1 + 384, v48, &ptr, 0);
        if ( (_BYTE)v6 )
        {
          v50 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
          *(_QWORD *)v50 = 0;
          *(_DWORD *)(v50 + 24) = 1;
          *(_QWORD *)(v50 + 40) = 0;
          *(_QWORD *)(v50 + 32) = 0;
          *(_OWORD *)(v50 + 8) = 0;
        }
        sub_E232A0(&ptr);
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v28 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a6;
        v85 = (_QWORD *)(a1 + 384);
        v79 = *(_QWORD *)(a1 + 1232);
        sub_D09010((__int64)v91, v28);
        v6 = sub_DCC160(a1 + 384, v79, v91, 0);
        if ( (_BYTE)v6 )
        {
          ptr = v94;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
          if ( a4 >> 3 )
            sub_CF0880(&ptr, a4 >> 3);
          v86 = 0;
          v29 = sub_21F9130(a5);
          if ( (unsigned __int8)sub_DA93E0((_DWORD)v85, v79, (unsigned int)v91, (_DWORD)ptr, v29, a4, (__int64)&v86)
            && (v6 = sub_DCD390(v85, v79, v86, a3, v30), (_BYTE)v6) )
          {
            v31.m128i_i64[0] = sub_D421E0(v85, a5);
            v32 = ptr;
            v87 = v31;
            v33 = sub_21F9120(a5);
            v34 = v33;
            LODWORD(v88[1]) = v33;
            if ( v33 > 0x40 )
            {
              v84 = v33;
              sub_2205470(v88, 1, 0);
              v34 = v84;
            }
            else
            {
              v88[0] = &dword_0 + 1;
            }
            sub_220BA80(v88, v32, v34 >> 3);
            if ( a5 == sub_21F90D0(v88, v32, v35) )
              sub_21FFDA0(&v89, a5, v88);
            else
              sub_21FF7D0(&v89, a5, v88);
            sub_CFED10((__int64)&v87, &v89);
            sub_9955A0(&v89);
            if ( LODWORD(v88[1]) > 0x40 && v88[0] )
              operator delete[](v88[0]);
            *(__m128i *)sub_E216C0(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v87);
          }
          else
          {
LABEL_83:
            v6 = 0;
          }
LABEL_80:
          if ( ptr != v94 )
            free(ptr);
        }
LABEL_82:
        sub_E232A0(v91);
      }
      break;
  }
  return v6;
}
