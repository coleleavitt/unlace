__int64 __fastcall sub_1A9FB10(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  unsigned __int8 v7; // bp
  char v8; // al
  _QWORD *v9; // rbx
  __int64 i; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 *v23; // r15
  unsigned __int64 v24; // rax
  __int64 *v25; // rbx
  _OWORD *v26; // rbp
  __int64 v27; // r14
  unsigned __int64 *v28; // rax
  unsigned __int64 *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  char *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  void **v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rbx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rax
  char *v59; // r14
  char *v60; // r15
  __int64 v61; // rbx
  unsigned int v62; // eax
  __int64 v63; // rsi
  __int64 *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdi
  unsigned int v70; // ecx
  __int64 v71; // r8
  unsigned __int64 v72; // rax
  int v73; // r10d
  __int64 v74; // r11
  bool v75; // zf
  void **v76; // rcx
  void **v77; // rax
  unsigned __int64 v78; // rdi
  _QWORD *v79; // rax
  unsigned __int64 v80; // rax
  int v81; // esi
  __int64 v82; // rdi
  int v83; // esi
  unsigned __int64 v84; // rcx
  __int64 v85; // rsi
  unsigned __int64 *v86; // rdx
  _QWORD *v87; // rax
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  __int64 v92; // [rsp+28h] [rbp-130h]
  __int64 v93; // [rsp+28h] [rbp-130h]
  __int64 v94; // [rsp+38h] [rbp-120h] BYREF
  __int64 v95; // [rsp+40h] [rbp-118h] BYREF
  __int64 v96; // [rsp+48h] [rbp-110h]
  unsigned int v97; // [rsp+50h] [rbp-108h]
  _QWORD v98[2]; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v99; // [rsp+70h] [rbp-E8h]
  void *v100; // [rsp+78h] [rbp-E0h]
  __int64 v101; // [rsp+80h] [rbp-D8h]
  char v102; // [rsp+88h] [rbp-D0h] BYREF
  _QWORD v103[2]; // [rsp+90h] [rbp-C8h] BYREF
  unsigned int v104; // [rsp+A0h] [rbp-B8h]
  void *ptr; // [rsp+A8h] [rbp-B0h]
  __int64 v106; // [rsp+B0h] [rbp-A8h]
  char v107; // [rsp+B8h] [rbp-A0h] BYREF
  __m128 v108; // [rsp+C0h] [rbp-98h] BYREF
  unsigned int v109; // [rsp+D0h] [rbp-88h]
  unsigned __int8 v110; // [rsp+D4h] [rbp-84h]
  void *v111[2]; // [rsp+D8h] [rbp-80h] BYREF
  _BYTE v112[112]; // [rsp+E8h] [rbp-70h] BYREF

  v6 = a4;
  v7 = a5;
  v100 = &v102;
  v8 = *(_BYTE *)(a4 + 28) & 0x7F;
  v99 = 0;
  v98[0] = 0;
  v98[1] = 0;
  v101 = 0;
  v103[0] = 0;
  v103[1] = 0;
  v104 = 0;
  if ( v8 == 20 )
  {
    v9 = (_QWORD *)a4;
    v106 = 0;
    ptr = &v107;
  }
  else
  {
    v106 = 0;
    ptr = &v107;
    if ( v8 != 23 || (v9 = *(_QWORD **)(a4 + 88)) == nullptr )
    {
      v15 = (__int64)v98;
      sub_1A9D680(a4, (__int64)v98, (__int64)v103, a5, 1u);
      goto LABEL_41;
    }
    a2 = v103;
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*v9 + 104LL))(*(_QWORD *)(a4 + 88), v103);
  }
  for ( i = sub_BAB630((__int64)v9, (__int64)a2, a3, a4, a5, a6); i; i = sub_BAB630(
                                                                           i,
                                                                           (__int64)v103,
                                                                           v11,
                                                                           v12,
                                                                           v13,
                                                                           v14) )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)i + 104LL))(i, v103);
  v15 = (__int64)v98;
  sub_1A9D680(v6, (__int64)v98, (__int64)v103, v7, 1u);
  v20 = v9[15];
  if ( v20 )
  {
    v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v20 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_41;
  }
  else
  {
    v15 = v9[12];
    sub_A794E0((__int64 *)(v15 + 88), v15, v16, v17, v18, v19);
    v20 = v9[15];
    v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v20 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_134;
  }
  if ( (*(_BYTE *)(v21 + 72) & 1) == 0 )
  {
    v22 = *(unsigned int *)(v21 + 48);
    if ( (_DWORD)v22 )
    {
LABEL_9:
      v21 = *(_QWORD *)(v21 + 40);
      v23 = (__int64 *)(v21 + 8 * v22);
      goto LABEL_10;
    }
    goto LABEL_139;
  }
  sub_BA8900((__int64)v9);
  v20 = v9[15];
  v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  v22 = *(unsigned int *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 48);
  if ( (_DWORD)v22 )
    goto LABEL_9;
  if ( v20 )
  {
    if ( !v21 )
      goto LABEL_41;
    goto LABEL_139;
  }
  v15 = v9[12];
  sub_A794E0((__int64 *)(v15 + 88), v15, v21, v22, v18, v19);
  v20 = v9[15];
  v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v20 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
