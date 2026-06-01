__int64 __fastcall sub_18717A0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 p_ptr; // rsi
  __int64 v9; // rax
  __int64 **v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rbp
  unsigned __int64 *v13; // rax
  __int64 v14; // rax
  const char *v15; // rax
  __int64 v16; // rdx
  _BOOL8 v17; // rdi
  unsigned int *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rbp
  __int64 *v24; // rsi
  __int64 **v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int **v29; // r14
  __int64 v30; // rbp
  unsigned __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 *v33; // r13
  __int64 **v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD **v37; // rbx
  _QWORD **v38; // rbp
  __int64 v40; // rcx
  unsigned int v41; // ebx
  __int64 v42; // rax
  __int64 *v43; // rax
  _BYTE *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  unsigned __int64 *v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  bool v60; // zf
  unsigned __int64 v61; // rax
  int v62; // eax
  char v63; // dl
  __int64 v64; // rax
  __int64 v65; // rbp
  const __m128i **v66; // [rsp+0h] [rbp-328h]
  __int64 v68; // [rsp+8h] [rbp-320h]
  unsigned __int8 v69; // [rsp+10h] [rbp-318h]
  unsigned __int64 *v70; // [rsp+10h] [rbp-318h]
  __int64 v71; // [rsp+10h] [rbp-318h]
  unsigned __int8 v73; // [rsp+27h] [rbp-301h]
  _QWORD *v75; // [rsp+50h] [rbp-2D8h] BYREF
  unsigned __int64 v76; // [rsp+58h] [rbp-2D0h] BYREF
  void *v77[2]; // [rsp+60h] [rbp-2C8h] BYREF
  __int64 v78; // [rsp+70h] [rbp-2B8h] BYREF
  __int64 v79; // [rsp+80h] [rbp-2A8h] BYREF
  int v80; // [rsp+88h] [rbp-2A0h] BYREF
  void *v81; // [rsp+90h] [rbp-298h]
  int *v82; // [rsp+98h] [rbp-290h]
  int *v83; // [rsp+A0h] [rbp-288h]
  __int64 v84; // [rsp+A8h] [rbp-280h]
  void *ptr; // [rsp+B0h] [rbp-278h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-270h]
  int v87; // [rsp+C0h] [rbp-268h]
  char v88; // [rsp+C4h] [rbp-264h]
  char v89; // [rsp+C8h] [rbp-260h] BYREF
  __int64 v90[18]; // [rsp+F0h] [rbp-238h] BYREF
  __int64 v91; // [rsp+180h] [rbp-1A8h] BYREF
  __int64 v92; // [rsp+188h] [rbp-1A0h] BYREF
  __int64 *v93; // [rsp+190h] [rbp-198h]
  __int64 v94; // [rsp+198h] [rbp-190h]
  unsigned __int8 *v95; // [rsp+1A0h] [rbp-188h] BYREF
  _BYTE v96[88]; // [rsp+1A8h] [rbp-180h] BYREF
  unsigned int v97; // [rsp+200h] [rbp-128h]
  char v98; // [rsp+204h] [rbp-124h]
  _QWORD v99[2]; // [rsp+228h] [rbp-100h] BYREF
  int v100; // [rsp+238h] [rbp-F0h]
  char v101; // [rsp+23Ch] [rbp-ECh]
  _QWORD v102[7]; // [rsp+240h] [rbp-E8h] BYREF
  _DWORD v103[26]; // [rsp+278h] [rbp-B0h] BYREF
  __int64 v104; // [rsp+2E0h] [rbp-48h]
  __int16 v105; // [rsp+2E8h] [rbp-40h]
  char v106; // [rsp+2EAh] [rbp-3Eh]

  v73 = 0;
  if ( !a4 )
    return v73;
  v6 = 0;
  v7 = 0;
  v66 = (const __m128i **)a3;
  p_ptr = (__int64)v90;
  v82 = &v80;
  v83 = &v80;
  v80 = 0;
  v81 = nullptr;
  v84 = 0;
  v86 = 4;
  v87 = 0;
  v88 = 1;
  ptr = &v89;
  v9 = 0;
  do
  {
    v10 = (__int64 **)&v66[v9];
    v11 = *(_QWORD *)(*(_QWORD *)(*v10)[2] & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v11 + 8) & 0xF) != 0 )
      v11 = sub_F64F00(*(_QWORD *)(*v10)[2], p_ptr, a3, (__int64)v66, a5);
    v12 = (unsigned __int64 *)&v80;
    v76 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
    v13 = (unsigned __int64 *)v81;
    a3 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
    v76 = a3;
    if ( !v81 )
      goto LABEL_12;
    do
    {
      while ( a3 <= v13[4] )
      {
        v12 = v13;
        v13 = (unsigned __int64 *)v13[2];
        if ( !v13 )
          goto LABEL_10;
      }
      v13 = (unsigned __int64 *)v13[3];
    }
    while ( v13 );
