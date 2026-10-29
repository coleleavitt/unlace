/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E0820
// Address: 0x00000000000E0820

//----- (00000000000E0820) ----------------------------------------------------
_QWORD *__fastcall sub_E0820(__int64 a1, _BYTE *a2)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  int v16; // eax
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  int v27; // eax
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  char *v38; // rax
  char *v39; // rbx
  _QWORD *v40; // rbp
  __int64 v41; // rcx
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rdx
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  __m128i v54; // xmm0
  const char *v55; // rdx
  _QWORD *v56; // rax
  _QWORD *v57; // rdx
  _QWORD *v58; // rax
  _QWORD *v59; // rdx
  _QWORD *v60; // rax
  _QWORD *v61; // rdx
  _QWORD *v62; // rax
  _QWORD *v63; // rdx
  char v64; // bp
  char v65; // r12
  char *v66; // r15
  _QWORD *v67; // rbx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // rdx
  _QWORD *v73; // rax
  _QWORD *v74; // rdx
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  _QWORD *v77; // rax
  _QWORD *v78; // rdx
  _QWORD *v79; // rax
  _QWORD *v80; // rdx
  _QWORD *v81; // rax
  _QWORD *v82; // rdx
  _QWORD *v83; // rax
  _QWORD *v84; // rdx
  _QWORD *v85; // rax
  _QWORD *v86; // rdx
  _QWORD *v87; // rax
  _QWORD *v88; // rdx
  _QWORD *v89; // rax
  _QWORD *v90; // rdx
  char *v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  _QWORD *v94; // rax
  _QWORD *v95; // rdx
  _QWORD *v96; // rax
  _QWORD *v97; // rdx
  _QWORD *v98; // rax
  _QWORD *v99; // rdx
  _QWORD *v100; // rax
  _QWORD *v101; // rdx
  _QWORD *v102; // rax
  _QWORD *v103; // rdx
  _QWORD *v104; // rax
  _QWORD *v105; // rdx
  _QWORD *v106; // rax
  _QWORD *v107; // rdx
  __int64 (__fastcall **v108)(); // rdx
  _QWORD *v109; // rax
  _QWORD *v110; // rdx
  _QWORD *v111; // rax
  _QWORD *v112; // rdx
  _QWORD *v113; // rax
  _QWORD *v114; // rdx
  _QWORD *v115; // rax
  _QWORD *v116; // rdx

  v2 = *(char **)a1;
  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( !v3 )
    return nullptr;
  result = nullptr;
  switch ( *v2 )
  {
    case 'a':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'N':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v78 = v5 + 1;
          }
          else
          {
            v77 = (_QWORD *)operator new[](0x1000u);
            *v77 = v5;
            v77[1] = 0;
            *(_QWORD *)(a1 + 4832) = v77;
            v6 = 0;
            v78 = v77 + 1;
            v5 = v77;
          }
          *v78 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator&=";
          goto LABEL_229;
        case 'S':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v80 = v5 + 1;
          }
          else
          {
            v79 = (_QWORD *)operator new[](0x1000u);
            *v79 = v5;
            v79[1] = 0;
            *(_QWORD *)(a1 + 4832) = v79;
            v6 = 0;
            v80 = v79 + 1;
            v5 = v79;
          }
          *v80 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator=";
          goto LABEL_229;
        case 'a':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v82 = v5 + 1;
          }
          else
          {
            v81 = (_QWORD *)operator new[](0x1000u);
            *v81 = v5;
            v81[1] = 0;
            *(_QWORD *)(a1 + 4832) = v81;
            v6 = 0;
            v82 = v81 + 1;
            v5 = v81;
          }
          *v82 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator&&";
          goto LABEL_229;
        case 'd':
        case 'n':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v8 = v5 + 1;
          }
          else
          {
            v7 = (_QWORD *)operator new[](0x1000u);
            *v7 = v5;
            v7[1] = 0;
            *(_QWORD *)(a1 + 4832) = v7;
            v6 = 0;
            v8 = v7 + 1;
            v5 = v7;
          }
          *v8 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator&";
          goto LABEL_229;
        default:
          return result;
      }
      return result;
    case 'c':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'l':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v10 = v5 + 1;
          }
          else
          {
            v9 = (_QWORD *)operator new[](0x1000u);
            *v9 = v5;
            v9[1] = 0;
            *(_QWORD *)(a1 + 4832) = v9;
            v6 = 0;
            v10 = v9 + 1;
            v5 = v9;
          }
          *v10 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator()";
          goto LABEL_229;
        case 'm':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v61 = v5 + 1;
          }
          else
          {
            v60 = (_QWORD *)operator new[](0x1000u);
            *v60 = v5;
            v60[1] = 0;
            *(_QWORD *)(a1 + 4832) = v60;
            v6 = 0;
            v61 = v60 + 1;
            v5 = v60;
          }
          *v61 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator,";
          goto LABEL_229;
        case 'o':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v63 = v5 + 1;
          }
          else
          {
            v62 = (_QWORD *)operator new[](0x1000u);
            *v62 = v5;
            v62[1] = 0;
            *(_QWORD *)(a1 + 4832) = v62;
            v6 = 0;
            v63 = v62 + 1;
            v5 = v62;
          }
          *v63 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator~";
          goto LABEL_229;
        case 'v':
          *(_QWORD *)a1 = v2 + 2;
          v64 = *(_BYTE *)(a1 + 720);
          v65 = *(_BYTE *)(a1 + 721);
          *(_BYTE *)(a1 + 720) = 0;
          *(_BYTE *)(a1 + 721) = v65 != 0 || a2 != nullptr;
          v66 = sub_D4260(a1);
          if ( v66 )
          {
            if ( a2 )
              *a2 = 1;
            v67 = *(_QWORD **)(a1 + 4832);
            v68 = v67[1];
            if ( (unsigned __int64)(v68 + 32) < 0xFF0 )
            {
              v70 = v67 + 1;
            }
            else
            {
              v69 = (_QWORD *)operator new[](0x1000u);
              *v69 = v67;
              v70 = v69 + 1;
              v69[1] = 0;
              *(_QWORD *)(a1 + 4832) = v69;
              v68 = 0;
              v67 = v69;
            }
            *v70 = v68 + 32;
            result = (_QWORD *)((char *)v67 + v68 + 16);
            *(_DWORD *)((char *)v67 + v68 + 24) = 16843012;
            *result = off_152298;
            *(_QWORD *)((char *)v67 + v68 + 32) = v66;
          }
          else
          {
            result = nullptr;
          }
          *(_BYTE *)(a1 + 721) = v65;
          *(_BYTE *)(a1 + 720) = v64;
          break;
        default:
          return result;
      }
      return result;
    case 'd':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'V':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v12 = v5 + 1;
          }
          else
          {
            v11 = (_QWORD *)operator new[](0x1000u);
            *v11 = v5;
            v11[1] = 0;
            *(_QWORD *)(a1 + 4832) = v11;
            v6 = 0;
            v12 = v11 + 1;
            v5 = v11;
          }
          *v12 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator/=";
          goto LABEL_229;
        case 'a':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v84 = v5 + 1;
          }
          else
          {
            v83 = (_QWORD *)operator new[](0x1000u);
            *v83 = v5;
            v83[1] = 0;
            *(_QWORD *)(a1 + 4832) = v83;
            v6 = 0;
            v84 = v83 + 1;
            v5 = v83;
          }
          *v84 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator delete[]";
          goto LABEL_229;
        case 'e':
          goto LABEL_71;
        case 'l':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v86 = v5 + 1;
          }
          else
          {
            v85 = (_QWORD *)operator new[](0x1000u);
            *v85 = v5;
            v85[1] = 0;
            *(_QWORD *)(a1 + 4832) = v85;
            v6 = 0;
            v86 = v85 + 1;
            v5 = v85;
          }
          *v86 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator delete";
          goto LABEL_229;
        case 'v':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v88 = v5 + 1;
          }
          else
          {
            v87 = (_QWORD *)operator new[](0x1000u);
            *v87 = v5;
            v87[1] = 0;
            *(_QWORD *)(a1 + 4832) = v87;
            v6 = 0;
            v88 = v87 + 1;
            v5 = v87;
          }
          *v88 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator/";
          goto LABEL_229;
        default:
          return result;
      }
      return result;
    case 'e':
      if ( v3 < 2 )
        return nullptr;
      v13 = v2[1];
      switch ( v13 )
      {
        case 'O':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v51 = v5 + 1;
          }
          else
          {
            v50 = (_QWORD *)operator new[](0x1000u);
            *v50 = v5;
            v50[1] = 0;
            *(_QWORD *)(a1 + 4832) = v50;
            v6 = 0;
            v51 = v50 + 1;
            v5 = v50;
          }
          *v51 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator^=";
          break;
        case 'q':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v53 = v5 + 1;
          }
          else
          {
            v52 = (_QWORD *)operator new[](0x1000u);
            *v52 = v5;
            v52[1] = 0;
            *(_QWORD *)(a1 + 4832) = v52;
            v6 = 0;
            v53 = v52 + 1;
            v5 = v52;
          }
          *v53 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator==";
          break;
        case 'o':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v15 = v5 + 1;
          }
          else
          {
            v14 = (_QWORD *)operator new[](0x1000u);
            *v14 = v5;
            v14[1] = 0;
            *(_QWORD *)(a1 + 4832) = v14;
            v6 = 0;
            v15 = v14 + 1;
            v5 = v14;
          }
          *v15 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator^";
          break;
        default:
          return nullptr;
      }
      goto LABEL_229;
    case 'g':
      if ( v3 < 2 )
        return nullptr;
      v16 = v2[1];
      if ( v16 == 116 )
      {
        *(_QWORD *)a1 = v2 + 2;
        v5 = *(_QWORD **)(a1 + 4832);
        v6 = v5[1];
        if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
        {
          v45 = v5 + 1;
        }
        else
        {
          v44 = (_QWORD *)operator new[](0x1000u);
          *v44 = v5;
          v44[1] = 0;
          *(_QWORD *)(a1 + 4832) = v44;
          v6 = 0;
          v45 = v44 + 1;
          v5 = v44;
        }
        *v45 = v6 + 32;
        result = (_QWORD *)((char *)v5 + v6 + 16);
        *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
        *result = off_1519B8;
        v54 = (__m128i)(unsigned __int64)"";
        v55 = "operator>";
      }
      else
      {
        if ( v16 != 101 )
          return nullptr;
        *(_QWORD *)a1 = v2 + 2;
        v5 = *(_QWORD **)(a1 + 4832);
        v6 = v5[1];
        if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
        {
          v18 = v5 + 1;
        }
        else
        {
          v17 = (_QWORD *)operator new[](0x1000u);
          *v17 = v5;
          v17[1] = 0;
          *(_QWORD *)(a1 + 4832) = v17;
          v6 = 0;
          v18 = v17 + 1;
          v5 = v17;
        }
        *v18 = v6 + 32;
        result = (_QWORD *)((char *)v5 + v6 + 16);
        *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
        *result = off_1519B8;
        v54 = (__m128i)(unsigned __int64)"";
        v55 = "operator>=";
      }
      goto LABEL_229;
    case 'i':
      if ( v3 < 2 || v2[1] != 120 )
        return nullptr;
      *(_QWORD *)a1 = v2 + 2;
      v5 = *(_QWORD **)(a1 + 4832);
      v6 = v5[1];
      if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
      {
        v20 = v5 + 1;
      }
      else
      {
        v19 = (_QWORD *)operator new[](0x1000u);
        *v19 = v5;
        v19[1] = 0;
        *(_QWORD *)(a1 + 4832) = v19;
        v6 = 0;
        v20 = v19 + 1;
        v5 = v19;
      }
      *v20 = v6 + 32;
      result = (_QWORD *)((char *)v5 + v6 + 16);
      *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
      *result = off_1519B8;
      v54 = (__m128i)(unsigned __int64)"";
      v55 = "operator[]";
      goto LABEL_229;
    case 'l':
      if ( v3 >= 2 )
      {
        result = nullptr;
        switch ( v2[1] )
        {
          case 'S':
            *(_QWORD *)a1 = v2 + 2;
            v5 = *(_QWORD **)(a1 + 4832);
            v6 = v5[1];
            if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
            {
              v22 = v5 + 1;
            }
            else
            {
              v21 = (_QWORD *)operator new[](0x1000u);
              *v21 = v5;
              v21[1] = 0;
              *(_QWORD *)(a1 + 4832) = v21;
              v6 = 0;
              v22 = v21 + 1;
              v5 = v21;
            }
            *v22 = v6 + 32;
            result = (_QWORD *)((char *)v5 + v6 + 16);
            *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
            *result = off_1519B8;
            v54 = (__m128i)(unsigned __int64)"";
            v55 = "operator<<=";
            goto LABEL_229;
          case 'e':
            *(_QWORD *)a1 = v2 + 2;
            v5 = *(_QWORD **)(a1 + 4832);
            v6 = v5[1];
            if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
            {
              v90 = v5 + 1;
            }
            else
            {
              v89 = (_QWORD *)operator new[](0x1000u);
              *v89 = v5;
              v89[1] = 0;
              *(_QWORD *)(a1 + 4832) = v89;
              v6 = 0;
              v90 = v89 + 1;
              v5 = v89;
            }
            *v90 = v6 + 32;
            result = (_QWORD *)((char *)v5 + v6 + 16);
            *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
            *result = off_1519B8;
            v54 = (__m128i)(unsigned __int64)"";
            v55 = "operator<=";
            goto LABEL_229;
          case 'i':
            *(_QWORD *)a1 = v2 + 2;
            v91 = sub_E0570((char **)a1);
            if ( !v91 )
              return nullptr;
            v39 = v91;
            v40 = *(_QWORD **)(a1 + 4832);
            v41 = v40[1];
            if ( (unsigned __int64)(v41 + 32) < 0xFF0 )
            {
              v93 = v40 + 1;
            }
            else
            {
              v92 = (_QWORD *)operator new[](0x1000u);
              *v92 = v40;
              v92[1] = 0;
              *(_QWORD *)(a1 + 4832) = v92;
              v41 = 0;
              v93 = v92 + 1;
              v40 = v92;
            }
            *v93 = v41 + 32;
            result = (_QWORD *)((char *)v40 + v41 + 16);
            *(_DWORD *)((char *)v40 + v41 + 24) = 16843028;
            v108 = off_152308;
            goto LABEL_235;
          case 's':
            *(_QWORD *)a1 = v2 + 2;
            v5 = *(_QWORD **)(a1 + 4832);
            v6 = v5[1];
            if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
            {
              v95 = v5 + 1;
            }
            else
            {
              v94 = (_QWORD *)operator new[](0x1000u);
              *v94 = v5;
              v94[1] = 0;
              *(_QWORD *)(a1 + 4832) = v94;
              v6 = 0;
              v95 = v94 + 1;
              v5 = v94;
            }
            *v95 = v6 + 32;
            result = (_QWORD *)((char *)v5 + v6 + 16);
            *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
            *result = off_1519B8;
            v54 = (__m128i)(unsigned __int64)"";
            v55 = "operator<<";
            goto LABEL_229;
          case 't':
            *(_QWORD *)a1 = v2 + 2;
            v5 = *(_QWORD **)(a1 + 4832);
            v6 = v5[1];
            if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
            {
              v97 = v5 + 1;
            }
            else
            {
              v96 = (_QWORD *)operator new[](0x1000u);
              *v96 = v5;
              v96[1] = 0;
              *(_QWORD *)(a1 + 4832) = v96;
              v6 = 0;
              v97 = v96 + 1;
              v5 = v96;
            }
            *v97 = v6 + 32;
            result = (_QWORD *)((char *)v5 + v6 + 16);
            *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
            *result = off_1519B8;
            v54 = (__m128i)(unsigned __int64)"";
            v55 = "operator<";
            goto LABEL_229;
          default:
            return result;
        }
      }
      return nullptr;
    case 'm':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'I':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v24 = v5 + 1;
          }
          else
          {
            v23 = (_QWORD *)operator new[](0x1000u);
            *v23 = v5;
            v23[1] = 0;
            *(_QWORD *)(a1 + 4832) = v23;
            v6 = 0;
            v24 = v23 + 1;
            v5 = v23;
          }
          *v24 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator-=";
          goto LABEL_229;
        case 'L':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v99 = v5 + 1;
          }
          else
          {
            v98 = (_QWORD *)operator new[](0x1000u);
            *v98 = v5;
            v98[1] = 0;
            *(_QWORD *)(a1 + 4832) = v98;
            v6 = 0;
            v99 = v98 + 1;
            v5 = v98;
          }
          *v99 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator*=";
          goto LABEL_229;
        case 'i':
          goto LABEL_73;
        case 'l':
