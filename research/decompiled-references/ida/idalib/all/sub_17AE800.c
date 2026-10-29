void __fastcall sub_17AE800(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // r14d
  __int64 v6; // rbx
  int v7; // r13d
  _DWORD *v8; // rax
  char v9; // dl
  unsigned int v10; // r15d
  int v11; // ecx
  int v12; // r11d
  int *v13; // rax
  int v14; // eax
  unsigned __int64 v15; // r14
  __int64 v16; // rax
  int v17; // esi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  int v20; // r11d
  int v21; // ecx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // edx
  char v26; // dl
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // r14d
  __int64 v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // rax
  char v34; // al
  __int64 v35; // rdx
  char v36; // r13
  __int64 v37; // rax
  char v38; // r13
  char v39; // dl
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  unsigned __int64 v43; // r15
  __int64 v44; // rax
  _QWORD *v45; // rcx
  unsigned __int64 v46; // r15
  __int64 v47; // rax
  _QWORD *v48; // r9
  unsigned __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // r14
  unsigned __int64 v52; // r15
  __int64 v53; // rax
  _QWORD *v54; // r14
  char v55; // dl
  char v56; // dl
  char v57; // dl
  unsigned __int64 v58; // r13
  __int64 v59; // rax
  _QWORD *v60; // rcx
  unsigned __int64 v61; // r14
  __int64 v62; // rax
  _QWORD *v63; // rcx
  _DWORD *v64; // rax
  _DWORD *v65; // rdx
  _DWORD *v66; // rax
  _DWORD *v67; // rdx
  _DWORD *v68; // rax
  _DWORD *v69; // rdx
  _DWORD *v70; // rax
  _DWORD *v71; // rdx
  _DWORD *v72; // rax
  _DWORD *v73; // rdx
  _DWORD *v74; // rax
  _DWORD *v75; // rdx
  int v76; // [rsp+0h] [rbp-118h]
  unsigned int v77; // [rsp+0h] [rbp-118h]
  _QWORD *v78; // [rsp+0h] [rbp-118h]
  unsigned int v79; // [rsp+8h] [rbp-110h]
  _QWORD *v80; // [rsp+8h] [rbp-110h]
  _QWORD *v81; // [rsp+8h] [rbp-110h]
  unsigned int v82; // [rsp+10h] [rbp-108h]
  int v83; // [rsp+14h] [rbp-104h]
  int v84; // [rsp+14h] [rbp-104h]
  int v85; // [rsp+14h] [rbp-104h]
  int v86; // [rsp+14h] [rbp-104h]
  int v87; // [rsp+14h] [rbp-104h]
  int v88; // [rsp+14h] [rbp-104h]
  int v89; // [rsp+14h] [rbp-104h]
  int v90; // [rsp+14h] [rbp-104h]
  int v91; // [rsp+14h] [rbp-104h]
  int v92; // [rsp+18h] [rbp-100h]
  int v93; // [rsp+18h] [rbp-100h]
  int v94; // [rsp+18h] [rbp-100h]
  int v95; // [rsp+18h] [rbp-100h]
  int v96; // [rsp+18h] [rbp-100h]
  int v97; // [rsp+18h] [rbp-100h]
  int v98; // [rsp+18h] [rbp-100h]
  char v99; // [rsp+18h] [rbp-100h]
  _QWORD *v100; // [rsp+18h] [rbp-100h]
  unsigned int v101; // [rsp+20h] [rbp-F8h]
  int v102; // [rsp+20h] [rbp-F8h]
  unsigned int v103; // [rsp+24h] [rbp-F4h]
  __int64 v104; // [rsp+28h] [rbp-F0h]
  int v105; // [rsp+28h] [rbp-F0h]
  unsigned __int64 v106; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v107; // [rsp+38h] [rbp-E0h]
  __int64 v108; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 *v109; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v110[200]; // [rsp+50h] [rbp-C8h] BYREF

  v3 = a3 & 0x7FFFFFFF;
  v4 = v3;
  v6 = *(_QWORD *)(a1 + 272);
  if ( v3 >= *(_DWORD *)(v6 + 476) && v3 < *(_DWORD *)(v6 + 480) )
    v7 = *(_DWORD *)(v6 + 472);
  else
    v7 = sub_101D590(*(_QWORD *)(a1 + 272), v3);
  v110[0] = 0;
  v82 = v7;
  v76 = v7 + 1;
  if ( (unsigned int)(v7 + 1) <= 1 )
    goto LABEL_11;
  if ( v7 >= 0 )
  {
    v8 = (_DWORD *)(*(_QWORD *)(v6 + 184) + 24LL * (unsigned int)v7);
    goto LABEL_7;
  }
  v43 = (unsigned int)(-2 - v7);
  v44 = *(_QWORD *)(*(_QWORD *)(v6 + 320) + 8LL * ((unsigned int)(-2 - v7) >> 6));
  if ( _bittest64(&v44, v43) )
  {
    v45 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v43 >> 5));
    if ( *v45 )
    {
      v8 = (_DWORD *)(*v45 + 24LL * ((-2 - (_BYTE)v7) & 0x1F));
      goto LABEL_7;
    }
    v80 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v43 >> 5));
    v70 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v6 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
    v71 = v70 + 192;
    *v80 = v70;
    do
    {
      *v70 = 0;
      v70 += 6;
      *((_OWORD *)v70 - 1) = 0;
      *((_QWORD *)v70 - 1) = 0;
    }
    while ( v70 != v71 );
    v9 = v110[0];
    v8 = (_DWORD *)(*v80 + 24LL * ((-2 - (_BYTE)v7) & 0x1F));
  }
  else
  {
    v8 = (_DWORD *)sub_101F930(v6, v43, v110);
    v9 = v110[0];
  }
  if ( v9 )
    goto LABEL_11;