LABEL_10:
    if ( v12 == (unsigned __int64 *)&v80 || a3 < v12[4] )
    {
LABEL_12:
      p_ptr = (__int64)v12;
      v12 = (unsigned __int64 *)operator new(0x30u);
      v14 = v76;
      v12[5] = 0;
      v12[4] = v14;
      v15 = sub_1847290(&v79, (const char *)p_ptr, v12 + 4);
      if ( v16 )
      {
        v17 = v15 || &v80 == (int *)v16 || v12[4] < *(_QWORD *)(v16 + 32);
        p_ptr = (__int64)v12;
        std::_Rb_tree_insert_and_rebalance(v17, v12, v16, &v80);
        ++v84;
      }
      else
      {
        v70 = (unsigned __int64 *)v15;
        operator delete(v12);
        v12 = v70;
      }
    }
    v18 = (unsigned int *)*v10;
    if ( v12[5] )
    {
      sub_168B9F0((__int64)&v91, (__int64 *)(a1 + 8), *v18, 0xE7Du, 0);
      v22 = sub_1839D10(*(__int64 **)(v12[5] + 16), a1 + 8, v19, v20, v21);
      v23 = v22;
      if ( v96[80] )
      {
        sub_AE9DF0(&v95, v22, 8u);
      }
      else if ( v98 )
      {
        v46 = sub_168B9E0(&v91);
        v50 = (__int64)v93;
        if ( v93 )
        {
          v71 = v46;
          v50 = (*(__int64 (__fastcall **)(__int64 *))(*v93 + 32))(v93);
          v46 = v71;
        }
        v90[0] = v50;
        v51 = sub_1587BC0(v46, v90, v46, v47, v48, v49);
        sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v97 + 8), v23, 8u);
      }
      p_ptr = (__int64)v90;
      v90[0] = **v10;
      sub_1587DB0((__int64)&v91, v90);
      sub_15F7200(&v91);
      v73 = 1;
    }
    else
    {
      v40 = (__int64)v66;
      v12[5] = (unsigned __int64)v18;
      v41 = v7 + 1;
      v66[v7] = (const __m128i *)v18;
      v42 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v42 + 17) & 4) != 0 )
        goto LABEL_48;
      if ( a4 > 1 )
      {
        p_ptr = (__int64)&ptr;
        sub_1846140(*(_QWORD *)(a1 + 248), (__int64)&ptr, &v76, (__int64)v66, a5, a6);
        v42 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v7 = v41;
      v43 = (__int64 *)(*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v43 + 16) == 48 )
      {
        v44 = sub_F60F10(*v43, p_ptr, a3, v40, a5, a6);
        v45 = a2;
        v77[0] = v44;
        p_ptr = *(unsigned __int8 *)(a2 + 73);
        v69 = *(_BYTE *)(a2 + 73);
        a3 = v69;
        LOBYTE(a3) = v69 >> 5;
        if ( v69 >> 5 != 1 )
          goto LABEL_47;
        v60 = sub_B9CA00((__int64)v44, p_ptr, a3, a2, a5, a6) == 0;
        v61 = v12[5];
        if ( !v60 )
        {
          v45 = *(_BYTE *)(v61 + 12) & 0xC;
          if ( (_BYTE)v45 != 12 )
          {
            a3 = *(_BYTE *)(v61 + 12) & 0xC;
            if ( (*(_BYTE *)(v61 + 12) & 0xC) != 0 )
              goto LABEL_74;
LABEL_78:
            v44 = v77[0];
LABEL_47:
            if ( (v44[29] & 1) != 0 )
            {
              v52 = sub_B8C3D0((__int64)v44, p_ptr, a3, v45, a5, a6);
              a3 = *v52;
              v53 = *v52 + 8LL * *((unsigned int *)v52 + 2);
              if ( *v52 >= v53 )
              {
                if ( a3 == v53 )
                  goto LABEL_48;
                while ( *(_WORD *)(*(_QWORD *)v53 + 36LL) != 399 )
                {
                  v53 += 8LL;
                  if ( a3 == v53 )
                    goto LABEL_48;
                }
              }
              else
              {
                v54 = (unsigned __int64 *)*v52;
                while ( 1 )
                {
                  a3 = *v54;
                  if ( *(_WORD *)(*v54 + 36) == 399 )
                    break;
                  if ( (unsigned __int64 *)v53 == ++v54 )
                    goto LABEL_48;
                }
                if ( (unsigned __int64 *)v53 == v54 )
                  goto LABEL_48;
              }
              p_ptr = sub_B32AD0(*(_QWORD *)(a1 + 248), 0, 0);
              sub_B8CC60(a2, p_ptr, v55, v56, v57, v58);
            }
LABEL_48:
            v7 = v41;
            goto LABEL_21;
          }
          a3 = *(_BYTE *)(v61 + 12) & 2;
          if ( (*(_BYTE *)(v61 + 12) & 2) == 0 )
            goto LABEL_78;
        }
LABEL_74:
        sub_168B9F0((__int64)&v91, (__int64 *)(a1 + 8), *(_DWORD *)v61, 0xFADu, 0);
        v62 = 1;
        v63 = *((_BYTE *)v77[0] + 73) >> 5;
        if ( v63 != 1 )
          v62 = 2 * (v63 != 0);
        LODWORD(v75) = v62;
        v64 = sub_16CF160((__int64)&v91, (unsigned int *)&v75);
        v65 = sub_184B8A0(v64, (__int64 *)v77);
        p_ptr = (__int64)v90;
        v90[0] = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v77[0] + 16LL))(v77[0]);
        sub_1587DB0(v65, v90);
        sub_15F7200(&v91);
        v44 = v77[0];
        v73 = 1;
        goto LABEL_47;
      }
    }
