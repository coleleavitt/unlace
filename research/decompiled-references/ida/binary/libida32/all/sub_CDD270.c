__int64 __fastcall sub_CDD270(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  char v8; // dl
  __int64 v9; // rbp
  __int64 v10; // rbp
  unsigned int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rax
  char v14; // dl
  __int64 v15; // rbp
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // rax
  char v20; // dl
  __int64 v21; // rbp
  __int64 v22; // r12
  __int64 v23; // rbp
  unsigned int v24; // eax
  bool v25; // cc
  __int64 v26; // r12
  char v27; // r14
  __int64 v28; // r12
  __int64 v29; // r13
  _BYTE *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rbp
  __int64 v36; // rbp
  __int64 v37; // rax
  char v38; // dl
  __int64 v39; // rbx
  unsigned int v40; // eax
  __int64 v41; // r12
  __int64 v42; // r13
  __int64 v43; // r14
  int v44; // eax
  __m128i *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rbx
  __int64 v48; // rbp
  __int64 v49; // rbp
  __int64 v50; // rax
  char v51; // dl
  __int64 v52; // rbx
  unsigned int v53; // eax
  __int64 v54; // r12
  __int64 v55; // r12
  __m128i *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // r12
  __int64 v59; // r12
  __int64 v60; // r13
  __m128i *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // r12
  __int64 v64; // r12
  int v65; // r13d
  __m128i *v66; // rax
  __int64 v67; // rdi
  __int64 v68; // r12
  __int64 v69; // r12
  __int16 v70; // r13
  __m128i *v71; // rax
  __int64 v72; // rdi
  __int64 v73; // r12
  __int64 v74; // r12
  char v75; // r13
  __m128i *v76; // rax
  __int64 v77; // rdi
  __int64 v78; // r12
  __int64 v79; // r14
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // r12
  __int64 v84; // rbp
  __int64 v85; // rax
  char v86; // dl
  __int64 v87; // rbx
  unsigned int v88; // eax
  __int64 v89; // r12
  __int64 v90; // r14
  __int64 v91; // r12
  char v92; // r13
  _QWORD *v93; // rax
  __int64 v94; // rdi
  __int64 v95; // r12
  __int64 v96; // r14
  __int64 v97; // r12
  __int64 v98; // r13
  _QWORD *v99; // rax
  __int64 v100; // rdi
  __int64 v101; // r12
  __int64 v102; // r14
  __int64 v103; // r13
  __int64 v104; // r15
  int v105; // eax
  _QWORD *v106; // rax
  __int64 v107; // rdi
  __int64 v108; // rbx
  __int64 v109; // r12
  __int64 v110; // r13
  __int64 v111; // r12
  _QWORD *v112; // rax
  __int64 v113; // rdi
  __int64 v114; // r12
  int v115; // r13d
  __int64 v116; // r12
  _DWORD *v117; // rax
  __int64 v118; // rdi
  __int64 v119; // r12
  __int16 v120; // r13
  __int64 v121; // r12
  _WORD *v122; // rax
  __int64 v123; // rdi
  __int64 v124; // r12
  char v125; // r13
  __int64 v126; // r12
  _BYTE *v127; // rax
  __int64 v128; // rdi
  __int64 v129; // r13
  __int64 v130; // r14
  int v131; // eax
  __int64 v132; // r13
  __int64 v133; // r13
  __int64 v134; // rdi
  __int64 v135; // r13
  __int64 v136; // r14
  int v137; // eax
  __int64 v138; // r13
  __int64 v139; // r14
  __int64 v140; // r13
  __int64 v141; // rdi
  __int64 v142; // r13
  __int64 v143; // r13
  __int64 v144; // rax
  __int64 v145; // r13
  __int64 v146; // r13
  __int64 v147; // r14
  __int64 v148; // rax
  __m128i v149; // [rsp+0h] [rbp-98h] BYREF
  __m128i v150; // [rsp+10h] [rbp-88h] BYREF
  void *v151; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v152; // [rsp+28h] [rbp-70h]
  char v153; // [rsp+2Ch] [rbp-6Ch]
  int v154; // [rsp+30h] [rbp-68h]
  __int64 v155; // [rsp+50h] [rbp-48h]
  int v156; // [rsp+58h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      v4 = 1;
      switch ( (int)a3 )
      {
        case 0:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CCFF10((_QWORD *)(a1 + 560));
          }
          break;
        case 1:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CCEDF0((_QWORD *)(a1 + 560));
          }
          break;
        case 2:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CCF910((_QWORD *)(a1 + 560));
          }
          break;
        case 3:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CCF380((_QWORD *)(a1 + 560));
          }
          break;
        case 4:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CCFD90((_QWORD *)(a1 + 560));
          }
          break;
        case 5:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CCEEF0((_QWORD *)(a1 + 560));
          }
          break;
        case 6:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CD0020((_QWORD *)(a1 + 560));
          }
          break;
        case 7:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CCEBF0((_QWORD *)(a1 + 560));
          }
          break;
        case 8:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_420;
          break;
        case 9:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_420;
          break;
        case 10:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CCFE10((_QWORD *)(a1 + 560));
          }
          break;
        case 11:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            v4 = sub_CD3A80(a1, a4);
          break;
        case 12:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CD1C40((_QWORD *)(a1 + 560));
          }
          break;
        case 13:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            v4 = sub_CCD860(a1, a4);
          break;
        case 14:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CD10D0((_QWORD *)(a1 + 560));
          }
          break;
      }
      break;
    case 1:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCEF70((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE670((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF890((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCDE60((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCFA90((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE5F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF710((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE0F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_420;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_420;
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE6F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3680(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD21E0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD0E0(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0640((_QWORD *)(a1 + 560));
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 2:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF100((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF180((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF070((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF400((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD01A0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCFB90((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF990((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE9F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_360;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_360;
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCFA10((_QWORD *)(a1 + 560));
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3780(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1A90((_QWORD *)(a1 + 560));
          }
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD4A0(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0E60((_QWORD *)(a1 + 560));
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 3:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCFC10((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCDFF0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCFF90((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCDEE0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD02A0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE570((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF200((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE770((_QWORD *)(a1 + 560));
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_360;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_360:
            v119 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v120 = *(_WORD *)sub_DFDA20(v119, 8);
            sub_DFDA50(v119, 8);
            v121 = *(_QWORD *)(a1 + 560);
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v121, 16));
            sub_DFDA50(v121, 16);
            v122 = (_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8);
            v123 = *(_QWORD *)(a1 + 560);
            *v122 = v120;
            *(__m128i *)sub_DFD980(v123, 16) = _mm_load_si128(&v149);
          }
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCDF70((_QWORD *)(a1 + 560));
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3980(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1970((_QWORD *)(a1 + 560));
          }
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD260(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD08B0((_QWORD *)(a1 + 560));
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 4:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0220((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCEAF0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD00A0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0120((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD03A0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE8F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCFD10((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCEA70((_QWORD *)(a1 + 560));
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_300;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_300;
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0320((_QWORD *)(a1 + 560));
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3480(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1A00((_QWORD *)(a1 + 560));
          }
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD620(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0CC0((_QWORD *)(a1 + 560));
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 5:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE870((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE7F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCEFF0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE470((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCED70((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE3F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF510((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE2F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_300;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_300:
            v114 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v115 = *(_DWORD *)sub_DFDA20(v114, 8);
            sub_DFDA50(v114, 8);
            v116 = *(_QWORD *)(a1 + 560);
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v116, 16));
            sub_DFDA50(v116, 16);
            v117 = (_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8);
            v118 = *(_QWORD *)(a1 + 560);
            *v117 = v115;
            *(__m128i *)sub_DFD980(v118, 16) = _mm_load_si128(&v149);
          }
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE170((_QWORD *)(a1 + 560));
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3070(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1DF0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD1A0(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0A50((_QWORD *)(a1 + 560));
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 6:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF300((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF280((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF590((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF490((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF690((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF790((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCFC90((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCEC70((_QWORD *)(a1 + 560));
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_240;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_240;
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF810((_QWORD *)(a1 + 560));
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD2E70(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD18E0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD7A0(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0D90((_QWORD *)(a1 + 560));
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 7:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCF610((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE370((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCECF0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE270((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCEB70((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE1F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE970((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v95 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v96 = *(_QWORD *)sub_DFDA20(v95, 8);
            sub_DFDA50(v95, 8);
            v97 = *(_QWORD *)(a1 + 560);
            v98 = *(_QWORD *)sub_DFDA20(v97, 8);
            sub_DFDA50(v97, 8);
            v99 = (_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8);
            v100 = *(_QWORD *)(a1 + 560);
            *v99 = v96;
            *(_QWORD *)sub_DFD980(v100, 8) = v98;
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_240;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_240;
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v89 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v90 = *(_QWORD *)sub_DFDA20(v89, 8);
            sub_DFDA50(v89, 8);
            v91 = *(_QWORD *)(a1 + 560);
            v92 = *(_BYTE *)sub_DFDA20(v91, 8);
            sub_DFDA50(v91, 8);
            v93 = (_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8);
            v94 = *(_QWORD *)(a1 + 560);
            *v93 = v90;
            *(_BYTE *)sub_DFD980(v94, 8) = v92;
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v82 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v83 = *(_QWORD *)sub_DFDA20(v82, 8);
            sub_DFDA50(v82, 8);
            v84 = *(_QWORD *)(a1 + 560);
            v85 = sub_DFDA20(v84, 24);
            v152 = *(_DWORD *)(v85 + 8);
            v151 = *(void **)v85;
            v86 = *(_BYTE *)(v85 + 12);
            *(_DWORD *)(v85 + 8) = 0;
            LODWORD(v85) = *(_DWORD *)(v85 + 16);
            v153 = v86;
            v154 = v85;
            sub_DFDA50(v84, 24);
            *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v83;
            v87 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
            v88 = v152;
            *(_DWORD *)(v87 + 8) = v152;
            if ( v88 > 0x40 )
              sub_21E17D0(v87);
            else
              *(_QWORD *)v87 = v151;
            v25 = v152 <= 0x40;
            *(_BYTE *)(v87 + 12) = v153;
            *(_DWORD *)(v87 + 16) = v154;
            if ( !v25 && v151 )
              operator delete[](v151);
            return 1;
          }
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_240:
            v109 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v110 = *(_QWORD *)sub_DFDA20(v109, 8);
            sub_DFDA50(v109, 8);
            v111 = *(_QWORD *)(a1 + 560);
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v111, 16));
            sub_DFDA50(v111, 16);
            v112 = (_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8);
            v113 = *(_QWORD *)(a1 + 560);
            *v112 = v110;
            *(__m128i *)sub_DFD980(v113, 16) = _mm_load_si128(&v149);
          }
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v78 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v79 = *(_QWORD *)sub_DFDA20(v78, 8);
            sub_DFDA50(v78, 8);
            v80 = *(_QWORD *)(a1 + 560);
            sub_DFDA20(v80, 48);
            sub_DFF520(&v151);
            sub_DFDA50(v80, 48);
            *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v79;
            v81 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
            sub_DFF4A0(v81, &v151);
            sub_DFF560(&v151);
          }
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v101 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v102 = *(_QWORD *)sub_DFDA20(v101, 8);
            sub_DFDA50(v101, 8);
            v103 = *(_QWORD *)(a1 + 560);
            v104 = sub_DFDA20(v103, 64);
            sub_DFF520(&v151);
            v105 = *(_DWORD *)(v104 + 56);
            v155 = *(_QWORD *)(v104 + 48);
            v156 = v105;
            sub_DFDA50(v103, 64);
            v106 = (_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8);
            v107 = *(_QWORD *)(a1 + 560);
            *v106 = v102;
            v108 = sub_DFD980(v107, 64);
            sub_DFF4A0(v108, &v151);
            *(_QWORD *)(v108 + 48) = v155;
            *(_DWORD *)(v108 + 56) = v156;
            sub_DFF560(&v151);
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 8:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_191;
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_191;
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_187;
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_187;
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_183;
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_183;
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_179;
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_179;
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_175;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_175;
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_191;
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v48 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v48, 16));
            sub_DFDA50(v48, 16);
            v49 = *(_QWORD *)(a1 + 560);
            v50 = sub_DFDA20(v49, 24);
            v152 = *(_DWORD *)(v50 + 8);
            v151 = *(void **)v50;
            v51 = *(_BYTE *)(v50 + 12);
            *(_DWORD *)(v50 + 8) = 0;
            LODWORD(v50) = *(_DWORD *)(v50 + 16);
            v153 = v51;
            v154 = v50;
            sub_DFDA50(v49, 24);
            *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v149);
            v52 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
            v53 = v152;
            *(_DWORD *)(v52 + 8) = v152;
            if ( v53 > 0x40 )
              sub_21E17D0(v52);
            else
              *(_QWORD *)v52 = v151;
            v25 = v152 <= 0x40;
            *(_BYTE *)(v52 + 12) = v153;
            *(_DWORD *)(v52 + 16) = v154;
            if ( !v25 && v151 )
              operator delete[](v151);
            return 1;
          }
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_175;
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_125;
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_158;
          return v4;
        default:
          goto LABEL_2;
      }
    case 9:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_191;
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_191;
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_187;
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_187:
            v68 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v68, 16));
            sub_DFDA50(v68, 16);
            v69 = *(_QWORD *)(a1 + 560);
            v70 = *(_WORD *)sub_DFDA20(v69, 8);
            sub_DFDA50(v69, 8);
            v71 = (__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
            v72 = *(_QWORD *)(a1 + 560);
            *v71 = _mm_load_si128(&v149);
            *(_WORD *)sub_DFD980(v72, 8) = v70;
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_183;
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_183:
            v63 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v63, 16));
            sub_DFDA50(v63, 16);
            v64 = *(_QWORD *)(a1 + 560);
            v65 = *(_DWORD *)sub_DFDA20(v64, 8);
            sub_DFDA50(v64, 8);
            v66 = (__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
            v67 = *(_QWORD *)(a1 + 560);
            *v66 = _mm_load_si128(&v149);
            *(_DWORD *)sub_DFD980(v67, 8) = v65;
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_179;
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_179;
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_175;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_175;
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_191:
            v73 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v73, 16));
            sub_DFDA50(v73, 16);
            v74 = *(_QWORD *)(a1 + 560);
            v75 = *(_BYTE *)sub_DFDA20(v74, 8);
            sub_DFDA50(v74, 8);
            v76 = (__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
            v77 = *(_QWORD *)(a1 + 560);
            *v76 = _mm_load_si128(&v149);
            *(_BYTE *)sub_DFD980(v77, 8) = v75;
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v35 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v35, 16));
            sub_DFDA50(v35, 16);
            v36 = *(_QWORD *)(a1 + 560);
            v37 = sub_DFDA20(v36, 24);
            v152 = *(_DWORD *)(v37 + 8);
            v151 = *(void **)v37;
            v38 = *(_BYTE *)(v37 + 12);
            *(_DWORD *)(v37 + 8) = 0;
            LODWORD(v37) = *(_DWORD *)(v37 + 16);
            v153 = v38;
            v154 = v37;
            sub_DFDA50(v36, 24);
            *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v149);
            v39 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
            v40 = v152;
            *(_DWORD *)(v39 + 8) = v152;
            if ( v40 > 0x40 )
              sub_21E17D0(v39);
            else
              *(_QWORD *)v39 = v151;
            v25 = v152 <= 0x40;
            *(_BYTE *)(v39 + 12) = v153;
            *(_DWORD *)(v39 + 16) = v154;
            if ( !v25 && v151 )
              operator delete[](v151);
            return 1;
          }
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_175;
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_125:
            v32 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v32, 16));
            sub_DFDA50(v32, 16);
            v33 = *(_QWORD *)(a1 + 560);
            sub_DFDA20(v33, 48);
            sub_DFF520(&v151);
            sub_DFDA50(v33, 48);
            *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v149);
            v34 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
            sub_DFF4A0(v34, &v151);
            sub_DFF560(&v151);
          }
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_158:
            v41 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v41, 16));
            sub_DFDA50(v41, 16);
            v42 = *(_QWORD *)(a1 + 560);
            v43 = sub_DFDA20(v42, 64);
            sub_DFF520(&v151);
            v44 = *(_DWORD *)(v43 + 56);
            v155 = *(_QWORD *)(v43 + 48);
            v156 = v44;
            sub_DFDA50(v42, 64);
            v45 = (__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
            v46 = *(_QWORD *)(a1 + 560);
            *v45 = _mm_load_si128(&v149);
            v47 = sub_DFD980(v46, 64);
            sub_DFF4A0(v47, &v151);
            *(_QWORD *)(v47 + 48) = v155;
            *(_DWORD *)(v47 + 56) = v156;
            sub_DFF560(&v151);
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 10:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCFE90((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCDDE0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0420((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE070((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCEE70((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCE4F0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCFB10((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v26 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v27 = *(_BYTE *)sub_DFDA20(v26, 8);
            sub_DFDA50(v26, 8);
            v28 = *(_QWORD *)(a1 + 560);
            v29 = *(_QWORD *)sub_DFDA20(v28, 8);
            sub_DFDA50(v28, 8);
            v30 = (_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8);
            v31 = *(_QWORD *)(a1 + 560);
            *v30 = v27;
            *(_QWORD *)sub_DFD980(v31, 8) = v29;
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_420;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_420:
            v124 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v125 = *(_BYTE *)sub_DFDA20(v124, 8);
            sub_DFDA50(v124, 8);
            v126 = *(_QWORD *)(a1 + 560);
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v126, 16));
            sub_DFDA50(v126, 16);
            v127 = (_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8);
            v128 = *(_QWORD *)(a1 + 560);
            *v127 = v125;
            *(__m128i *)sub_DFD980(v128, 16) = _mm_load_si128(&v149);
          }
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CCDD60((_QWORD *)(a1 + 560));
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD2D70(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1BB0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCCEA0(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD04A0((_QWORD *)(a1 + 560));
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 11:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3580(a1, a4);
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD2C70(a1, a4);
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3B80(a1, a4);
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD2A60(a1, a4);
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3880(a1, a4);
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3270(a1, a4);
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3170(a1, a4);
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v18 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v19 = sub_DFDA20(v18, 24);
            v152 = *(_DWORD *)(v19 + 8);
            v151 = *(void **)v19;
            v20 = *(_BYTE *)(v19 + 12);
            *(_DWORD *)(v19 + 8) = 0;
            LODWORD(v19) = *(_DWORD *)(v19 + 16);
            v153 = v20;
            v154 = v19;
            sub_DFDA50(v18, 24);
            v21 = *(_QWORD *)(a1 + 560);
            v22 = *(_QWORD *)sub_DFDA20(v21, 8);
            sub_DFDA50(v21, 8);
            v23 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
            v24 = v152;
            *(_DWORD *)(v23 + 8) = v152;
            if ( v24 > 0x40 )
              sub_21E17D0(v23);
            else
              *(_QWORD *)v23 = v151;
            *(_BYTE *)(v23 + 12) = v153;
            *(_DWORD *)(v23 + 16) = v154;
            v25 = v152 <= 0x40;
            *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v22;
            if ( !v25 && v151 )
              operator delete[](v151);
            return 1;
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v12 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v13 = sub_DFDA20(v12, 24);
            v152 = *(_DWORD *)(v13 + 8);
            v151 = *(void **)v13;
            v14 = *(_BYTE *)(v13 + 12);
            *(_DWORD *)(v13 + 8) = 0;
            LODWORD(v13) = *(_DWORD *)(v13 + 16);
            v153 = v14;
            v154 = v13;
            sub_DFDA50(v12, 24);
            v15 = *(_QWORD *)(a1 + 560);
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v15, 16));
            sub_DFDA50(v15, 16);
            v16 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
            v17 = v152;
            *(_DWORD *)(v16 + 8) = v152;
            if ( v17 > 0x40 )
              sub_21E17D0(v16);
            else
              *(_QWORD *)v16 = v151;
            *(_BYTE *)(v16 + 12) = v153;
            *(_DWORD *)(v16 + 16) = v154;
            *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v149);
            if ( v152 > 0x40 && v151 )
              operator delete[](v151);
            return 1;
          }
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v6 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v7 = sub_DFDA20(v6, 24);
            v152 = *(_DWORD *)(v7 + 8);
            v151 = *(void **)v7;
            v8 = *(_BYTE *)(v7 + 12);
            *(_DWORD *)(v7 + 8) = 0;
            LODWORD(v7) = *(_DWORD *)(v7 + 16);
            v153 = v8;
            v154 = v7;
            sub_DFDA50(v6, 24);
            v9 = *(_QWORD *)(a1 + 560);
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v9, 16));
            sub_DFDA50(v9, 16);
            v10 = sub_DFD980(*(_QWORD *)(a1 + 560), 24);
            v11 = v152;
            *(_DWORD *)(v10 + 8) = v152;
            if ( v11 > 0x40 )
              sub_21E17D0(v10);
            else
              *(_QWORD *)v10 = v151;
            *(_BYTE *)(v10 + 12) = v153;
            *(_DWORD *)(v10 + 16) = v154;
            *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v149);
            if ( v152 > 0x40 && v151 )
              operator delete[](v151);
            return 1;
          }
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD2F70(a1, a4);
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD27A0(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD2B60(a1, a4);
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD2410(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD2650(a1, a4);
          return v4;
        default:
          goto LABEL_2;
      }
    case 12:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD20C0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD2150((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1B20((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1F10((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1FA0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1D60((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1CD0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_179:
            v58 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v58, 16));
            sub_DFDA50(v58, 16);
            v59 = *(_QWORD *)(a1 + 560);
            v60 = *(_QWORD *)sub_DFDA20(v59, 8);
            sub_DFDA50(v59, 8);
            v61 = (__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
            v62 = *(_QWORD *)(a1 + 560);
            *v61 = _mm_load_si128(&v149);
            *(_QWORD *)sub_DFD980(v62, 8) = v60;
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_175;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_175:
            v54 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v150 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v54, 16));
            sub_DFDA50(v54, 16);
            v55 = *(_QWORD *)(a1 + 560);
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v55, 16));
            sub_DFDA50(v55, 16);
            v56 = (__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
            v57 = *(_QWORD *)(a1 + 560);
            *v56 = _mm_load_si128(&v150);
            *(__m128i *)sub_DFD980(v57, 16) = _mm_load_si128(&v149);
          }
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD2030((_QWORD *)(a1 + 560));
          }
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD3370(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1E80((_QWORD *)(a1 + 560));
          }
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCDBE0(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD2270((_QWORD *)(a1 + 560));
          }
          return v4;
        default:
          goto LABEL_2;
      }
    case 13:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD560(a1, a4);
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD320(a1, a4);
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD6E0(a1, a4);
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCCF60(a1, a4);
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD920(a1, a4);
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD020(a1, a4);
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD3E0(a1, a4);
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v145 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            sub_DFDA20(v145, 48);
            sub_DFF520(&v151);
            sub_DFDA50(v145, 48);
            v146 = *(_QWORD *)(a1 + 560);
            v147 = *(_QWORD *)sub_DFDA20(v146, 8);
            sub_DFDA50(v146, 8);
            v148 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
            sub_DFF4A0(v148, &v151);
            *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = v147;
            sub_DFF560(&v151);
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_478;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_478:
            v142 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            sub_DFDA20(v142, 48);
            sub_DFF520(&v151);
            sub_DFDA50(v142, 48);
            v143 = *(_QWORD *)(a1 + 560);
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v143, 16));
            sub_DFDA50(v143, 16);
            v144 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
            sub_DFF4A0(v144, &v151);
            *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 560), 16) = _mm_load_si128(&v149);
            sub_DFF560(&v151);
          }
          return v4;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCCDE0(a1, a4);
          return v4;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CD2530(a1, a4);
          return v4;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCDCA0(a1, a4);
          return v4;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCCD10(a1, a4);
          return v4;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            return (unsigned int)sub_CCD9E0(a1, a4);
          return v4;
        default:
          goto LABEL_2;
      }
    case 14:
      v4 = 1;
      switch ( a3 )
      {
        case 0LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD1000((_QWORD *)(a1 + 560));
          }
          return v4;
        case 1LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0710((_QWORD *)(a1 + 560));
          }
          return v4;
        case 2LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0BF0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 3LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0980((_QWORD *)(a1 + 560));
          }
          return v4;
        case 4LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0B20((_QWORD *)(a1 + 560));
          }
          return v4;
        case 5LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD07E0((_QWORD *)(a1 + 560));
          }
          return v4;
        case 6LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            return (unsigned int)sub_CD0F30((_QWORD *)(a1 + 560));
          }
          return v4;
        case 7LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            v135 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v136 = sub_DFDA20(v135, 64);
            sub_DFF520(&v151);
            v137 = *(_DWORD *)(v136 + 56);
            v155 = *(_QWORD *)(v136 + 48);
            v156 = v137;
            sub_DFDA50(v135, 64);
            v138 = *(_QWORD *)(a1 + 560);
            v139 = *(_QWORD *)sub_DFDA20(v138, 8);
            sub_DFDA50(v138, 8);
            v140 = sub_DFD980(*(_QWORD *)(a1 + 560), 64);
            sub_DFF4A0(v140, &v151);
            v141 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(v140 + 48) = v155;
            *(_DWORD *)(v140 + 56) = v156;
            *(_QWORD *)sub_DFD980(v141, 8) = v139;
            sub_DFF560(&v151);
          }
          return v4;
        case 8LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            goto LABEL_448;
          return v4;
        case 9LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
LABEL_448:
            v129 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(a1 + 1240) = *a4;
            v130 = sub_DFDA20(v129, 64);
            sub_DFF520(&v151);
            v131 = *(_DWORD *)(v130 + 56);
            v155 = *(_QWORD *)(v130 + 48);
            v156 = v131;
            sub_DFDA50(v129, 64);
            v132 = *(_QWORD *)(a1 + 560);
            v149 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v132, 16));
            sub_DFDA50(v132, 16);
            v133 = sub_DFD980(*(_QWORD *)(a1 + 560), 64);
            sub_DFF4A0(v133, &v151);
            v134 = *(_QWORD *)(a1 + 560);
            *(_QWORD *)(v133 + 48) = v155;
            *(_DWORD *)(v133 + 56) = v156;
            *(__m128i *)sub_DFD980(v134, 16) = _mm_load_si128(&v149);
            sub_DFF560(&v151);
          }
          break;
        case 10LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CD0570((_QWORD *)(a1 + 560));
          }
          break;
        case 11LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            v4 = sub_CD2910(a1, a4);
          break;
        case 12LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CD2340((_QWORD *)(a1 + 560));
          }
          break;
        case 13LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
            v4 = sub_CCDAE0(a1, a4);
          break;
        case 14LL:
          if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
          {
            *(_QWORD *)(a1 + 1240) = *a4;
            v4 = sub_CD11A0((_QWORD *)(a1 + 560));
          }
          break;
        default:
LABEL_2:
          BUG();
      }
      return result;
  }
  return v4;
}