LABEL_7:
  if ( !v8 )
  {
LABEL_11:
    v76 = 1;
    v7 = 0;
    v82 = 0;
    v103 = 0;
    goto LABEL_12;
  }
  v103 = v4 - (*v8 & 0x7FFFFFFF);
LABEL_12:
  v10 = *(_DWORD *)(a2 + 24) & 0x7FFFFFFF;
  if ( v10 >= *(_DWORD *)(v6 + 476) && v10 < *(_DWORD *)(v6 + 480) )
    v11 = *(_DWORD *)(v6 + 472);
  else
    v11 = sub_101D590(v6, v10);
  v12 = v11 + 1;
  v110[0] = 0;
  v79 = v11;
  if ( (unsigned int)(v11 + 1) <= 1 )
    goto LABEL_37;
  if ( v11 >= 0 )
  {
    v13 = (int *)(*(_QWORD *)(v6 + 184) + 24LL * (unsigned int)v11);
    goto LABEL_18;
  }
  v49 = (unsigned int)(-2 - v11);
  v50 = *(_QWORD *)(*(_QWORD *)(v6 + 320) + 8LL * ((unsigned int)(-2 - v11) >> 6));
  if ( !_bittest64(&v50, v49) )
  {
    v93 = v11;
    v84 = v11 + 1;
    v13 = (int *)sub_101F930(v6, v49, v110);
    v26 = v110[0];
    v12 = v84;
    v11 = v93;
    goto LABEL_36;
  }
  v51 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v49 >> 5));
  if ( !*v51 )
  {
    v102 = v11;
    v99 = -2 - v11;
    v90 = v11 + 1;
    v66 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v6 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
    v12 = v90;
    *v51 = v66;
    v11 = v102;
    v67 = v66 + 192;
    do
    {
      *v66 = 0;
      v66 += 6;
      *((_OWORD *)v66 - 1) = 0;
      *((_QWORD *)v66 - 1) = 0;
    }
    while ( v66 != v67 );
    v26 = v110[0];
    v13 = (int *)(*v51 + 24LL * (v99 & 0x1F));
LABEL_36:
    if ( !v26 )
      goto LABEL_18;
LABEL_37:
    v11 = 0;
    v12 = 1;
    v79 = 0;
    v101 = 0;
    v110[0] = 0;
    if ( v76 == 1 )
      goto LABEL_20;
    goto LABEL_38;
  }
  v13 = (int *)(*v51 + 24LL * ((-2 - (_BYTE)v11) & 0x1F));
LABEL_18:
  if ( !v13 )
    goto LABEL_37;
  v14 = *v13;
  v110[0] = 0;
  v101 = v10 - (v14 & 0x7FFFFFFF);
  if ( v76 == 1 )
    goto LABEL_20;
