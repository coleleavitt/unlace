__int16 __fastcall sub_F133C0(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rbp
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rbp
  int v8; // ebx
  __int64 k; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 n; // r12
  __int64 v17; // rsi
  __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 v20; // r12
  __int64 v21; // rax
  int v22; // r13d
  __int64 v23; // rbp
  int v24; // ebx
  __int64 v25; // rbp
  int v26; // ebx
  __int64 v27; // rbp
  _BOOL4 v28; // ebx
  __int64 v29; // r12
  _BOOL4 v30; // r13d
  __int64 v31; // rax
  __int64 v32; // r12
  _BOOL8 v33; // r13
  __int64 v34; // rax
  __int64 v35; // rbp
  _BOOL4 v36; // ebx
  __int64 v37; // rbp
  __int64 v38; // rbx
  __int64 v39; // rbp
  int v40; // ebx
  __int64 v41; // rsi
  __int64 v42; // rbp
  _BOOL4 v43; // ebx
  __int64 v44; // r12
  int v45; // r13d
  __int64 v46; // rax
  __int64 *v47; // r12
  __int64 m; // rbx
  __int64 v49; // rsi
  __int64 v50; // r12
  __int64 i; // rbx
  __int64 v52; // rbp
  int v53; // ebx
  void *v54; // rcx
  __int64 v55; // rsi
  unsigned __int64 v56; // rdx
  __int64 v57; // rbp
  int v58; // ebx
  __int64 (__fastcall *v59)(__int64, __int64); // r12
  __int64 v60; // rax
  __int64 v61; // rbp
  int v62; // ebx
  __int64 v63; // r12
  int v64; // r13d
  __int64 v65; // rbp
  int v66; // ebx
  __int64 v67; // rbp
  int v68; // ebx
  __int64 v69; // rbp
  int v70; // ebx
  __int64 v71; // r12
  __int64 v72; // rax
  int v73; // r13d
  __int64 v74; // r12
  int v75; // r13d
  __int64 v76; // r13
  __int64 v77; // r12
  void (__fastcall *v78)(__int64, __int64); // r12
  __int64 v79; // rax
  __int64 v80; // rbp
  _BOOL4 v81; // ebx
  __int64 v82; // r12
  _BOOL8 v83; // r13
  __int64 v84; // rax
  __int64 v85; // r12
  __int64 v86; // rax
  _BOOL4 v87; // r13d
  __int64 v88; // rax
  __int64 v89; // rbp
  _BOOL4 v90; // ebx
  int v91; // eax
  __int64 v92; // r13
  __int64 *v93; // r12
  int v94; // r14d
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 *j; // r13
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // r12
  __int64 v101; // rax
  __int64 v102; // rax
  void (__fastcall *v103)(__int64, __int64, _QWORD); // r12
  __int64 v104; // rax
  __int64 v105; // rsi
  __int64 v106; // r12
  __int64 v107; // rax
  int v108; // r13d
  __int64 v109; // rbp
  _BOOL4 v110; // ebx
  __int64 v111; // rbp
  int v112; // ebx
  __int64 v113; // rbp
  int v114; // ebx
  int v115; // r14d
  unsigned int v116; // r12d
  unsigned int v117; // esi
  __int64 (__fastcall *v118)(__int64, __int64); // r13
  __int64 v119; // rax
  void *v121; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v122; // [rsp+8h] [rbp-40h]

  while ( 2 )
  {
    v3 = *(_WORD *)a2 & 0x1FF;
    if ( v3 > 0x75u )
    {
      if ( v3 <= 0x77u )
      {
        switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x20:
            LOWORD(v5) = sub_F16740(a1, a2);
            break;
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
            LOWORD(v5) = sub_F167A0(a1, a2);
            break;
          default:
            goto LABEL_6;
        }
        return v5;
      }
LABEL_6:
      switch ( v3 )
      {
        case 0u:
        case 0x2Du:
        case 0x43u:
          LOWORD(v5) = sub_F16800(a1, a2);
          return v5;
        case 1u:
          sub_F15AA0(a1, a2);
          v59 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL);
          v60 = sub_EEE170(a2);
          LOWORD(v5) = v59(a1, v60);
          return v5;
        case 2u:
          sub_F15AA0(a1, a2);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(a2 + 8));
          return v5;
        case 3u:
        case 0xAu:
        case 0xBu:
        case 0xDu:
        case 0x10u:
        case 0x13u:
        case 0x14u:
        case 0x16u:
        case 0x19u:
        case 0x1Au:
        case 0x1Du:
        case 0x26u:
        case 0x27u:
        case 0x29u:
        case 0x2Au:
        case 0x2Cu:
        case 0x2Fu:
        case 0x30u:
        case 0x31u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x3Au:
        case 0x3Cu:
        case 0x3Du:
        case 0x42u:
        case 0x46u:
        case 0x48u:
        case 0x49u:
        case 0x4Au:
        case 0x4Du:
        case 0x59u:
        case 0x5Au:
        case 0x5Cu:
        case 0x5Du:
        case 0x61u:
        case 0x63u:
        case 0x64u:
        case 0x67u:
        case 0x68u:
        case 0x69u:
          goto LABEL_20;
        case 4u:
          sub_F15AA0(a1, a2);
          v61 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v61 + 8);
          v62 = *(_BYTE *)(a2 + 2) >> 3;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v61 + 12) )
          {
            sub_2237220(v61, v61 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v61 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v61 + 4 * v5) = v62;
          ++*(_DWORD *)(v61 + 8);
          return v5;
        case 5u:
          sub_F15AA0(a1, a2);
          v63 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v63 + 8);
          v64 = (*(_BYTE *)(a2 + 2) >> 3) & 0xF;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v63 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v63 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v63 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v63 + 4 * v5) = v64;
          ++*(_DWORD *)(v63 + 8);
          if ( *(char *)(a2 + 2) < 0 )
            LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, **(_QWORD **)(a2 + 16));
          return v5;
        case 6u:
          sub_F15AA0(a1, a2);
          v71 = *(_QWORD *)(a1 + 8);
          v72 = *(unsigned int *)(v71 + 8);
          v73 = (unsigned __int8)(*(_WORD *)(a2 + 2) >> 3);
          if ( v72 + 1 > (unsigned __int64)*(unsigned int *)(v71 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v71 + 16, v72 + 1, 4);
            v72 = *(unsigned int *)(v71 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v71 + 4 * v72) = v73;
          ++*(_DWORD *)(v71 + 8);
          v74 = *(_QWORD *)(a1 + 8);
          v75 = *(_DWORD *)(a2 + 4);
          v5 = *(unsigned int *)(v74 + 8);
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v74 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v74 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v74 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v74 + 4 * v5) = v75;
          ++*(_DWORD *)(v74 + 8);
          LODWORD(v5) = *(_DWORD *)(a2 + 4);
          if ( (_DWORD)v5 )
          {
            v76 = 0;
            v77 = 8LL * (unsigned int)(v5 - 1) + 8;
            do
            {
              v76 += 8;
              LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(
                             a1,
                             **(_QWORD **)(v76
                                         + a2
                                         + 56LL * ((((unsigned __int8)BYTE3(*(_QWORD *)a2) >> 3) ^ 1) & 1)
                                         + 16));
            }
            while ( v76 != v77 );
          }
          return v5;
        case 7u:
          sub_F15AA0(a1, a2);
          v78 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL);
          v79 = sub_C95B10(a2);
          v78(a1, v79);
          sub_C95B30((__int64)&v121, a2);
          LOWORD(v5) = sub_F18B10(a1, &v121);
          return v5;
        case 8u:
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        case 9u:
          sub_F15AA0(a1, a2);
          sub_2222BB0(
            *(_QWORD *)(a1 + 8),
            a2 + 4LL * *(unsigned int *)(a2 + 4) + 20,
            *(_DWORD *)(a2 + 16) * ((*(_WORD *)(a2 + 2) >> 6) & 7u));
          v69 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v69 + 8);
          v70 = (*(_BYTE *)(a2 + 2) >> 3) & 7;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v69 + 12) )
          {
            sub_2237220(v69, v69 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v69 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v69 + 4 * v5) = v70;
          ++*(_DWORD *)(v69 + 8);
          return v5;
        case 0xCu:
          LOWORD(v5) = sub_F18D50(a1, a2);
          return v5;
        case 0xEu:
          sub_F15AA0(a1, a2);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, **(_QWORD **)(a2 + 32));
          return v5;
        case 0xFu:
          LOWORD(v5) = sub_F19930(a1, a2);
          return v5;
        case 0x11u:
          v50 = a2 + 24;
          sub_F15AA0(a1, a2);
          v5 = *(unsigned __int16 *)(a2 + 4);
          for ( i = a2 + 8 * v5 + 16; i != v50; v50 += 8 )
          {
            LOWORD(v5) = **(_WORD **)v50 & 0x1FF;
            if ( (_WORD)v5 == 26 )
              LOWORD(v5) = sub_F133C0(a1, *(_QWORD *)(*(_QWORD *)v50 + 16LL));
          }
          return v5;
        case 0x12u:
          sub_F15AA0(a1, a2);
          v52 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v52 + 8);
          v53 = (*(_BYTE *)(a2 + 2) >> 3) & 0xF;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v52 + 12) )
          {
            sub_2237220(v52, v52 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v52 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v52 + 4 * v5) = v53;
          ++*(_DWORD *)(v52 + 8);
          return v5;
        case 0x15u:
          sub_F15AA0(a1, *(_QWORD *)(a2 + 32));
          v91 = *(_DWORD *)(a2 + 4);
          if ( (*(char *)(a2 + 7) >= 0 || (v91 & 0x7FFFFFFF) != 0) && (v91 & 0x7FFFFFFF) == 0 )
          {
            LOWORD(v5) = sub_F15AA0(a1, *(_QWORD *)(a2 + 24));
          }
          else
          {
            v92 = *(_QWORD *)(a1 + 8);
            v93 = (__int64 *)(a2 + 40);
            v94 = v91 & 0x7FFFFFFF;
            v95 = *(unsigned int *)(v92 + 8);
            if ( v95 + 1 > (unsigned __int64)*(unsigned int *)(v92 + 12) )
            {
              sub_2237220(*(_QWORD *)(a1 + 8), v92 + 16, v95 + 1, 4);
              v95 = *(unsigned int *)(v92 + 8);
            }
            *(_DWORD *)(*(_QWORD *)v92 + 4 * v95) = v94;
            v96 = (unsigned int)(*(_DWORD *)(v92 + 8) + 1);
            *(_DWORD *)(v92 + 8) = v96;
            if ( v96 + 1 > (unsigned __int64)*(unsigned int *)(v92 + 12) )
              sub_2237220(v92, v92 + 16, v96 + 1, 4);
            *(_DWORD *)(*(_QWORD *)v92 + 4LL * (unsigned int)(*(_DWORD *)(v92 + 8))++) = 0;
            v5 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
            for ( j = &v93[v5]; j != v93; LOWORD(v5) = sub_F133C0(a1, v98) )
              v98 = *v93++;
          }
          return v5;
        case 0x17u:
          LOWORD(v5) = sub_F19310(a1, a2);
          return v5;
        case 0x18u:
          LOWORD(v5) = sub_F190C0(a1, a2);
          return v5;
        case 0x1Bu:
          LOWORD(v5) = sub_F15CD0(a1, a2);
          return v5;
        case 0x1Cu:
          sub_F15AA0(a1, a2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(a2 + 40));
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(a2 + 48));
          return v5;
        case 0x1Eu:
          sub_F15AA0(a1, a2);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 40LL))(
                         a1,
                         *(_QWORD *)(a2 + 16),
                         0);
          return v5;
        case 0x1Fu:
        case 0x6Bu:
        case 0x6Fu:
        case 0x70u:
        case 0x75u:
          sub_F15AA0(a1, a2);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(a2 + 16));
          return v5;
        case 0x20u:
          sub_F15AA0(a1, a2);
          v99 = *(_QWORD *)(a2 + 16);
          if ( (v99 & 4) != 0 )
          {
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 24LL))(a1, v99 & 0xFFFFFFFFFFFFFFF8LL);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 24LL))(
              a1,
              *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL);
          }
          else
          {
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 24LL))(a1, v99 & 0xFFFFFFFFFFFFFFF8LL);
          }
          v5 = (*(__int64 *)(a2 + 40) >> 1) & 3;
          if ( v5 == 1 )
          {
            v100 = *(_QWORD *)(a1 + 8);
            v101 = *(unsigned int *)(v100 + 8);
            if ( v101 + 1 > (unsigned __int64)*(unsigned int *)(v100 + 12) )
            {
              sub_2237220(*(_QWORD *)(a1 + 8), v100 + 16, v101 + 1, 4);
              v101 = *(unsigned int *)(v100 + 8);
            }
            *(_DWORD *)(*(_QWORD *)v100 + 4 * v101) = 1;
            v102 = *(_QWORD *)a1;
            ++*(_DWORD *)(v100 + 8);
            LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(v102 + 32))(
                           a1,
                           *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF0LL);
          }
          return v5;
        case 0x21u:
          sub_F15AA0(a1, a2);
          v103 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 40LL);
          v104 = sub_C9AC10(a2);
          v103(a1, v104, 0);
          v105 = 0;
          if ( (*(_BYTE *)(a2 + 27) & 1) != 0 )
            v105 = *(_QWORD *)(a2 + 16);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v105);
          return v5;
        case 0x22u:
          sub_F15AA0(a1, a2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(a2 + 16));
          v106 = *(_QWORD *)(a1 + 8);
          v107 = *(unsigned int *)(v106 + 8);
          v108 = *(_BYTE *)(a2 + 40) & 1;
          if ( v107 + 1 > (unsigned __int64)*(unsigned int *)(v106 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v106 + 16, v107 + 1, 4);
            v107 = *(unsigned int *)(v106 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v106 + 4 * v107) = v108;
          v109 = *(_QWORD *)(a1 + 8);
          ++*(_DWORD *)(v106 + 8);
          v5 = *(unsigned int *)(v109 + 8);
          v110 = (*(_BYTE *)(a2 + 40) & 2) != 0;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v109 + 12) )
          {
            sub_2237220(v109, v109 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v109 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v109 + 4 * v5) = v110;
          ++*(_DWORD *)(v109 + 8);
          return v5;
        case 0x23u:
          sub_F15AA0(a1, a2);
          v111 = *(_QWORD *)(a1 + 8);
          v112 = *(unsigned __int8 *)(a2 + 32);
          v5 = *(unsigned int *)(v111 + 8);
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v111 + 12) )
          {
            sub_2237220(v111, v111 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v111 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v111 + 4 * v5) = v112;
          ++*(_DWORD *)(v111 + 8);
          return v5;
        case 0x24u:
          sub_F15AA0(a1, a2);
          v89 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v89 + 8);
          v90 = (*(_DWORD *)a2 & 0x80000) != 0;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v89 + 12) )
          {
            sub_2237220(v89, v89 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v89 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v89 + 4 * v5) = v90;
          ++*(_DWORD *)(v89 + 8);
          return v5;
        case 0x25u:
          sub_F15AA0(a1, a2);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, **(_QWORD **)(a2 + 16));
          return v5;
        case 0x28u:
          sub_F15AA0(a1, a2);
          v113 = *(_QWORD *)(a1 + 8);
          v114 = *(unsigned __int8 *)(a2 + 16);
          v5 = *(unsigned int *)(v113 + 8);
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v113 + 12) )
          {
            sub_2237220(v113, v113 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v113 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v113 + 4 * v5) = v114;
          ++*(_DWORD *)(v113 + 8);
          return v5;
        case 0x2Bu:
          LOWORD(v5) = sub_F15AA0(a1, a2);
          v115 = *(_DWORD *)(a2 + 28);
          if ( v115 )
          {
            v116 = 0;
            do
            {
              v117 = v116++;
              v118 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL);
              v119 = sub_C03D50(a2, v117);
              LOWORD(v5) = v118(a1, v119);
            }
            while ( v115 != v116 );
          }
          return v5;
        case 0x2Eu:
          sub_F15AA0(a1, a2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(a2 + 24));
          if ( !*(_BYTE *)(a1 + 16) )
          {
            v41 = 0;
            if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
              v41 = *(_QWORD *)(a2 + 48);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, v41);
          }
          v42 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v42 + 8);
          v43 = (*(_QWORD *)a2 & 0x80000) != 0;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v42 + 12) )
          {
            sub_2237220(v42, v42 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v42 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v42 + 4 * v5) = v43;
          ++*(_DWORD *)(v42 + 8);
          return v5;
        case 0x32u:
          sub_F15AA0(a1, a2);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(a2 + 24));
          return v5;
        case 0x33u:
          LOWORD(v5) = sub_F12860(a1, (_WORD *)a2);
          return v5;
        case 0x34u:
          LOWORD(v5) = sub_F15DC0(a1, a2);
          return v5;
        case 0x35u:
          for ( k = *(_QWORD *)(a2 + 48); (k & 4) != 0; k = *(_QWORD *)(v10 + 48) )
          {
            v10 = k & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v10 )
              break;
            a2 = v10;
          }
