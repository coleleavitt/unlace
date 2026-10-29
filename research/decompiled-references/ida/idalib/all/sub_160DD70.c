__int64 __fastcall sub_160DD70(__int64 a1, unsigned int a2, __int64 a3, double a4)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v10; // rbp
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // r12
  __int64 v27; // rsi
  _QWORD *v28; // rcx
  __int64 v29; // r9
  _QWORD *v30; // rsi
  _QWORD *v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdx
  unsigned int v36; // r8d
  __int64 *v37; // rsi
  __int64 v38; // r9
  unsigned __int64 v39; // r13
  __int64 v40; // rcx
  __int64 v41; // r12
  unsigned __int8 v42; // r13
  unsigned __int64 v43; // r15
  int v44; // ebp
  __int64 v45; // rax
  char v46; // dl
  char v47; // dl
  __int64 v48; // rax
  __int64 *v49; // rsi
  __int64 v50; // r8
  __int64 v51; // rdi
  __int64 *v52; // rcx
  __int64 *v53; // rdx
  __int64 v54; // rax
  __int64 *v55; // rcx
  __int64 *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rsi
  __int64 (__fastcall *v60)(__int64); // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r13
  unsigned __int64 v69; // r13
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 v74; // r12
  __int64 *v75; // rax
  _QWORD *v76; // r14
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdi
  __int64 v84; // r12
  __int64 v85; // rsi
  __int64 v86; // r12
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rdi
  __int64 v96; // r13
  unsigned __int64 v97; // rax
  __int64 *v98; // rax
  _QWORD *v99; // r14
  unsigned __int64 v100; // rax
  __int64 *v101; // rsi
  __int64 *v102; // rcx
  __int64 *v103; // rdx
  __int64 v104; // rcx
  unsigned int v105; // edi
  int v106; // esi
  int v107; // r9d
  __int64 v108; // r10
  int v109; // eax
  bool v110; // zf
  __int64 v111; // rax
  int v112; // r11d
  __int64 v113; // r10
  int v114; // eax
  __int64 *v115; // [rsp+0h] [rbp-E8h]
  char v116; // [rsp+0h] [rbp-E8h]
  __int64 v117; // [rsp+0h] [rbp-E8h]
  unsigned int v118; // [rsp+Ch] [rbp-DCh]
  char v119; // [rsp+13h] [rbp-D5h]
  int v120; // [rsp+14h] [rbp-D4h]
  __int64 v121; // [rsp+18h] [rbp-D0h]
  __int64 v122; // [rsp+28h] [rbp-C0h]
  __int64 v123; // [rsp+30h] [rbp-B8h]
  __int64 v124; // [rsp+38h] [rbp-B0h]
  __int64 v125; // [rsp+58h] [rbp-90h] BYREF
  __m128 v126; // [rsp+60h] [rbp-88h] BYREF
  __int64 v127; // [rsp+70h] [rbp-78h]
  void *v128; // [rsp+80h] [rbp-68h]
  __int64 v129; // [rsp+90h] [rbp-58h] BYREF
  __int16 v130; // [rsp+A0h] [rbp-48h]

  v4 = 0;
  v120 = *(_DWORD *)(a1 + 236);
  v6 = *(unsigned int *)(a1 + 80);
  if ( (_DWORD)v6 )
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v6 - 8);
  v7 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(a1 + 232) )
  {
    result = *(_QWORD *)(v7 + 232);
    if ( !*(_DWORD *)(result + 64) && !v4 )
      return result;
  }
  v10 = a3;
  result = sub_17A6E20(v7, a3);
  v119 = result;
  if ( (_BYTE)result )
    return result;
  result = 0;
  if ( v10 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  v123 = a1 + 16;
  if ( !*(_BYTE *)(a1 + 36) )
  {
    result = sub_2236570(a1 + 16, result);
    if ( result )
      return result;
LABEL_16:
    if ( !v4 )
    {
LABEL_23:
      if ( !*(_BYTE *)(a1 + 232) && !*(_DWORD *)(a1 + 236) )
      {
LABEL_25:
        v25 = 0;
        v26 = (__int64 *)(a1 + 56LL * (v120 != 0) + 120);
        if ( v10 )
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
        if ( !*(_BYTE *)(a1 + 56LL * (v120 != 0) + 140) )
          goto LABEL_56;
        v27 = a1 + 56LL * (v120 != 0);
        v28 = *(_QWORD **)(v27 + 120);
        v29 = *(unsigned int *)(v27 + 132);
        v30 = &v28[v29];
        if ( v28 != v30 )
        {
          while ( v25 != *v28 )
          {
            if ( v30 == ++v28 )
              goto LABEL_126;
          }
          result = *v26;
          goto LABEL_33;
        }
LABEL_126:
        v104 = a1 + 56LL * (v120 != 0);
        if ( (unsigned int)v29 < *(_DWORD *)(v104 + 128) )
        {
          v119 = *(_BYTE *)(a1 + 56LL * (v120 != 0) + 140);
          *(_DWORD *)(v104 + 132) = v29 + 1;
          v47 = *(_BYTE *)(a1 + 56LL * (v120 != 0) + 140);
          *v30 = v25;
          v28 = (_QWORD *)(*(_QWORD *)(v104 + 120) + 8 * v29);
        }
        else
        {
LABEL_56:
          v30 = (_QWORD *)v25;
          v45 = sub_2236760(v26, v25);
          v119 = v46;
          v47 = *(_BYTE *)(a1 + 56LL * (v120 != 0) + 140);
          v28 = (_QWORD *)v45;
        }
        result = *v26;
        if ( !v47 )
        {
          v31 = (_QWORD *)(result + 8LL * *(unsigned int *)(a1 + 56LL * (v120 != 0) + 128));
LABEL_59:
          if ( v31 != v28 && *v28 >= 0xFFFFFFFFFFFFFFFELL )
          {
            ++v28;
            do
            {
              result = (__int64)v28;
              if ( v31 == v28 )
                break;
              ++v28;
            }
            while ( *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL );
          }
          if ( !v119 )
            return result;
          v48 = 0;
          if ( v10 )
            v48 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD *, _QWORD *))(*(_QWORD *)v10 + 32LL))(
                    v10,
                    v30,
                    v31,
                    v28);
          if ( !*(_BYTE *)(a1 + 36) )
            goto LABEL_74;
          v49 = *(__int64 **)(a1 + 16);
          v50 = *(unsigned int *)(a1 + 28);
          v51 = v50;
          v52 = &v49[v50];
          if ( v49 != v52 )
          {
            v53 = *(__int64 **)(a1 + 16);
            if ( v48 == *v49 )
              goto LABEL_129;
            do
            {
              if ( v52 == ++v53 )
                break;
            }
            while ( v48 != *v53 );
          }
          if ( (unsigned int)v50 < *(_DWORD *)(a1 + 24) )
          {
            v50 = (unsigned int)(v50 + 1);
            *(_DWORD *)(a1 + 28) = v50;
            *v52 = v48;
            v49 = *(__int64 **)(a1 + 16);
            v53 = &v49[v51];
          }
          else
          {
LABEL_74:
            v54 = sub_2236760(v123, v48);
            v49 = *(__int64 **)(a1 + 16);
            v53 = (__int64 *)v54;
            if ( !*(_BYTE *)(a1 + 36) )
            {
              v55 = &v49[*(unsigned int *)(a1 + 24)];
              goto LABEL_76;
            }
          }
LABEL_129:
          v55 = &v49[*(unsigned int *)(a1 + 28)];
LABEL_76:
          if ( v55 != v53 && (unsigned __int64)*v53 >= 0xFFFFFFFFFFFFFFFELL )
          {
            ++v53;
            do
            {
              v56 = v53;
              if ( v55 == v53 )
                break;
              ++v53;
            }
            while ( (unsigned __int64)*v56 >= 0xFFFFFFFFFFFFFFFELL );
          }
          v57 = 0;
          if ( v10 )
            v57 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, v49, v53);
          v58 = *(unsigned int *)(a1 + 80);
          v59 = *(unsigned int *)(a1 + 84);
          if ( v58 + 1 > v59 )
          {
            v59 = a1 + 88;
            v117 = v57;
            sub_2237220(a1 + 72, a1 + 88, v58 + 1, 8);
            v58 = *(unsigned int *)(a1 + 80);
            v57 = v117;
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v58) = v57;
          ++*(_DWORD *)(a1 + 80);
          v60 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL);
          if ( v60 == sub_6EF210 )
          {
            v59 = (unsigned __int64)&v126;
            v61 = sub_B7F750((_QWORD *)v10, &v126, (__int64)sub_6EF210, v58, v50, v29);
          }
          else
          {
            v61 = v60(v10);
          }
          if ( v61 )
          {
            v59 = v61;
            sub_160D770(a1, v61, a4, v62, v63);
          }
          if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x24 )
          {
            v68 = *(_QWORD *)(sub_B8C1B0(v10 + 72) + 16);
            if ( (v68 & 4) != 0 )
              v69 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v69 = v68 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v69 )
              v69 -= 64LL;
            v74 = sub_B7E900(v69, v59, v64, v65, v66, v67);
            if ( v74 )
            {
LABEL_95:
              v75 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v74 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*v75 + 16) == 48 )
              {
                v76 = sub_F60F10(*v75, v59, v70, v71, v72, v73);
                if ( (*((_BYTE *)v76 + 28) & 0x7Fu) - 59 <= 2 )
                {
                  if ( v76[16] || (v59 = v76[13], sub_7052B0((__int64 *)(v59 + 96), v59, v70, v71, v72, v73), v76[16]) )
                  {
                    v77 = sub_B97300((__int64)v76);
                    if ( v77 )
                    {
                      v59 = *(unsigned int *)(v77 + 24);
                      sub_160E870(a1, v59);
                    }
                  }
                }
              }
              while ( 1 )
              {
                v78 = *(_QWORD *)(v74 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                v74 = v78;
                if ( !v78 )
                  break;
                if ( (*(_BYTE *)(v78 + 28) & 0x7Fu) - 49 <= 2 )
                  goto LABEL_95;
              }
            }
            sub_7052B0((__int64 *)(*(_QWORD *)(v69 + 104) + 96LL), *(_QWORD *)(v69 + 104), v70, v71, v72, v73);
            v83 = *(_QWORD *)(v69 + 128);
            if ( (*(_BYTE *)(v83 + 24) & 1) != 0 )
              v84 = sub_B96980(v83);
            else
              v84 = *(_QWORD *)(v83 + 24);
            sub_7052B0((__int64 *)(*(_QWORD *)(v69 + 104) + 96LL), *(_QWORD *)(v69 + 104), v79, v80, v81, v82);
            v85 = *(_QWORD *)(v69 + 104);
            v86 = v84 + 24LL * *(unsigned int *)(*(_QWORD *)(v69 + 128) + 16LL);
            sub_7052B0((__int64 *)(v85 + 96), v85, v87, v88, v89, v90);
            v95 = *(_QWORD *)(v69 + 128);
            if ( (*(_BYTE *)(v95 + 24) & 1) != 0 )
              v96 = sub_B96980(v95);
            else
              v96 = *(_QWORD *)(v95 + 24);
            while ( v96 != v86 )
            {
              v97 = *(_QWORD *)(**(_QWORD **)(v96 + 16) & 0xFFFFFFFFFFFFFFF0LL);
              if ( (*(_BYTE *)(v97 + 8) & 0xF) != 0 )
                v97 = sub_F64F00(**(_QWORD **)(v96 + 16), v85, v91, v92, v93);
              v98 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v97 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*v98 + 16) == 48 )
              {
                v99 = sub_F60F10(*v98, v85, v91, v92, v93, v94);
                if ( (*((_BYTE *)v99 + 28) & 0x7Fu) - 59 <= 2 )
                {
                  if ( v99[16] || (v85 = v99[13], sub_7052B0((__int64 *)(v85 + 96), v85, v91, v92, v93, v94), v99[16]) )
                  {
                    v100 = sub_B97300((__int64)v99);
                    if ( v100 )
                    {
                      v85 = *(unsigned int *)(v100 + 24);
                      sub_160E870(a1, v85);
                    }
                  }
                }
              }
              v96 += 24;
            }
          }
          --*(_DWORD *)(a1 + 80);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
          if ( *(_BYTE *)(a1 + 36) )
          {
            v101 = *(__int64 **)(a1 + 16);
            v102 = &v101[*(unsigned int *)(a1 + 28)];
            if ( v101 != v102 )
            {
              v103 = *(__int64 **)(a1 + 16);
              if ( result == *v101 )
              {
LABEL_132:
                v105 = *(_DWORD *)(a1 + 28) - 1;
                result = v101[v105];
                *(_DWORD *)(a1 + 28) = v105;
                *v103 = result;
              }
              else
              {
                while ( v102 != ++v103 )
                {
                  if ( result == *v103 )
                    goto LABEL_132;
                }
              }
            }
          }
          else
          {
            result = sub_2236570(v123, result);
            if ( result )
            {
              *(_QWORD *)result = -2;
              ++*(_DWORD *)(a1 + 32);
            }
          }
          return result;
        }