LABEL_71:
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v47 = v5 + 1;
          }
          else
          {
            v46 = (_QWORD *)operator new[](0x1000u);
            *v46 = v5;
            v46[1] = 0;
            *(_QWORD *)(a1 + 4832) = v46;
            v6 = 0;
            v47 = v46 + 1;
            v5 = v46;
          }
          *v47 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator*";
          goto LABEL_229;
        case 'm':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v101 = v5 + 1;
          }
          else
          {
            v100 = (_QWORD *)operator new[](0x1000u);
            *v100 = v5;
            v100[1] = 0;
            *(_QWORD *)(a1 + 4832) = v100;
            v6 = 0;
            v101 = v100 + 1;
            v5 = v100;
          }
          *v101 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator--";
          goto LABEL_229;
        default:
          return result;
      }
      return result;
    case 'n':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'a':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v26 = v5 + 1;
          }
          else
          {
            v25 = (_QWORD *)operator new[](0x1000u);
            *v25 = v5;
            v25[1] = 0;
            *(_QWORD *)(a1 + 4832) = v25;
            v6 = 0;
            v26 = v25 + 1;
            v5 = v25;
          }
          *v26 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator new[]";
          goto LABEL_229;
        case 'e':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v103 = v5 + 1;
          }
          else
          {
            v102 = (_QWORD *)operator new[](0x1000u);
            *v102 = v5;
            v102[1] = 0;
            *(_QWORD *)(a1 + 4832) = v102;
            v6 = 0;
            v103 = v102 + 1;
            v5 = v102;
          }
          *v103 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator!=";
          goto LABEL_229;
        case 'g':