LABEL_38:
  if ( v7 >= 0 )
  {
    v27 = *(_QWORD *)(v6 + 184) + 24LL * v82;
LABEL_40:
    if ( v27 )
    {
      if ( *(char *)(v27 + 3) >= 0 )
      {
        v15 = *(_QWORD *)((*(_QWORD *)(v27 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( v15 )
        {
          while ( 1 )
          {
            v28 = *(_QWORD *)(v15 + 8);
            if ( !v28 )
              break;
            v15 = v28 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v28 & 4) == 0 || !v15 )
              goto LABEL_21;
          }
        }
      }
    }
    goto LABEL_20;
  }
  v52 = (unsigned int)(-2 - v7);
  v53 = *(_QWORD *)(*(_QWORD *)(v6 + 320) + 8LL * ((unsigned int)(-2 - v7) >> 6));
  if ( _bittest64(&v53, v52) )
  {
    v54 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v52 >> 5));
    if ( *v54 )
    {
      v27 = *v54 + 24LL * ((-2 - (_BYTE)v7) & 0x1F);
      goto LABEL_40;
    }
    v98 = v11;
    v89 = v12;
    v64 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v6 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
    v12 = v89;
    v11 = v98;
    *v54 = v64;
    v65 = v64 + 192;
    do
    {
      *v64 = 0;
      v64 += 6;
      *((_OWORD *)v64 - 1) = 0;
      *((_QWORD *)v64 - 1) = 0;
    }
    while ( v64 != v65 );
    v55 = v110[0];
    v27 = *v54 + 24LL * ((-2 - (_BYTE)v7) & 0x1F);
  }
  else
  {
    v97 = v11;
    v88 = v12;
    v27 = sub_101F930(v6, v52, v110);
    v55 = v110[0];
    v12 = v88;
    v11 = v97;
  }
  if ( !v55 )
    goto LABEL_40;
LABEL_20:
  v15 = 0;
LABEL_21:
  v110[0] = 0;
  if ( v12 == 1 )
    goto LABEL_73;
  if ( v11 >= 0 )
  {
    v16 = *(_QWORD *)(v6 + 184) + 24LL * v79;
    goto LABEL_24;
  }
  v46 = (unsigned int)(-2 - v11);
  v47 = *(_QWORD *)(*(_QWORD *)(v6 + 320) + 8LL * ((unsigned int)(-2 - v11) >> 6));
  if ( _bittest64(&v47, v46) )
  {
    v48 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v46 >> 5));
    if ( *v48 )
    {
      v16 = *v48 + 24LL * ((-2 - (_BYTE)v11) & 0x1F);
      goto LABEL_24;
    }
    v105 = v11;
    v100 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v46 >> 5));
    v91 = v12;
    v68 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v6 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
    v12 = v91;
    v11 = v105;
    v69 = v68 + 192;
    *v100 = v68;
    do
    {
      *v68 = 0;
      v68 += 6;
      *((_OWORD *)v68 - 1) = 0;
      *((_QWORD *)v68 - 1) = 0;
    }
    while ( v68 != v69 );
    v39 = v110[0];
    v16 = *v100 + 24 * (v46 & 0x1F);
  }
  else
  {
    v94 = v11;
    v85 = v12;
    v16 = sub_101F930(v6, v46, v110);
    v39 = v110[0];
    v12 = v85;
    v11 = v94;
  }
  if ( v39 )
  {
LABEL_73:
    v17 = *(_DWORD *)(a2 + 24);
    v104 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 104LL);
    goto LABEL_74;
  }
LABEL_24:
  v17 = *(_DWORD *)(a2 + 24);
  v104 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 104LL);
  if ( v16 && *(char *)(v16 + 3) >= 0 )
  {
    v18 = *(_QWORD *)((*(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
    if ( v17 >= 0 )
      goto LABEL_27;
    goto LABEL_77;
  }
LABEL_74:
  if ( v17 < 0 )
  {
    v18 = 0;
LABEL_77:
    v96 = v11;
    v87 = v12;
    v42 = sub_1021B90(v6, v17);
    v11 = v96;
    v12 = v87;
    v17 = v42;
LABEL_27:
    v92 = v11;
    v83 = v12;
    v19 = sub_101FA90(v6, v17);
    v108 = a1;
    v20 = v83;
    v106 = v19;
    v21 = v92;
    v107 = v22;
    v109 = &v106;
    if ( v18 )
    {
      v23 = v18;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v23 + 8);
        if ( !v24 )
          break;
        v23 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v24 & 4) == 0 || !v23 )
          goto LABEL_32;
      }
    }
    if ( v15 )
      goto LABEL_33;
    goto LABEL_50;
  }
  v95 = v11;
  v18 = 0;
  v86 = v12;
  v40 = sub_101FA90(v6, v17);
  v108 = a1;
  v20 = v86;
  v106 = v40;
  v21 = v95;
  v109 = &v106;
  v23 = 0;
  v107 = v41;