LABEL_21:
    v9 = ++v6;
  }
  while ( v6 < a4 );
  v24 = (__int64 *)v66;
  sub_BA0230(a2, v66, v7);
  if ( (_DWORD)v7 )
  {
    v29 = (unsigned int **)v66;
    v30 = (__int64)&v66[(unsigned int)(v7 - 1) + 1];
    do
    {
      v31 = *(_QWORD *)(**((_QWORD **)*v29 + 2) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v31 + 8) & 0xF) != 0 )
        v31 = sub_F64F00(**((_QWORD **)*v29 + 2), (__int64)v24, (__int64)v25, v26, v27);
      v32 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL);
      v75 = v32;
      v25 = (__int64 **)*v32;
      if ( (*(_BYTE *)(*v32 + 17LL) & 4) != 0 )
        goto LABEL_36;
      v33 = (__int64 *)(*(_QWORD *)(v32[1] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v88 )
      {
        v34 = (__int64 **)ptr;
        v25 = (__int64 **)((char *)ptr + 8 * HIDWORD(v86));
        if ( ptr != v25 )
        {
          while ( v33 != *v34 )
          {
            if ( v25 == ++v34 )
              goto LABEL_36;
          }
LABEL_32:
          v91 = 0;
          v35 = v96;
          v93 = &v92;
          v92 = (__int64)&v92;
          v94 = 0;
          v95 = (_BYTE *)(&dword_0 + 1);
          do
          {
            *v35 = 0;
            v35 += 2;
          }
          while ( v35 != v99 );
          v101 = 1;
          v99[0] = v102;
          v102[5] = v103;
          v102[6] = 0x400000000LL;
          v99[1] = 4;
          v100 = 0;
          v102[4] = 0;
          v103[24] = 0;
          v104 = 0;
          v105 = 257;
          v106 = 1;
          v36 = sub_F63270(*v33, (__int64)v24, (__int64)v99, v26, v27, v28);
          sub_B70530(a2, (__int64)v36, (__int64)&v91);
          v24 = v33;
          if ( sub_B65DB0((__int64)&v91, (__int64)v33) )
          {
            sub_168B9F0((__int64)v90, (__int64 *)(a1 + 8), **v29, 0x1B77u, 0);
            v68 = sub_1605D30((__int64)v90, (__int64 *)&v75);
            sub_1841240((__int64)v77, a1, &v91);
            v59 = sub_1682AF0(v68, (__int64)v77);
            v24 = (__int64 *)&v76;
            v76 = *(_QWORD *)*v29;
            sub_1587DB0(v59, (__int64 *)&v76);
            if ( v77[0] != &v78 )
              operator delete(v77[0]);
            sub_15F7200(v90);
          }
          sub_F7C4A0((__int64)&v91);
        }
      }
      else
      {
        v24 = (__int64 *)(*(_QWORD *)(v32[1] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( sub_2236570(&ptr, v33) )
          goto LABEL_32;
      }
LABEL_36:
      ++v29;
    }
    while ( v29 != (unsigned int **)v30 );
  }
  if ( !v88 )
    free(ptr);
  v37 = (_QWORD **)v81;
  if ( v81 )
  {
    do
    {
      sub_183FB00((__int64)&v79, v37[3]);
      v38 = (_QWORD **)v37[2];
      operator delete(v37);
      v37 = v38;
    }
    while ( v38 );
  }
  return v73;
}
