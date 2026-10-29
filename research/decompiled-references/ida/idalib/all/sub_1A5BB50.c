__int64 __fastcall sub_1A5BB50(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        unsigned __int8 a9,
        char a10,
        char a11,
        __int64 a12)
{
  __int64 v13; // rcx
  __int64 *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // rbx
  char v18; // r14
  unsigned __int8 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  char v23; // r8
  __int64 v24; // r9
  char v25; // r14
  __int64 *v26; // rbp
  unsigned __int64 v27; // r13
  unsigned __int8 v28; // al
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  char v34; // r11
  char v35; // r10
  unsigned __int8 v36; // al
  __int64 result; // rax
  bool v38; // zf
  char v39; // al
  int v40; // edi
  __int64 v41; // rsi
  char v42; // dl
  char v43; // al
  char v44; // dl
  __int64 v45; // rdx
  unsigned __int8 v46; // r14
  __int64 v47; // rbp
  __int64 v48; // rax
  __int64 v49; // r12
  unsigned __int8 v50; // bp
  int v51; // eax
  int v52; // ebx
  char *v53; // rdi
  void *v54; // rbx
  __int64 v55; // rbp
  __int64 *v56; // rbp
  __int64 *v57; // r12
  __int64 v58; // rbx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r13
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbp
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r12
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r13
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // r13
  __int64 v94; // rax
  _QWORD *v95; // rax
  char v96; // [rsp+4h] [rbp-1C4h]
  unsigned __int8 v99; // [rsp+7h] [rbp-1C1h]
  unsigned int v102; // [rsp+28h] [rbp-1A0h]
  bool v103; // [rsp+30h] [rbp-198h]
  char v104; // [rsp+31h] [rbp-197h]
  char v105; // [rsp+32h] [rbp-196h]
  char v106; // [rsp+33h] [rbp-195h]
  char v107; // [rsp+34h] [rbp-194h]
  int v108; // [rsp+34h] [rbp-194h]
  unsigned __int8 v110; // [rsp+40h] [rbp-188h]
  unsigned __int8 v111; // [rsp+40h] [rbp-188h]
  char v112; // [rsp+4Ch] [rbp-17Ch]
  char v113; // [rsp+4Ch] [rbp-17Ch]
  char v114; // [rsp+4Dh] [rbp-17Bh]
  char v115; // [rsp+4Eh] [rbp-17Ah]
  char v116; // [rsp+4Eh] [rbp-17Ah]
  char v117; // [rsp+4Fh] [rbp-179h]
  char v118; // [rsp+4Fh] [rbp-179h]
  int v119; // [rsp+54h] [rbp-174h] BYREF
  __int64 v120[5]; // [rsp+58h] [rbp-170h] BYREF
  __int64 v121[4]; // [rsp+80h] [rbp-148h] BYREF
  void *v122[2]; // [rsp+A0h] [rbp-128h] BYREF
  _QWORD v123[2]; // [rsp+B0h] [rbp-118h] BYREF
  unsigned __int8 *v124[10]; // [rsp+C0h] [rbp-108h] BYREF
  void *ptr; // [rsp+110h] [rbp-B8h]
  __int64 v126; // [rsp+118h] [rbp-B0h]
  unsigned int v127; // [rsp+120h] [rbp-A8h] BYREF
  char v128; // [rsp+124h] [rbp-A4h]
  __int16 v129; // [rsp+180h] [rbp-48h]
  char v130; // [rsp+182h] [rbp-46h]

  v99 = a6;
  sub_1A49A10(a1, a3, a2, 0, 0, a6, a7, a8);
  v14 = *(__int64 **)(a3 + 8);
  v15 = *(unsigned int *)(a3 + 16);
  v103 = a12 != 0;
  v16 = v15;
  if ( !(8 * v15) )
    goto LABEL_67;
  v17 = *(__int64 **)(a3 + 8);
  v104 = 0;
  v18 = 0;
  v19 = 0;
  v96 = 0;
  v105 = 1;
  v106 = 0;
  do
  {
    while ( 1 )
    {
      v26 = v17 + 1;
      v27 = *v17 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 53 <= 1 )
        v27 = *(_QWORD *)(v27 + 64);
      if ( *(char *)(v27 + 28) < 0 )
      {
        v13 = v14[v16 - 1];
LABEL_39:
        v21 = (unsigned int)(v15 - 1);
        v15 = v21;
        *(_DWORD *)(a3 + 16) = v21;
        if ( v17 != &v14[v21] )
        {
          *v17 = v13;
          v21 = *(unsigned int *)(a3 + 16);
          v14 = *(__int64 **)(a3 + 8);
          v15 = v21;
        }
        v106 = 1;
        goto LABEL_8;
      }
      v28 = *(_BYTE *)(v27 + 28) & 0x7F;
      v29 = (unsigned int)v28 - 34;
      if ( (unsigned int)v29 > 5 )
        goto LABEL_37;
      if ( (unsigned int)sub_B76070(v27, v15, v29, v13) == 1 )
      {
        v32 = *(_QWORD *)(**(_QWORD **)(v27 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL;
        v33 = *(_QWORD *)v32;
        if ( *(_BYTE *)(*(_QWORD *)v32 + 16LL) == 42
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
          && sub_F63050(v33, v15, v30, v31) )
        {
          v34 = v99;
          v35 = 0;
          v28 = *(_BYTE *)(v27 + 28) & 0x7F;
          goto LABEL_16;
        }
      }
      v38 = (unsigned int)sub_B76070(v27, v15, v30, v31) == a5;
      v39 = *(_BYTE *)(v27 + 28);
      if ( !v38 )
      {
        v28 = v39 & 0x7F;
        v34 = 0;
        v35 = 0;
        goto LABEL_16;
      }
      v28 = v39 & 0x7F;
      if ( a5 )
      {
        v40 = 0;
        v41 = 0;
        while ( *(_QWORD *)(*(_QWORD *)&byte_8[a4[v41] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 120) + 8 * v41) + 48LL) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v41 = (unsigned int)++v40;
          if ( v40 == a5 )
            goto LABEL_78;
        }
LABEL_37:
        v34 = 0;
        v35 = 0;
        goto LABEL_16;
      }
LABEL_78:
      v35 = v105;
      v34 = 0;
LABEL_16:
      if ( v28 == 71 )
      {
        v20 = *(_QWORD *)(v27 + 56);
        if ( (*(_DWORD *)(v20 + 20) & 0x1FFFFFFF) != 1 )
        {
          v21 = *(unsigned int *)(a3 + 16);
          v14 = *(__int64 **)(a3 + 8);
          v22 = 0;
          v23 = a10;
          v13 = v103;
          v15 = v21;
          v24 = v21;
          goto LABEL_5;
        }
        v112 = v34;
        v107 = v35;
        v22 = sub_B8BE90(*(_QWORD *)(v20 + 24));
        v35 = v107;
        v34 = v112;
        if ( v22 )
        {
          if ( !a12 )
          {
            v21 = *(unsigned int *)(a3 + 16);
            v14 = *(__int64 **)(a3 + 8);
            v23 = 0;
            v13 = 0;
            v15 = v21;
            v24 = v21;
            goto LABEL_5;
          }
        }
        else if ( !a12 )
        {
          v120[2] = (__int64)v17;
          sub_17A18A0((__int64 *)(a3 + 8), v17);
          v21 = *(unsigned int *)(a3 + 16);
          v14 = *(__int64 **)(a3 + 8);
          v106 = 1;
          v15 = v21;
          goto LABEL_8;
        }
        v117 = v112;
        v115 = v107;
        v102 = *(_DWORD *)(a1 + 11200);
        v113 = *(_BYTE *)(a1 + 12592);
        v114 = *(_BYTE *)(a1 + 11248);
        v108 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
        sub_1DBADC0(a1);
        if ( !v42 )
          *(_BYTE *)(a1 + 12592) = 1;
        v130 = 0;
        v122[1] = (void *)0x400000000LL;
        v122[0] = v123;
        ptr = &v127;
        v129 = 0;
        v126 = 0x400000000LL;
        v121[0] = v121[0] & 0xFFFFFFFE00000000LL | 8;
        v121[1] = a12;
        v121[3] = a12 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(_BYTE *)(a1 + 11248) = 0;
        v43 = sub_1CCE030(
                a1,
                *(_QWORD *)(v20 + 24),
                (unsigned int)v121,
                v27,
                *(_DWORD *)(a3 + 128),
                *(_DWORD *)(a3 + 128),
                0,
                (__int64)v122,
                0);
        v35 = v115;
        v34 = v117;
        v44 = v43;
        v22 = 0;
        if ( !v44 )
          v22 = *(_DWORD *)(a1 + 11200) <= v102;
        if ( ptr != &v127 )
        {
          v110 = v22;
          free(ptr);
          v34 = v117;
          v35 = v115;
          v22 = v110;
        }
        if ( v122[0] != v123 )
        {
          v118 = v34;
          v116 = v35;
          v111 = v22;
          free(v122[0]);
          v34 = v118;
          v35 = v116;
          v22 = v111;
        }
        *(_DWORD *)(a1 + 11200) = v102;
        v45 = *(_QWORD *)(a1 + 264);
        *(_BYTE *)(a1 + 12592) = v113;
        *(_BYTE *)(a1 + 11248) = v114;
        if ( *(_DWORD *)(v45 + 204) == 5 )
          *(_BYTE *)(v45 + 194) = 1;
        v13 = 3;
        if ( !v108 )
          v13 = 0;
        *(_DWORD *)(v45 + 204) = v13;
        v14 = *(__int64 **)(a3 + 8);
        if ( a9 )
        {
          v15 = *(unsigned int *)(a3 + 16);
          if ( v22 )
          {
            v46 = v96 | v104 | v18;
            a9 = v46;
            if ( v46 )
            {
              v19 = v46;
              v17 = *(__int64 **)(a3 + 8);
              v99 = 0;
              v18 = 0;
              v104 = 0;
              v21 = (unsigned int)v15;
              v96 = 0;
              v105 = 0;
              a10 = 0;
            }
            else
            {
              v99 = 0;
              ++v17;
              v18 = 0;
              v19 = v22;
              v104 = 0;
              v21 = (unsigned int)v15;
              v96 = 0;
              v105 = 0;
              a10 = 0;
              a9 = v22;
            }
            goto LABEL_8;
          }
          v21 = (unsigned int)v15;
          v23 = 0;
          v13 = a9;
          v24 = (unsigned int)v15;
        }
        else
        {
          v21 = *(unsigned int *)(a3 + 16);
          v23 = 0;
          v13 = 1;
          v15 = v21;
          v24 = v21;
        }
LABEL_5:
        if ( v35 )
          goto LABEL_6;
        goto LABEL_18;
      }
      v21 = *(unsigned int *)(a3 + 16);
      v14 = *(__int64 **)(a3 + 8);
      v23 = 0;
      v22 = 0;
      v13 = v103;
      v15 = v21;
      v24 = v21;
      if ( v35 )
      {
LABEL_6:
        v25 = v96 | v19 | v18;
        v105 = v25;
        if ( v25 )
        {
          a9 = v13;
          v17 = v14;
          v19 = 0;
          v99 = 0;
          v96 = 0;
          a10 = 0;
          v104 = v25;
          v18 = 0;
        }
        else
        {
          v99 = 0;
          ++v17;
          v18 = 0;
          v19 = 0;
          v104 = v35;
          v96 = 0;
          a10 = 0;
          v105 = v35;
          a9 = v13;
        }
        goto LABEL_8;
      }
LABEL_18:
      if ( v34 )
      {
        v99 = v34;
        ++v17;
        v96 = v34;
        goto LABEL_8;
      }
      v36 = a9 & v22;
      if ( !v36 )
        break;
      ++v17;
      v19 = v36;
      a9 = v36;
LABEL_8:
      v16 = v21;
      if ( v17 == &v14[v16] )
        goto LABEL_22;
    }
    if ( !v23 )
    {
      v13 = v14[v24 - 1];
      goto LABEL_39;
    }
    v16 = v21;
    ++v17;
    v18 = v23;
    a10 = v23;
  }
  while ( v26 != &v14[v16] );
LABEL_22:
  if ( v106 )
  {
    v51 = *(_DWORD *)a3;
    if ( (_DWORD)v15 )
    {
      v52 = 0;
      if ( v51 == 5 )
        v52 = *(_DWORD *)(a3 + 4);
      *(_DWORD *)a3 = 2;
      sub_1A43500(a3);
      if ( *(_DWORD *)a3 == 5 )
      {
        *(_DWORD *)(a3 + 4) = v52;
      }
      else
      {
        v53 = *(char **)(a3 + 88);
        if ( v53 )
        {
          sub_1A38860(v53);
          *(_QWORD *)(a3 + 88) = 0;
        }
      }
    }
    else
    {
      if ( v51 != 1 )
        *(_DWORD *)a3 = 0;
      v54 = *(void **)(a3 + 88);
      if ( v54 )
      {
        sub_F7C4A0(*(_QWORD *)(a3 + 88));
        operator delete(v54, 0x170u);
        *(_QWORD *)(a3 + 88) = 0;
      }
    }
  }
  if ( !v19 || (result = 4, !a12) )
  {
    result = 2;
    if ( !v104 )
    {
      if ( v96 )
      {
        result = 3;
        if ( !v19 )
          return result;
        sub_168B9F0((__int64)v122, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 128), 0x1286u, 0);
        v55 = *(_QWORD *)(a3 + 120);
        if ( (_BYTE)v126 )
        {
          sub_AE9DF0(v124, *(_QWORD *)(a3 + 120), 9u);
        }
        else if ( v128 )
        {
          v65 = sub_168B9E0(v122);
          v66 = v123[0];
          if ( v123[0] )
            v66 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v123[0] + 32LL))(v123[0]);
          v121[0] = v66;
          v67 = sub_1587BC0(v65, v121, v61, v62, v63, v64);
          sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * v127 + 8), v55, 9u);
        }
        sub_15F7200(v122);
        v56 = *(__int64 **)(a3 + 8);
        v57 = &v56[*(unsigned int *)(a3 + 16)];
        if ( v57 != v56 )
        {
          do
          {
            v58 = *v56++;
            v58 &= 0xFFFFFFFFFFFFFFF8LL;
            v59 = sub_16C47B0(v58);
            v60 = sub_B8BF30(v59);
            sub_1BE6900(a1, v58, v60, 0, 0, 0);
          }
          while ( v57 != v56 );
          return 0;
        }
        return 0;
      }
      result = 4;
      if ( v19 )
        return result;
      result = 5;
      if ( v18 )
        return result;