LABEL_32:
  if ( v23 != v15 )
    goto LABEL_33;
LABEL_50:
  if ( v101 != v103 )
  {
LABEL_33:
    v25 = *(_DWORD *)(a2 + 24);
    if ( v25 )
    {
      sub_168B9F0((__int64)v110, (__int64 *)(a1 + 8), v25, 0x71u, 0);
      sub_15F7200(v110);
    }
    return;
  }
  v110[0] = 0;
  if ( v20 == 1 )
    goto LABEL_95;
  if ( v21 < 0 )
  {
    v61 = (unsigned int)(-2 - v21);
    v62 = *(_QWORD *)(*(_QWORD *)(v6 + 320) + 8LL * ((unsigned int)(-2 - v21) >> 6));
    if ( _bittest64(&v62, v61) )
    {
      v63 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v61 >> 5));
      if ( *v63 )
      {
        v29 = *v63 + 24 * (v61 & 0x1F);
        goto LABEL_54;
      }
      v81 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v61 >> 5));
      v74 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v6 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      v75 = v74 + 192;
      *v81 = v74;
      do
      {
        *v74 = 0;
        v74 += 6;
        *((_OWORD *)v74 - 1) = 0;
        *((_QWORD *)v74 - 1) = 0;
      }
      while ( v74 != v75 );
      v56 = v110[0];
      v29 = *v81 + 24 * (v61 & 0x1F);
    }
    else
    {
      v29 = sub_101F930(v6, v61, v110);
      v56 = v110[0];
    }
    if ( v56 )
      goto LABEL_95;
    goto LABEL_54;
  }
  v29 = *(_QWORD *)(v6 + 184) + 24LL * v79;
LABEL_54:
  if ( v29 && *(char *)(v29 + 3) >= 0 )
  {
    v30 = *(_DWORD *)(v29 + 8);
    goto LABEL_57;
  }
LABEL_95:
  v30 = 0;
LABEL_57:
  v110[0] = 0;
  if ( v76 == 1 )
    goto LABEL_98;
  if ( v7 < 0 )
  {
    v58 = (unsigned int)(-2 - v7);
    v59 = *(_QWORD *)(*(_QWORD *)(v6 + 320) + 8LL * ((unsigned int)v58 >> 6));
    if ( _bittest64(&v59, v58) )
    {
      v60 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v58 >> 5));
      if ( *v60 )
      {
        v31 = *v60 + 24 * (v58 & 0x1F);
        goto LABEL_60;
      }
      v78 = (_QWORD *)(*(_QWORD *)(v6 + 272) + 8 * ((unsigned __int64)(int)v58 >> 5));
      v72 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(v6 + 288) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      v73 = v72 + 192;
      *v78 = v72;
      do
      {
        *v72 = 0;
        v72 += 6;
        *((_OWORD *)v72 - 1) = 0;
        *((_QWORD *)v72 - 1) = 0;
      }
      while ( v72 != v73 );
      v57 = v110[0];
      v31 = *v78 + 24 * (v58 & 0x1F);
    }
    else
    {
      v31 = sub_101F930(v6, v58, v110);
      v57 = v110[0];
    }
    if ( v57 )
      goto LABEL_98;
    goto LABEL_60;
  }
  v31 = *(_QWORD *)(v6 + 184) + 24LL * v82;
LABEL_60:
  if ( v31 && *(char *)(v31 + 3) >= 0 )
  {
    v32 = *(_DWORD *)(v31 + 8);
    goto LABEL_63;
  }
LABEL_98:
  v32 = 0;
LABEL_63:
  v77 = v32;
  v33 = sub_B8CAB0(a2);
  v34 = sub_17AE610((__int64)&v108, (_BYTE ***)&v109, v33, v30);
  v35 = 0;
  v36 = v34;
  v37 = *(unsigned int *)(a1 + 10152);
  if ( (_DWORD)v37 )
    v35 = *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v37 - 40);
  v38 = sub_17AE610((__int64)&v108, (_BYTE ***)&v109, v35, v77) | v36;
  if ( v18 && !(unsigned __int8)sub_13C2750(v104, v18) )
  {
    sub_168B9F0((__int64)v110, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x192Fu, 0);
    sub_15F7200(v110);
  }
  if ( !v38 )
    goto LABEL_33;
}
