__int64 __fastcall sub_C356A0(__int64 a1, unsigned __int64 a2, __m128i *a3, __int64 a4, __int64 a5)
{
  char v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rbp
  unsigned __int64 v11; // r14
  int v12; // eax
  int v13; // ecx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // r15
  unsigned __int8 v22; // dl
  unsigned __int64 v23; // rax
  unsigned int v24; // r14d
  bool v26; // al
  unsigned __int8 **v27; // rax
  int v28; // r14d
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rbx
  unsigned __int8 **v34; // rax
  unsigned __int8 **v35; // rbp
  unsigned __int8 **v36; // rax
  unsigned int v37; // eax
  unsigned __int8 **v38; // rax
  unsigned __int8 **v39; // rbx
  void *v40; // rax
  __m128i si128; // xmm0
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *v45; // r8
  unsigned __int64 v46; // r9
  char v47; // al
  unsigned __int8 **v48; // rax
  unsigned __int64 v49; // r9
  unsigned __int8 **v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // eax
  unsigned __int64 v61; // rax
  __int64 v62; // r9
  __int64 v63; // rax
  char v64; // al
  char v65; // al
  int v66; // eax
  __int64 v67; // r15
  __int64 v68; // rdx
  unsigned __int64 v69; // rbx
  _QWORD *v70; // rsi
  __int64 v71; // rax
  unsigned __int64 v72; // r15
  unsigned int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r15
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned int *v82; // rbx
  unsigned int v83; // eax
  __int64 v84; // rsi
  unsigned int v85; // ebx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  unsigned int v89; // ebp
  __int64 v90; // rbx
  unsigned __int8 **v91; // rax
  unsigned __int8 **v92; // r15
  unsigned __int8 **v93; // rax
  unsigned __int8 **v94; // rax
  unsigned __int8 **v95; // rbx
  __int64 v96; // rbx
  int *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  unsigned int *v101; // rbp
  unsigned int v102; // eax
  __int64 v103; // rsi
  __int64 v104; // r12
  unsigned __int64 v105; // rdi
  int v106; // [rsp+0h] [rbp-118h]
  __int64 v107; // [rsp+0h] [rbp-118h]
  __int64 v109; // [rsp+8h] [rbp-110h]
  __int64 v110; // [rsp+10h] [rbp-108h]
  __int64 v111; // [rsp+10h] [rbp-108h]
  __int64 v112; // [rsp+10h] [rbp-108h]
  _QWORD *v113; // [rsp+10h] [rbp-108h]
  __int64 v114; // [rsp+10h] [rbp-108h]
  __int64 v115; // [rsp+10h] [rbp-108h]
  unsigned __int64 v117; // [rsp+28h] [rbp-F0h]
  int v118; // [rsp+30h] [rbp-E8h]
  _QWORD *v119; // [rsp+40h] [rbp-D8h]
  __int64 v120; // [rsp+40h] [rbp-D8h]
  __int64 v121; // [rsp+40h] [rbp-D8h]
  __int64 v122; // [rsp+40h] [rbp-D8h]
  __int64 v123; // [rsp+40h] [rbp-D8h]
  __int64 v124; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v125; // [rsp+40h] [rbp-D8h]
  __int64 v126; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v127; // [rsp+58h] [rbp-C0h]
  __int64 v128; // [rsp+58h] [rbp-C0h]
  __int64 v129; // [rsp+58h] [rbp-C0h]
  void *v130; // [rsp+60h] [rbp-B8h] BYREF
  unsigned int v131; // [rsp+68h] [rbp-B0h]
  char v132; // [rsp+6Ch] [rbp-ACh]
  void *ptr[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v134; // [rsp+90h] [rbp-88h]
  _QWORD v135[16]; // [rsp+98h] [rbp-80h] BYREF

  if ( (*(_BYTE *)a4 & 1) != 0 )
    return 0;
  v117 = a2;
  if ( sub_C105C0(a4) || (v106 = *(_DWORD *)(a4 + 32), v106 == 1) && (v8 & 4) != 0 )
  {
    if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) == 0 )
    {
      v24 = 0;
      sub_E33C10(a1, a2, 108, 0);
      return v24;
    }
    v26 = sub_C105C0(a4);
    v27 = (unsigned __int8 **)sub_E33C10(a1, a2, !v26 ? 2375 : 2370, 0);
    if ( v27 )
      sub_C11320(v27, *(int *)(a5 + 24));
    return 0;
  }
  v9 = 0;
  v126 = 0;
  v10 = a3[1].m128i_i64[0];
  v110 = 0;
  v11 = a3[1].m128i_u64[1];
  v118 = v106 - 1;
  v12 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 )
    goto LABEL_22;