LABEL_20:
          LOWORD(v5) = sub_F15AA0(a1, a2);
          return v5;
        case 0x39u:
          LOWORD(v5) = sub_F15FC0(a1, a2);
          return v5;
        case 0x3Bu:
          sub_F15AA0(a1, a2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(a2 + 16));
          v44 = *(_QWORD *)(a1 + 8);
          v45 = *(_DWORD *)(a2 + 28);
          v46 = *(unsigned int *)(v44 + 8);
          if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(v44 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v44 + 16, v46 + 1, 4);
            v46 = *(unsigned int *)(v44 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v44 + 4 * v46) = v45;
          ++*(_DWORD *)(v44 + 8);
          v5 = *(unsigned int *)(a2 + 28);
          v47 = (__int64 *)(a2 + 32);
          for ( m = a2 + 8 * v5 + 32;
                (__int64 *)m != v47;
                LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, v49) )
          {
            v49 = *v47++;
          }
          return v5;
        case 0x3Eu:
          LOWORD(v5) = sub_F13190(a1, a2);
          return v5;
        case 0x3Fu:
          sub_F15AA0(a1, a2);
          v54 = *(void **)(a2 + 16);
          v55 = *(unsigned int *)(a2 + 24);
          v56 = (unsigned __int64)(v55 + 63) >> 6;
          if ( v56 > 1 )
          {
            sub_2205610(&v121, v55, v56, v54);
          }
          else
          {
            v122 = *(_DWORD *)(a2 + 24);
            if ( (unsigned int)v55 > 0x40 )
              sub_2205470(&v121, v54, 0);
            else
              v121 = v54;
          }
          sub_2205760(&v121, *(_QWORD *)(a1 + 8));
          if ( v122 > 0x40 && v121 )
            operator delete[](v121);
          v57 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v57 + 8);
          v58 = (*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 18LL) >> 3)
              & 0x1FF;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v57 + 12) )
          {
            sub_2237220(v57, v57 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v57 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v57 + 4 * v5) = v58;
          ++*(_DWORD *)(v57 + 8);
          return v5;
        case 0x40u:
          sub_F15AA0(a1, a2);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 40LL))(
                         a1,
                         *(_QWORD *)(a2 + 24),
                         0);
          return v5;
        case 0x41u:
          sub_F15AA0(a1, a2);
          v11 = *(_QWORD *)(a1 + 8);
          v12 = *(unsigned int *)(v11 + 8);
          v13 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
          if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v11 + 16, v12 + 1, 4);
            v12 = *(unsigned int *)(v11 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v11 + 4 * v12) = v13;
          ++*(_DWORD *)(v11 + 8);
          LOWORD(v5) = sub_F15AA0(a1, *(_QWORD *)(a2 + 24));
          return v5;
        case 0x44u:
          LOWORD(v5) = sub_F16100(a1, a2);
          return v5;
        case 0x45u:
          LOWORD(v5) = sub_F195E0(a1, a2);
          return v5;
        case 0x47u:
          LOWORD(v5) = sub_F18EA0(a1, a2);
          return v5;
        case 0x4Bu:
          sub_F15AA0(a1, a2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 56LL));
          v14 = *(_QWORD *)(a2 + 24);
          v15 = v14 + 40;
          v5 = 3LL * *(unsigned int *)(v14 + 36);
          for ( n = v15 + 8 * v5; n != v15; LOWORD(v5) = sub_F18B10(a1, v17) )
          {
            v17 = v15;
            v15 += 24;
          }
          return v5;
        case 0x4Cu:
          sub_F15AA0(a1, a2);
          v18 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v18 + 8);
          v19 = (*(__int64 *)(a2 + 24) >> 2) & 1;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 12) )
          {
            sub_2237220(v18, v18 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v18 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v18 + 4 * v5) = v19;
          ++*(_DWORD *)(v18 + 8);
          return v5;
        case 0x4Eu:
          sub_F15AA0(a1, a2);
          v20 = *(_QWORD *)(a1 + 8);
          v21 = *(unsigned int *)(v20 + 8);
          v22 = (*(_BYTE *)(a2 + 2) >> 3) & 7;
          if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(v20 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v20 + 16, v21 + 1, 4);
            v21 = *(unsigned int *)(v20 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v20 + 4 * v21) = v22;
          v23 = *(_QWORD *)(a1 + 8);
          ++*(_DWORD *)(v20 + 8);
          v24 = *(_DWORD *)(a2 + 16);
          v5 = *(unsigned int *)(v23 + 8);
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v23 + 12) )
          {
            sub_2237220(v23, v23 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v23 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v23 + 4 * v5) = v24;
          ++*(_DWORD *)(v23 + 8);
          return v5;
        case 0x4Fu:
          sub_F15AA0(a1, a2);
          v25 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v25 + 8);
          v26 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v25 + 12) )
          {
            sub_2237220(v25, v25 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v25 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v25 + 4 * v5) = v26;
          ++*(_DWORD *)(v25 + 8);
          return v5;
        case 0x50u:
          sub_F15AA0(a1, a2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, **(_QWORD **)(a2 + 24));
          v27 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v27 + 8);
          v28 = (*(_BYTE *)(a2 + 40) & 3) != 0;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v27 + 12) )
          {
            sub_2237220(v27, v27 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v27 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v27 + 4 * v5) = v28;
          ++*(_DWORD *)(v27 + 8);
          return v5;
        case 0x51u:
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
          LOWORD(v5) = sub_F162D0(a1, a2);
          return v5;
        case 0x58u:
          sub_F15AA0(a1, a2);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, **(_QWORD **)(a2 + 24));
          return v5;
        case 0x5Bu:
          LOWORD(v5) = sub_F19E30(a1, a2);
          return v5;
        case 0x5Eu:
          sub_F15AA0(a1, a2);
          v5 = *(_QWORD *)(a2 + 16);
          if ( (v5 & 4) != 0 )
            goto LABEL_54;
          return v5;
        case 0x5Fu:
          sub_F15AA0(a1, a2);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL));
          v37 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v37 + 8);
          v38 = (*(__int64 *)(a2 + 16) >> 2) & 1;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v37 + 12) )
          {
            sub_2237220(v37, v37 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v37 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v37 + 4 * v5) = v38;
          ++*(_DWORD *)(v37 + 8);
          return v5;
        case 0x60u:
          sub_F15AA0(a1, a2);
          v5 = *(_QWORD *)(a2 + 16);
          if ( (v5 & 4) != 0 )
LABEL_54:
            LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(
                           a1,
                           *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL));
          break;
        case 0x62u:
          sub_F15AA0(a1, a2);
          v32 = *(_QWORD *)(a1 + 8);
          v33 = (*(_QWORD *)a2 & 0x80000LL) != 0;
          v34 = *(unsigned int *)(v32 + 8);
          if ( v34 + 1 > (unsigned __int64)*(unsigned int *)(v32 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v32 + 16, v34 + 1, 4);
            v34 = *(unsigned int *)(v32 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v32 + 4 * v34) = v33;
          v35 = *(_QWORD *)(a1 + 8);
          ++*(_DWORD *)(v32 + 8);
          v5 = *(unsigned int *)(v35 + 8);
          v36 = (*(_QWORD *)a2 & 0x100000) != 0;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v35 + 12) )
          {
            sub_2237220(v35, v35 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v35 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v35 + 4 * v5) = v36;
          ++*(_DWORD *)(v35 + 8);
          break;
        case 0x65u:
          v29 = *(_QWORD *)(a1 + 8);
          v30 = (*(_DWORD *)a2 & 0x2000000) != 0;
          v31 = *(unsigned int *)(v29 + 8);
          if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(v29 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v29 + 16, v31 + 1, 4);
            v31 = *(unsigned int *)(v29 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v29 + 4 * v31) = v30;
          ++*(_DWORD *)(v29 + 8);
          LOWORD(v5) = sub_F15AA0(a1, *(_QWORD *)(a2 + 16));
          break;
        case 0x66u:
          LOWORD(v5) = sub_F16300(a1, a2);
          break;
        case 0x6Au:
          LOWORD(v5) = sub_F164C0(a1, a2);
          break;
        case 0x6Cu:
          sub_F15AA0(a1, a2);
          v39 = *(_QWORD *)(a1 + 8);
          v40 = *(_DWORD *)(a2 + 4);
          v5 = *(unsigned int *)(v39 + 8);
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v39 + 12) )
          {
            sub_2237220(v39, v39 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v39 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v39 + 4 * v5) = v40;
          ++*(_DWORD *)(v39 + 8);
          break;
        case 0x6Du:
          LOWORD(v5) = sub_F19710(a1, a2);
          break;
        case 0x6Eu:
          sub_F15AA0(a1, a2);
          v82 = *(_QWORD *)(a1 + 8);
          v83 = (*(_QWORD *)a2 & 0x80000LL) != 0;
          v84 = *(unsigned int *)(v82 + 8);
          if ( v84 + 1 > (unsigned __int64)*(unsigned int *)(v82 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v82 + 16, v84 + 1, 4);
            v84 = *(unsigned int *)(v82 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v82 + 4 * v84) = v83;
          ++*(_DWORD *)(v82 + 8);
          v85 = *(_QWORD *)(a1 + 8);
          v86 = *(unsigned int *)(v85 + 8);
          v87 = (*(_QWORD *)a2 & 0x100000LL) != 0;
          if ( v86 + 1 > (unsigned __int64)*(unsigned int *)(v85 + 12) )
          {
            sub_2237220(*(_QWORD *)(a1 + 8), v85 + 16, v86 + 1, 4);
            v86 = *(unsigned int *)(v85 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v85 + 4 * v86) = v87;
          v88 = *(_QWORD *)a1;
          ++*(_DWORD *)(v85 + 8);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(v88 + 24))(a1, *(_QWORD *)(a2 + 16));
          break;
        case 0x71u:
        case 0x72u:
          LOWORD(v5) = sub_F166D0(a1, a2);
          break;
        case 0x73u:
          sub_F15AA0(a1, a2);
          v80 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v80 + 8);
          v81 = (*(_QWORD *)a2 & 0x80000) != 0;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v80 + 12) )
          {
            sub_2237220(v80, v80 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v80 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v80 + 4 * v5) = v81;
          ++*(_DWORD *)(v80 + 8);
          break;
        case 0x74u:
          sub_F15AA0(a1, a2);
          LOWORD(v5) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, **(_QWORD **)(a2 + 16));
          break;
        case 0x76u:
          sub_F15AA0(a1, a2);
          v65 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v65 + 8);
          v66 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v65 + 12) )
          {
            sub_2237220(v65, v65 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v65 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v65 + 4 * v5) = v66;
          ++*(_DWORD *)(v65 + 8);
          break;
        case 0x77u:
          sub_F15AA0(a1, a2);
          v67 = *(_QWORD *)(a1 + 8);
          v5 = *(unsigned int *)(v67 + 8);
          v68 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
          if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v67 + 12) )
          {
            sub_2237220(v67, v67 + 16, v5 + 1, 4);
            v5 = *(unsigned int *)(v67 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v67 + 4 * v5) = v68;
          ++*(_DWORD *)(v67 + 8);
          break;
        default:
          goto LABEL_6;
      }
      return v5;
    }
    break;
  }
  if ( v3 != 4 )
    goto LABEL_6;
  switch ( *(_BYTE *)(a2 + 2) >> 3 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      LOWORD(v5) = sub_F15C70(a1, a2);
      break;
    case 12:
      sub_F15AA0(a1, a2);
      v4 = *(_QWORD *)(a1 + 8);
      v5 = *(unsigned int *)(v4 + 8);
      v6 = *(_BYTE *)(a2 + 2) >> 3;
      if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
      {
        sub_2237220(v4, v4 + 16, v5 + 1, 4);
        v5 = *(unsigned int *)(v4 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v4 + 4 * v5) = v6;
      ++*(_DWORD *)(v4 + 8);
      break;
    case 13:
      sub_F15AA0(a1, a2);
      v7 = *(_QWORD *)(a1 + 8);
      v5 = *(unsigned int *)(v7 + 8);
      v8 = *(_BYTE *)(a2 + 2) >> 3;
      if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 12) )
      {
        sub_2237220(v7, v7 + 16, v5 + 1, 4);
        v5 = *(unsigned int *)(v7 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v7 + 4 * v5) = v8;
      ++*(_DWORD *)(v7 + 8);
      break;
    default:
      goto LABEL_6;
  }
  return v5;
}