LABEL_67:
      result = 1;
      if ( !a11 )
        return result;
      sub_168B9F0((__int64)v122, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 128), 0x129Cu, 0);
      v47 = *(_QWORD *)(a3 + 120);
      if ( (_BYTE)v126 )
      {
        sub_AE9DF0(v124, *(_QWORD *)(a3 + 120), 9u);
      }
      else if ( v128 )
      {
        v79 = sub_168B9E0(v122);
        v80 = v123[0];
        if ( v123[0] )
          v80 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v123[0] + 32LL))(v123[0]);
        v121[0] = v80;
        v81 = sub_1587BC0(v79, v121, v75, v76, v77, v78);
        sub_AE9DF0((unsigned __int8 **)(*v81 + 32LL * v127 + 8), v47, 9u);
      }
      v119 = a5;
      v48 = sub_1587D10((__int64)v122, &v119);
      v49 = v48;
      if ( *(_BYTE *)(v48 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v48 + 32), *a4, 8u);
      }
      else if ( *(_BYTE *)(v48 + 132) )
      {
        v70 = sub_168B9E0((_QWORD *)v48);
        v73 = *(_QWORD *)(v49 + 16);
        if ( v73 )
          v73 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v73 + 32LL))(*(_QWORD *)(v49 + 16));
        v121[0] = v73;
        v74 = sub_1587BC0(v70, v121, v68, v69, v71, v72);
        sub_AE9DF0((unsigned __int8 **)(*v74 + 32LL * *(unsigned int *)(v49 + 128) + 8), *a4, 8u);
      }
      if ( a5 == 2 )
        v120[0] = a4[1];
      else
        v120[0] = 0;
      v50 = a10 | a9;
      if ( *(_BYTE *)(v49 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v49 + 32), v120[0], 8u);
      }
      else
      {
        if ( !*(_BYTE *)(v49 + 132) )
        {
LABEL_76:
          sub_15F7200(v122);
          return 0;
        }
        sub_1A41500(v49, v120);
      }
      if ( *(_BYTE *)(v49 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v49 + 32), v99, 2u);
      }
      else
      {
        if ( !*(_BYTE *)(v49 + 132) )
          goto LABEL_76;
        v93 = sub_168B9E0((_QWORD *)v49);
        v94 = *(_QWORD *)(v49 + 16);
        if ( v94 )
          v94 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v94 + 32LL))(*(_QWORD *)(v49 + 16));
        v121[0] = v94;
        v95 = sub_1587BC0(v93, v121, v89, v90, v91, v92);
        sub_AE9DF0((unsigned __int8 **)(*v95 + 32LL * *(unsigned int *)(v49 + 128) + 8), v99, 2u);
      }
      if ( *(_BYTE *)(v49 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v49 + 32), v50, 2u);
      }
      else if ( *(_BYTE *)(v49 + 132) )
      {
        v86 = sub_168B9E0((_QWORD *)v49);
        v87 = *(_QWORD *)(v49 + 16);
        if ( v87 )
          v87 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v87 + 32LL))(*(_QWORD *)(v49 + 16));
        v121[0] = v87;
        v88 = sub_1587BC0(v86, v121, v82, v83, v84, v85);
        sub_AE9DF0((unsigned __int8 **)(*v88 + 32LL * *(unsigned int *)(v49 + 128) + 8), v50, 2u);
      }
      goto LABEL_76;
    }
  }
  return result;
}