LABEL_5:
  v13 = *(_DWORD *)(a5 + 24);
  if ( v13 != 8 || (_DWORD)v9 != v106 )
  {
LABEL_24:
    if ( !(_DWORD)v9 || v13 != 10 )
    {
      v24 = *(unsigned __int8 *)(a1 + 914);
      if ( !(_BYTE)v24 )
      {
        v38 = (unsigned __int8 **)sub_E33C10(a1, v117, 2372, 0);
        v39 = v38;
        if ( v38 )
        {
          sub_C11320(v38, *(int *)(a5 + 24));
          sub_C11320(v39, *(_DWORD *)v10 == 1);
          v40 = (void *)sub_EEC8C0(v117);
          LOBYTE(ptr[1]) = 1;
          ptr[0] = v40;
          sub_AEC610((__int64 *)v39, (__int64 *)ptr);
        }
        return v24;
      }
    }
    return 0;
  }
  while ( 1 )
  {
    if ( (v11 & 1) != 0
      || (a2 = *(_DWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 1
             | (unsigned int)(*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 4 | v11 & 4),
          (_DWORD)a2) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        a2 = (unsigned __int64)ptr;
        si128 = _mm_load_si128(a3);
        v134 = *(_QWORD *)(a4 + 24);
        *(__m128i *)ptr = si128;
        v135[0] = (unsigned int)v9;
        v42 = sub_C2F440((__int64 *)(a1 + 824), (unsigned __int64 *)ptr);
        if ( v42 )
        {
          if ( *((_DWORD *)v42 + 8) )
            v11 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 2
                | v11 & 2;
        }
      }
    }
    if ( (_DWORD)v9 != v106 )
    {
      v14 = v11 & 0xFFFFFFFFFFFFFFF0LL;
      v15 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
      v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v118 != (_DWORD)v9 )
      {
        v17 = (unsigned int)(v16 - 2);
        if ( (unsigned __int8)(v16 - 2) <= 4u )
          goto LABEL_13;
        goto LABEL_50;
      }
      if ( (_BYTE)v16 != 14 )
      {
        v16 = (unsigned int)(v16 - 2);
        if ( (unsigned __int8)v16 <= 4u )
          goto LABEL_13;
        goto LABEL_51;
      }
    }
    if ( (v11 & 4) != 0 || (v14 = v11 & 0xFFFFFFFFFFFFFFF0LL, (byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( sub_C11880(*(_DWORD *)(a5 + 24)) )
      {
        v24 = 0;
        if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) != 0 )
        {
          v89 = 0;
          if ( v126 )
          {
            v89 = *(_DWORD *)(v126 + 24);
            v90 = 2;
          }
          else
          {
            v90 = a3->m128i_i64[0];
            if ( a3->m128i_i64[0] )
            {
              if ( (v90 & 3) != 0 )
              {
                if ( (a3->m128i_i64[0] & 3) == 1 )
                {
                  v90 &= 0xFFFFFFFFFFFFFFFCLL;
                  if ( v90 )
                  {
                    v105 = v90;
                    v90 = 0;
                    v89 = sub_C00A40(v105, a2, v86, v87, v88);
                  }
                }
                else
                {
                  v90 = 0;
                }
              }
              else
              {
                v90 &= 0xFFFFFFFFFFFFFFFCLL;
                if ( v90 )
                {
                  v126 = v90;
                  v89 = *(_DWORD *)(v90 + 24);
                  v90 = 1;
                }
              }
            }
          }
          v91 = (unsigned __int8 **)sub_E33C10(a1, v117, 2376, 1);
          v92 = v91;
          if ( v91 )
          {
            sub_C11320(v91, *(int *)(a5 + 24));
            sub_C11320(v92, v90);
            sub_AE9DF0(v92, v126, 0xAu);
          }
          v93 = (unsigned __int8 **)sub_E33DB0(a1, v89, 2506);
          if ( v93 )
            sub_C11320(v93, v90);
          return v24;
        }
        goto LABEL_104;
      }
      v14 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      a2 = a1;
      v125 = v14;
      v64 = sub_C118B0(a3->m128i_i64, a1, *(_DWORD *)(a5 + 24));
      v14 = v125;
      if ( !v64 )
      {
        a2 = v117;
        v65 = sub_C287E0(a1, v117, *(unsigned int *)(a5 + 24), v11);
        v14 = v125;
        if ( v65 )
          return 0;
      }
    }
    if ( (_DWORD)v9 == v106 )
    {
      v78 = v11;
      v24 = 1;
      sub_A54D20(*(_QWORD *)(a5 + 16), (int *)v10);
      if ( *(_DWORD *)(a5 + 24) == 1 )
        return v24;
      v82 = *(unsigned int **)(a5 + 16);
      v83 = sub_C00A40(*(_QWORD *)(a5 + 8), v10, v79, v80, v81);
      v84 = *(_QWORD *)a5;
      ptr[1] = byte_8;
      ptr[0] = v135;
      LODWORD(v134) = 0;
      BYTE4(v134) = 1;
      v85 = sub_C2B330(1, v84, v83, v78, v82, 0, 0, (__int64)ptr);
      if ( !BYTE4(v134) )
        free(ptr[0]);
      if ( (_BYTE)v85 )
      {
        LOBYTE(v24) = v110 != 0 && ((1LL << *(_DWORD *)(a5 + 24)) & 0x4E3) == 0;
        if ( (_BYTE)v24 )
        {
          if ( (*(_BYTE *)(v110 + 68) & 1) != 0 )
            return (unsigned int)sub_C12D50(a1, v117, v10, v110);
        }
        else
        {
          return v85;
        }
        return v24;
      }
      return 0;
    }
    v15 = *(_QWORD *)v14;
    v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v17 = (unsigned int)(v16 - 2);
    if ( (unsigned __int8)(v16 - 2) <= 4u )
    {
LABEL_13:
      v18 = sub_A72040(*(_QWORD **)(a1 + 16), v11);
      v20 = v18;
      if ( !v18 || (unsigned int)*(unsigned __int8 *)(v18 + 16) - 2 > 1 )
        BUG();
      a2 = *(_QWORD *)(v18 + 40);
      v21 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (unsigned int)v9);
      v22 = *(_BYTE *)(v18 + 19);
      if ( (v22 & 2) != 0 )
      {
        LODWORD(ptr[1]) = *(_DWORD *)(a2 + 8);
        if ( LODWORD(ptr[1]) <= 0x40 )
        {
          ptr[0] = *(void **)a2;
          goto LABEL_18;
        }
        v115 = v18;
        sub_2205510(ptr);
        v28 = (int)ptr[1];
        v20 = v115;
      }
      else
      {
        v28 = 8 * ((v22 >> 2) & 0x1F);
        LODWORD(ptr[1]) = v28;
        if ( v28 > 64 )
        {
          v114 = v18;
          sub_2205470(ptr, a2, 0);
          v28 = (int)ptr[1];
          v20 = v114;
        }
        else
        {
          ptr[0] = (void *)a2;
        }
      }
      if ( (unsigned int)v28 <= 0x40 )
      {
LABEL_18:
        if ( (void *)v21 < ptr[0] )
          goto LABEL_19;
        v24 = 0;
      }
      else
      {
        v111 = v20;
        v29 = sub_2206780(ptr);
        v20 = v111;
        if ( (unsigned int)(v28 - v29) > 0x40 )
        {
          if ( !ptr[0] )
          {
            v23 = *(unsigned int *)(v10 + 16);
            v11 = *(_QWORD *)(v111 + 32);
            if ( v23 <= v21 )
            {
LABEL_39:
              v30 = *(unsigned int *)(a5 + 24);
              v112 = v20;
              if ( (unsigned int)v30 <= 1 || (_DWORD)v30 == 10 )
              {
                v110 = 0;
                v10 = *(_QWORD *)(v10 + 8) + 56 * v23;
              }
              else
              {
                v37 = sub_C00A40(v117, a2, v30, v20, v19);
                if ( !(unsigned __int8)sub_C19980(a1, v112, v37) )
                  return 0;
                a2 = (unsigned int)v21;
                sub_C0FCF0(v10, v21);
                v110 = 0;
                v10 = *(_QWORD *)(v10 + 8) + 56LL * (unsigned int)v21;
              }
              goto LABEL_21;
            }
            goto LABEL_20;
          }
LABEL_43:
          operator delete[](ptr[0]);
          v20 = v111;
LABEL_19:
          v23 = *(unsigned int *)(v10 + 16);
          v11 = *(_QWORD *)(v20 + 32);
          if ( v23 <= v21 )
            goto LABEL_39;
LABEL_20:
          v110 = 0;
          v10 = *(_QWORD *)(v10 + 8) + 56 * v21;
          goto LABEL_21;
        }
        if ( v21 < *(_QWORD *)ptr[0] )
          goto LABEL_43;
        v24 = 0;
        if ( ptr[0] )
          operator delete[](ptr[0]);
      }
