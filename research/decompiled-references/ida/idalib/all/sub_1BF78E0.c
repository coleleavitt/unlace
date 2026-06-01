__int64 __fastcall sub_1BF78E0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int64 *a9,
        unsigned __int64 a10,
        _QWORD *a11)
{
  unsigned int v11; // r12d
  unsigned __int64 v13; // r13
  unsigned int v16; // eax
  char *v17; // rdi
  __int64 v18; // r13
  int v19; // eax
  char *v20; // rdi
  __int64 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r12
  __int64 *v28; // r13
  __int64 *v29; // rbx
  _QWORD *v30; // rsi
  size_t v31; // rax
  __int64 v32; // rsi
  __int64 v33; // r15
  __int64 v34; // rax
  char *v35; // rdi
  __int64 v36; // rax
  char *v37; // rax
  char *v38; // r15
  __int64 v39; // rdx
  __int64 *v40; // rsi
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r15
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rbx
  __int64 v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r13
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v59; // [rsp+30h] [rbp-21C8h]
  char *v60; // [rsp+38h] [rbp-21C0h]
  int v61; // [rsp+44h] [rbp-21B4h] BYREF
  __int64 *v62; // [rsp+48h] [rbp-21B0h] BYREF
  __int64 v63; // [rsp+50h] [rbp-21A8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-21A0h] BYREF
  __m128i v65; // [rsp+60h] [rbp-2198h] BYREF
  _BYTE v66[128]; // [rsp+70h] [rbp-2188h] BYREF
  _QWORD v67[2]; // [rsp+F0h] [rbp-2108h] BYREF
  unsigned int v68; // [rsp+100h] [rbp-20F8h]
  void *v69; // [rsp+108h] [rbp-20F0h]
  __int64 v70; // [rsp+110h] [rbp-20E8h]
  _BYTE v71[136]; // [rsp+118h] [rbp-20E0h] BYREF
  _QWORD v72[2]; // [rsp+1A0h] [rbp-2058h] BYREF
  unsigned int v73; // [rsp+1B0h] [rbp-2048h]
  void *v74; // [rsp+1B8h] [rbp-2040h]
  __int64 v75; // [rsp+1C0h] [rbp-2038h]
  _BYTE v76[136]; // [rsp+1C8h] [rbp-2030h] BYREF
  unsigned __int64 v77; // [rsp+250h] [rbp-1FA8h] BYREF
  __int64 v78; // [rsp+258h] [rbp-1FA0h]
  unsigned int v79; // [rsp+260h] [rbp-1F98h]
  void *ptr; // [rsp+268h] [rbp-1F90h] BYREF
  __int64 v81; // [rsp+270h] [rbp-1F88h]
  _BYTE v82[136]; // [rsp+278h] [rbp-1F80h] BYREF
  _QWORD v83[2]; // [rsp+300h] [rbp-1EF8h] BYREF
  char v84; // [rsp+310h] [rbp-1EE8h] BYREF
  char *v85; // [rsp+D90h] [rbp-1468h]
  __int64 v86; // [rsp+D98h] [rbp-1460h]
  int v87; // [rsp+DA0h] [rbp-1458h]
  char v88; // [rsp+DA4h] [rbp-1454h]
  char v89; // [rsp+DA8h] [rbp-1450h] BYREF
  __int64 v90; // [rsp+E28h] [rbp-13D0h]
  int v91; // [rsp+E30h] [rbp-13C8h]
  __int64 v92; // [rsp+E38h] [rbp-13C0h]
  __int64 v93; // [rsp+E40h] [rbp-13B8h]
  char *v94; // [rsp+E48h] [rbp-13B0h]
  __int64 v95; // [rsp+E50h] [rbp-13A8h]
  char v96; // [rsp+E58h] [rbp-13A0h] BYREF
  _QWORD *v97; // [rsp+E78h] [rbp-1380h]
  __int64 v98; // [rsp+E80h] [rbp-1378h]
  _QWORD v99[2]; // [rsp+E88h] [rbp-1370h] BYREF
  unsigned int v100; // [rsp+E98h] [rbp-1360h]
  int v101; // [rsp+E9Ch] [rbp-135Ch]
  __int64 v102; // [rsp+EA0h] [rbp-1358h]
  char v103; // [rsp+EA8h] [rbp-1350h]
  int v104; // [rsp+EACh] [rbp-134Ch]
  int v105; // [rsp+21B0h] [rbp-48h]

  if ( *(_DWORD *)(a1 + 12596) >= *(_DWORD *)(a1 + 11320) || *(_DWORD *)a3 && *(_DWORD *)(a3 + 4) )
    return 0;
  if ( *(_QWORD *)(a3 + 8) )
    return 0;
  v13 = *(_QWORD *)(a1 + 544);
  if ( !v13 )
    return 0;
  while ( 1 )
  {
    LOBYTE(v16) = sub_B8E490(v13);
    v11 = v16;
    if ( !(_BYTE)v16 )
      break;
LABEL_13:
    v18 = *(_QWORD *)(sub_B8C1B0(v13) + 16);
    if ( (v18 & 4) != 0 )
    {
      v13 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v13 )
        return 0;
    }
    else
    {
      v13 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v13 )
        return 0;
    }
  }
  sub_1A48440(a1, a4, v13, 0);
  if ( !*(_DWORD *)(a4 + 16) )
  {
    v17 = *(char **)(a4 + 88);
    *(_DWORD *)a4 = 0;
    if ( v17 )
      sub_1A39780(v17);
    *(_BYTE *)(a4 + 166) = 0;
    a8 = 0;
    *(_OWORD *)(a4 + 88) = 0;
    goto LABEL_13;
  }
  v83[0] = &v84;
  v83[1] = 0x1000000000LL;
  v85 = &v89;
  v94 = &v96;
  *(_WORD *)(a4 + 163) = 0;
  v95 = 0x400000000LL;
  v97 = v99;
  v101 = a5;
  v100 = a2;
  v86 = 16;
  v87 = 0;
  v88 = 1;
  v90 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v98 = 0;
  v99[0] = 0;
  v99[1] = 1;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  sub_1BF7750((_QWORD *)a1, a4, a6, a9, a10, (unsigned int *)v83, a7, a8);
  v19 = sub_1BF27B0((__int64)v83, (_QWORD *)a1, a2, &v62, *(double *)a7.m128_u64, a8);
  if ( (*(_BYTE *)(v13 + 8) & 0x7Fu) - 59 <= 2 && v13 != 64 )
  {
    if ( a11 )
    {
      *a11 = v13 - 64;
      if ( !v19 )
      {
        v20 = *(char **)(a4 + 88);
        *(_DWORD *)a4 = 0;
        *(_DWORD *)(a4 + 16) = 0;
        if ( v20 )
          sub_1A39780(v20);
        v21 = v62;
        *(_BYTE *)(a4 + 166) = 0;
        *(_OWORD *)(a4 + 88) = 0;
        v77 = v21[1] & 0xFFFFFFFFFFFFFFFBLL;
        sub_1743080(a4 + 8, v77);
        *(_DWORD *)a4 = 2;
        sub_1A43500(a4);
      }
    }
    goto LABEL_25;
  }
  if ( v19 )
    goto LABEL_25;
  v67[0] = 0;
  v69 = v71;
  v74 = v76;
  v67[1] = 0;
  v68 = 0;
  v70 = 0x1000000000LL;
  v72[0] = 0;
  v72[1] = 0;
  v73 = 0;
  v75 = 0x1000000000LL;
  sub_1A679B0(a1, a2, (__int64)a9, a10, (__int64)v67, (__int64)v72);
  v77 = 0;
  ptr = v82;
  v22 = *(_QWORD *)(a4 + 120);
  v78 = 0;
  v81 = 0x1000000000LL;
  v79 = 0;
  if ( (v22 & 7) != 6 || (unsigned int)(*(_DWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL) - 1) > 3 )
  {
    v27 = sub_183D350(a1);
    if ( v27 )
      v27 += 48;
    v28 = (__int64 *)((char *)v69 + 8 * (unsigned int)v70);
    if ( v28 != v69 )
    {
      v59 = a4;
      v29 = (__int64 *)v69;
      while ( 1 )
      {
        v32 = *v29;
        if ( v27 )
        {
          if ( (unsigned __int8)sub_B91990(v27, v32, v23, v24, v25, v26) )
            goto LABEL_36;
          v32 = *v29;
        }
        if ( (*(_BYTE *)(v32 + 8) & 0x7F) == 0x18 )
        {
          v30 = (_QWORD *)(v32 - 48);
          if ( v30 )
          {
            sub_B76FC0((__int64)&v65, v30);
            v31 = j__strlen("__");
            if ( sub_9983C0(v65.m128i_i64, "__", 0, v31) != -1 )
            {
              if ( (_BYTE *)v65.m128i_i64[0] != v66 )
                operator delete((void *)v65.m128i_i64[0]);
              goto LABEL_36;
            }
            if ( (_BYTE *)v65.m128i_i64[0] != v66 )
              operator delete((void *)v65.m128i_i64[0]);
          }
        }
        if ( (_DWORD)v78 )
        {
          sub_1BE54E0(&v65, (__int64)&v77, (__int64)v29, v24, v25, v26);
          if ( v66[0] )
          {
            v43 = (unsigned int)v81;
            v24 = HIDWORD(v81);
            v44 = *v29;
            v45 = (unsigned int)v81 + 1LL;
            if ( v45 > HIDWORD(v81) )
            {
              sub_2237220(&ptr, v82, v45, 8);
              v43 = (unsigned int)v81;
            }
            v23 = (__int64)ptr;
            *((_QWORD *)ptr + v43) = v44;
            LODWORD(v81) = v81 + 1;
          }
          goto LABEL_36;
        }
        v23 = (__int64)ptr;
        v33 = *v29;
        v34 = 8LL * (unsigned int)v81;
        v35 = (char *)ptr + v34;
        v36 = v34 >> 5;
        if ( v36 )
        {
          if ( *(_QWORD *)ptr == v33 )
          {
            v37 = (char *)ptr;
            goto LABEL_66;
          }
          if ( *((_QWORD *)ptr + 1) == v33 )
          {
            v37 = (char *)ptr + 8;
            goto LABEL_66;
          }
          if ( *((_QWORD *)ptr + 2) == v33 )
          {
            v37 = (char *)ptr + 16;
            goto LABEL_66;
          }
          v24 = (__int64)ptr + 32 * v36;
          v37 = (char *)ptr + 24;
          if ( *((_QWORD *)ptr + 3) == v33 )
            goto LABEL_66;
          while ( 1 )
          {
            v37 = (char *)(v23 + 32);
            if ( v24 == v23 + 32 )
              break;
            if ( *(_QWORD *)(v23 + 32) == v33 )
              goto LABEL_66;
            if ( *(_QWORD *)(v23 + 40) == v33 )
            {
              v37 = (char *)(v23 + 40);
              goto LABEL_66;
            }
            if ( *(_QWORD *)(v23 + 48) == v33 )
            {
              v37 = (char *)(v23 + 48);
              goto LABEL_66;
            }
            if ( *(_QWORD *)(v23 + 56) == v33 )
            {
              v37 = (char *)(v23 + 56);
              goto LABEL_66;
            }
            v23 += 32;
          }
        }
        else
        {
          v37 = (char *)ptr;
        }
        v23 = (v35 - v37) >> 3;
        if ( v23 == 2 )
          goto LABEL_95;
        if ( v23 != 3 )
        {
          if ( v23 != 1 )
            goto LABEL_57;
LABEL_97:
          if ( *(_QWORD *)v37 != v33 )
          {
LABEL_57:
            if ( (unsigned __int64)(unsigned int)v81 + 1 > HIDWORD(v81) )
            {
              sub_2237220(&ptr, v82, (unsigned int)v81 + 1LL, 8);
              v35 = (char *)ptr + 8 * (unsigned int)v81;
            }
            *(_QWORD *)v35 = v33;
            v23 = (unsigned int)(v81 + 1);
            LODWORD(v81) = v23;
            if ( (unsigned int)v23 > 0x10 )
            {
              v38 = (char *)ptr;
              v60 = (char *)ptr + 8 * v23;
              do
              {
                v39 = (__int64)v38;
                v38 += 8;
                sub_1BE54E0(&v65, (__int64)&v77, v39, v24, v25, v26);
              }
              while ( v60 != v38 );
            }
            goto LABEL_36;
          }
          goto LABEL_66;
        }
        if ( *(_QWORD *)v37 != v33 )
        {
          v37 += 8;
LABEL_95:
          if ( *(_QWORD *)v37 != v33 )
          {
            v37 += 8;
            goto LABEL_97;
          }
        }
LABEL_66:
        if ( v35 == v37 )
          goto LABEL_57;
LABEL_36:
        if ( ++v29 == v28 )
        {
          a4 = v59;
          break;
        }
      }
    }
  }
  sub_168B9F0((__int64)&v65, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 128), 0x10E7u, 0);
  v64 = *(_QWORD *)(a4 + 120);
  sub_15894B0((__int64)&v65, &v64);
  sub_15F7200(&v65);
  if ( !(_DWORD)v81 )
  {
    sub_168B9F0((__int64)&v65, (__int64 *)(a1 + 8), *(_DWORD *)(*v62 + 24), 0x17FCu, 0);
    v64 = *(_QWORD *)(a4 + 120);
    v42 = sub_15894B0((__int64)&v65, &v64);
    LODWORD(v63) = 0;
    goto LABEL_72;
  }
  v40 = (__int64 *)(a1 + 8);
  v41 = *(_DWORD *)(*v62 + 24);
  if ( (_DWORD)v81 != 1 )
  {
    sub_168B9F0((__int64)&v65, v40, v41, 0x17FCu, 0);
    v64 = *(_QWORD *)(a4 + 120);
    v42 = sub_15894B0((__int64)&v65, &v64);
    LODWORD(v63) = 2;
LABEL_72:
    sub_1587D10(v42, (int *)&v63);
    goto LABEL_73;
  }
  sub_168B9F0((__int64)&v65, v40, v41, 0x17FCu, 0);
  v63 = *(_QWORD *)(a4 + 120);
  v46 = sub_15894B0((__int64)&v65, &v63);
  v61 = 1;
  v47 = sub_1587D10(v46, &v61);
  v48 = (__int64 *)ptr;
  v49 = v47;
  if ( *(_BYTE *)(v47 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v47 + 32), *(_QWORD *)ptr, 0xCu);
  }
  else if ( *(_BYTE *)(v47 + 132) )
  {
    v54 = sub_168B9E0((_QWORD *)v47);
    v55 = *(_QWORD *)(v49 + 16);
    if ( v55 )
      v55 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v55 + 32LL))(*(_QWORD *)(v49 + 16));
    v64 = v55;
    v56 = sub_1587BC0(v54, &v64, v50, v51, v52, v53);
    sub_AE9DF0((unsigned __int8 **)(*v56 + 32LL * *(unsigned int *)(v49 + 128) + 8), *v48, 0xCu);
  }
LABEL_73:
  sub_15F7200(&v65);
  if ( ptr != v82 )
    free(ptr);
  operator delete(v77, 8LL * v79, 8);
  if ( v74 != v76 )
    free(v74);
  operator delete(v72[0], 8LL * v73, 8);
  if ( v69 != v71 )
    free(v69);
  v11 = 1;
  operator delete(v67[0], 8LL * v68, 8);
LABEL_25:
  sub_17A20D0((__int64)v83);
  return v11;
}
