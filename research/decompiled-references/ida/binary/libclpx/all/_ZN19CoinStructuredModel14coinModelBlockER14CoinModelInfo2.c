CoinModel *__fastcall CoinStructuredModel::coinModelBlock(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(CoinStructuredModel *); // rax
  __int64 v3; // rbx
  unsigned __int64 v4; // r13
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbx
  void *v10; // rax
  CoinModel *v11; // r15
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rax
  const void *v15; // r15
  __int64 v16; // rdx
  double *v17; // rax
  __int64 v18; // rsi
  double *v19; // rax
  double *v20; // rax
  double *v21; // rax
  double *v22; // rdx
  double *v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  _QWORD *v26; // r15
  _DWORD *v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rsi
  int *v30; // rax
  int v31; // edx
  int v32; // ecx
  int *v33; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // r15d
  unsigned __int64 v37; // rax
  _BYTE *v38; // rax
  char v39; // r12
  __int64 v40; // r13
  int v41; // eax
  int v42; // ebx
  __int64 v43; // r14
  int v44; // ecx
  int v45; // r11d
  __int64 v46; // rdx
  int *v47; // rdi
  _DWORD *v48; // r9
  int v49; // eax
  int v50; // r8d
  __int64 v51; // r10
  int *v52; // r13
  int *v53; // r10
  int v54; // ecx
  unsigned __int64 v55; // rax
  int v56; // edx
  double v57; // xmm0_8
  __int64 v58; // rbx
  _QWORD *v59; // r12
  __int64 v60; // rbx
  __int64 v61; // rbx
  __int64 v62; // rdi
  size_t v64; // r12
  size_t v65; // r14
  __int64 v66; // r12
  __int64 v67; // rdx
  _OWORD *v68; // rax
  _DWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  _OWORD *v73; // rax
  _DWORD *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // [rsp+10h] [rbp-170h]
  __int64 v78; // [rsp+18h] [rbp-168h]
  __int64 v79; // [rsp+20h] [rbp-160h]
  int v80; // [rsp+28h] [rbp-158h]
  void *v81; // [rsp+28h] [rbp-158h]
  int v83; // [rsp+38h] [rbp-148h]
  int v84; // [rsp+3Ch] [rbp-144h]
  int v85; // [rsp+40h] [rbp-140h]
  void *v86; // [rsp+40h] [rbp-140h]
  _QWORD *v87; // [rsp+48h] [rbp-138h]
  int v88; // [rsp+50h] [rbp-130h]
  double *v89; // [rsp+58h] [rbp-128h]
  double *v90; // [rsp+60h] [rbp-120h]
  double *v91; // [rsp+68h] [rbp-118h]
  int v92; // [rsp+70h] [rbp-110h]
  int v93; // [rsp+74h] [rbp-10Ch]
  char *v94; // [rsp+78h] [rbp-108h]
  _DWORD *v95; // [rsp+78h] [rbp-108h]
  void *v96; // [rsp+80h] [rbp-100h]
  _DWORD *v97; // [rsp+80h] [rbp-100h]
  double *v98; // [rsp+88h] [rbp-F8h]
  double *v99; // [rsp+90h] [rbp-F0h]
  _DWORD *v100; // [rsp+98h] [rbp-E8h]
  unsigned __int64 v101; // [rsp+A0h] [rbp-E0h]
  __int64 v103; // [rsp+B0h] [rbp-D0h]
  unsigned __int64 v104; // [rsp+B0h] [rbp-D0h]
  double *v105; // [rsp+B8h] [rbp-C8h]
  int v106; // [rsp+C0h] [rbp-C0h]
  int *v107; // [rsp+C0h] [rbp-C0h]
  unsigned int v108; // [rsp+C8h] [rbp-B8h]
  int *v109; // [rsp+C8h] [rbp-B8h]
  __int64 v110; // [rsp+D0h] [rbp-B0h]
  int v111; // [rsp+D0h] [rbp-B0h]
  __int64 v112; // [rsp+D8h] [rbp-A8h]
  int v113; // [rsp+D8h] [rbp-A8h]
  char v114; // [rsp+E0h] [rbp-A0h]
  __int64 v115; // [rsp+E0h] [rbp-A0h]
  __int64 v116; // [rsp+E0h] [rbp-A0h]
  char v118; // [rsp+E8h] [rbp-98h]
  CoinModel *v119; // [rsp+E8h] [rbp-98h]
  int v120; // [rsp+E8h] [rbp-98h]
  __m128i v121; // [rsp+F0h] [rbp-90h] BYREF

  v84 = *((_DWORD *)a1 + 2);
  v92 = *((_DWORD *)a1 + 27);
  v93 = *((_DWORD *)a1 + 3);
  v88 = *((_DWORD *)a1 + 25);
  v83 = *((_DWORD *)a1 + 26);
  v2 = *(__int64 (__fastcall **)(CoinStructuredModel *))(*a1 + 24LL);
  if ( v2 == CoinStructuredModel::numberElements )
  {
    if ( *((int *)a1 + 27) > 0 )
    {
      v3 = 0;
      LODWORD(v4) = 0;
      do
      {
        v6 = *(_QWORD *)(a1[21] + 8 * v3);
        LODWORD(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) + v4;
        ++v3;
      }
      while ( *((_DWORD *)a1 + 27) > (int)v3 );
      *(_QWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_WORD *)(a2 + 12) = 0;
      v87 = (_QWORD *)operator new[](8LL * v92);
      goto LABEL_6;
    }
    *(_QWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_WORD *)(a2 + 12) = 0;
    if ( (unsigned __int64)v92 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v4 = 0;
      v100 = nullptr;
      v87 = (_QWORD *)operator new[](0);
      v91 = nullptr;
      v90 = nullptr;
      v99 = nullptr;
      v98 = nullptr;
      v89 = nullptr;
      goto LABEL_102;
    }
LABEL_246:
    __cxa_throw_bad_array_new_length();
  }
  v4 = ((int (*)(void))v2)();
  *(_WORD *)(a2 + 12) = 0;
  *(_QWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  if ( (unsigned __int64)v92 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_246;
  v87 = (_QWORD *)operator new[](8LL * v92);
  if ( v92 > 0 )
  {
LABEL_6:
    v100 = nullptr;
    v89 = nullptr;
    v98 = nullptr;
    v99 = nullptr;
    v90 = nullptr;
    v91 = nullptr;
    v103 = 8LL * v84;
    v85 = v84 / 8;
    v7 = v93 + 7;
    v80 = v84 % 8;
    if ( v93 >= 0 )
      v7 = v93;
    v106 = v7 >> 3;
    v96 = (void *)(8LL * v93);
    v108 = v93 % 8;
    v8 = (unsigned int)((v7 >> 3) - 1);
    v79 = ((unsigned int)(v84 / 8 - 1) + 1LL) << 6;
    v77 = 32 * v8;
    v78 = 8 * (v8 + 1);
    v94 = (char *)((v8 + 1) << 6);
    v9 = 0;
    while ( 1 )
    {
      v14 = a1[21];
      v121 = _mm_loadu_si128((const __m128i *)(a1[23] + 16 * v9));
      v15 = *(const void **)(v14 + 8 * v9);
      if ( !v15 )
        break;
      v10 = __dynamic_cast(
              *(const void **)(v14 + 8 * v9),
              (const struct __class_type_info *)&`typeinfo for'CoinBaseModel,
              (const struct __class_type_info *)&`typeinfo for'CoinStructuredModel,
              0);
      if ( !v10 )
      {
        v11 = (CoinModel *)__dynamic_cast(
                             v15,
                             (const struct __class_type_info *)&`typeinfo for'CoinBaseModel,
                             (const struct __class_type_info *)&`typeinfo for'CoinModel,
                             0);
LABEL_11:
        CoinStructuredModel::fillInfo((CoinStructuredModel *)a1);
        goto LABEL_12;
      }
      v11 = (CoinModel *)CoinStructuredModel::coinModelBlock(v10, &v121);
      CoinStructuredModel::fillInfo((CoinStructuredModel *)a1);
      CoinStructuredModel::setCoinModel((CoinStructuredModel *)a1, v11, v9);
LABEL_12:
      v12 = v121.m128i_i8[9] == 0;
      v87[v9] = v11;
      if ( !v12 && !*(_BYTE *)(a2 + 9) )
      {
        *(_BYTE *)(a2 + 9) = 1;
        if ( (unsigned __int64)v84 > 0xFFFFFFFFFFFFFFFLL )
          goto LABEL_246;
        v91 = (double *)operator new[](v103);
        v90 = (double *)operator new[](v103);
        if ( v84 )
        {
          if ( v85 > 0 )
          {
            v21 = v91;
            v22 = (double *)((char *)v91 + v79);
            do
            {
              *v21 = -1.797693134862316e308;
              v21 += 8;
              *(v21 - 7) = -1.797693134862316e308;
              *(v21 - 6) = -1.797693134862316e308;
              *(v21 - 5) = -1.797693134862316e308;
              *(v21 - 4) = -1.797693134862316e308;
              *(v21 - 3) = -1.797693134862316e308;
              *(v21 - 2) = -1.797693134862316e308;
              *(v21 - 1) = -1.797693134862316e308;
            }
            while ( v22 != v21 );
            switch ( v80 )
            {
              case 1:
                goto LABEL_88;
              case 2:
                goto LABEL_93;
              case 3:
                goto LABEL_95;
              case 4:
                goto LABEL_98;
              case 5:
                goto LABEL_171;
              case 6:
                goto LABEL_177;
              case 7:
                goto LABEL_231;
              default:
                goto LABEL_89;
            }
          }
          switch ( v80 )
          {
            case 1:
              v22 = v91;
              goto LABEL_88;
            case 2:
              v22 = v91;
LABEL_93:
              v22[1] = -1.797693134862316e308;
              goto LABEL_88;
            case 3:
              v22 = v91;
LABEL_95:
              v22[2] = -1.797693134862316e308;
              goto LABEL_96;
            case 4:
              v22 = v91;
LABEL_98:
              v22[3] = -1.797693134862316e308;
              goto LABEL_99;
            case 5:
              v22 = v91;
LABEL_171:
              v22[4] = -1.797693134862316e308;
              goto LABEL_172;
            case 6:
              v22 = v91;
LABEL_177:
              v22[5] = -1.797693134862316e308;
              goto LABEL_178;
            case 7:
              v22 = v91;
LABEL_231:
              v22[6] = -1.797693134862316e308;
              v22[5] = -1.797693134862316e308;
LABEL_178:
              v22[4] = -1.797693134862316e308;
LABEL_172:
              v22[3] = -1.797693134862316e308;
LABEL_99:
              v22[2] = -1.797693134862316e308;
LABEL_96:
              v22[1] = -1.797693134862316e308;
LABEL_88:
              *v22 = -1.797693134862316e308;
              if ( v85 <= 0 )
              {
                v23 = v90;
              }
              else
              {
LABEL_89:
                v23 = v90;
                do
                {
                  *v23 = 1.797693134862316e308;
                  v23 += 8;
                  *(v23 - 7) = 1.797693134862316e308;
                  *(v23 - 6) = 1.797693134862316e308;
                  *(v23 - 5) = 1.797693134862316e308;
                  *(v23 - 4) = 1.797693134862316e308;
                  *(v23 - 3) = 1.797693134862316e308;
                  *(v23 - 2) = 1.797693134862316e308;
                  *(v23 - 1) = 1.797693134862316e308;
                }
                while ( v23 != (double *)((char *)v90 + v79) );
              }
              switch ( v80 )
              {
                case 1:
                  goto LABEL_229;
                case 2:
                  goto LABEL_228;
                case 3:
                  goto LABEL_227;
                case 4:
                  goto LABEL_226;
                case 5:
                  goto LABEL_225;
                case 6:
                  goto LABEL_224;
                case 7:
                  v23[6] = 1.797693134862316e308;
LABEL_224:
                  v23[5] = 1.797693134862316e308;
LABEL_225:
                  v23[4] = 1.797693134862316e308;
LABEL_226:
                  v23[3] = 1.797693134862316e308;
LABEL_227:
                  v23[2] = 1.797693134862316e308;
LABEL_228:
                  v23[1] = 1.797693134862316e308;
LABEL_229:
                  *v23 = 1.797693134862316e308;
                  break;
                default:
                  goto LABEL_16;
              }
              break;
            default:
              break;
          }
        }
      }
LABEL_16:
      if ( v121.m128i_i8[12] && !*(_BYTE *)(a2 + 12) )
      {
        *(_BYTE *)(a2 + 12) = 1;
        if ( (unsigned __int64)v93 > 0xFFFFFFFFFFFFFFFLL )
          goto LABEL_246;
        v99 = (double *)operator new[]((unsigned __int64)v96);
        v98 = (double *)operator new[]((unsigned __int64)v96);
        v89 = (double *)operator new[]((unsigned __int64)v96);
        if ( v93 )
        {
          if ( v106 > 0 )
          {
            v17 = v99;
            do
            {
              *v17 = 0.0;
              v17[1] = 0.0;
              v17 += 8;
              *(v17 - 6) = 0.0;
              *(v17 - 5) = 0.0;
              *(v17 - 4) = 0.0;
              *(v17 - 3) = 0.0;
              *(v17 - 2) = 0.0;
              *(v17 - 1) = 0.0;
            }
            while ( v17 != (double *)&v94[(_QWORD)v99] );
            v18 = v108;
            switch ( v108 )
            {
              case 1u:
                goto LABEL_51;
              case 2u:
                goto LABEL_76;
              case 3u:
                goto LABEL_78;
              case 4u:
                goto LABEL_81;
              case 5u:
                goto LABEL_183;
              case 6u:
                goto LABEL_186;
              case 7u:
                goto LABEL_233;
              default:
                goto LABEL_52;
            }
          }
          v18 = v108;
          switch ( v108 )
          {
            case 0u:
              goto LABEL_235;
            case 1u:
              v17 = v99;
              goto LABEL_51;
            case 2u:
              v17 = v99;
LABEL_76:
              v17[1] = 0.0;
              goto LABEL_51;
            case 3u:
              v17 = v99;
LABEL_78:
              v17[2] = 0.0;
              goto LABEL_79;
            case 4u:
              v17 = v99;
LABEL_81:
              v17[3] = 0.0;
              goto LABEL_82;
            case 5u:
              v17 = v99;
LABEL_183:
              v17[4] = 0.0;
              goto LABEL_184;
            case 6u:
              v17 = v99;
LABEL_186:
              v17[5] = 0.0;
              goto LABEL_187;
            case 7u:
              v17 = v99;
LABEL_233:
              v17[6] = 0.0;
              v17[5] = 0.0;
LABEL_187:
              v17[4] = 0.0;
LABEL_184:
              v17[3] = 0.0;
LABEL_82:
              v17[2] = 0.0;
LABEL_79:
              v17[1] = 0.0;
LABEL_51:
              *v17 = 0.0;
              if ( v106 > 0 )
              {
LABEL_52:
                v19 = v98;
                do
                {
                  *v19 = 1.797693134862316e308;
                  v19 += 8;
                  *(v19 - 7) = 1.797693134862316e308;
                  *(v19 - 6) = 1.797693134862316e308;
                  *(v19 - 5) = 1.797693134862316e308;
                  *(v19 - 4) = 1.797693134862316e308;
                  *(v19 - 3) = 1.797693134862316e308;
                  *(v19 - 2) = 1.797693134862316e308;
                  *(v19 - 1) = 1.797693134862316e308;
                }
                while ( v19 != (double *)&v94[(_QWORD)v98] );
                switch ( v108 )
                {
                  case 1u:
                    goto LABEL_56;
                  case 2u:
                    goto LABEL_68;
                  case 3u:
                    goto LABEL_70;
                  case 4u:
                    goto LABEL_73;
                  case 5u:
                    goto LABEL_174;
                  case 6u:
                    goto LABEL_180;
                  case 7u:
                    goto LABEL_222;
                  default:
                    goto LABEL_57;
                }
              }
LABEL_235:
              switch ( v18 )
              {
                case 1LL:
                  v19 = v98;
                  goto LABEL_56;
                case 2LL:
                  v19 = v98;
LABEL_68:
                  v19[1] = 1.797693134862316e308;
                  goto LABEL_56;
                case 3LL:
                  v19 = v98;
LABEL_70:
                  v19[2] = 1.797693134862316e308;
                  goto LABEL_71;
                case 4LL:
                  v19 = v98;
LABEL_73:
                  v19[3] = 1.797693134862316e308;
                  goto LABEL_74;
                case 5LL:
                  v19 = v98;
LABEL_174:
                  v19[4] = 1.797693134862316e308;
                  goto LABEL_175;
                case 6LL:
                  v19 = v98;
LABEL_180:
                  v19[5] = 1.797693134862316e308;
                  goto LABEL_181;
                case 7LL:
                  v19 = v98;
LABEL_222:
                  v19[6] = 1.797693134862316e308;
                  v19[5] = 1.797693134862316e308;
LABEL_181:
                  v19[4] = 1.797693134862316e308;
LABEL_175:
                  v19[3] = 1.797693134862316e308;
LABEL_74:
                  v19[2] = 1.797693134862316e308;
LABEL_71:
                  v19[1] = 1.797693134862316e308;
LABEL_56:
                  *v19 = 1.797693134862316e308;
                  if ( v106 <= 0 )
                  {
                    v20 = v89;
                  }
                  else
                  {
LABEL_57:
                    v20 = v89;
                    do
                    {
                      *v20 = 0.0;
                      v20[1] = 0.0;
                      v20 += 8;
                      *(v20 - 6) = 0.0;
                      *(v20 - 5) = 0.0;
                      *(v20 - 4) = 0.0;
                      *(v20 - 3) = 0.0;
                      *(v20 - 2) = 0.0;
                      *(v20 - 1) = 0.0;
                    }
                    while ( v20 != (double *)&v94[(_QWORD)v89] );
                  }
                  switch ( v108 )
                  {
                    case 1u:
                      goto LABEL_66;
                    case 2u:
                      goto LABEL_65;
                    case 3u:
                      goto LABEL_64;
                    case 4u:
                      goto LABEL_63;
                    case 5u:
                      goto LABEL_62;
                    case 6u:
                      goto LABEL_61;
                    case 7u:
                      v20[6] = 0.0;
LABEL_61:
                      v20[5] = 0.0;
LABEL_62:
                      v20[4] = 0.0;
LABEL_63:
                      v20[3] = 0.0;
LABEL_64:
                      v20[2] = 0.0;
LABEL_65:
                      v20[1] = 0.0;
LABEL_66:
                      *v20 = 0.0;
                      break;
                    default:
                      goto LABEL_20;
                  }
                  break;
                default:
                  goto LABEL_20;
              }
              break;
            default:
              break;
          }
        }
      }
LABEL_20:
      if ( v121.m128i_i8[11] && !*(_BYTE *)(a2 + 11) )
      {
        *(_BYTE *)(a2 + 11) = 1;
        if ( (unsigned __int64)v93 > 0x1FFFFFFFFFFFFFFELL )
          goto LABEL_246;
        v13 = operator new[](4LL * v93);
        v100 = (_DWORD *)v13;
        if ( v93 )
        {
          if ( v106 > 0 )
          {
            v16 = v13 + v77 + 32;
            do
            {
              *(_OWORD *)v13 = 0;
              v13 += 32;
              *(_OWORD *)(v13 - 16) = 0;
            }
            while ( v16 != v13 );
            v13 = (__int64)&v100[v78];
          }
          switch ( v108 )
          {
            case 1u:
              goto LABEL_45;
            case 2u:
              goto LABEL_44;
            case 3u:
              goto LABEL_43;
            case 4u:
              goto LABEL_42;
            case 5u:
              goto LABEL_41;
            case 6u:
              goto LABEL_40;
            case 7u:
              *(_DWORD *)(v13 + 24) = 0;
LABEL_40:
              *(_DWORD *)(v13 + 20) = 0;
LABEL_41:
              *(_DWORD *)(v13 + 16) = 0;
LABEL_42:
              *(_DWORD *)(v13 + 12) = 0;
LABEL_43:
              *(_DWORD *)(v13 + 8) = 0;
LABEL_44:
              *(_DWORD *)(v13 + 4) = 0;
LABEL_45:
              *(_DWORD *)v13 = 0;
              break;
            default:
              break;
          }
        }
      }
      if ( v121.m128i_i8[10] && !*(_BYTE *)(a2 + 10) )
        *(_BYTE *)(a2 + 10) = 1;
      if ( v121.m128i_i8[13] && !*(_BYTE *)(a2 + 13) )
        *(_BYTE *)(a2 + 13) = 1;
      if ( ++v9 == (unsigned int)(v92 - 1) + 1LL )
      {
        v4 = (int)v4;
        goto LABEL_101;
      }
    }
    v11 = nullptr;
    goto LABEL_11;
  }
  v100 = nullptr;
  v89 = nullptr;
  v98 = nullptr;
  v99 = nullptr;
  v90 = nullptr;
  v91 = nullptr;
LABEL_101:
  if ( v4 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_246;
LABEL_102:
  v109 = (int *)operator new[](4 * v4);
  v107 = (int *)operator new[](4 * v4);
  v105 = (double *)operator new[](8 * v4);
  if ( (unsigned __int64)v88 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_246;
  v97 = (_DWORD *)operator new[](4LL * v88);
  v24 = 16LL * v88;
  if ( v88 )
  {
    if ( v88 / 8 <= 0 )
    {
      v69 = v97;
    }
    else
    {
      v67 = (unsigned int)(v88 / 8 - 1);
      v68 = v97;
      do
      {
        *v68 = -1;
        v68 += 2;
        *(v68 - 1) = -1;
      }
      while ( v68 != (_OWORD *)&v97[8 * v67 + 8] );
      v69 = &v97[8 * (int)v67 + 8];
    }
    switch ( v88 % 8 )
    {
      case 1:
        goto LABEL_199;
      case 2:
        goto LABEL_198;
      case 3:
        goto LABEL_197;
      case 4:
        goto LABEL_196;
      case 5:
        goto LABEL_195;
      case 6:
        goto LABEL_194;
      case 7:
        v69[6] = -1;
LABEL_194:
        v69[5] = -1;
LABEL_195:
        v69[4] = -1;
LABEL_196:
        v69[3] = -1;
LABEL_197:
        v69[2] = -1;
LABEL_198:
        v69[1] = -1;
LABEL_199:
        *v69 = -1;
        break;
      default:
        break;
    }
    v70 = operator new[](v24);
    v71 = 0;
    v81 = (void *)v70;
    do
    {
      ++v71;
      *(_DWORD *)v70 = 0;
      *(_DWORD *)(v70 + 4) = 0;
      *(_BYTE *)(v70 + 8) = 0;
      *(_BYTE *)(v70 + 9) = 0;
      v70 += 16;
      *(_BYTE *)(v70 - 6) = 0;
      *(_BYTE *)(v70 - 5) = 0;
      *(_BYTE *)(v70 - 4) = 0;
      *(_BYTE *)(v70 - 3) = 0;
    }
    while ( v71 != v88 );
  }
  else
  {
    v81 = (void *)operator new[](v24);
  }
  if ( (unsigned __int64)v83 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_246;
  v95 = (_DWORD *)operator new[](4LL * v83);
  v25 = 16LL * v83;
  if ( v83 )
  {
    if ( v83 / 8 <= 0 )
    {
      v74 = v95;
    }
    else
    {
      v72 = (unsigned int)(v83 / 8 - 1);
      v73 = v95;
      do
      {
        *v73 = -1;
        v73 += 2;
        *(v73 - 1) = -1;
      }
      while ( &v95[8 * v72 + 8] != (_DWORD *)v73 );
      v74 = &v95[8 * (int)v72 + 8];
    }
    switch ( v83 % 8 )
    {
      case 1:
        goto LABEL_214;
      case 2:
        goto LABEL_213;
      case 3:
        goto LABEL_212;
      case 4:
        goto LABEL_211;
      case 5:
        goto LABEL_210;
      case 6:
        goto LABEL_209;
      case 7:
        v74[6] = -1;
LABEL_209:
        v74[5] = -1;
LABEL_210:
        v74[4] = -1;
LABEL_211:
        v74[3] = -1;
LABEL_212:
        v74[2] = -1;
LABEL_213:
        v74[1] = -1;
LABEL_214:
        *v74 = -1;
        v75 = operator new[](v25);
        v86 = (void *)v75;
        break;
      default:
        v75 = operator new[](v25);
        v86 = (void *)v75;
        break;
    }
    v76 = 0;
    do
    {
      ++v76;
      *(_DWORD *)v75 = 0;
      *(_DWORD *)(v75 + 4) = 0;
      *(_BYTE *)(v75 + 8) = 0;
      *(_BYTE *)(v75 + 9) = 0;
      v75 += 16;
      *(_BYTE *)(v75 - 6) = 0;
      *(_BYTE *)(v75 - 5) = 0;
      *(_BYTE *)(v75 - 4) = 0;
      *(_BYTE *)(v75 - 3) = 0;
    }
    while ( v83 != v76 );
  }
  else
  {
    v86 = (void *)operator new[](v25);
  }
  if ( v92 > 0 )
  {
    v26 = v87;
    do
    {
      v28 = &v97[(int)CoinStructuredModel::rowBlock((CoinStructuredModel *)a1, (const std::string *)(*v26 + 40LL))];
      v29 = *v26;
      if ( *v28 == -1 )
        *v28 = *(_DWORD *)(*v26 + 8LL);
      v27 = &v95[(int)CoinStructuredModel::columnBlock((CoinStructuredModel *)a1, (const std::string *)(v29 + 48))];
      if ( *v27 == -1 )
        *v27 = *(_DWORD *)(*v26 + 12LL);
      v12 = &v87[(unsigned int)(v92 - 1) + 1] == ++v26;
    }
    while ( !v12 );
  }
  if ( v88 > 0 )
  {
    v30 = v97;
    v31 = 0;
    do
    {
      v32 = *v30;
      *v30++ = v31;
      v31 += v32;
    }
    while ( &v97[v88 - 1 + 1] != v30 );
  }
  if ( v83 > 0 )
  {
    v33 = v95;
    v34 = 0;
    do
    {
      v35 = *v33;
      *v33++ = v34;
      v34 += v35;
    }
    while ( &v95[v83 - 1 + 1] != v33 );
  }
  if ( v92 <= 0 )
  {
    operator delete[](v81);
    operator delete[](v86);
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)&v121, 1, v109, v107, v105, 0);
  }
  else
  {
    v104 = 0;
    v36 = 0;
    v101 = (unsigned __int64)v87;
    v37 = 0;
    do
    {
      v38 = (_BYTE *)(a1[23] + v37);
      v39 = v38[9];
      v118 = v38[11];
      v114 = v38[12];
      v40 = *(_QWORD *)v101;
      v41 = CoinStructuredModel::rowBlock((CoinStructuredModel *)a1, (const std::string *)(*(_QWORD *)v101 + 40LL));
      v42 = v97[v41];
      if ( v39 )
      {
        v65 = *(int *)(v40 + 8);
        v66 = v42;
        *((_BYTE *)v81 + 16 * v41 + 9) = 1;
        v65 *= 8LL;
        memcpy(&v91[v66], *(const void **)(v40 + 128), v65);
        memcpy(&v90[v66], *(const void **)(v40 + 136), v65);
      }
      v43 = (int)CoinStructuredModel::columnBlock(
                   (CoinStructuredModel *)a1,
                   (const std::string *)(*(_QWORD *)v101 + 48LL));
      v44 = *(_DWORD *)(v40 + 12);
      v45 = v95[v43];
      if ( v114 )
      {
        v64 = 8LL * v44;
        v113 = v95[v43];
        v111 = *(_DWORD *)(v40 + 12);
        *((_BYTE *)v86 + 16 * v43 + 12) = 1;
        v116 = v45;
        memcpy(&v99[v116], *(const void **)(v40 + 192), v64);
        memcpy(&v98[v116], *(const void **)(v40 + 200), v64);
        memcpy(&v89[v116], *(const void **)(v40 + 184), v64);
        v44 = v111;
        v45 = v113;
      }
      if ( v118 )
      {
        v120 = v45;
        *((_BYTE *)v86 + 16 * v43 + 11) = 1;
        memcpy(&v100[v45], *(const void **)(v40 + 240), 4LL * v44);
        v45 = v120;
      }
      v46 = *(_QWORD *)(v40 + 304);
      v47 = *(int **)(v46 + 48);
      v48 = *(_DWORD **)(v46 + 56);
      v110 = *(_QWORD *)(v46 + 40);
      v112 = *(_QWORD *)(v46 + 32);
      v49 = *(_DWORD *)(v46 + 64);
      if ( !*(_BYTE *)(v46 + 8) )
        v49 = *(_DWORD *)(v46 + 68);
      if ( v49 > 0 )
      {
        v115 = (__int64)&v47[v49 - 1 + 1];
        do
        {
          v50 = *v47;
          if ( *v47 < *v47 + *v48 )
          {
            v51 = v36;
            v52 = &v109[v51];
            v53 = &v107[v51];
            v54 = v36;
            v55 = 0;
            do
            {
              v56 = *(_DWORD *)(v110 + 4LL * v50 + v55);
              ++v54;
              v57 = *(double *)(v112 + 8LL * v50 + 2 * v55);
              v53[v55 / 4] = v45;
              v105[v36 + v55 / 4] = v57;
              v52[v55 / 4] = v42 + v56;
              v55 += 4LL;
            }
            while ( *v47 + *v48 > v50 + v54 - v36 );
            v36 = v54;
          }
          ++v47;
          ++v48;
          ++v45;
        }
        while ( (int *)v115 != v47 );
      }
      v104 += 16LL;
      v101 += 8LL;
      v37 = v104;
    }
    while ( 16 * ((unsigned int)(v92 - 1) + 1LL) != v104 );
    operator delete[](v81);
    operator delete[](v86);
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)&v121, 1, v109, v107, v105, v36);
    if ( v36 )
      *(_BYTE *)(a2 + 8) = 1;
  }
  operator delete[](v109);
  operator delete[](v107);
  operator delete[](v105);
  v119 = (CoinModel *)operator new(0x2D0u);
  CoinModel::CoinModel(v119, v84, v93, (const CoinPackedMatrix *)&v121, v91, v90, v99, v98, v89);
  if ( v91 )
    operator delete[](v91);
  if ( v90 )
    operator delete[](v90);
  if ( v99 )
    operator delete[](v99);
  if ( v98 )
    operator delete[](v98);
  if ( v89 )
    operator delete[](v89);
  if ( v100 )
  {
    if ( v93 > 0 )
    {
      v58 = 0;
      do
      {
        CoinModel::setColumnIsInteger(v119, v58, v100[v58] != 0);
        ++v58;
      }
      while ( v58 != (unsigned int)(v93 - 1) + 1LL );
    }
    operator delete[](v100);
  }
  *((_QWORD *)v119 + 3) = a1[3];
  if ( *(_BYTE *)(a2 + 10) || *(_BYTE *)(a2 + 13) )
  {
    if ( v92 <= 0 )
    {
      operator delete[](v97);
      operator delete[](v95);
      goto LABEL_167;
    }
    v59 = v87;
    do
    {
      v60 = *v59;
      CoinStructuredModel::rowBlock((CoinStructuredModel *)a1, (const std::string *)(*v59 + 40LL));
      CoinStructuredModel::columnBlock((CoinStructuredModel *)a1, (const std::string *)(v60 + 48));
      ++v59;
    }
    while ( &v87[(unsigned int)(v92 - 1) + 1] != v59 );
    operator delete[](v97);
    operator delete[](v95);
  }
  else
  {
    operator delete[](v97);
    operator delete[](v95);
    if ( v92 <= 0 )
      goto LABEL_167;
  }
  v61 = 0;
  do
  {
    v62 = v87[v61];
    if ( *(_QWORD *)(a1[21] + 8 * v61) != v62 && v62 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    ++v61;
  }
  while ( v92 > (int)v61 );
LABEL_167:
  operator delete[](v87);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)&v121);
  return v119;
}