LABEL_60:
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) != 0 )
      {
        v36 = (unsigned __int8 **)sub_E33C10(a1, v117, 2370, 0);
        if ( v36 )
          sub_C11320(v36, *(int *)(a5 + 24));
        return v24;
      }
LABEL_104:
      sub_E33C10(a1, v117, 108, 0);
      return v24;
    }
LABEL_50:
    if ( (_BYTE)v16 == 14 )
    {
      v67 = v11;
      v24 = 0;
      v68 = *(_QWORD *)(a4 + 24);
      v69 = *(_QWORD *)(v68 + 8 * v9);
      if ( v69 > 1 )
        goto LABEL_60;
      if ( *(_BYTE *)(v15 + 16) != 14 )
        v15 = sub_F63050(v15, a4, v68, v17);
      sub_C0F760(v67, *(_QWORD *)(v15 + 32), 0);
      if ( *(_DWORD *)v10 != 5 )
      {
        v70 = (_QWORD *)(v10 + 8);
        if ( v69 )
          v70 = (_QWORD *)(v10 + 32);
        sub_995620((__int64)&v130, v70);
        sub_C18B90((__int64)ptr, &v130);
        sub_A4FD20(*(_QWORD *)(a5 + 16), (__int64)ptr);
        if ( LODWORD(ptr[0]) > 1 )
          sub_A4F8E0((int *)ptr);
        v24 = 1;
        sub_9955A0(&v130);
        return v24;
      }
      v104 = v10 + 8;
      if ( v69 )
        v104 = v10 + 24;
      v131 = *(_DWORD *)(v104 + 8);
      if ( v131 > 0x40 )
        sub_2205510(&v130);
      else
        v130 = *(void **)v104;
      v132 = *(_BYTE *)(v104 + 12);
      sub_B96770((__int64)ptr, (__int64 *)&v130);
      sub_A4FD20(*(_QWORD *)(a5 + 16), (__int64)ptr);
      if ( LODWORD(ptr[0]) > 1 )
        sub_A4F8E0((int *)ptr);
      if ( v131 > 0x40 && v130 )
        operator delete[](v130);
      return 1;
    }
