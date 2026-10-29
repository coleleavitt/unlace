void __fastcall sub_1A654B0(
        std::__detail::_List_node_base *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 si128,
        double a8)
{
  __int64 v8; // r12
  __int64 v10; // r14
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 *v17; // rdx
  unsigned __int64 *v18; // r13
  unsigned __int64 *j; // rbx
  unsigned __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rsi
  _QWORD *v24; // rbx
  _QWORD *v25; // rbp
  __int64 v26; // rdi
  void **v27; // rdi
  void **v28; // r12
  void **v29; // rdi
  unsigned int v30; // eax
  unsigned __int64 v31; // rcx
  unsigned int v32; // edx
  bool v33; // zf
  int v34; // eax
  __int64 *v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // r13
  __int64 *v38; // rax
  __int64 *v39; // rdx
  unsigned int v40; // eax
  __int64 i; // rbx
  __int64 v42; // r13
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  _QWORD *v48; // rax
  __int64 v49; // r9
  __int64 *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // r8
  _QWORD *v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 *v56; // r14
  unsigned __int64 *v57; // rbx
  unsigned __int64 *v58; // r15
  __int64 v59; // rcx
  unsigned int v60; // eax
  _QWORD *v61; // r14
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  __int64 *v64; // rax
  __int64 v65; // r13
  _QWORD *v66; // r14
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rdi
  unsigned __int64 v70; // rcx
  __int64 v71; // rdi
  char v72; // al
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // r9
  _QWORD *v81; // r11
  unsigned __int64 v82; // [rsp+0h] [rbp-140h]
  __m128 v83; // [rsp+8h] [rbp-138h] BYREF
  unsigned __int64 *p_ptr; // [rsp+18h] [rbp-128h]
  __int64 v85; // [rsp+20h] [rbp-120h]
  unsigned int v86; // [rsp+2Ch] [rbp-114h]
  _QWORD *v87; // [rsp+30h] [rbp-110h]
  __int64 *v88; // [rsp+38h] [rbp-108h]
  __int64 v89; // [rsp+40h] [rbp-100h]
  __int64 v90; // [rsp+48h] [rbp-F8h] BYREF
  _QWORD *v91; // [rsp+50h] [rbp-F0h] BYREF
  void *ptr; // [rsp+58h] [rbp-E8h] BYREF
  __int64 v93; // [rsp+60h] [rbp-E0h]
  __int64 v94; // [rsp+68h] [rbp-D8h] BYREF
  _OWORD v95[5]; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v96; // [rsp+C0h] [rbp-80h]
  __int64 v97; // [rsp+C8h] [rbp-78h]
  unsigned __int64 v98; // [rsp+D0h] [rbp-70h]
  int v99; // [rsp+D8h] [rbp-68h]
  __int64 v100; // [rsp+E0h] [rbp-60h] BYREF
  __m128 v101; // [rsp+E8h] [rbp-58h]
  __int64 v102; // [rsp+F8h] [rbp-48h]

  if ( !a2 )
    return;
  v8 = a3;
  v85 = a4;
  v82 = a2;
  if ( *(char *)(a2 + 8) >= 0 )
  {
    v10 = *(_QWORD *)(a2 + 360);
    if ( v10 )
    {
      if ( !*(_QWORD *)a2 )
      {
        a2 = *(_QWORD *)(a2 + 360);
        if ( !sub_A5F460((__int64)a1 + 24, a2) )
          goto LABEL_31;
        if ( *(char *)(v82 + 8) < 0 )
          BUG();
        v10 = *(_QWORD *)(v82 + 360);
      }
      v11 = *(_BYTE *)(v10 + 8) & 0x7F;
      if ( (unsigned __int8)v11 <= 0x12u )
      {
        if ( ((1LL << v11) & 0x40182) == 0 )
          goto LABEL_7;
      }
      else
      {
        v11 = ((_BYTE)v11 + 94) & 0x7F;
        if ( (unsigned __int8)v11 > 5u )
        {
LABEL_7:
          v12 = *(_QWORD **)v82;
          if ( !*(_QWORD *)v82 )
          {
LABEL_8:
            v13 = v10;
            while ( 1 )
            {
              while ( 1 )
              {
                v11 = *(_BYTE *)(v13 + 8) & 0x7F;
                if ( (_BYTE)v11 == 18 )
                {
                  v14 = v13 - 48;
                  if ( v13 != 48 )
                    goto LABEL_122;
                  goto LABEL_10;
                }
                if ( (unsigned __int8)v11 > 0x12u )
                  break;
                if ( ((1LL << v11) & 0x40182) == 0 )
                  goto LABEL_14;
LABEL_10:
                v13 = sub_B8ED10(v13);
                if ( !v13 )
                  goto LABEL_15;
              }
              if ( (((_BYTE)v11 + 94) & 0x7Fu) <= 5 )
                goto LABEL_10;
LABEL_14:
              a2 = v13;
              sub_1A63BF0((__int64)a1, v13, v8, 0, 0, a6, *(double *)si128.m128_u64, a8);
              v13 = sub_B8ED10(v13);
              if ( !v13 )
                goto LABEL_15;
            }
          }
          for ( i = v12[45]; !i; i = v12[45] )
          {
            v12 = (_QWORD *)*v12;
LABEL_49:
            if ( !v12 )
              goto LABEL_8;
          }
          v13 = v10;
          while ( 1 )
          {
            v42 = sub_B91570(v13, a2, a3, v11, a5, a6);
            if ( v42 == sub_B91570(i, a2, v43, v44, v45, v46) )
              goto LABEL_15;
            v11 = *(_BYTE *)(v13 + 8) & 0x7F;
            if ( (_BYTE)v11 == 18 )
            {
              v14 = v13 - 48;
              if ( v13 != 48 )
              {
LABEL_122:
                p_ptr = (unsigned __int64 *)&ptr;
                if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
                {
                  a2 = *(_QWORD *)(v8 + 120);
                  v77 = *(_DWORD *)(v8 + 128);
                  v78 = *(_QWORD *)(v8 + 112);
                  v94 = 0x800000000LL;
                  v93 = (__int64)v95;
                  v95[4] = 0;
                  v97 = v78;
                  v98 = a2;
                  v99 = v77;
                  ptr = nullptr;
                  v96 = 0;
                  sub_B85890(&v100, a2);
                  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA5C0);
                  v102 = 0x101010000LL;
                  v101 = si128;
                  sub_1A395A0((__int64)&ptr);
                  v79 = sub_BA85D0(v14);
                  if ( v79 )
                  {
                    a2 = v79 + 48;
                    sub_1A63BF0((__int64)a1, v79 + 48, (__int64)&ptr, 0, 0, v80, *(double *)si128.m128_u64, a8);
                  }
                  sub_169D230((__int64)p_ptr);
                }
                goto LABEL_16;
              }
            }
            else
            {
              if ( (unsigned __int8)v11 <= 0x12u )
              {
                if ( ((1LL << v11) & 0x40182) != 0 )
                  goto LABEL_53;
LABEL_58:
                a2 = v13;
                sub_1A63BF0((__int64)a1, v13, v8, 0, 0, a6, *(double *)si128.m128_u64, a8);
                goto LABEL_53;
              }
              if ( (((_BYTE)v11 + 94) & 0x7Fu) > 5 )
                goto LABEL_58;
            }
LABEL_53:
            v13 = sub_B8ED10(v13);
            if ( !v13 )
              goto LABEL_15;
          }
        }
      }
    }
  }