LABEL_139:
    if ( (*(_BYTE *)(v21 + 72) & 1) != 0 )
    {
      sub_BA8900((__int64)v9);
      v20 = v9[15];
      v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v22 = *(unsigned int *)(v21 + 24);
    v21 = *(_QWORD *)(v21 + 16);
    v23 = (__int64 *)(v21 + 8 * v22);
LABEL_10:
    if ( v20 )
      goto LABEL_11;
    goto LABEL_135;
  }
LABEL_134:
  v23 = nullptr;
  if ( v20 )
    goto LABEL_41;
LABEL_135:
  v15 = v9[12];
  sub_A794E0((__int64 *)(v15 + 88), v15, v21, v22, v18, v19);
  v20 = v9[15];
LABEL_11:
  v24 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v24 )
  {
    v25 = nullptr;
    if ( !v23 )
      goto LABEL_41;
    goto LABEL_15;
  }
  if ( (*(_BYTE *)(v24 + 72) & 1) != 0 )
  {
    sub_BA8900((__int64)v9);
    v21 = v9[15];
    v24 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)((v21 & 0xFFFFFFFFFFFFFFF8LL) + 48) )
    {
LABEL_14:
      v25 = *(__int64 **)(v24 + 40);
      if ( v25 == v23 )
        goto LABEL_41;
      goto LABEL_15;
    }
    if ( !v21 )
    {
      v15 = v9[12];
      sub_A794E0((__int64 *)(v15 + 88), v15, 0, v22, v18, v19);
      v24 = v9[15] & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( !v24 )
    {
      if ( !v23 )
        goto LABEL_41;
      v25 = nullptr;
      goto LABEL_15;
    }
  }
  else
  {
    v21 = *(unsigned int *)(v24 + 48);
    if ( (_DWORD)v21 )
      goto LABEL_14;
  }
  if ( (*(_BYTE *)(v24 + 72) & 1) != 0 )
  {
    sub_BA8900((__int64)v9);
    v24 = v9[15] & 0xFFFFFFFFFFFFFFF8LL;
  }
  v25 = *(__int64 **)(v24 + 16);
  if ( v25 != v23 )
  {
LABEL_15:
    v26 = nullptr;
    v92 = v6;
    while ( 1 )
    {
      v27 = *v25;
      if ( (*(_BYTE *)(*v25 + 29) & 1) == 0 )
        goto LABEL_16;
      v28 = sub_B8C3D0(*v25, v15, v21, v22, v18, v19);
      v21 = *v28;
      v22 = *v28 + 8LL * *((unsigned int *)v28 + 2);
      if ( *v28 >= v22 )
      {
        if ( v21 != v22 )
        {
          if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 307 )
          {
            v65 = (__int64 *)(v22 + 8);
            while ( 1 )
            {
              v22 = (unsigned __int64)v65;
              if ( (__int64 *)v21 == v65 )
                goto LABEL_16;
              v66 = *v65++;
              if ( *(_WORD *)(v66 + 36) == 307 )
                goto LABEL_23;
            }
          }
          goto LABEL_23;
        }
LABEL_16:
        if ( v23 == ++v25 )
          goto LABEL_37;
      }
      else
      {
        v29 = (unsigned __int64 *)*v28;
        while ( 1 )
        {
          v21 = *v29;
          if ( *(_WORD *)(*v29 + 36) == 307 )
            break;
          if ( (unsigned __int64 *)v22 == ++v29 )
            goto LABEL_16;
        }
        if ( v29 == (unsigned __int64 *)v22 )
          goto LABEL_16;
LABEL_23:
        if ( !v26 )
        {
          v108 = 0u;
          v109 = 0;
          v111[0] = v112;
          v111[1] = nullptr;
          v26 = (_OWORD *)operator new(0x28u);
          v26[1] = 0;
          *((_QWORD *)v26 + 4) = 0;
          *(_QWORD *)v26 = 0;
          *((_QWORD *)v26 + 1) = 0;
          *((_QWORD *)v26 + 3) = (char *)v26 + 40;
          sub_1A9D680(v92, (__int64)v26, (__int64)&v108, 0, 0);
          if ( v111[0] != v112 )
            free(v111[0]);
          v15 = 24LL * v109;
          operator delete(v108.m128_u64[0], v15, 8);
        }
        v30 = sub_B8E970(v27 + 48);
        v31 = v30;
        if ( !v30 )
          goto LABEL_16;
        if ( (*(_BYTE *)(v30 + 28) & 0x7F) != 0x4B )
        {
          do
          {
            v32 = *(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v31 = v32;
            if ( !v32 )
              goto LABEL_16;
          }
          while ( (*(_BYTE *)(v32 + 28) & 0x7F) != 0x4B );
        }
LABEL_28:
        v15 = (__int64)&v108;
        v33 = *(_QWORD *)(v31 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        v34 = *(_QWORD *)(v31 + 40) & 7LL;
        if ( (*(_QWORD *)(v31 + 40) & 7) != 0 )
          v33 = 0;
        v108.m128_i32[2] = (*(_WORD *)(v31 + 72) & 0x4000) != 0;
        v108.m128_u64[0] = v33;
        v35 = *(_QWORD *)sub_1A9D420((__int64)v26, (__int64)&v108, v33, v34, v18, v19);
        if ( !v35 )
        {
          v36 = *(unsigned __int16 *)(v31 + 72);
          LOWORD(v36) = (unsigned __int16)v36 >> 14;
          v37 = *(_QWORD *)(v31 + 40) & 7LL;
          if ( (*(_QWORD *)(v31 + 40) & 7) == 0 )
            v35 = *(_QWORD *)(v31 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          v15 = (__int64)&v108;
          v108.m128_u64[0] = v35;
          v108.m128_i32[2] = v36 & 1;
          *(_QWORD *)sub_1A9D420((__int64)v98, (__int64)&v108, v36, v37, v18, v19) = v31;
        }
        while ( 1 )
        {
          v38 = *(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v31 = v38;
          if ( !v38 )
            break;
          if ( (*(_BYTE *)(v38 + 28) & 0x7F) == 0x4B )
            goto LABEL_28;
        }
        if ( v23 == ++v25 )
        {
LABEL_37:
          v6 = v92;
          if ( v26 )
          {
            v39 = *((char **)v26 + 3);
            if ( v39 != (char *)v26 + 40 )
              free(v39);
            operator delete(*(_QWORD *)v26, 24LL * *((unsigned int *)v26 + 4), 8);
            v15 = 40;
            operator delete(v26, 0x28u);
          }
          break;
        }
      }
    }
  }
LABEL_41:
  if ( !(_DWORD)v101 )
    goto LABEL_74;
  v97 = 0;
  v95 = 0;
  v96 = 0;
  v40 = sub_B8E970(a3 + 48);
  v44 = v40;
  if ( v40 )
  {
    if ( (*(_BYTE *)(v40 + 28) & 0x7F) == 0xE )
    {
LABEL_89:
      v67 = *(_QWORD *)(v44 + 48);
      v68 = v97;
      v94 = v67;
      if ( v97 )
      {
        v69 = v95;
        v70 = (v97 - 1) & (((unsigned int)v67 >> 9) ^ ((unsigned int)v67 >> 4));
        v15 = v95 + 8LL * v70;
        v71 = *(_QWORD *)v15;
        if ( v67 == *(_QWORD *)v15 )
          goto LABEL_91;
        v73 = 1;
        v74 = 0;
        if ( v71 != -4096 )
        {
          while ( 1 )
          {
            if ( !v74 && v71 == -8192 )
              v74 = v15;
            v70 = (v97 - 1) & (v73 + v70);
            v15 = v95 + 8LL * v70;
            v71 = *(_QWORD *)v15;
            if ( v67 == *(_QWORD *)v15 )
              goto LABEL_91;
            if ( v71 == -4096 )
            {
              if ( v74 )
                v15 = v74;
              break;
            }
            ++v73;
          }
        }
        v42 = 3 * v97;
        v108.m128_u64[0] = v15;
        v41 = (unsigned int)(v96 + 1);
        v43 = (unsigned int)(4 * v41);
        if ( (unsigned int)v43 < (unsigned int)v42 )
        {
          v42 = v97 - HIDWORD(v96) - (unsigned int)v41;
          v43 = v97 >> 3;
          if ( (unsigned int)v42 > (unsigned int)v43 )
          {
LABEL_98:
            v75 = *(_QWORD *)v15 == -4096;
            LODWORD(v96) = v41;
            if ( !v75 )
              --HIDWORD(v96);
            *(_QWORD *)v15 = v67;
LABEL_91:
            sub_1A93590(&v108, (_QWORD *)v15, (_QWORD *)(v69 + 8 * v68), (__int64)&v95, 1);
            while ( 1 )
            {
              v72 = *(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v44 = v72;
              if ( !v72 )
                goto LABEL_47;
              if ( (*(_BYTE *)(v72 + 28) & 0x7F) == 0xE )
                goto LABEL_89;
            }
          }
          v83 = v97;
LABEL_131:
          sub_1A9F8B0((__int64)&v95, v83, v67, v41, v42, v43);
          sub_1A934E0(&v95, &v94, &v108);
          v67 = v94;
          v69 = v95;
          v68 = v97;
          LODWORD(v41) = v96 + 1;
          v15 = v108.m128_u64[0];
          goto LABEL_98;
        }
      }
      else
      {
        v108.m128_u64[0] = 0;
      }
      v83 = 2 * v97;
      goto LABEL_131;
    }
    while ( 1 )
    {
      v45 = *(_QWORD *)(v44 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v44 = v45;
      if ( !v45 )
        break;
      if ( (*(_BYTE *)(v45 + 28) & 0x7F) == 0xE )
        goto LABEL_89;
    }
  }
LABEL_47:
  v46 = sub_B8E970(a3 + 48);
  v51 = (_QWORD *)v46;
  if ( v46 )
  {
    if ( (*(_BYTE *)(v46 + 28) & 0x7F) == 0x12 )
    {
LABEL_101:
      v47 = v111;
      v110 = 1;
      LOBYTE(v48) = 1;
      v108.m128_u64[0] = (unsigned __int64)v111;
      v108.m128_u64[1] = 8;
      v109 = 0;
LABEL_102:
      if ( !(_BYTE)v48 )
        goto LABEL_120;
      v15 = 8LL * v108.m128_u32[3];
      v76 = (void **)((char *)v47 + v15);
      if ( (void **)((char *)v47 + v15) != v47 )
      {
        v77 = v47;
        if ( *v47 == v51 )
          goto LABEL_110;
        do
        {
          if ( v76 == ++v77 )
            break;
        }
        while ( *v77 != v51 );
      }
      if ( v108.m128_i32[3] < (unsigned __int32)v108.m128_i32[2] )
      {
        ++v108.m128_i32[3];
        *v76 = v51;
        v47 = (void **)v108.m128_u64[0];
        v77 = (void **)(v108.m128_u64[0] + v15);
      }
      else
      {
LABEL_120:
        v15 = (__int64)v51;
        v77 = (void **)sub_2236760(&v108, v51);
        v48 = v110;
        v47 = (void **)v108.m128_u64[0];
        if ( !v110 )
        {
          v15 = v108.m128_u32[2];
          v78 = v108.m128_u64[0] + 8LL * v108.m128_u32[2];
          goto LABEL_111;
        }
      }
LABEL_110:
      v78 = (unsigned __int64)&v47[v108.m128_u32[3]];
      v48 = 1;
LABEL_111:
      if ( (void **)v78 == v77 || (unsigned __int64)*v77 < 0xFFFFFFFFFFFFFFFELL )
      {
LABEL_118:
        while ( 1 )
        {
          v80 = v51[1] & 0xFFFFFFFFFFFFFFF8LL;
          v51 = (_QWORD *)v80;
          if ( !v80 )
            break;
LABEL_117:
          if ( (*(_BYTE *)(v80 + 28) & 0x7F) == 0x12 )
            goto LABEL_102;
        }
      }
      else
      {
        v79 = v77 + 1;
        while ( 1 )
        {
          v15 = (__int64)v79;
          if ( (_QWORD *)v78 == v79 )
            break;
          ++v79;
          if ( *(_QWORD *)v15 < 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_118;
        }
        v80 = v51[1] & 0xFFFFFFFFFFFFFFF8LL;
        v51 = (_QWORD *)v80;
        if ( v80 )
          goto LABEL_117;
      }
      goto LABEL_53;
    }
    while ( 1 )
    {
      v52 = v51[1] & 0xFFFFFFFFFFFFFFF8LL;
      v51 = (_QWORD *)v52;
      if ( !v52 )
        break;
      if ( (*(_BYTE *)(v52 + 28) & 0x7F) == 0x12 )
        goto LABEL_101;
    }
  }
  v110 = 1;
  v108.m128_u64[0] = (unsigned __int64)v111;
  v108.m128_u64[1] = 8;
  v109 = 0;
LABEL_53:
  if ( (*(_BYTE *)(v6 + 28) & 0x7F) != 0x17 )
  {
    v93 = 0;
    v54 = 0;
    goto LABEL_65;
  }
  v53 = *(_QWORD *)(v6 + 40);
  if ( (v53 & 7) != 0 || (v53 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v93 = v6;
    v54 = 0;
    goto LABEL_65;
  }
  v54 = *(_QWORD *)(v6 + 88);
  v93 = v6;
  if ( v54 )
  {
    v55 = sub_BAC6C0(v54, v15, (__int64)v47, v48, v49, v50);
    v93 = v6;
    if ( v55 )
    {
      v56 = sub_B8E970(v55 + 48);
      v57 = v56;
      if ( v56 )
      {
        if ( (*(_BYTE *)(v56 + 28) & 0x7F) == 0x12 )
        {
          while ( 1 )
          {
LABEL_156:
            if ( !v110 )
              goto LABEL_174;
            v84 = v108.m128_u64[0];
            v85 = 8LL * v108.m128_u32[3];
            v86 = (unsigned __int64 *)(v108.m128_u64[0] + v85);
            if ( v108.m128_u64[0] != v108.m128_u64[0] + v85 )
            {
              v87 = (_QWORD *)v108.m128_u64[0];
              if ( *(_QWORD *)v108.m128_u64[0] == v57 )
                goto LABEL_164;
              do
              {
                if ( v86 == ++v87 )
                  break;
              }
              while ( *v87 != v57 );
            }
            if ( v108.m128_i32[3] < (unsigned __int32)v108.m128_i32[2] )
            {
              ++v108.m128_i32[3];
              *v86 = v57;
              v84 = v108.m128_u64[0];
              v87 = (_QWORD *)(v108.m128_u64[0] + v85);
            }
            else
            {
LABEL_174:
              v87 = (_QWORD *)sub_2236760(&v108, v57);
              v84 = v108.m128_u64[0];
              if ( !v110 )
              {
                v88 = v108.m128_u64[0] + 8LL * v108.m128_u32[2];
                goto LABEL_165;
              }
            }
LABEL_164:
            v88 = v84 + 8LL * v108.m128_u32[3];
LABEL_165:
            if ( (_QWORD *)v88 != v87 && (unsigned __int64)(*v87 + 2LL) <= 1 )
            {
              while ( (_QWORD *)v88 != ++v87 )
              {
                if ( *v87 < 0xFFFFFFFFFFFFFFFELL )
                  goto LABEL_172;
              }
              v89 = *(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v57 = v89;
              if ( !v89 )
                goto LABEL_63;
LABEL_171:
              if ( (*(_BYTE *)(v89 + 28) & 0x7F) == 0x12 )
                continue;
            }
LABEL_172:
            v89 = *(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v57 = v89;
            if ( !v89 )
            {
              v93 = v6;
              goto LABEL_65;
            }
            goto LABEL_171;
          }
        }
        while ( 1 )
        {
          v58 = *(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v57 = v58;
          if ( !v58 )
            break;
          if ( (*(_BYTE *)(v58 + 28) & 0x7F) == 0x12 )
            goto LABEL_156;
        }
      }
LABEL_63:
      v93 = v6;
    }
  }
LABEL_65:
  v59 = (char *)v100;
  v60 = (char *)v100 + 24 * (unsigned int)v101;
  if ( v60 != v100 )
  {
    while ( 1 )
    {
      v61 = *((_QWORD *)v59 + 2);
      if ( *(char *)(v61 + 28) >= 0 && (*(_BYTE *)(v61 + 76) & 3) != 2 )
      {
        if ( !v97 )
          goto LABEL_126;
        v62 = (v97 - 1) & (((unsigned int)v61 >> 9) ^ ((unsigned int)v61 >> 4));
        v63 = *(_QWORD *)(v95 + 8LL * v62);
        if ( v61 != v63 )
          break;
      }
LABEL_70:
      v59 += 24;
      if ( v59 == v60 )
        goto LABEL_71;
    }
    if ( v63 != -4096 )
    {
      v81 = 1;
      do
      {
        v62 = (v97 - 1) & (v81 + v62);
        v82 = *(_QWORD *)(v95 + 8LL * v62);
        if ( v61 == v82 )
          goto LABEL_70;
        ++v81;
      }
      while ( v82 != -4096 );
    }
LABEL_126:
    if ( (unsigned int)sub_B90D60(*((_QWORD *)v59 + 2), nullptr, nullptr, 0, 0, v50) != 3 )
    {
      sub_1A95070(*a1, v54, *(_QWORD *)(v61 + 80), a3, v6, v93, v61, (__int64)&v108);
      if ( (*(_BYTE *)(v61 + 72) & 1) == 0 )
        sub_1A95070(*a1, v54, *(_QWORD *)(v61 + 88), a3, v6, v93, v61, (__int64)&v108);
    }
    goto LABEL_70;
  }
LABEL_71:
  if ( !v110 )
    free((void *)v108.m128_u64[0]);
  operator delete(v95, 8LL * v97, 8);
LABEL_74:
  if ( ptr != &v107 )
    free(ptr);
  operator delete(v103[0], 24LL * v104, 8);
  if ( v100 != &v102 )
    free(v100);
  return operator delete(v98[0], 24LL * v99, 8);
}