LABEL_73:
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v49 = v5 + 1;
          }
          else
          {
            v48 = (_QWORD *)operator new[](0x1000u);
            *v48 = v5;
            v48[1] = 0;
            *(_QWORD *)(a1 + 4832) = v48;
            v6 = 0;
            v49 = v48 + 1;
            v5 = v48;
          }
          *v49 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator-";
          goto LABEL_229;
        case 't':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v105 = v5 + 1;
          }
          else
          {
            v104 = (_QWORD *)operator new[](0x1000u);
            *v104 = v5;
            v104[1] = 0;
            *(_QWORD *)(a1 + 4832) = v104;
            v6 = 0;
            v105 = v104 + 1;
            v5 = v104;
          }
          *v105 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator!";
          goto LABEL_229;
        case 'w':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v107 = v5 + 1;
          }
          else
          {
            v106 = (_QWORD *)operator new[](0x1000u);
            *v106 = v5;
            v106[1] = 0;
            *(_QWORD *)(a1 + 4832) = v106;
            v6 = 0;
            v107 = v106 + 1;
            v5 = v106;
          }
          *v107 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator new";
          goto LABEL_229;
        default:
          return result;
      }
      return result;
    case 'o':
      if ( v3 < 2 )
        return nullptr;
      v27 = v2[1];
      switch ( v27 )
      {
        case 'R':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v57 = v5 + 1;
          }
          else
          {
            v56 = (_QWORD *)operator new[](0x1000u);
            *v56 = v5;
            v56[1] = 0;
            *(_QWORD *)(a1 + 4832) = v56;
            v6 = 0;
            v57 = v56 + 1;
            v5 = v56;
          }
          *v57 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator|=";
          break;
        case 'r':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v59 = v5 + 1;
          }
          else
          {
            v58 = (_QWORD *)operator new[](0x1000u);
            *v58 = v5;
            v58[1] = 0;
            *(_QWORD *)(a1 + 4832) = v58;
            v6 = 0;
            v59 = v58 + 1;
            v5 = v58;
          }
          *v59 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator|";
          break;
        case 'o':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v29 = v5 + 1;
          }
          else
          {
            v28 = (_QWORD *)operator new[](0x1000u);
            *v28 = v5;
            v28[1] = 0;
            *(_QWORD *)(a1 + 4832) = v28;
            v6 = 0;
            v29 = v28 + 1;
            v5 = v28;
          }
          *v29 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator||";
          break;
        default:
          return nullptr;
      }