LABEL_31:
  v30 = *(_DWORD *)(v8 + 156);
  v31 = v30;
  v32 = v30;
  BYTE1(v31) = BYTE1(v30) & 0xF7;
  BYTE1(v32) = BYTE1(v30) | 8;
  v33 = (v30 & 0x420) == 0;
  v34 = v31;
  v86 = *(_DWORD *)(v8 + 156) & 0x800;
  if ( !v33 )
    v34 = v32;
  *(_DWORD *)(v8 + 156) = v34;
  v35 = *(__int64 **)(v82 + 80);
  if ( *(_BYTE *)(v82 + 100) )
    v36 = *(unsigned int *)(v82 + 92);
  else
    v36 = *(unsigned int *)(v82 + 88);
  v37 = &v35[v36];
  if ( v35 != v37 )
  {
    if ( (unsigned __int64)*v35 < 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_67;
    v38 = v35 + 1;
    v39 = v35 + 1;
    while ( 1 )
    {
      v31 = (unsigned __int64)v39;
      if ( v39 == v37 )
        break;
      ++v39;
      if ( *(_QWORD *)v31 < 0xFFFFFFFFFFFFFFFELL )
        goto LABEL_42;
    }
    ++v35;
    if ( v38 != v37 )
    {
      while ( 1 )
      {
        ++v38;
        if ( (unsigned __int64)*v35 < 0xFFFFFFFFFFFFFFFELL )
          break;
LABEL_42:
        v35 = v38;
        if ( v38 == v37 )
          goto LABEL_43;
      }
LABEL_67:
      v50 = v35 + 1;
      v51 = (__int64)v35;
      v52 = 0;
      p_ptr = (unsigned __int64 *)&ptr;
      ptr = &v94;
      v93 = 0x800000000LL;
      v53 = v35 + 1;
      if ( v37 == v35 + 1 )
      {
        a5 = 1;
        v94 = *v35;
        goto LABEL_78;
      }
      do
      {
        if ( *(_QWORD *)(v51 + 8) >= 0xFFFFFFFFFFFFFFFELL )
        {
          v54 = (__int64)(v53 + 1);
          while ( 1 )
          {
            v51 = v54;
            if ( (__int64 *)v54 == v37 )
              break;
            v54 += 8;
            if ( *(_QWORD *)v51 < 0xFFFFFFFFFFFFFFFELL )
              goto LABEL_99;
          }
          a5 = v52 + 1;
          if ( a5 > 8 )
            goto LABEL_101;
LABEL_73:
          v94 = *v35;
          v31 = (unsigned __int64)(p_ptr + 2);
          while ( 1 )
          {
            v55 = v35[1];
            if ( v55 >= 0xFFFFFFFFFFFFFFFELL )
              goto LABEL_75;
LABEL_103:
            v35 = v50;
LABEL_104:
            v31 += 8LL;
            v50 = v35 + 1;
            *(_QWORD *)v31 = v55;
            if ( v35 + 1 == v37 )
              goto LABEL_78;
          }
        }
        v51 = (__int64)v53;
LABEL_99:
        v53 = (_QWORD *)(v51 + 8);
        ++v52;
      }
      while ( (__int64 *)(v51 + 8) != v37 );
      a5 = v52 + 1;
      if ( a5 <= 8 )
        goto LABEL_73;
LABEL_101:
      v83.m128_u64[0] = a5;
      a2 = (unsigned __int64)(p_ptr + 2);
      sub_2237220(p_ptr, p_ptr + 2, a5, 8);
      v51 = (__int64)ptr;
      v31 = (unsigned __int64)ptr + 8 * (unsigned int)v93;
      a5 = (unsigned int)v93 + v83.m128_u64[0];
      *(_QWORD *)v31 = *v35;
      if ( v37 == v50 )
        goto LABEL_78;
      v55 = v35[1];
      if ( v55 < 0xFFFFFFFFFFFFFFFELL )
        goto LABEL_103;
LABEL_75:
      v56 = (unsigned __int64 *)(v50 + 1);
      while ( 1 )
      {
        v35 = (__int64 *)v56;
        if ( v56 == (unsigned __int64 *)v37 )
          break;
        v55 = *v56++;
        if ( v55 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_104;
      }
LABEL_78:
      v57 = (unsigned __int64 *)ptr;
      LODWORD(v93) = a5;
      v58 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)a5);
      if ( v58 != ptr )
      {
        v87 = &v91;
        v88 = &v90;
        while ( 1 )
        {
          while ( 1 )
          {
            a2 = *v57;
            if ( (*(_BYTE *)(*v57 + 28) & 0x7Fu) - 18 <= 0x3F )
            {
              v64 = sub_1A47770(v8, a2, v51, v31, a5, a6);
              v65 = (__int64)v64;
              if ( v64 )
                break;
            }
LABEL_87:
            if ( v58 == ++v57 )
              goto LABEL_113;
          }
          v66 = *((_QWORD **)a1 + 14);
          v83.m128_u64[0] = *(_QWORD *)(*v66 + 24LL);
          v67 = sub_1A3B130(a1, (__int64)v64);
          a6 = v83.m128_u64[0];
          if ( (void (__fastcall *)(__int64, __int64, __int64, unsigned __int64, __int64, __int64))v83.m128_u64[0] != sub_1A65440 )
            break;
          v69 = *(_QWORD *)(v65 + 40);
          if ( !v67 && (v69 & 7) == 0 )
          {
            v70 = v69 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v69 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              if ( (*(_BYTE *)(v65 + 8) & 6) == 0
                || (v71 = v66[56],
                    v83.m128_u64[0] = v70,
                    v72 = sub_1A42350(v71, v65, 0, v70, v68, a6),
                    v70 = v83.m128_u64[0],
                    v72)
                || v83.m128_u64[0] == v66[1] )
              {
                sub_1A639D0(
                  (__int64)v66,
                  (const void *)(*(_QWORD *)(v70 + 16) + 16LL),
                  **(unsigned int **)(v70 + 16),
                  0);
                v69 = *(_QWORD *)(v65 + 40);
                goto LABEL_80;
              }
              goto LABEL_118;
            }
          }
LABEL_80:
          v59 = *((_QWORD *)a1 + 1);
          v90 = v69;
          a2 = *(unsigned int *)(v59 + 32);
          a5 = v59 + 16;
          if ( !(_DWORD)a2 )
          {
            v91 = nullptr;
            goto LABEL_127;
          }
          a6 = *(_QWORD *)(v59 + 16);
          v60 = (a2 - 1) & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
          v61 = (_QWORD *)(a6 + 16LL * v60);
          v62 = *v61;
          if ( *v61 != v69 )
          {
            if ( v62 == -1 )
            {
LABEL_107:
              v73 = *(_DWORD *)(v59 + 24);
              v51 = (unsigned int)(3 * a2);
              v91 = v61;
              v74 = v73 + 1;
              if ( 4 * v74 < (unsigned int)v51 )
              {
                v51 = (unsigned int)(a2 - *(_DWORD *)(v59 + 28) - v74);
                if ( (unsigned int)v51 > (unsigned int)a2 >> 3 )
                {
LABEL_109:
                  v33 = *v61 == -1;
                  *(_DWORD *)(v59 + 24) = v74;
                  if ( !v33 )
                    --*(_DWORD *)(v59 + 28);
                  v75 = v90;
                  v61[1] = 0;
                  v31 = (unsigned __int64)(v61 + 1);
                  *v61 = v75;
                  goto LABEL_112;
                }
                v89 = v59;
LABEL_128:
                v83.m128_u64[0] = a5;
                sub_1A3FE50(a5, a2, v51, v59, a5, a6);
                a2 = (unsigned __int64)v88;
                sub_1A3A940((__int64 *)v83.m128_u64[0], v88, v87);
                v59 = v89;
                v61 = v91;
                v74 = *(_DWORD *)(v89 + 24) + 1;
                goto LABEL_109;
              }
LABEL_127:
              v89 = v59;
              LODWORD(a2) = 2 * a2;
              goto LABEL_128;
            }
            v83.m128_i32[0] = 1;
            v81 = nullptr;
            v89 = v59;
            while ( 1 )
            {
              if ( !v81 && v62 == -2 )
                v81 = v61;
              v60 = (a2 - 1) & (v83.m128_i32[0] + v60);
              v61 = (_QWORD *)(a6 + 16LL * v60);
              v62 = *v61;
              if ( *v61 == v69 )
                break;
              if ( v62 == -1 )
              {
                v59 = v89;
                if ( v81 )
                  v61 = v81;
                goto LABEL_107;
              }
              ++v83.m128_i32[0];
            }
          }
          v51 = v61[1];
          v31 = (unsigned __int64)(v61 + 1);
          v63 = v51 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v51 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            if ( (v51 & 4) != 0 )
            {
              v31 = *(unsigned int *)(v63 + 8);
              a2 = *(unsigned int *)(v63 + 12);
              if ( v31 + 1 > a2 )
              {
                a2 = v63 + 16;
                v83.m128_u64[0] = v61[1] & 0xFFFFFFFFFFFFFFF8LL;
                sub_2237220(v83.m128_u64[0], v63 + 16, v31 + 1, 8);
                v63 = v83.m128_u64[0];
                v31 = *(unsigned int *)(v83.m128_u64[0] + 8);
              }
              v51 = *(_QWORD *)v63;
              *(_QWORD *)(*(_QWORD *)v63 + 8 * v31) = v65;
              ++*(_DWORD *)(v63 + 8);
            }
            else
            {
              v83.m128_u64[0] = v65;
              v83 = _mm_loadh_ps((const double *)v83.m128_u64);
              v76 = operator new(0x30u);
              si128 = (__m128)_mm_load_si128((const __m128i *)&v83);
              v51 = v76 + 16;
              *(_QWORD *)(v76 + 8) = 0x400000002LL;
              *(_QWORD *)v76 = v76 + 16;
              *(__m128 *)(v76 + 16) = si128;
              v61[1] = v76 | 4;
            }
            goto LABEL_87;
          }
LABEL_112:
          ++v57;
          *(_QWORD *)v31 = v65 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v58 == v57 )
          {
LABEL_113:
            v57 = (unsigned __int64 *)ptr;
            goto LABEL_114;
          }
        }
        ((void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD, _QWORD))v83.m128_u64[0])(v66, v65, v67, 0, 0);
