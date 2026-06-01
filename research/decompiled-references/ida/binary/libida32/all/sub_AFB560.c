__int64 __fastcall sub_AFB560(__int64 a1, const char *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // al
  int v6; // eax
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned int v9; // eax
  size_t v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int8 v31; // al
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  size_t v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  size_t v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // eax
  char v42; // al
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  int v52; // eax
  unsigned int v53; // eax
  unsigned __int8 v54; // al
  int v55; // eax
  __int64 v56; // rax
  int v57; // edx
  const char *v58; // rsi
  __int64 v59; // rax
  unsigned int v60; // eax
  size_t v61; // rax
  size_t v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  _BYTE *v65; // rdx
  size_t v66; // rax
  unsigned int v67; // eax
  int v68; // eax
  unsigned __int8 v69; // al
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  unsigned int v79; // eax
  unsigned __int8 v80; // al
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int8 v84; // al
  int v85; // eax
  __int64 v86; // r13
  __int64 v87; // rax
  unsigned int *v88; // rax
  size_t v89; // rdx
  const char *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned int v96; // eax
  int v97; // eax
  unsigned __int8 v98; // al
  int v99; // eax
  const char *v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rax
  int v103; // eax
  __int64 v104; // rax
  __int64 v105; // rax
  char v106; // dl
  const char *v107; // rsi
  __int64 v108; // rax
  size_t v109; // rax
  size_t v110; // rax
  size_t v111; // rax
  size_t v112; // rax
  char v113; // al
  __int64 v114; // r12
  __int64 v115; // rax
  size_t v116; // rax
  size_t v117; // rax
  int v118; // eax
  int v119; // eax
  int *v120; // r12
  int *v121; // r13
  int *v122; // rbx
  __int64 v123; // rsi
  int v124; // eax
  int v125; // eax
  __int64 v126; // rax
  size_t v127; // rax
  size_t v128; // rax
  size_t v129; // rax
  size_t v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  unsigned __int8 v135; // al
  int v136; // eax
  __int64 v137; // rax
  __int64 v138; // rax
  size_t v139; // rax
  size_t v140; // rax
  size_t v141; // rax
  size_t v142; // rax
  size_t v143; // rax
  size_t v144; // rax
  __int64 v145; // rax
  int v146; // edx
  const char *v147; // rsi
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  int *v151; // r12
  int *v152; // r13
  int *v153; // rbx
  __int64 v154; // rsi
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // r13
  __int64 v164; // rax
  unsigned int *v165; // rax
  size_t v166; // rdx
  const char *v167; // rsi
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // r12
  __int64 v178; // rax
  char v179; // [rsp+2h] [rbp-56h] BYREF
  char v180; // [rsp+3h] [rbp-55h] BYREF
  char v181; // [rsp+4h] [rbp-54h] BYREF
  char v182; // [rsp+5h] [rbp-53h] BYREF
  char v183; // [rsp+6h] [rbp-52h] BYREF
  char v184; // [rsp+7h] [rbp-51h] BYREF
  __int64 v185; // [rsp+8h] [rbp-50h] BYREF
  void *v186; // [rsp+10h] [rbp-48h] BYREF
  __int64 v187; // [rsp+18h] [rbp-40h]
  _BYTE v188[56]; // [rsp+20h] [rbp-38h] BYREF

  result = *(unsigned __int16 *)(a1 + 36);
  switch ( *(_WORD *)(a1 + 36) )
  {
    case 0:
      return sub_AE4960(a1, (__int64)a2);
    case 1:
      return sub_AE5780(a1, (__int64)a2);
    case 2:
      return sub_AE5CF0(a1, (__int64)a2);
    case 3:
      return sub_AE64C0(a1, (__int64)a2);
    case 4:
      return sub_AE68F0(a1, (__int64)a2);
    case 5:
      return sub_AE6B30(a1, (__int64)a2);
    case 6:
      return sub_AE6E30(a1, (__int64)a2);
    case 7:
      return sub_AE70E0(a1, (__int64)a2);
    case 8:
      return sub_AE7320(a1, (__int64)a2);
    case 9:
      return sub_AE7590(a1, (__int64)a2);
    case 0xA:
      return sub_AE7620(a1, (__int64)a2);
    case 0xB:
      return sub_AE8F60(a1, (__int64)a2);
    case 0xC:
      return sub_AE90F0(a1, (__int64)a2);
    case 0xD:
      return sub_AE9B80(a1, (__int64)a2);
    case 0xE:
      return sub_AEBD40(a1, (__int64)a2);
    case 0xF:
      return sub_AEED30(a1, (__int64)a2, a3);
    case 0x10:
      v113 = *(_BYTE *)(a1 + 34);
      v184 = 1;
      if ( (v113 & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, "[[hlsl::contained_type");
      sub_AD7BA0((__int64)a2, &v184);
      v114 = sub_971800((__int64)a2, &byte_22CD811);
      v185 = **(_QWORD **)(a1 + 40);
      sub_F546C0(&v186, &v185);
      v115 = sub_22581D0(v114, v186, v187);
      sub_971800(v115, &byte_22CD811);
      if ( v186 != v188 )
        operator delete(v186);
      if ( !v184 )
        sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, "]]");
    case 0x11:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      v116 = j__strlen("groupshared");
      sub_9717A0((__int64)a2, "groupshared", v116);
      v117 = j__strlen(&byte_22CD811);
      return sub_9717A0((__int64)a2, &byte_22CD811, v117);
    case 0x12:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      v111 = j__strlen("[[hlsl::is_rov");
      sub_9717A0((__int64)a2, "[[hlsl::is_rov", v111);
      v112 = j__strlen("]]");
      return sub_9717A0((__int64)a2, "]]", v112);
    case 0x13:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      v109 = j__strlen("[[hlsl::raw_buffer");
      sub_9717A0((__int64)a2, "[[hlsl::raw_buffer", v109);
      v110 = j__strlen("]]");
      return sub_9717A0((__int64)a2, "]]", v110);
    case 0x14:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, "[[hlsl::resource_class");
      sub_971800((__int64)a2, "(");
      v105 = sub_971800((__int64)a2, "\"");
      v106 = *(_BYTE *)(a1 + 39);
      switch ( v106 )
      {
        case 1:
          v107 = "UAV";
          goto LABEL_479;
        case 0:
          v107 = "SRV";
          goto LABEL_479;
        case 2:
          v107 = "CBuffer";
LABEL_479:
          v108 = sub_971800(v105, v107);
          sub_971800(v108, "\"");
          sub_971800((__int64)a2, ")");
          return sub_971800((__int64)a2, "]]");
        case 3:
          v107 = "Sampler";
          goto LABEL_479;
      }
      return sub_AFE810();
    case 0x15:
      return sub_AE0170(a1, (__int64)a2);
    case 0x16:
      return sub_AF1430(a1, (__int64)a2, a3);
    case 0x17:
      return sub_AF1620(a1, (__int64)a2, a3);
    case 0x18:
      return sub_ADD750(a1, (__int64)a2);
    case 0x19:
      return sub_AD7660(a1, (__int64)a2);
    case 0x1A:
      return sub_AD7540(a1, (__int64)a2);
    case 0x1B:
      return sub_ADCE70(a1, (__int64)a2);
    case 0x1C:
      return sub_ADCDC0(a1, (__int64)a2);
    case 0x1D:
      return sub_ADCD10(a1, (__int64)a2);
    case 0x1E:
      return sub_AE0250(a1, (__int64)a2);
    case 0x1F:
      return sub_ADCCA0(a1, (__int64)a2);
    case 0x20:
      return sub_ADCBF0(a1, (__int64)a2);
    case 0x21:
      return sub_ADCB40(a1, (__int64)a2);
    case 0x22:
      return sub_ADC060(a1, (__int64)a2);
    case 0x23:
      return sub_AD74E0(a1, (__int64)a2);
    case 0x24:
      return sub_AD7300(a1, (__int64)a2);
    case 0x25:
      return sub_AD76C0(a1, (__int64)a2);
    case 0x26:
      return sub_AD7960(a1, (__int64)a2);
    case 0x27:
      return sub_AD7720(a1, (__int64)a2);
    case 0x28:
      return sub_AD77E0(a1, (__int64)a2);
    case 0x29:
      return sub_AD7360(a1, (__int64)a2);
    case 0x2A:
      return sub_AD7480(a1, (__int64)a2);
    case 0x2B:
      return sub_AE8150(a1, (__int64)a2);
    case 0x2C:
      return sub_AEAF30(a1, (__int64)a2, a3);
    case 0x2D:
      return sub_AEBE60(a1, (__int64)a2, a3);
    case 0x2E:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v104 = sub_F83A90(a1);
      else
        v104 = *(_BYTE *)(a1 + 34) >> 4;
      switch ( v104 )
      {
        case 0LL:
        case 1LL:
          sub_971800((__int64)a2, "[[fallthrough");
          result = sub_971800((__int64)a2, "]]");
          break;
        case 2LL:
          sub_971800((__int64)a2, "[[clang::fallthrough");
          result = sub_971800((__int64)a2, "]]");
          break;
        case 3LL:
          sub_971800((__int64)a2, "__attribute__((fallthrough");
          result = sub_971800((__int64)a2, "))");
          break;
        case 4LL:
        case 5LL:
          sub_971800((__int64)a2, "[[gnu::fallthrough");
          result = sub_971800((__int64)a2, "]]");
          break;
        default:
          return sub_AFE810();
      }
      return result;
    case 0x2F:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v103 = sub_F83A90(a1);
      else
        v103 = *(_BYTE *)(a1 + 34) >> 4;
      if ( !v103 )
      {
        sub_971800((__int64)a2, "[branch");
        return sub_971800((__int64)a2, "]");
      }
      if ( v103 != 1 )
        return sub_AFE810();
      sub_971800((__int64)a2, "[flatten");
      return sub_971800((__int64)a2, "]");
    case 0x30:
      v98 = *(_BYTE *)(a1 + 34);
      v183 = 1;
      if ( (v98 & 0xF0) == 0xF0 )
        v99 = sub_F83A90(a1);
      else
        v99 = v98 >> 4;
      if ( v99 )
      {
        if ( v99 != 1 )
          return sub_AFE810();
        v100 = "[loop";
      }
      else
      {
        v100 = "[unroll";
      }
      sub_971800((__int64)a2, v100);
      sub_AD7BA0((__int64)a2, &v183);
      v101 = sub_971800((__int64)a2, &byte_22CD811);
      v102 = sub_2257BD0(v101, *(unsigned int *)(a1 + 40));
      sub_971800(v102, &byte_22CD811);
      if ( !v183 )
        sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, "]");
    case 0x31:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v97 = sub_F83A90(a1);
      else
        v97 = *(_BYTE *)(a1 + 34) >> 4;
      if ( !v97 )
      {
        sub_971800((__int64)a2, "[[likely");
        return sub_971800((__int64)a2, "]]");
      }
      if ( v97 != 1 )
        return sub_AFE810();
      sub_971800((__int64)a2, "[[clang::likely");
      return sub_971800((__int64)a2, "]]");
    case 0x32:
      return sub_ADEFE0(a1, (__int64)a2);
    case 0x33:
      return sub_AE0D00(a1, (__int64)a2);
    case 0x34:
      return sub_AD8D50(a1, (__int64)a2);
    case 0x35:
      return sub_AE58C0(a1, (__int64)a2);
    case 0x36:
      return sub_ADEC00(a1, (__int64)a2);
    case 0x37:
      return sub_AE08E0(a1, (__int64)a2);
    case 0x38:
      return sub_ADA180(a1, (__int64)a2);
    case 0x39:
      return sub_AE2A50(a1, (__int64)a2);
    case 0x3A:
      return sub_AE2AF0(a1, (__int64)a2);
    case 0x3B:
      return sub_AE4530(a1, (__int64)a2);
    case 0x3C:
      return sub_AE6060(a1, (__int64)a2);
    case 0x3D:
      return sub_AE9640(a1, (__int64)a2);
    case 0x3E:
      return sub_AED120(a1, (__int64)a2, a3);
    case 0x3F:
      return sub_AED3A0(a1, (__int64)a2, a3);
    case 0x40:
      return sub_AEDB40(a1, (__int64)a2);
    case 0x41:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v126 = sub_F83A90(a1);
      else
        v126 = *(_BYTE *)(a1 + 34) >> 4;
      switch ( v126 )
      {
        case 0LL:
          sub_971800((__int64)a2, "__attribute__((fastcall");
          result = sub_971800((__int64)a2, "))");
          break;
        case 1LL:
        case 2LL:
          sub_971800((__int64)a2, "[[gnu::fastcall");
          result = sub_971800((__int64)a2, "]]");
          break;
        case 3LL:
          sub_971800((__int64)a2, "__fastcall");
          result = sub_971800((__int64)a2, &byte_22CD811);
          break;
        case 4LL:
          sub_971800((__int64)a2, "_fastcall");
          result = sub_971800((__int64)a2, &byte_22CD811);
          break;
        default:
          return sub_AFE810();
      }
      return result;
    case 0x42:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v125 = sub_F83A90(a1);
      else
        v125 = *(_BYTE *)(a1 + 34) >> 4;
      if ( !v125 )
      {
        sub_971800((__int64)a2, "__attribute__((intel_ocl_bicc");
        return sub_971800((__int64)a2, "))");
      }
      if ( v125 != 1 )
        return sub_AFE810();
      sub_971800((__int64)a2, "[[clang::intel_ocl_bicc");
      return sub_971800((__int64)a2, "]]");
    case 0x43:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v124 = sub_F83A90(a1);
      else
        v124 = *(_BYTE *)(a1 + 34) >> 4;
      if ( !v124 )
      {
        sub_971800((__int64)a2, "__attribute__((lifetimebound");
        return sub_971800((__int64)a2, "))");
      }
      if ( v124 != 1 )
        return sub_AFE810();
      sub_971800((__int64)a2, "[[clang::lifetimebound");
      return sub_971800((__int64)a2, "]]");
    case 0x44:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v119 = sub_F83A90(a1);
      else
        v119 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v119 )
      {
        if ( v119 != 1 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[clang::lifetime_capture_by");
        sub_971800((__int64)a2, &byte_22CD811);
        v151 = *(int **)(a1 + 48);
        v152 = &v151[*(unsigned int *)(a1 + 40)];
        if ( v151 == v152 )
        {
          sub_971800((__int64)a2, &byte_22CD811);
        }
        else
        {
          v153 = *(int **)(a1 + 48);
          sub_971800((__int64)a2, "(");
          while ( 1 )
          {
            v154 = *v153++;
            sub_2257BF0(a2, v154);
            if ( v152 == v153 )
              break;
            sub_971800((__int64)a2, ", ");
          }
          sub_971800((__int64)a2, &byte_22CD811);
          sub_971800((__int64)a2, ")");
        }
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((lifetime_capture_by");
        sub_971800((__int64)a2, &byte_22CD811);
        v120 = *(int **)(a1 + 48);
        v121 = &v120[*(unsigned int *)(a1 + 40)];
        if ( v120 == v121 )
        {
          sub_971800((__int64)a2, &byte_22CD811);
        }
        else
        {
          v122 = *(int **)(a1 + 48);
          sub_971800((__int64)a2, "(");
          while ( 1 )
          {
            v123 = *v122++;
            sub_2257BF0(a2, v123);
            if ( v121 == v122 )
              break;
            sub_971800((__int64)a2, ", ");
          }
          sub_971800((__int64)a2, &byte_22CD811);
          sub_971800((__int64)a2, ")");
        }
        return sub_971800((__int64)a2, "))");
      }
    case 0x45:
      return sub_ADFBC0(a1, (__int64)a2);
    case 0x46:
      return sub_AE0020(a1, (__int64)a2);
    case 0x47:
      return sub_AE0790(a1, (__int64)a2);
    case 0x48:
      return sub_ADD280(a1, (__int64)a2);
    case 0x49:
      return sub_ADC7D0(a1, (__int64)a2);
    case 0x4A:
      return sub_ADC280(a1, (__int64)a2);
    case 0x4B:
      return sub_ADBC50(a1, (__int64)a2);
    case 0x4C:
      return sub_ADBBE0(a1, (__int64)a2);
    case 0x4D:
      return sub_ADBB70(a1, (__int64)a2);
    case 0x4E:
      return sub_ADB530(a1, (__int64)a2);
    case 0x4F:
      return sub_ADB4A0(a1, (__int64)a2);
    case 0x50:
      return sub_ADB2B0(a1, (__int64)a2);
    case 0x51:
      return sub_AF5370(a1, (__int64)a2, a3);
    case 0x52:
      return sub_AF55F0(a1, (__int64)a2, a3);
    case 0x53:
      return sub_ADA470(a1, (__int64)a2);
    case 0x54:
      return sub_AD9E90(a1, (__int64)a2);
    case 0x55:
      return sub_AE0F90(a1, (__int64)a2);
    case 0x56:
      return sub_AD9B30(a1, (__int64)a2);
    case 0x57:
      return sub_AD9880(a1, (__int64)a2);
    case 0x58:
      return sub_AD9220(a1, (__int64)a2);
    case 0x59:
      return sub_AD7840(a1, (__int64)a2);
    case 0x5A:
      return sub_AD8780(a1, (__int64)a2);
    case 0x5B:
      return sub_AE5A40(a1, (__int64)a2);
    case 0x5C:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v118 = sub_F83A90(a1);
      else
        v118 = *(_BYTE *)(a1 + 34) >> 4;
      switch ( v118 )
      {
        case 1:
          sub_971800((__int64)a2, "inout");
          return sub_971800((__int64)a2, &byte_22CD811);
        case 0:
          sub_971800((__int64)a2, "in");
          return sub_971800((__int64)a2, &byte_22CD811);
        case 2:
          sub_971800((__int64)a2, "out");
          return sub_971800((__int64)a2, &byte_22CD811);
      }
      return sub_AFE810();
    case 0x5D:
      return sub_AD9E20(a1, (__int64)a2);
    case 0x5E:
      return sub_AD9AC0(a1, (__int64)a2);
    case 0x5F:
      return sub_AD9A50(a1, (__int64)a2);
    case 0x60:
      return sub_AD99E0(a1, (__int64)a2);
    case 0x61:
      return sub_AE9810(a1, (__int64)a2);
    case 0x62:
      return sub_AEB9E0(a1, (__int64)a2);
    case 0x63:
      return sub_AE0560(a1, (__int64)a2);
    case 0x64:
      return sub_AE0950(a1, (__int64)a2);
    case 0x65:
      return sub_ADE0F0(a1, (__int64)a2);
    case 0x66:
      return sub_ADC660(a1, (__int64)a2);
    case 0x67:
      return sub_ADB0E0(a1, (__int64)a2);
    case 0x68:
      return sub_AD8AF0(a1, (__int64)a2);
    case 0x69:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, ":packoffset");
      sub_971800((__int64)a2, "(");
      v131 = sub_971800((__int64)a2, &byte_22CD811);
      v132 = sub_2257BF0(v131, *(int *)(a1 + 40));
      sub_971800(v132, &byte_22CD811);
      sub_971800((__int64)a2, ", ");
      v133 = sub_971800((__int64)a2, &byte_22CD811);
      v134 = sub_2257BF0(v133, *(int *)(a1 + 44));
      sub_971800(v134, &byte_22CD811);
      sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, &byte_22CD811);
    case 0x6A:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      v129 = j__strlen(":sv_dispatchthreadid");
      sub_9717A0((__int64)a2, ":sv_dispatchthreadid", v129);
      v130 = j__strlen(&byte_22CD811);
      return sub_9717A0((__int64)a2, &byte_22CD811, v130);
    case 0x6B:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      v141 = j__strlen(":sv_groupid");
      sub_9717A0((__int64)a2, ":sv_groupid", v141);
      v142 = j__strlen(&byte_22CD811);
      return sub_9717A0((__int64)a2, &byte_22CD811, v142);
    case 0x6C:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      v139 = j__strlen(":sv_groupindex");
      sub_9717A0((__int64)a2, ":sv_groupindex", v139);
      v140 = j__strlen(&byte_22CD811);
      return sub_9717A0((__int64)a2, &byte_22CD811, v140);
    case 0x6D:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      v143 = j__strlen(":sv_groupthreadid");
      sub_9717A0((__int64)a2, ":sv_groupthreadid", v143);
      v144 = j__strlen(&byte_22CD811);
      return sub_9717A0((__int64)a2, &byte_22CD811, v144);
    case 0x6E:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      v127 = j__strlen(":sv_position");
      sub_9717A0((__int64)a2, ":sv_position", v127);
      v128 = j__strlen(&byte_22CD811);
      return sub_9717A0((__int64)a2, &byte_22CD811, v128);
    case 0x6F:
      return sub_AE2B90(a1, (__int64)a2, a3);
    case 0x70:
      return sub_AE2E30(a1, (__int64)a2, a3);
    case 0x71:
      return sub_AE31A0(a1, (__int64)a2);
    case 0x72:
      return sub_AE3320(a1, (__int64)a2);
    case 0x73:
      return sub_AE34A0(a1, (__int64)a2, a3);
    case 0x74:
      return sub_AE3800(a1, (__int64)a2);
    case 0x75:
      return sub_AE3AD0(a1, (__int64)a2);
    case 0x76:
    case 0x7C:
    case 0x7D:
    case 0x95:
    case 0xA6:
    case 0xAD:
    case 0xC4:
    case 0xC6:
    case 0xEC:
    case 0xFC:
    case 0xFD:
    case 0x124:
    case 0x126:
    case 0x129:
    case 0x13E:
    case 0x149:
    case 0x14A:
    case 0x14B:
    case 0x14C:
    case 0x14D:
    case 0x16A:
    case 0x172:
    case 0x173:
    case 0x1A6:
    case 0x1A8:
    case 0x1B5:
    case 0x1B7:
    case 0x1B8:
    case 0x1B9:
      return result;
    case 0x77:
      return sub_AE3C40(a1, (__int64)a2);
    case 0x78:
      return sub_AE3CE0(a1, (__int64)a2);
    case 0x79:
      return sub_AE4160(a1, (__int64)a2);
    case 0x7A:
      return sub_AE4690(a1, (__int64)a2);
    case 0x7B:
      return sub_AE47E0(a1, (__int64)a2);
    case 0x7E:
      return sub_AE4E30(a1, (__int64)a2, a3);
    case 0x7F:
      return sub_AE53B0(a1, (__int64)a2);
    case 0x80:
      return sub_AE5540(a1, (__int64)a2);
    case 0x81:
      return sub_AE5820(a1, (__int64)a2);
    case 0x82:
      return sub_AE59E0(a1, (__int64)a2);
    case 0x83:
      return sub_AE5F20(a1, (__int64)a2);
    case 0x84:
      return sub_AE5FC0(a1, (__int64)a2);
    case 0x85:
      return sub_AE6100(a1, (__int64)a2);
    case 0x86:
      return sub_AE61B0(a1, (__int64)a2);
    case 0x87:
      return sub_AE6730(a1, (__int64)a2);
    case 0x88:
      return sub_AE6DA0(a1, (__int64)a2);
    case 0x89:
      return sub_AE6EA0(a1, (__int64)a2);
    case 0x8A:
      return sub_AE76B0(a1, (__int64)a2);
    case 0x8B:
      return sub_AE7720(a1, (__int64)a2);
    case 0x8C:
      return sub_AE7830(a1, (__int64)a2);
    case 0x8D:
      return sub_AE7C30(a1, (__int64)a2, a3);
    case 0x8E:
      return sub_AE8550(a1, (__int64)a2);
    case 0x8F:
      return sub_AE8BB0(a1, (__int64)a2);
    case 0x90:
      return sub_AE8C50(a1, (__int64)a2);
    case 0x91:
      return sub_AE8CF0(a1, (__int64)a2);
    case 0x92:
      return sub_AE8D90(a1, (__int64)a2);
    case 0x93:
      return sub_AE8E00(a1, (__int64)a2);
    case 0x94:
      return sub_AE91C0(a1, (__int64)a2);
    case 0x96:
      return sub_AE95B0(a1, (__int64)a2);
    case 0x97:
      return sub_AE9770(a1, (__int64)a2);
    case 0x98:
      return sub_AE98E0(a1, (__int64)a2);
    case 0x99:
      return sub_AE9AE0(a1, (__int64)a2);
    case 0x9A:
      return sub_AE9C20(a1, (__int64)a2);
    case 0x9B:
      return sub_AE9CC0(a1, (__int64)a2);
    case 0x9C:
      return sub_AE9D60(a1, (__int64)a2);
    case 0x9D:
      return sub_AE9DD0(a1, (__int64)a2);
    case 0x9E:
      return sub_AEA090(a1, (__int64)a2);
    case 0x9F:
      return sub_AEA380(a1, (__int64)a2);
    case 0xA0:
      return sub_AEA460(a1, (__int64)a2);
    case 0xA1:
      return sub_AEA540(a1, (__int64)a2);
    case 0xA2:
      return sub_AEA620(a1, (__int64)a2);
    case 0xA3:
      return sub_AEA700(a1, (__int64)a2);
    case 0xA4:
      return sub_AEA7E0(a1, (__int64)a2);
    case 0xA5:
      return sub_AEA8C0(a1, (__int64)a2);
    case 0xA7:
      return sub_AEA9D0(a1, (__int64)a2, a3);
    case 0xA8:
      return sub_AEAD80(a1, (__int64)a2);
    case 0xA9:
      return sub_AEAE60(a1, (__int64)a2);
    case 0xAA:
      return sub_AEB160(a1, (__int64)a2);
    case 0xAB:
      return sub_AEB4E0(a1, (__int64)a2);
    case 0xAC:
      return sub_AEB7D0(a1, (__int64)a2);
    case 0xAE:
      return sub_AEBA80(a1, (__int64)a2);
    case 0xAF:
      return sub_AEBCA0(a1, (__int64)a2);
    case 0xB0:
      return sub_AEBDD0(a1, (__int64)a2);
    case 0xB1:
      return sub_AEC0F0((const char *)a1, a2);
    case 0xB2:
      return sub_AEC2C0(a1, (__int64)a2);
    case 0xB3:
      return sub_AEC390(a1, (__int64)a2);
    case 0xB4:
      return sub_AEC430(a1, (__int64)a2);
    case 0xB5:
      return sub_AEC4D0(a1, (__int64)a2);
    case 0xB6:
      return sub_AEC5E0(a1, (__int64)a2);
    case 0xB7:
      return sub_AEC6E0(a1, (__int64)a2);
    case 0xB8:
      return sub_AEC8E0(a1, (__int64)a2);
    case 0xB9:
      return sub_AECAD0(a1, (__int64)a2);
    case 0xBA:
      return sub_AECB70(a1, (__int64)a2);
    case 0xBB:
      return sub_AECC10(a1, (__int64)a2);
    case 0xBC:
      return sub_AECCB0(a1, (__int64)a2);
    case 0xBD:
      return sub_AECD50(a1, (__int64)a2);
    case 0xBE:
      return sub_AECDF0(a1, (__int64)a2);
    case 0xBF:
      return sub_AECE90(a1, (__int64)a2);
    case 0xC0:
      return sub_AECF30(a1, (__int64)a2);
    case 0xC1:
      return sub_AECFD0(a1, (__int64)a2);
    case 0xC2:
      return sub_AED070(a1, (__int64)a2);
    case 0xC3:
      return sub_AED610(a1, (__int64)a2);
    case 0xC5:
      return sub_AED700(a1, (__int64)a2);
    case 0xC7:
      return sub_AED7C0(a1, (__int64)a2);
    case 0xC8:
      return sub_AED9B0(a1, (__int64)a2);
    case 0xC9:
      return sub_AEDCF0(a1, (__int64)a2);
    case 0xCA:
      return sub_AEE0E0(a1, (__int64)a2, a3);
    case 0xCB:
      return sub_AEE2C0(a1, (__int64)a2);
    case 0xCC:
      return sub_AEE360(a1, (__int64)a2);
    case 0xCD:
      return sub_AEE400(a1, (__int64)a2);
    case 0xCE:
      return sub_AEE460(a1, (__int64)a2, a3);
    case 0xCF:
      return sub_AEE590(a1, (__int64)a2);
    case 0xD0:
      return sub_AEE6F0(a1, (__int64)a2);
    case 0xD1:
      return sub_AEE8D0(a1, (__int64)a2);
    case 0xD2:
      return sub_AEEA70(a1, (__int64)a2);
    case 0xD3:
      return sub_AEEC60(a1, (__int64)a2);
    case 0xD4:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v79 = sub_F83A90(a1);
      else
        v79 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v79 )
      {
        if ( v79 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[clang::require_explicit_initialization");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((require_explicit_initialization");
        return sub_971800((__int64)a2, "))");
      }
    case 0xD5:
      v69 = *(_BYTE *)(a1 + 34);
      v179 = 1;
      if ( (v69 & 0xF0) == 0xF0 )
        v70 = sub_F83A90(a1);
      else
        v70 = v69 >> 4;
      if ( v70 == 1 )
        goto LABEL_650;
      if ( v70 )
      {
        if ( v70 != 2 )
          return sub_AFE810();
LABEL_650:
        sub_971800((__int64)a2, "[[clang::external_source_symbol");
        sub_AD7BA0((__int64)a2, &v179);
        v155 = sub_971800((__int64)a2, "\"");
        v156 = sub_9717A0(v155, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
        sub_971800(v156, "\"");
        sub_AD7BA0((__int64)a2, &v179);
        v157 = sub_971800((__int64)a2, "\"");
        v158 = sub_9717A0(v157, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 56));
        sub_971800(v158, "\"");
        sub_AD7BA0((__int64)a2, &v179);
        v159 = sub_971800((__int64)a2, &byte_22CD811);
        v160 = sub_2257BF0(v159, *(unsigned __int8 *)(a1 + 72));
        sub_971800(v160, &byte_22CD811);
        sub_AD7BA0((__int64)a2, &v179);
        v161 = sub_971800((__int64)a2, "\"");
        v162 = sub_9717A0(v161, *(const void **)(a1 + 80), *(unsigned int *)(a1 + 76));
        sub_971800(v162, "\"");
        if ( !v179 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((external_source_symbol");
        sub_AD7BA0((__int64)a2, &v179);
        v71 = sub_971800((__int64)a2, "\"");
        v72 = sub_9717A0(v71, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
        sub_971800(v72, "\"");
        sub_AD7BA0((__int64)a2, &v179);
        v73 = sub_971800((__int64)a2, "\"");
        v74 = sub_9717A0(v73, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 56));
        sub_971800(v74, "\"");
        sub_AD7BA0((__int64)a2, &v179);
        v75 = sub_971800((__int64)a2, &byte_22CD811);
        v76 = sub_2257BF0(v75, *(unsigned __int8 *)(a1 + 72));
        sub_971800(v76, &byte_22CD811);
        sub_AD7BA0((__int64)a2, &v179);
        v77 = sub_971800((__int64)a2, "\"");
        v78 = sub_9717A0(v77, *(const void **)(a1 + 80), *(unsigned int *)(a1 + 76));
        sub_971800(v78, "\"");
        if ( !v179 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "))");
      }
    case 0xD6:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v68 = sub_F83A90(a1);
      else
        v68 = *(_BYTE *)(a1 + 34) >> 4;
      if ( !v68 )
      {
        sub_971800((__int64)a2, "final");
        return sub_971800((__int64)a2, &byte_22CD811);
      }
      if ( v68 != 1 )
        return sub_AFE810();
      sub_971800((__int64)a2, "sealed");
      return sub_971800((__int64)a2, &byte_22CD811);
    case 0xD7:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v67 = sub_F83A90(a1);
      else
        v67 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v67 )
      {
        if ( v67 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[clang::flag_enum");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((flag_enum");
        return sub_971800((__int64)a2, "))");
      }
    case 0xD8:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v96 = sub_F83A90(a1);
      else
        v96 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v96 )
      {
        if ( v96 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[gnu::flatten");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((flatten");
        return sub_971800((__int64)a2, "))");
      }
    case 0xD9:
      v84 = *(_BYTE *)(a1 + 34);
      v180 = 1;
      if ( (v84 & 0xF0) == 0xF0 )
        v85 = sub_F83A90(a1);
      else
        v85 = v84 >> 4;
      if ( v85 == 1 )
        goto LABEL_656;
      if ( v85 )
      {
        if ( v85 != 2 )
          return sub_AFE810();
LABEL_656:
        sub_971800((__int64)a2, "[[gnu::format");
        sub_AD7BA0((__int64)a2, &v180);
        v163 = sub_971800((__int64)a2, &byte_22CD811);
        v164 = *(_QWORD *)(a1 + 40);
        if ( v164 )
        {
          v165 = *(unsigned int **)(v164 + 16);
          v166 = *v165;
          v167 = (const char *)(v165 + 4);
        }
        else
        {
          v167 = &byte_22CD811;
          v166 = j__strlen(&byte_22CD811);
        }
        v168 = sub_9717A0(v163, v167, v166);
        sub_971800(v168, &byte_22CD811);
        sub_AD7BA0((__int64)a2, &v180);
        v169 = sub_971800((__int64)a2, &byte_22CD811);
        v170 = sub_2257BF0(v169, *(int *)(a1 + 48));
        sub_971800(v170, &byte_22CD811);
        sub_AD7BA0((__int64)a2, &v180);
        v171 = sub_971800((__int64)a2, &byte_22CD811);
        v172 = sub_2257BF0(v171, *(int *)(a1 + 52));
        sub_971800(v172, &byte_22CD811);
        if ( !v180 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((format");
        sub_AD7BA0((__int64)a2, &v180);
        v86 = sub_971800((__int64)a2, &byte_22CD811);
        v87 = *(_QWORD *)(a1 + 40);
        if ( v87 )
        {
          v88 = *(unsigned int **)(v87 + 16);
          v89 = *v88;
          v90 = (const char *)(v88 + 4);
        }
        else
        {
          v90 = &byte_22CD811;
          v89 = j__strlen(&byte_22CD811);
        }
        v91 = sub_9717A0(v86, v90, v89);
        sub_971800(v91, &byte_22CD811);
        sub_AD7BA0((__int64)a2, &v180);
        v92 = sub_971800((__int64)a2, &byte_22CD811);
        v93 = sub_2257BF0(v92, *(int *)(a1 + 48));
        sub_971800(v93, &byte_22CD811);
        sub_AD7BA0((__int64)a2, &v180);
        v94 = sub_971800((__int64)a2, &byte_22CD811);
        v95 = sub_2257BF0(v94, *(int *)(a1 + 52));
        sub_971800(v95, &byte_22CD811);
        if ( !v180 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "))");
      }
    case 0xDA:
      v80 = *(_BYTE *)(a1 + 34);
      v181 = 1;
      if ( (v80 & 0xF0) == 0xF0 )
        v81 = sub_F83A90(a1);
      else
        v81 = v80 >> 4;
      if ( v81 == 1 )
        goto LABEL_664;
      if ( v81 )
      {
        if ( v81 != 2 )
          return sub_AFE810();
LABEL_664:
        sub_971800((__int64)a2, "[[gnu::format_arg");
        sub_AD7BA0((__int64)a2, &v181);
        v173 = sub_971800((__int64)a2, &byte_22CD811);
        v174 = sub_2257BD0(v173, *(_DWORD *)(a1 + 40) & 0x3FFFFFFF);
        sub_971800(v174, &byte_22CD811);
        if ( !v181 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((format_arg");
        sub_AD7BA0((__int64)a2, &v181);
        v82 = sub_971800((__int64)a2, &byte_22CD811);
        v83 = sub_2257BD0(v82, *(_DWORD *)(a1 + 40) & 0x3FFFFFFF);
        sub_971800(v83, &byte_22CD811);
        if ( !v181 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "))");
      }
    case 0xDB:
      return sub_AEF100(a1, (__int64)a2, a3);
    case 0xDC:
      v54 = *(_BYTE *)(a1 + 34);
      v182 = 1;
      if ( (v54 & 0xF0) == 0xF0 )
        v55 = sub_F83A90(a1);
      else
        v55 = v54 >> 4;
      if ( v55 == 1 )
        goto LABEL_621;
      if ( v55 )
      {
        if ( v55 != 2 )
          return sub_AFE810();
LABEL_621:
        sub_971800((__int64)a2, "[[gnu::function_return");
        sub_AD7BA0((__int64)a2, &v182);
        v145 = sub_971800((__int64)a2, "\"");
        v146 = *(_DWORD *)(a1 + 40);
        if ( v146 )
        {
          if ( v146 != 1 )
            return sub_AFE810();
          v147 = "thunk-extern";
        }
        else
        {
          v147 = "keep";
        }
        v148 = sub_971800(v145, v147);
        sub_971800(v148, "\"");
        if ( !v182 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((function_return");
        sub_AD7BA0((__int64)a2, &v182);
        v56 = sub_971800((__int64)a2, "\"");
        v57 = *(_DWORD *)(a1 + 40);
        if ( v57 )
        {
          if ( v57 != 1 )
            return sub_AFE810();
          v58 = "thunk-extern";
        }
        else
        {
          v58 = "keep";
        }
        v59 = sub_971800(v56, v58);
        sub_971800(v59, "\"");
        if ( !v182 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "))");
      }
    case 0xDD:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v53 = sub_F83A90(a1);
      else
        v53 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v53 )
      {
        if ( v53 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[gnu::gnu_inline");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((gnu_inline");
        return sub_971800((__int64)a2, "))");
      }
    case 0xDE:
      return sub_AEF4E0(a1, (__int64)a2, a3);
    case 0xDF:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v52 = sub_F83A90(a1);
      else
        v52 = *(_BYTE *)(a1 + 34) >> 4;
      if ( !v52 )
      {
        sub_971800((__int64)a2, "__attribute__((guarded_var");
        return sub_971800((__int64)a2, "))");
      }
      if ( v52 != 1 )
        return sub_AFE810();
      sub_971800((__int64)a2, "[[clang::guarded_var");
      return sub_971800((__int64)a2, "]]");
    case 0xE0:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v49 = sub_F83A90(a1);
      else
        v49 = *(_BYTE *)(a1 + 34) >> 4;
      if ( !v49 )
      {
        sub_971800((__int64)a2, "__attribute__((managed");
        return sub_971800((__int64)a2, "))");
      }
      if ( v49 != 1 )
        return sub_AFE810();
      sub_971800((__int64)a2, "__declspec(__managed__");
      return sub_971800((__int64)a2, ")");
    case 0xE1:
      v42 = *(_BYTE *)(a1 + 34);
      LOBYTE(v186) = 1;
      if ( (v42 & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, "[numthreads");
      sub_AD7BA0((__int64)a2, &v186);
      v43 = sub_971800((__int64)a2, &byte_22CD811);
      v44 = sub_2257BF0(v43, *(int *)(a1 + 40));
      sub_971800(v44, &byte_22CD811);
      sub_AD7BA0((__int64)a2, &v186);
      v45 = sub_971800((__int64)a2, &byte_22CD811);
      v46 = sub_2257BF0(v45, *(int *)(a1 + 44));
      sub_971800(v46, &byte_22CD811);
      sub_AD7BA0((__int64)a2, &v186);
      v47 = sub_971800((__int64)a2, &byte_22CD811);
      v48 = sub_2257BF0(v47, *(int *)(a1 + 48));
      sub_971800(v48, &byte_22CD811);
      if ( !(_BYTE)v186 )
        sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, "]");
    case 0xE2:
      v26 = *(_BYTE *)(a1 + 34);
      LOBYTE(v186) = 1;
      if ( (v26 & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, ":register");
      sub_AD7BA0((__int64)a2, &v186);
      v27 = sub_971800((__int64)a2, "\"");
      v28 = sub_9717A0(v27, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
      sub_971800(v28, "\"");
      sub_AD7BA0((__int64)a2, &v186);
      v29 = sub_971800((__int64)a2, "\"");
      v30 = sub_9717A0(v29, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 56));
      sub_971800(v30, "\"");
      if ( !(_BYTE)v186 )
        sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, &byte_22CD811);
    case 0xE3:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, "[shader");
      sub_971800((__int64)a2, "(");
      sub_971800((__int64)a2, "\"");
      v23 = sub_AEFD20(*(_DWORD *)(a1 + 40));
      v25 = sub_971800(v24, v23);
      sub_971800(v25, "\"");
      sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, "]");
    case 0xE4:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, "[[vk::constant_id");
      sub_971800((__int64)a2, "(");
      v38 = j__strlen(&byte_22CD811);
      v39 = sub_9717A0((__int64)a2, &byte_22CD811, v38);
      v40 = sub_2257BF0(v39, *(int *)(a1 + 40));
      sub_971800(v40, &byte_22CD811);
      sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, "]]");
    case 0xE5:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, "[[vk::ext_builtin_input");
      sub_971800((__int64)a2, "(");
      v35 = j__strlen(&byte_22CD811);
      v36 = sub_9717A0((__int64)a2, &byte_22CD811, v35);
      v37 = sub_2257BD0(v36, *(unsigned int *)(a1 + 40));
      sub_971800(v37, &byte_22CD811);
      sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, "]]");
    case 0xE6:
      v15 = *(_BYTE *)(a1 + 34);
      LOBYTE(v186) = 1;
      if ( (v15 & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, "[WaveSize");
      sub_AD7BA0((__int64)a2, &v186);
      v16 = sub_971800((__int64)a2, &byte_22CD811);
      v17 = sub_2257BF0(v16, *(int *)(a1 + 40));
      sub_971800(v17, &byte_22CD811);
      sub_AD7BA0((__int64)a2, &v186);
      v18 = sub_971800((__int64)a2, &byte_22CD811);
      v19 = sub_2257BF0(v18, *(int *)(a1 + 44));
      sub_971800(v19, &byte_22CD811);
      sub_AD7BA0((__int64)a2, &v186);
      v20 = sub_971800((__int64)a2, &byte_22CD811);
      v21 = sub_2257BF0(v20, *(int *)(a1 + 48));
      sub_971800(v21, &byte_22CD811);
      if ( !(_BYTE)v186 )
        sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, "]");
    case 0xE7:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v14 = sub_F83A90(a1);
      else
        v14 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v14 )
      {
        if ( v14 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[gnu::hot");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((hot");
        return sub_971800((__int64)a2, "))");
      }
    case 0xE8:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v51 = sub_F83A90(a1);
      else
        v51 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v51 == 1 )
      {
        sub_971800((__int64)a2, "__attribute__((hybrid_patchable");
        return sub_971800((__int64)a2, "))");
      }
      else if ( v51 )
      {
        if ( v51 > 3 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[clang::hybrid_patchable");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__declspec(hybrid_patchable");
        return sub_971800((__int64)a2, ")");
      }
    case 0xE9:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v41 = sub_F83A90(a1);
      else
        v41 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v41 )
      {
        if ( v41 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[clang::ibaction");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((ibaction");
        return sub_971800((__int64)a2, "))");
      }
    case 0xEA:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v22 = sub_F83A90(a1);
      else
        v22 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v22 )
      {
        if ( v22 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[clang::iboutlet");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((iboutlet");
        return sub_971800((__int64)a2, "))");
      }
    case 0xEB:
      v5 = *(_BYTE *)(a1 + 34);
      v184 = 1;
      if ( (v5 & 0xF0) == 0xF0 )
        v6 = sub_F83A90(a1);
      else
        v6 = v5 >> 4;
      if ( v6 == 1 )
        goto LABEL_674;
      if ( v6 )
      {
        if ( v6 != 2 )
          return sub_AFE810();
LABEL_674:
        sub_971800((__int64)a2, "[[clang::iboutletcollection");
        if ( *(_QWORD *)(a1 + 40) )
        {
          sub_AD7BA0((__int64)a2, &v184);
          v177 = sub_971800((__int64)a2, &byte_22CD811);
          v185 = **(_QWORD **)(a1 + 40);
          sub_F546C0(&v186, &v185);
          v178 = sub_22581D0(v177, v186, v187);
          sub_971800(v178, &byte_22CD811);
          if ( v186 != v188 )
            operator delete(v186);
        }
        if ( !v184 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((iboutletcollection");
        if ( *(_QWORD *)(a1 + 40) )
        {
          sub_AD7BA0((__int64)a2, &v184);
          v7 = sub_971800((__int64)a2, &byte_22CD811);
          v185 = **(_QWORD **)(a1 + 40);
          sub_F546C0(&v186, &v185);
          v8 = sub_22581D0(v7, v186, v187);
          sub_971800(v8, &byte_22CD811);
          if ( v186 != v188 )
            operator delete(v186);
        }
        if ( !v184 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "))");
      }
    case 0xED:
      v31 = *(_BYTE *)(a1 + 34);
      LOBYTE(v186) = 1;
      if ( (v31 & 0xF0) == 0xF0 )
        v32 = sub_F83A90(a1);
      else
        v32 = v31 >> 4;
      if ( v32 )
      {
        if ( v32 != 1 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[gnu::init_priority");
        sub_AD7BA0((__int64)a2, &v186);
        v175 = sub_971800((__int64)a2, &byte_22CD811);
        v176 = sub_2257BD0(v175, *(unsigned int *)(a1 + 40));
        sub_971800(v176, &byte_22CD811);
        if ( !(_BYTE)v186 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((init_priority");
        sub_AD7BA0((__int64)a2, &v186);
        v33 = sub_971800((__int64)a2, &byte_22CD811);
        v34 = sub_2257BD0(v33, *(unsigned int *)(a1 + 40));
        sub_971800(v34, &byte_22CD811);
        if ( !(_BYTE)v186 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "))");
      }
    case 0xEE:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v50 = sub_F83A90(a1);
      else
        v50 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v50 )
      {
        if ( v50 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[clang::internal_linkage");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((internal_linkage");
        return sub_971800((__int64)a2, "))");
      }
    case 0xEF:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v13 = sub_F83A90(a1);
      else
        v13 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v13 )
      {
        if ( v13 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[clang::lto_visibility_public");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((lto_visibility_public");
        return sub_971800((__int64)a2, "))");
      }
    case 0xF0:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      sub_971800((__int64)a2, "__declspec(layout_version");
      sub_971800((__int64)a2, "(");
      v10 = j__strlen(&byte_22CD811);
      v11 = sub_9717A0((__int64)a2, &byte_22CD811, v10);
      v12 = sub_2257BD0(v11, *(unsigned int *)(a1 + 40));
      sub_971800(v12, &byte_22CD811);
      sub_971800((__int64)a2, ")");
      return sub_971800((__int64)a2, ")");
    case 0xF1:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v9 = sub_F83A90(a1);
      else
        v9 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v9 )
      {
        if ( v9 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[gnu::leaf");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((leaf");
        return sub_971800((__int64)a2, "))");
      }
    case 0xF2:
      return sub_AF01C0(a1, (__int64)a2, a3);
    case 0xF3:
      return sub_ADF7D0(a1, (__int64)a2);
    case 0xF4:
      return sub_AE0BA0(a1, (__int64)a2);
    case 0xF5:
      return sub_ADFB50(a1, (__int64)a2);
    case 0xF6:
      return sub_AD7B40(a1, (__int64)a2);
    case 0xF7:
      return sub_AD7A20(a1, (__int64)a2);
    case 0xF8:
      return sub_ADF760(a1, (__int64)a2);
    case 0xF9:
      return sub_AD79C0(a1, (__int64)a2);
    case 0xFA:
      return sub_ADF600(a1, (__int64)a2);
    case 0xFB:
      return sub_AE03A0(a1, (__int64)a2);
    case 0xFE:
      return sub_ADF590(a1, (__int64)a2);
    case 0xFF:
      return sub_ADF520(a1, (__int64)a2);
    case 0x100:
      return sub_AE0100(a1, (__int64)a2);
    case 0x101:
      return sub_ADFDF0(a1, (__int64)a2);
    case 0x102:
      return sub_ADF3C0(a1, (__int64)a2);
    case 0x103:
      return sub_ADF350(a1, (__int64)a2);
    case 0x104:
      return sub_AF0AD0(a1, (__int64)a2);
    case 0x105:
      return sub_ADF2B0(a1, (__int64)a2);
    case 0x106:
      return sub_ADF210(a1, (__int64)a2);
    case 0x107:
      return sub_AE04F0(a1, (__int64)a2);
    case 0x108:
      return sub_AE1710(a1, (__int64)a2);
    case 0x109:
      return sub_ADEF70(a1, (__int64)a2);
    case 0x10A:
      return sub_ADFED0(a1, (__int64)a2);
    case 0x10B:
      return sub_ADEED0(a1, (__int64)a2);
    case 0x10C:
      return sub_AD75A0(a1, (__int64)a2);
    case 0x10D:
      return sub_ADEE60(a1, (__int64)a2);
    case 0x10E:
      return sub_ADEDC0(a1, (__int64)a2);
    case 0x10F:
      return sub_ADED50(a1, (__int64)a2);
    case 0x110:
      return sub_ADECE0(a1, (__int64)a2);
    case 0x111:
      return sub_ADFA70(a1, (__int64)a2);
    case 0x112:
      return sub_ADEB90(a1, (__int64)a2);
    case 0x113:
      return sub_ADEB20(a1, (__int64)a2);
    case 0x114:
      return sub_AE0870(a1, (__int64)a2);
    case 0x115:
      return sub_ADEAB0(a1, (__int64)a2);
    case 0x116:
      return sub_AE06B0(a1, (__int64)a2);
    case 0x117:
      return sub_ADEA10(a1, (__int64)a2);
    case 0x118:
      return sub_ADE690(a1, (__int64)a2);
    case 0x119:
      return sub_ADE530(a1, (__int64)a2);
    case 0x11A:
      return sub_ADE4C0(a1, (__int64)a2);
    case 0x11B:
      return sub_ADE450(a1, (__int64)a2);
    case 0x11C:
      return sub_ADE3A0(a1, (__int64)a2);
    case 0x11D:
      return sub_AE0090(a1, (__int64)a2);
    case 0x11E:
      return sub_ADE300(a1, (__int64)a2);
    case 0x11F:
      return sub_AD7600(a1, (__int64)a2);
    case 0x120:
      return sub_ADE2B0(a1, (__int64)a2);
    case 0x121:
      return sub_ADE240(a1, (__int64)a2);
    case 0x122:
      return sub_ADE1D0(a1, (__int64)a2);
    case 0x123:
      return sub_ADE160(a1, (__int64)a2);
    case 0x125:
      return sub_AE0E50(a1, (__int64)a2);
    case 0x127:
      return sub_AF1B70(a1, (__int64)a2, a3);
    case 0x128:
      return sub_AF1BF0(a1, (__int64)a2, a3);
    case 0x12A:
      return sub_ADE080(a1, (__int64)a2);
    case 0x12B:
      return sub_ADE010(a1, (__int64)a2);
    case 0x12C:
      return sub_ADDFA0(a1, (__int64)a2);
    case 0x12D:
      return sub_ADDF30(a1, (__int64)a2);
    case 0x12E:
      return sub_ADDEC0(a1, (__int64)a2);
    case 0x12F:
      return sub_ADDD00(a1, (__int64)a2);
    case 0x130:
      return sub_ADDB40(a1, (__int64)a2);
    case 0x131:
      return sub_AF1EB0(a1, (__int64)a2);
    case 0x132:
      return sub_ADD980(a1, (__int64)a2);
    case 0x133:
      return sub_ADFD10(a1, (__int64)a2);
    case 0x134:
      return sub_ADD910(a1, (__int64)a2);
    case 0x135:
      return sub_AE05D0(a1, (__int64)a2);
    case 0x136:
      return sub_ADD4B0(a1, (__int64)a2);
    case 0x137:
      return sub_AE0330(a1, (__int64)a2);
    case 0x138:
      return sub_ADD210(a1, (__int64)a2);
    case 0x139:
      return sub_AE0640(a1, (__int64)a2);
    case 0x13A:
      return sub_ADD1A0(a1, (__int64)a2);
    case 0x13B:
      return sub_ADFFB0(a1, (__int64)a2);
    case 0x13C:
      return sub_ADFF40(a1, (__int64)a2);
    case 0x13D:
      return sub_AE01E0(a1, (__int64)a2);
    case 0x13F:
      return sub_AF27A0(a1, (__int64)a2, a3);
    case 0x140:
      return sub_AE0C50(a1, (__int64)a2);
    case 0x141:
      return sub_AE02C0(a1, (__int64)a2);
    case 0x142:
      return sub_AD7420(a1, (__int64)a2);
    case 0x143:
      return sub_ADCA40(a1, (__int64)a2);
    case 0x144:
      return sub_AF2D40(a1, (__int64)a2);
    case 0x145:
      return sub_ADFD80(a1, (__int64)a2);
    case 0x146:
      return sub_ADC880(a1, (__int64)a2);
    case 0x147:
      return sub_ADC420(a1, (__int64)a2);
    case 0x148:
      return sub_ADC180(a1, (__int64)a2);
    case 0x14E:
      return sub_ADBEA0(a1, (__int64)a2);
    case 0x14F:
      return sub_ADBCC0(a1, (__int64)a2);
    case 0x150:
      return sub_AF3A40(a1, (__int64)a2, a3);
    case 0x151:
      return sub_ADBB00(a1, (__int64)a2);
    case 0x152:
      return sub_ADBA90(a1, (__int64)a2);
    case 0x153:
      return sub_ADB690(a1, (__int64)a2);
    case 0x154:
      return sub_ADB430(a1, (__int64)a2);
    case 0x155:
      return sub_ADB3C0(a1, (__int64)a2);
    case 0x156:
      return sub_ADB350(a1, (__int64)a2);
    case 0x157:
      return sub_ADB240(a1, (__int64)a2);
    case 0x158:
      return sub_AF3FF0(a1, (__int64)a2);
    case 0x159:
      return sub_AD7AE0(a1, (__int64)a2);
    case 0x15A:
      return sub_AF4510(a1, (__int64)a2, a3);
    case 0x15B:
      return sub_AF46C0(a1, (__int64)a2);
    case 0x15C:
      return sub_AF4BF0(a1, (__int64)a2, a3);
    case 0x15D:
      return sub_ADFA00(a1, (__int64)a2);
    case 0x15E:
      return sub_ADAF20(a1, (__int64)a2);
    case 0x15F:
      return sub_ADAEB0(a1, (__int64)a2);
    case 0x160:
      return sub_ADAE40(a1, (__int64)a2);
    case 0x161:
      return sub_ADAC80(a1, (__int64)a2);
    case 0x162:
      return sub_ADAC10(a1, (__int64)a2);
    case 0x163:
      return sub_ADABA0(a1, (__int64)a2);
    case 0x164:
      return sub_ADA9B0(a1, (__int64)a2);
    case 0x165:
      return sub_ADA920(a1, (__int64)a2);
    case 0x166:
      return sub_ADA750(a1, (__int64)a2);
    case 0x167:
      return sub_ADA590(a1, (__int64)a2);
    case 0x168:
      return sub_ADFE60(a1, (__int64)a2);
    case 0x169:
      return sub_ADA520(a1, (__int64)a2);
    case 0x16B:
      return sub_AD7780(a1, (__int64)a2);
    case 0x16C:
      return sub_AD9F00(a1, (__int64)a2);
    case 0x16D:
      return sub_AD9BA0(a1, (__int64)a2);
    case 0x16E:
      return sub_AE0DB0(a1, (__int64)a2);
    case 0x16F:
      return sub_AE1030(a1, (__int64)a2);
    case 0x170:
      return sub_AD78A0(a1, (__int64)a2);
    case 0x171:
      return sub_AE1610(a1, (__int64)a2);
    case 0x174:
      return sub_AE0EF0(a1, (__int64)a2);
    case 0x175:
      return sub_AD98F0(a1, (__int64)a2);
    case 0x176:
      return sub_AD72A0(a1, (__int64)a2);
    case 0x177:
      return sub_AD9720(a1, (__int64)a2);
    case 0x178:
      return sub_AD95C0(a1, (__int64)a2);
    case 0x179:
      return sub_AE1370(a1, (__int64)a2);
    case 0x17A:
      return sub_AD9460(a1, (__int64)a2);
    case 0x17B:
      return sub_AD92D0(a1, (__int64)a2);
    case 0x17C:
      return sub_AD91B0(a1, (__int64)a2);
    case 0x17D:
      return sub_AD9140(a1, (__int64)a2);
    case 0x17E:
      return sub_AD7900(a1, (__int64)a2);
    case 0x17F:
      return sub_AF61A0(a1, (__int64)a2, a3);
    case 0x180:
      return sub_AF68C0(a1, (__int64)a2);
    case 0x181:
      return sub_AD8F70(a1, (__int64)a2);
    case 0x182:
      return sub_AD8E10(a1, (__int64)a2);
    case 0x183:
      return sub_AD8DA0(a1, (__int64)a2);
    case 0x184:
      return sub_AD8CE0(a1, (__int64)a2);
    case 0x185:
      return sub_AD8C50(a1, (__int64)a2);
    case 0x186:
      return sub_AD8A80(a1, (__int64)a2);
    case 0x187:
      return sub_ADF990(a1, (__int64)a2);
    case 0x188:
      return sub_AD8920(a1, (__int64)a2);
    case 0x189:
      return sub_AF71D0(a1, (__int64)a2);
    case 0x18A:
      return sub_ADF920(a1, (__int64)a2);
    case 0x18B:
      return sub_AD8830(a1, (__int64)a2);
    case 0x18C:
      return sub_AD85B0(a1, (__int64)a2);
    case 0x18D:
      return sub_AD8540(a1, (__int64)a2);
    case 0x18E:
      return sub_AD83C0(a1, (__int64)a2);
    case 0x18F:
      return sub_ADFCA0(a1, (__int64)a2);
    case 0x190:
      return sub_ADFC30(a1, (__int64)a2);
    case 0x191:
      return sub_AD8260(a1, (__int64)a2);
    case 0x192:
      return sub_AD8100(a1, (__int64)a2);
    case 0x193:
      return sub_AD7FA0(a1, (__int64)a2);
    case 0x194:
      return sub_AD7E40(a1, (__int64)a2);
    case 0x195:
      return sub_AF7A00(a1, (__int64)a2, a3);
    case 0x196:
      return sub_AD7DD0(a1, (__int64)a2);
    case 0x197:
      return sub_AD7D30(a1, (__int64)a2);
    case 0x198:
      return sub_AD7BD0(a1, (__int64)a2);
    case 0x199:
      return sub_AF7EE0(a1, (__int64)a2);
    case 0x19A:
      return sub_AE3D50(a1, (__int64)a2);
    case 0x19B:
      return sub_AE4AC0(a1, (__int64)a2);
    case 0x19C:
      return sub_AE4CB0(a1, (__int64)a2, a3);
    case 0x19D:
      return sub_AE9380(a1, (__int64)a2);
    case 0x19E:
      return sub_AEB760(a1, (__int64)a2);
    case 0x19F:
      v135 = *(_BYTE *)(a1 + 34);
      LOBYTE(v185) = 1;
      if ( (v135 & 0xF0) == 0xF0 )
        v136 = sub_F83A90(a1);
      else
        v136 = v135 >> 4;
      if ( v136 == 1 )
        goto LABEL_627;
      if ( v136 )
      {
        if ( v136 != 2 )
          return sub_AFE810();
LABEL_627:
        sub_971800((__int64)a2, "[[gnu::ifunc");
        sub_AD7BA0((__int64)a2, &v185);
        v149 = sub_971800((__int64)a2, "\"");
        v150 = sub_9717A0(v149, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
        sub_971800(v150, "\"");
        if ( !(_BYTE)v185 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((ifunc");
        sub_AD7BA0((__int64)a2, &v185);
        v137 = sub_971800((__int64)a2, "\"");
        v138 = sub_9717A0(v137, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
        sub_971800(v138, "\"");
        if ( !(_BYTE)v185 )
          sub_971800((__int64)a2, ")");
        return sub_971800((__int64)a2, "))");
      }
    case 0x1A0:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        sub_F83A90(a1);
      v61 = j__strlen("#pragma init_seg");
      sub_9717A0((__int64)a2, "#pragma init_seg", v61);
      v62 = j__strlen(" (");
      v63 = sub_9717A0((__int64)a2, " (", v62);
      v64 = sub_9717A0(v63, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
      v65 = *(_BYTE **)(v64 + 32);
      if ( (unsigned __int64)v65 >= *(_QWORD *)(v64 + 24) )
      {
        sub_2257CD0(v64, 41);
      }
      else
      {
        *(_QWORD *)(v64 + 32) = v65 + 1;
        *v65 = 41;
      }
      v66 = j__strlen("\n");
      return sub_9717A0((__int64)a2, "\n", v66);
    case 0x1A1:
      if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
        v60 = sub_F83A90(a1);
      else
        v60 = *(_BYTE *)(a1 + 34) >> 4;
      if ( v60 )
      {
        if ( v60 > 2 )
          return sub_AFE810();
        sub_971800((__int64)a2, "[[clang::loader_uninitialized");
        return sub_971800((__int64)a2, "]]");
      }
      else
      {
        sub_971800((__int64)a2, "__attribute__((loader_uninitialized");
        return sub_971800((__int64)a2, "))");
      }
    case 0x1A2:
      return sub_AF0300(a1, (__int64)a2, a3);
    case 0x1A3:
      return sub_ADF050(a1, (__int64)a2);
    case 0x1A4:
      return sub_AE10D0(a1, (__int64)a2);
    case 0x1A5:
      return sub_AE0800(a1, (__int64)a2);
    case 0x1A7:
      return sub_AF1A20(a1, (__int64)a2, a3);
    case 0x1A9:
      return sub_AE0410(a1, (__int64)a2);
    case 0x1AA:
      return sub_ADDAD0(a1, (__int64)a2);
    case 0x1AB:
      return sub_ADDA60(a1, (__int64)a2);
    case 0x1AC:
      return sub_AE0720(a1, (__int64)a2);
    case 0x1AD:
      return sub_ADD9F0(a1, (__int64)a2);
    case 0x1AE:
      return sub_AE0480(a1, (__int64)a2);
    case 0x1AF:
      return sub_ADD440(a1, (__int64)a2);
    case 0x1B0:
      return sub_ADD040(a1, (__int64)a2);
    case 0x1B1:
      return sub_ADCFD0(a1, (__int64)a2);
    case 0x1B2:
      return sub_ADCF20(a1, (__int64)a2);
    case 0x1B3:
      return sub_ADFAE0(a1, (__int64)a2);
    case 0x1B4:
      return sub_AE17D0(a1, (__int64)a2);
    case 0x1B6:
      return sub_AD7A80(a1, (__int64)a2);
    case 0x1BA:
      return sub_AD73C0(a1, (__int64)a2);
  }
}