LABEL_33:
        v31 = (_QWORD *)(result + 8LL * *(unsigned int *)(a1 + 56LL * (v120 != 0) + 132));
        goto LABEL_59;
      }
      v32 = *(_QWORD *)(a1 + 8);
      v33 = 0;
      if ( v10 )
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
      v34 = *(unsigned int *)(v32 + 536);
      v35 = *(_QWORD *)(v32 + 520);
      if ( (_DWORD)v34 )
      {
        v36 = (v34 - 1) & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
        v37 = (__int64 *)(v35 + 32LL * v36);
        v38 = *v37;
        if ( v33 == *v37 )
        {
LABEL_38:
          sub_15F7900(&v126, v37, (_QWORD *)(32 * v34 + v35), v32 + 520, 1);
          v39 = v126.m128_u64[0];
LABEL_39:
          v40 = *(_QWORD *)(a1 + 8);
          sub_15F7900(
            &v126,
            (_QWORD *)(*(_QWORD *)(v40 + 520) + 32LL * *(unsigned int *)(v40 + 536)),
            (_QWORD *)(*(_QWORD *)(v40 + 520) + 32LL * *(unsigned int *)(v40 + 536)),
            v40 + 520,
            1);
          if ( v126.m128_u64[0] != v39 )
          {
            v41 = *(_QWORD *)(v39 + 8);
            v121 = *(_QWORD *)(v39 + 16);
            if ( v41 != v121 && !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL) + 194LL) )
            {
              v122 = v4;
              v42 = 0;
              v43 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL);
              v116 = 1;
              v124 = v10;
              while ( 1 )
              {
                v44 = *(_DWORD *)v41;
                v118 = *(_DWORD *)(v41 + 24);
                v42 |= (unsigned __int8)sub_FD3E40(*(_QWORD *)(v43 + 32), v118, *(_DWORD *)v41, v43) > 2u;
                sub_FC70B0((__int64)&v126, v43, v44, v118);
                sub_15FA310((unsigned __int8 **)(v41 + 8), (unsigned __int8 **)&v126);
                if ( (_BYTE)v130 )
                {
                  sub_FC7790(v127, (__int64 *)&v126, SHIBYTE(v130));
                  v127 = 0;
                  v130 = 0;
                }
                if ( v128 != &v129 )
                  operator delete(v128);
                if ( v126.m128_u64[0] && v126.m128_u64[1] )
                  sub_1580C40(v126.m128_u64[1], v126.m128_u64[0]);
                if ( (v42 & (unsigned __int8)v116) != 0 && (v116 &= v42, v122) )
                {
                  v41 += 32;
                  sub_15F6BE0(*(_QWORD *)(a1 + 8), v124);
                  v116 = 0;
                  if ( v121 == v41 )
                  {
LABEL_55:
                    v10 = v124;
                    goto LABEL_25;
                  }
                }
                else
                {
                  v41 += 32;
                  if ( v121 == v41 )
                    goto LABEL_55;
                }
                v43 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 264LL);
                if ( *(_BYTE *)(v43 + 194) )
                  goto LABEL_55;
              }
            }
          }
          goto LABEL_25;
        }
        v106 = 1;
        if ( v38 != -4096 )
        {
          do
          {
            v107 = v106 + 1;
            v36 = (v34 - 1) & (v106 + v36);
            v37 = (__int64 *)(v35 + 32LL * v36);
            v108 = *v37;
            if ( v33 == *v37 )
              goto LABEL_38;
            v106 = v107;
          }
          while ( v108 != -4096 );
        }
      }
      sub_15F7900(
        &v126,
        (_QWORD *)(v35 + 32LL * (unsigned int)v34),
        (_QWORD *)(v35 + 32LL * (unsigned int)v34),
        v32 + 520,
        1);
      v39 = v126.m128_u64[0];
      goto LABEL_39;
    }
    v13 = *(_QWORD *)(a1 + 8);
    if ( *(_DWORD *)(*(_QWORD *)(v13 + 232) + 64LL)
      && *(_DWORD *)(a1 + 80) == 1
      && (*(_BYTE *)(a1 + 232) || *(_DWORD *)(a1 + 236)) )
    {
      sub_1B06490(*(_QWORD *)(v13 + 760), v4, v10, a2);
    }
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 664LL);
    v115 = (__int64 *)(v19 + 32);
    v20 = 0;
    if ( v10 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
    v21 = *(_DWORD *)(v19 + 48);
    v125 = v20;
    if ( v21 )
    {
      v16 = v21 - 1;
      v22 = *(_QWORD *)(v19 + 32);
      v17 = (unsigned int)v16 & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
      v14 = v22 + 24 * v17;
      v23 = *(_QWORD *)v14;
      if ( v20 == *(_QWORD *)v14 )
      {
LABEL_22:
        v24 = v14 + 8;
        *(_QWORD *)v24 = v18;
        *(_DWORD *)(v24 + 8) = a2;
        goto LABEL_23;
      }
      v112 = 1;
      v113 = 0;
      if ( v23 != -4096 )
      {
        while ( 1 )
        {
          if ( !v113 && v23 == -8192 )
            v113 = v14;
          v17 = (unsigned int)v16 & (v112 + (_DWORD)v17);
          v14 = v22 + 24LL * (unsigned int)v17;
          v23 = *(_QWORD *)v14;
          if ( v20 == *(_QWORD *)v14 )
            goto LABEL_22;
          if ( v23 == -4096 )
          {
            if ( v113 )
              v14 = v113;
            break;
          }
          ++v112;
        }
      }
      v114 = *(_DWORD *)(v19 + 40);
      v15 = 3 * v21;
      v126.m128_u64[0] = v14;
      v109 = v114 + 1;
      if ( 4 * v109 < (unsigned int)v15 )
      {
        v15 = v21 - *(_DWORD *)(v19 + 44) - v109;
        if ( (unsigned int)v15 > v21 >> 3 )
          goto LABEL_146;
        goto LABEL_145;
      }
    }
    else
    {
      v126.m128_u64[0] = 0;
    }
    v21 *= 2;
LABEL_145:
    sub_1605A00(v115, v21, v14, v15, v16, v17);
    sub_15F3D10(v115, &v125, &v126);
    v14 = v126.m128_u64[0];
    v109 = *(_DWORD *)(v19 + 40) + 1;
LABEL_146:
    v110 = *(_QWORD *)v14 == -4096;
    *(_DWORD *)(v19 + 40) = v109;
    if ( !v110 )
      --*(_DWORD *)(v19 + 44);
    v111 = v125;
    *(_QWORD *)(v14 + 8) = 0;
    *(_DWORD *)(v14 + 16) = 0;
    *(_QWORD *)v14 = v111;
    goto LABEL_22;
  }
  v11 = *(_QWORD **)(a1 + 16);
  v12 = &v11[*(unsigned int *)(a1 + 28)];
  if ( v11 == v12 )
    goto LABEL_16;
  while ( result != *v11 )
  {
    if ( v12 == ++v11 )
      goto LABEL_16;
  }
  return result;
}