LABEL_118:
        v69 = *(_QWORD *)(v65 + 40);
        goto LABEL_80;
      }
LABEL_114:
      if ( v57 != p_ptr + 2 )
        free(v57);
    }
  }
LABEL_43:
  v40 = *(_DWORD *)(v8 + 156);
  v11 = v86;
  a3 = v40;
  BYTE1(v40) &= ~8u;
  BYTE1(a3) |= 8u;
  if ( v86 )
    v40 = a3;
  *(_DWORD *)(v8 + 156) = v40;
  v10 = *(_QWORD *)(v82 + 360);
  v12 = *(_QWORD **)v82;
  if ( v10 )
    goto LABEL_49;
  if ( !v12 )
  {
    v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 112) + 248LL) + 2264LL) + 80LL);
    v48 = sub_704780((__int64 *)(v47 + 72), v47, a3, v11, a5, a6);
    if ( v48 )
    {
      v10 = (__int64)(v48 + 5);
      a2 = (unsigned __int64)(v48 + 5);
      sub_1A63BF0((__int64)a1, (unsigned __int64)(v48 + 5), v8, 0, 0, v49, *(double *)si128.m128_u64, a8);
LABEL_15:
      p_ptr = (unsigned __int64 *)&ptr;
LABEL_16:
      ptr = (void *)sub_B91570(v10, a2, a3, v11, a5, a6);
      v15 = sub_1A384D0(*(_QWORD *)(v85 + 8), *(_QWORD *)(v85 + 8) + 16LL * *(unsigned int *)(v85 + 16), p_ptr);
      v18 = v17;
      for ( j = (unsigned __int64 *)v15; v18 != j; j += 2 )
      {
        v20 = *j;
        sub_1A63BF0((__int64)a1, v20, v8, 0, 0, v16, *(double *)si128.m128_u64, a8);
      }
    }
    else
    {
      sub_1A63BF0((__int64)a1, 0, v8, 0, 0, v49, *(double *)si128.m128_u64, a8);
    }
  }
  v21 = operator new(0x28u);
  *(_QWORD *)(v21 + 16) = 0;
  *(_QWORD *)(v21 + 24) = 0;
  *(_DWORD *)(v21 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v21, a1);
  ++*((_QWORD *)a1 + 2);
  sub_1A654B0(a1, *(_QWORD *)v82, v8, v85);
  --*((_QWORD *)a1 + 2);
  v22 = *((_QWORD *)a1 + 1);
  std::__detail::_List_node_base::_M_unhook((std::__detail::_List_node_base *)v22);
  v23 = *(unsigned int *)(v22 + 32);
  if ( (_DWORD)v23 )
  {
    v24 = *(_QWORD **)(v22 + 16);
    v25 = &v24[2 * v23];
    do
    {
      while ( 1 )
      {
        if ( *v24 != -2 && *v24 != -1 )
        {
          v26 = v24[1];
          if ( v26 )
          {
            if ( (v26 & 4) != 0 )
            {
              v27 = (void **)(v26 & 0xFFFFFFFFFFFFFFF8LL);
              v28 = v27;
              if ( v27 )
                break;
            }
          }
        }
        v24 += 2;
        if ( v25 == v24 )
          goto LABEL_28;
      }
      v29 = (void **)*v27;
      if ( v29 != v28 + 2 )
        free(v29);
      v24 += 2;
      operator delete(v28, 0x30u);
    }
    while ( v25 != v24 );
LABEL_28:
    v23 = *(unsigned int *)(v22 + 32);
  }
  operator delete(*(_QWORD *)(v22 + 16), 16 * v23, 8);
  operator delete((void *)v22);
}