LABEL_51:
    v113 = (_QWORD *)v14;
    v31 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 57;
    if ( (unsigned int)v31 <= 1 )
      break;
    v15 = sub_C10A30(v15, a2, v16, v31);
    v45 = v113;
    if ( v15 )
      break;
    v46 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (unsigned int)v9) & 0xFFFFFFFFFFFFFFF8LL;
    v110 = v46;
    if ( v46 && (*(_BYTE *)(v46 + 28) & 0x7Fu) - 49 <= 2 )
    {
      if ( (*(_BYTE *)(v46 + 68) & 2) != 0 )
      {
        a2 = a1;
        v127 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (unsigned int)v9) & 0xFFFFFFFFFFFFFFF8LL;
        v119 = v45;
        v47 = sub_C118B0(a3->m128i_i64, a1, *(_DWORD *)(a5 + 24));
        v45 = v119;
        v46 = v127;
        if ( !v47 )
        {
          v48 = (unsigned __int8 **)sub_E33C10(a1, v117, 2368, 1);
          v49 = v127;
          v50 = v48;
          if ( v48 )
          {
            sub_C11320(v48, *(int *)(a5 + 24));
            sub_AE9DF0(v50, v127, 0xAu);
            v49 = v127;
          }
          v24 = 0;
          sub_E33DB0(a1, *(unsigned int *)(v49 + 24), 103);
          return v24;
        }
      }
      v120 = v46;
      v51 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(*v45 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v43, v44, v45);
      v55 = v120;
      if ( *(_BYTE *)(v51 + 73) >> 5 == 2 )
      {
        v56 = *(_QWORD *)(v10 + 8);
        if ( !v56 )
          goto LABEL_91;
        v57 = *(_QWORD *)(v10 + 8);
        if ( *(char *)(v56 + 29) < 0 )
        {
          v128 = v120;
          v121 = *(_QWORD *)(v10 + 8);
          v58 = sub_B72720(v121);
          v55 = v128;
          v56 = v121;
          v57 = v58;
        }
        v59 = v55;
        if ( *(char *)(v55 + 29) < 0 )
        {
          v129 = v56;
          v122 = v55;
          v59 = sub_B72720(v55);
          v56 = v129;
          v55 = v122;
        }
        if ( v59 != v57 )
        {
LABEL_91:
          v60 = *(_DWORD *)(a5 + 24);
          if ( v118 != (_DWORD)v9 || v60 != 8 )
          {
            v24 = 0;
            v109 = v56;
            v107 = v55;
            if ( v60 != 10 )
            {
              v94 = (unsigned __int8 **)sub_E33C10(a1, v117, 2367, 0);
              v95 = v94;
              if ( v94 )
              {
                sub_C11320(v94, *(int *)(a5 + 24));
                sub_AE9DF0(v95, v107, 0xAu);
                sub_C11320(v95, v109 == 0);
                sub_AE9DF0(v95, v109, 0xAu);
                return v24;
              }
            }
            return 0;
          }
          v123 = v55;
          BYTE4(ptr[0]) &= ~1u;
          LODWORD(ptr[0]) = 0;
          sub_A54D90(v10, v55, (int *)ptr);
          v55 = v123;
          if ( LODWORD(ptr[0]) > 1 )
          {
            sub_A4F8E0((int *)ptr);
            v55 = v123;
          }
        }
        v10 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        v66 = sub_C1D4D0(v120, a2, v52, v53, v54, v120);
        v55 = v120;
        v10 = *(_QWORD *)(v10 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v10 + 16) + v66);
      }
      a2 = *(_QWORD *)(v55 + 48);
      v124 = v55;
      v61 = sub_C0F760(v11, a2, (*(_BYTE *)(v55 + 68) & 2) != 0);
      v62 = v124;
      v11 = v61;
      v63 = *(_QWORD *)(v124 + 48);
      if ( (v63 & 4) != 0 )
      {
        v126 = v124;
      }
      else
      {
        if ( (byte_8[v63 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          v62 = v126;
        v126 = v62;
      }
    }
    else
    {
      v71 = sub_F63270(*v45);
      v72 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (unsigned int)v9) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v72
        && (*(_BYTE *)((*(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (unsigned int)v9) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu)
         - 59 >= 3 )
      {
        v72 = 0;
      }
      v73 = sub_C30BC0(v71, v72);
      v74 = *(_QWORD *)(v10 + 8);
      v10 = v74 + 56LL * v73;
      a2 = sub_A7A9D0(*(_QWORD *)(a1 + 16), v72, v75, v74, v76, v77);
      v110 = 0;
      v11 = sub_C0F760(v11, a2, 0);
    }
LABEL_21:
    v12 = *(_DWORD *)v10;
    v9 = (unsigned int)(v9 + 1);
    if ( !*(_DWORD *)v10 )
      goto LABEL_5;
LABEL_22:
    if ( v12 == 1 )
    {
      v13 = *(_DWORD *)(a5 + 24);
      if ( ((1LL << v13) & 0x19) != 0 )
        goto LABEL_24;
    }
  }
  v24 = 0;
  v32 = *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8LL * (unsigned int)v9);
  v33 = *(unsigned int *)(v15 + 20);
  if ( v33 == v32 )
    goto LABEL_60;
  if ( v33 >= v32 )
  {
    v96 = *(_QWORD *)(v15 + 32);
    v97 = (int *)(*(_QWORD *)(v10 + 8) + 56LL * (unsigned int)v32);
    sub_A54D20(*(_QWORD *)(a5 + 16), v97);
    if ( *(_DWORD *)(a5 + 24) != 1 )
    {
      v101 = *(unsigned int **)(a5 + 16);
      v102 = sub_C00A40(*(_QWORD *)(a5 + 8), (__int64)v97, v98, v99, v100);
      v103 = *(_QWORD *)a5;
      ptr[1] = byte_8;
      ptr[0] = v135;
      LODWORD(v134) = 0;
      BYTE4(v134) = 1;
      v24 = sub_C2B330(1, v103, v102, v96, v101, 0, 0, (__int64)ptr);
      if ( !BYTE4(v134) )
        free(ptr[0]);
      return v24;
    }
    return 1;
  }
  v34 = (unsigned __int8 **)sub_E33C90(a1, v117, 2381, 0);
  v35 = v34;
  if ( !v34 )
    return 0;
  sub_AE9DF0(v34, v32, 3u);
  sub_C11320(v35, 0);
  sub_AE9DF0(v35, v33, 3u);
  return v24;
}
