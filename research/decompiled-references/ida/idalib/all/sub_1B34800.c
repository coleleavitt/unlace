unsigned __int64 __fastcall sub_1B34800(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  __int64 *v9; // r13
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // r12
  char v13; // dl
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned int *v24; // r12
  unsigned int v25; // esi
  unsigned int *v26; // rdi
  int v27; // esi
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rbp
  int v40; // ecx
  __int64 v41; // rdi
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  _BYTE *v48; // rbx
  unsigned __int64 v49; // rbp
  __int64 v50; // rbp
  _QWORD *v51; // rax
  unsigned __int64 v52; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // rbp
  __int64 v57; // rcx
  int v58; // edi
  __int64 v59; // r9
  int v60; // eax
  unsigned int v61; // esi
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rdx
  unsigned int v65; // esi
  unsigned int *v66; // rdi
  int v67; // esi
  unsigned int v68; // ecx
  unsigned int v69; // esi
  unsigned int *v70; // rdi
  int v71; // esi
  unsigned int v72; // ecx
  int v73; // r11d
  __int64 v74; // r10
  int v75; // r11d
  __int64 v76; // r10
  __int64 v77; // r11
  int v78; // r11d
  __int64 v79; // [rsp+0h] [rbp-218h]
  __int64 v80; // [rsp+0h] [rbp-218h]
  __int64 v81; // [rsp+0h] [rbp-218h]
  int v82; // [rsp+0h] [rbp-218h]
  __int64 *v83; // [rsp+8h] [rbp-210h]
  __int64 v84; // [rsp+30h] [rbp-1E8h]
  __int64 v88; // [rsp+68h] [rbp-1B0h]
  __int64 v89; // [rsp+68h] [rbp-1B0h]
  unsigned int v90; // [rsp+7Ch] [rbp-19Ch] BYREF
  unsigned __int64 v91; // [rsp+80h] [rbp-198h] BYREF
  __int64 v92; // [rsp+88h] [rbp-190h] BYREF
  __m128i v93; // [rsp+90h] [rbp-188h] BYREF
  __int64 v94; // [rsp+A0h] [rbp-178h] BYREF
  __m128i v95; // [rsp+B0h] [rbp-168h] BYREF
  char v96; // [rsp+C0h] [rbp-158h] BYREF
  unsigned int v97; // [rsp+D0h] [rbp-148h] BYREF
  unsigned int v98; // [rsp+D4h] [rbp-144h]
  __int64 v99; // [rsp+E0h] [rbp-138h]
  void *ptr; // [rsp+100h] [rbp-118h] BYREF
  __int64 v101; // [rsp+108h] [rbp-110h]
  _BYTE v102[64]; // [rsp+110h] [rbp-108h] BYREF
  _QWORD v103[25]; // [rsp+150h] [rbp-C8h] BYREF

  ptr = v102;
  v101 = 0x800000000LL;
  v83 = &a2[a3];
  if ( v83 == a2 )
    return 0;
  v9 = a2;
  do
  {
    while ( 1 )
    {
      v10 = *v9;
      v90 = 0;
      v11 = *a1;
      v91 = v10;
      v92 = 0;
      v12 = sub_1B31D70(v11, &v91, &v90, &v92, (__int64)&byte_22F0C30, 0, *(double *)a7.m128_u64);
      if ( v13 )
      {
        v54 = (unsigned int)v101;
        v55 = (unsigned int)v101 + 1LL;
        if ( v55 > HIDWORD(v101) )
        {
          sub_2237220(&ptr, v102, v55, 8);
          v54 = (unsigned int)v101;
        }
        *((_QWORD *)ptr + v54) = v10;
        LODWORD(v101) = v101 + 1;
      }
      if ( !v12 )
        goto LABEL_34;
      v14 = a1[1];
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 40 <= 6 )
        break;
      sub_1AFBE90((__int64)&v97, v14, v12);
      if ( v98 != 106 && v98 != 94 && v99 )
        goto LABEL_50;
      if ( sub_1B223D0((__int64)a1, v12, 0, 0, a7, a8) && !(unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
      {
        v84 = 0;
        v15 = sub_1B22DF0(*a1, v12, v91, 1, a7, a8);
      }
      else
      {
        v84 = 0;
        v15 = 0;
      }
LABEL_10:
      v79 = a1[1];
      v16 = sub_BFB9F0(v10);
      v17 = sub_1AEE450(v12);
      v18 = v79;
      v19 = *(unsigned int *)(v79 + 344);
      if ( !(_DWORD)v19
        || (v20 = *(_QWORD *)(v79 + 336) + 6776 * v19 - 6776, *(_QWORD *)(v20 + 6768) != *(_QWORD *)(v79 + 328))
        || (v21 = *(unsigned int *)(v20 + 8),
            v22 = *(unsigned int *)(v79 + 27504),
            (unsigned int)v21 <= (unsigned int)v22)
        || (v23 = v21 - v22) == 0 )
      {
        BUG();
      }
      v24 = (unsigned int *)(*(_QWORD *)v20 + 1688 * (v23 - 1));
      if ( (*(_BYTE *)v24 & 1) != 0 )
      {
        v26 = v24 + 2;
        v27 = 7;
      }
      else
      {
        v25 = v24[4];
        v26 = *((unsigned int **)v24 + 1);
        if ( !v25 )
        {
          v57 = *v24;
          v29 = 0;
          v58 = (*v24 >> 1) + 1;
LABEL_59:
          v59 = 3 * v25;
          goto LABEL_60;
        }
        v27 = v25 - 1;
      }
      v28 = v27 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
      v29 = (__int64)&v26[10 * v28];
      v30 = *(_QWORD *)v29;
      if ( v17 == *(_QWORD *)v29 )
      {
LABEL_18:
        v31 = v29 + 8;
        v32 = 2LL * (*(_DWORD *)(v29 + 8) == 52);
        goto LABEL_19;
      }
      if ( v30 != -4096 )
      {
        v82 = 1;
        v77 = 0;
        while ( 1 )
        {
          if ( !v77 && v30 == -8192 )
            v77 = v29;
          v28 = v27 & (v82 + v28);
          v29 = (__int64)&v26[10 * v28];
          v30 = *(_QWORD *)v29;
          if ( v17 == *(_QWORD *)v29 )
            goto LABEL_18;
          if ( v30 == -4096 )
            break;
          ++v82;
        }
        if ( v77 )
          v29 = v77;
      }
      v57 = *v24;
      v59 = 24;
      v25 = 8;
      v58 = (*v24 >> 1) + 1;
      if ( (*(_BYTE *)v24 & 1) == 0 )
      {
        v25 = v24[4];
        goto LABEL_59;
      }
LABEL_60:
      if ( 4 * v58 >= (unsigned int)v59 )
      {
        v88 = v17;
        v80 = v18;
        sub_1AEB110((__int64)v24, 2 * v25, v29, v57, v18, v59);
        v18 = v80;
        v17 = v88;
        if ( (*(_BYTE *)v24 & 1) != 0 )
        {
          v66 = v24 + 2;
          v67 = 7;
        }
        else
        {
          v65 = v24[4];
          v66 = *((unsigned int **)v24 + 1);
          if ( !v65 )
            goto LABEL_130;
          v67 = v65 - 1;
        }
        v68 = v67 & (((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4));
        v29 = (__int64)&v66[10 * v68];
        v30 = *(_QWORD *)v29;
        if ( v88 != *(_QWORD *)v29 && v30 != -4096 )
        {
          v78 = 1;
          v74 = 0;
          while ( 1 )
          {
            if ( v30 == -8192 && !v74 )
              v74 = v29;
            v68 = v67 & (v78 + v68);
            v29 = (__int64)&v66[10 * v68];
            v30 = *(_QWORD *)v29;
            if ( v88 == *(_QWORD *)v29 )
              break;
            if ( v30 == -4096 )
            {
LABEL_94:
              if ( v74 )
                v29 = v74;
              break;
            }
            ++v78;
          }
        }
LABEL_82:
        LODWORD(v57) = *v24;
        goto LABEL_62;
      }
      v30 = v25 >> 3;
      if ( v25 - v24[1] - v58 <= (unsigned int)v30 )
      {
        v89 = v17;
        v81 = v18;
        sub_1AEB110((__int64)v24, v25, v29, v57, v18, v30);
        v18 = v81;
        v17 = v89;
        if ( (*(_BYTE *)v24 & 1) != 0 )
        {
          v70 = v24 + 2;
          v71 = 7;
        }
        else
        {
          v69 = v24[4];
          v70 = *((unsigned int **)v24 + 1);
          if ( !v69 )
          {
LABEL_130:
            *v24 = (2 * (*v24 >> 1) + 2) | *v24 & 1;
            BUG();
          }
          v71 = v69 - 1;
        }
        v72 = v71 & (((unsigned int)v89 >> 9) ^ ((unsigned int)v89 >> 4));
        v29 = (__int64)&v70[10 * v72];
        v30 = *(_QWORD *)v29;
        if ( v89 != *(_QWORD *)v29 && v30 != -4096 )
        {
          v73 = 1;
          v74 = 0;
          while ( 1 )
          {
            if ( v30 == -8192 && !v74 )
              v74 = v29;
            v72 = v71 & (v73 + v72);
            v29 = (__int64)&v70[10 * v72];
            v30 = *(_QWORD *)v29;
            if ( v89 == *(_QWORD *)v29 )
              break;
            if ( v30 == -4096 )
              goto LABEL_94;
            ++v73;
          }
        }
        goto LABEL_82;
      }
LABEL_62:
      *v24 = (2 * ((unsigned int)v57 >> 1) + 2) | v57 & 1;
      if ( *(_QWORD *)v29 != -4096 )
        --v24[1];
      a7 = 0;
      *(_QWORD *)v29 = v17;
      v32 = 0;
      v31 = v29 + 8;
      *(_OWORD *)(v29 + 8) = 0;
      *(_OWORD *)(v29 + 24) = 0;
      *(_DWORD *)(v29 + 8) = 106;
      *(_QWORD *)(v29 + 16) = 0;
LABEL_19:
      *(_QWORD *)v31 = 94;
      *(_QWORD *)(v31 + 16) = v15;
      *(_QWORD *)(v31 + 8) = v32 | v16 & 0xFFFFFFFFFFFFFFFDLL;
      *(_BYTE *)(v31 + 24) = 0;
      if ( v15 )
      {
        v33 = *(unsigned int *)(v18 + 344);
        v34 = *(_QWORD *)(v15 + 16);
        if ( !(_DWORD)v33
          || (v35 = *(_QWORD *)(v18 + 336) + 6776 * v33 - 6776, *(_QWORD *)(v35 + 6768) != *(_QWORD *)(v18 + 328))
          || (v36 = *(unsigned int *)(v35 + 8),
              v37 = *(unsigned int *)(v18 + 27504),
              (unsigned int)v36 <= (unsigned int)v37)
          || (v38 = v36 - v37) == 0 )
        {
          v95.m128i_i64[0] = *(_QWORD *)(v15 + 16);
          BUG();
        }
        v39 = *(_QWORD *)v35 + 1688 * (v38 - 1);
        v95.m128i_i64[0] = *(_QWORD *)(v15 + 16);
        if ( (*(_BYTE *)v39 & 1) != 0 )
        {
          v41 = v39 + 8;
          v42 = 7;
        }
        else
        {
          v40 = *(_DWORD *)(v39 + 16);
          v41 = *(_QWORD *)(v39 + 8);
          if ( !v40 )
          {
            v44 = 0;
            goto LABEL_66;
          }
          v42 = v40 - 1;
        }
        LODWORD(v43) = v42 & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
        v44 = v41 + 40LL * (unsigned int)v43;
        v18 = *(_QWORD *)v44;
        if ( *(_QWORD *)v44 == v34 )
          goto LABEL_28;
        v75 = 1;
        v76 = 0;
        if ( v18 != -4096 )
        {
          while ( 1 )
          {
            if ( !v76 && v18 == -8192 )
              v76 = v44;
            v30 = (unsigned int)(v75 + 1);
            v43 = v42 & (unsigned int)(v43 + v75);
            v44 = v41 + 40 * v43;
            v18 = *(_QWORD *)v44;
            if ( *(_QWORD *)v44 == v34 )
              break;
            if ( v18 == -4096 )
            {
              if ( v76 )
                v44 = v76;
              goto LABEL_66;
            }
            ++v75;
          }
LABEL_28:
          v45 = v44 + 8;
          *(_BYTE *)(v45 + 24) = 0;
          *(_QWORD *)v45 = 94;
          *(_QWORD *)(v45 + 16) = 0;
          *(_QWORD *)(v45 + 8) = v15 & 0xFFFFFFFFFFFFFFFDLL | v32;
          if ( !v84 && !(unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
            goto LABEL_31;
          goto LABEL_30;
        }
LABEL_66:
        v103[0] = v44;
        v60 = (*(_DWORD *)v39 >> 1) + 1;
        if ( (*(_BYTE *)v39 & 1) != 0 )
        {
          v63 = 24;
          v62 = (unsigned int)(4 * v60);
          v61 = 8;
          if ( (unsigned int)v62 < 0x18 )
          {
LABEL_68:
            v62 = v61 - (v60 + *(_DWORD *)(v39 + 4));
            v63 = v61 >> 3;
            if ( (unsigned int)v62 > (unsigned int)v63 )
            {
LABEL_69:
              *(_DWORD *)v39 = *(_DWORD *)v39 & 1 | (2 * v60);
              v44 = v103[0];
              if ( *(_QWORD *)v103[0] != -4096 )
                --*(_DWORD *)(v39 + 4);
              v64 = v95.m128i_i64[0];
              a7 = 0;
              *(_OWORD *)(v44 + 8) = 0;
              *(_QWORD *)v44 = v64;
              *(_OWORD *)(v44 + 24) = 0;
              *(_DWORD *)(v44 + 8) = 106;
              *(_QWORD *)(v44 + 16) = 0;
              goto LABEL_28;
            }
LABEL_74:
            sub_1AEB110(v39, v61, v63, v62, v18, v30);
            sub_1AE63C0(v39, v95.m128i_i64, v103);
            v60 = (*(_DWORD *)v39 >> 1) + 1;
            goto LABEL_69;
          }
        }
        else
        {
          v61 = *(_DWORD *)(v39 + 16);
          v62 = (unsigned int)(4 * v60);
          v63 = 3 * v61;
          if ( (unsigned int)v62 < (unsigned int)v63 )
            goto LABEL_68;
        }
        v61 *= 2;
        goto LABEL_74;
      }
LABEL_30:
      v15 = sub_BFB9F0(v10);
LABEL_31:
      v46 = (unsigned int)v101;
      v47 = (unsigned int)v101 + 1LL;
      if ( v47 > HIDWORD(v101) )
      {
        sub_2237220(&ptr, v102, v47, 8);
        v46 = (unsigned int)v101;
      }
      *((_QWORD *)ptr + v46) = v15;
      LODWORD(v101) = v101 + 1;
LABEL_34:
      if ( v83 == ++v9 )
        goto LABEL_35;
    }
    sub_1AFBE90((__int64)&v97, v14, v12);
    if ( v98 == 106 || v98 == 94 )
    {
      v84 = v12;
      v15 = 0;
      goto LABEL_10;
    }
    v15 = v99;
    if ( !v99 )
    {
      v84 = v12;
      goto LABEL_10;
    }
LABEL_50:
    sub_168B9F0((__int64)v103, a1, v90, 0x1229u, 0);
    sub_1AF81E0(&v93, v98);
    v56 = sub_1682AF0((__int64)v103, (__int64)&v93);
    sub_1AF81E0(&v95, 0x5Eu);
    sub_1682AF0(v56, (__int64)&v95);
    if ( (char *)v95.m128i_i64[0] != &v96 )
      operator delete((void *)v95.m128i_i64[0]);
    if ( (__int64 *)v93.m128i_i64[0] != &v94 )
      operator delete((void *)v93.m128i_i64[0]);
    ++v9;
    sub_15F7200(v103);
    sub_1B20830(*a1, a1[1], v12, &v97, 0);
  }
  while ( v83 != v9 );
LABEL_35:
  v48 = ptr;
  v49 = 0;
  if ( (_DWORD)v101 )
  {
    v50 = (unsigned int)v101;
    v51 = (_QWORD *)sub_168B6C0((__int64)a1);
    v52 = sub_EC0950(v51, a4, a5, a6, (__int64)v48, v50);
    v48 = ptr;
    v49 = v52;
  }
  if ( v48 != v102 )
    free(v48);
  return v49;
}