LABEL_229:
      *(__m128i *)((char *)v5 + v6 + 32) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v55, v54);
      break;
    case 'p':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'L':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v110 = v5 + 1;
          }
          else
          {
            v109 = (_QWORD *)operator new[](0x1000u);
            *v109 = v5;
            v109[1] = 0;
            *(_QWORD *)(a1 + 4832) = v109;
            v6 = 0;
            v110 = v109 + 1;
            v5 = v109;
          }
          *v110 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator+=";
          goto LABEL_229;
        case 'l':
        case 's':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v31 = v5 + 1;
          }
          else
          {
            v30 = (_QWORD *)operator new[](0x1000u);
            *v30 = v5;
            v30[1] = 0;
            *(_QWORD *)(a1 + 4832) = v30;
            v6 = 0;
            v31 = v30 + 1;
            v5 = v30;
          }
          *v31 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator+";
          goto LABEL_229;
        case 'm':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v112 = v5 + 1;
          }
          else
          {
            v111 = (_QWORD *)operator new[](0x1000u);
            *v111 = v5;
            v111[1] = 0;
            *(_QWORD *)(a1 + 4832) = v111;
            v6 = 0;
            v112 = v111 + 1;
            v5 = v111;
          }
          *v112 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator->*";
          goto LABEL_229;
        case 'p':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v114 = v5 + 1;
          }
          else
          {
            v113 = (_QWORD *)operator new[](0x1000u);
            *v113 = v5;
            v113[1] = 0;
            *(_QWORD *)(a1 + 4832) = v113;
            v6 = 0;
            v114 = v113 + 1;
            v5 = v113;
          }
          *v114 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator++";
          goto LABEL_229;
        case 't':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v116 = v5 + 1;
          }
          else
          {
            v115 = (_QWORD *)operator new[](0x1000u);
            *v115 = v5;
            v115[1] = 0;
            *(_QWORD *)(a1 + 4832) = v115;
            v6 = 0;
            v116 = v115 + 1;
            v5 = v115;
          }
          *v116 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator->";
          goto LABEL_229;
        default:
          return result;
      }
      return result;
    case 'q':
      if ( v3 < 2 || v2[1] != 117 )
        return nullptr;
      *(_QWORD *)a1 = v2 + 2;
      v5 = *(_QWORD **)(a1 + 4832);
      v6 = v5[1];
      if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
      {
        v33 = v5 + 1;
      }
      else
      {
        v32 = (_QWORD *)operator new[](0x1000u);
        *v32 = v5;
        v32[1] = 0;
        *(_QWORD *)(a1 + 4832) = v32;
        v6 = 0;
        v33 = v32 + 1;
        v5 = v32;
      }
      *v33 = v6 + 32;
      result = (_QWORD *)((char *)v5 + v6 + 16);
      *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
      *result = off_1519B8;
      v54 = (__m128i)(unsigned __int64)"";
      v55 = "operator?";
      goto LABEL_229;
    case 'r':
      if ( v3 < 2 )
        return nullptr;
      result = nullptr;
      switch ( v2[1] )
      {
        case 'M':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v35 = v5 + 1;
          }
          else
          {
            v34 = (_QWORD *)operator new[](0x1000u);
            *v34 = v5;
            v34[1] = 0;
            *(_QWORD *)(a1 + 4832) = v34;
            v6 = 0;
            v35 = v34 + 1;
            v5 = v34;
          }
          *v35 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator%=";
          goto LABEL_229;
        case 'S':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v72 = v5 + 1;
          }
          else
          {
            v71 = (_QWORD *)operator new[](0x1000u);
            *v71 = v5;
            v71[1] = 0;
            *(_QWORD *)(a1 + 4832) = v71;
            v6 = 0;
            v72 = v71 + 1;
            v5 = v71;
          }
          *v72 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator>>=";
          goto LABEL_229;
        case 'm':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v74 = v5 + 1;
          }
          else
          {
            v73 = (_QWORD *)operator new[](0x1000u);
            *v73 = v5;
            v73[1] = 0;
            *(_QWORD *)(a1 + 4832) = v73;
            v6 = 0;
            v74 = v73 + 1;
            v5 = v73;
          }
          *v74 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator%";
          goto LABEL_229;
        case 's':
          *(_QWORD *)a1 = v2 + 2;
          v5 = *(_QWORD **)(a1 + 4832);
          v6 = v5[1];
          if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
          {
            v76 = v5 + 1;
          }
          else
          {
            v75 = (_QWORD *)operator new[](0x1000u);
            *v75 = v5;
            v75[1] = 0;
            *(_QWORD *)(a1 + 4832) = v75;
            v6 = 0;
            v76 = v75 + 1;
            v5 = v75;
          }
          *v76 = v6 + 32;
          result = (_QWORD *)((char *)v5 + v6 + 16);
          *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
          *result = off_1519B8;
          v54 = (__m128i)(unsigned __int64)"";
          v55 = "operator>>";
          goto LABEL_229;
        default:
          return result;
      }
      return result;
    case 's':
      if ( v3 < 2 || v2[1] != 115 )
        return nullptr;
      *(_QWORD *)a1 = v2 + 2;
      v5 = *(_QWORD **)(a1 + 4832);
      v6 = v5[1];
      if ( (unsigned __int64)(v6 + 32) < 0xFF0 )
      {
        v37 = v5 + 1;
      }
      else
      {
        v36 = (_QWORD *)operator new[](0x1000u);
        *v36 = v5;
        v36[1] = 0;
        *(_QWORD *)(a1 + 4832) = v36;
        v6 = 0;
        v37 = v36 + 1;
        v5 = v36;
      }
      *v37 = v6 + 32;
      result = (_QWORD *)((char *)v5 + v6 + 16);
      *(_DWORD *)((char *)v5 + v6 + 24) = 16843015;
      *result = off_1519B8;
      v54 = (__m128i)(unsigned __int64)"";
      v55 = "operator<=>";
      goto LABEL_229;
    case 'v':
      if ( v3 < 2 )
        return nullptr;
      if ( (unsigned int)(v2[1] - 48) > 9 )
        return nullptr;
      *(_QWORD *)a1 = v2 + 2;
      v38 = sub_E0570((char **)a1);
      if ( !v38 )
        return nullptr;
      v39 = v38;
      v40 = *(_QWORD **)(a1 + 4832);
      v41 = v40[1];
      if ( (unsigned __int64)(v41 + 32) < 0xFF0 )
      {
        v43 = v40 + 1;
      }
      else
      {
        v42 = (_QWORD *)operator new[](0x1000u);
        *v42 = v40;
        v42[1] = 0;
        *(_QWORD *)(a1 + 4832) = v42;
        v41 = 0;
        v43 = v42 + 1;
        v40 = v42;
      }
      *v43 = v41 + 32;
      result = (_QWORD *)((char *)v40 + v41 + 16);
      *(_DWORD *)((char *)v40 + v41 + 24) = 16843012;
      v108 = off_152298;
LABEL_235:
      *(_QWORD *)((char *)v40 + v41 + 16) = v108;
      *(_QWORD *)((char *)v40 + v41 + 32) = v39;
      return result;
    default:
      return result;
  }
  return result;
}
// 1519B8: using guessed type __int64 (__fastcall *off_1519B8[7])();
// 152298: using guessed type __int64 (__fastcall *off_152298[7])();
// 152308: using guessed type __int64 (__fastcall *off_152308[7])();
