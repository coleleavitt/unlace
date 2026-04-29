__int64 __fastcall sub_17920(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9)
{
  unsigned int v12; // r14d
  __int64 v13; // rax
  unsigned __int16 v15; // ax
  int v17; // r12d
  __int64 v18; // r14
  int v19; // r13d
  bool v20; // zf
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int32 v28; // r11d
  unsigned int v29; // r13d
  __int64 v30; // rdi
  __int64 dtype_size; // rcx
  int v32; // eax
  __int64 v33; // rdx
  char v34; // cl
  __int8 v35; // al
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  char v40; // al
  __int64 v41; // r8
  int v42; // r12d
  __int64 v43; // r14
  int v44; // r13d
  unsigned __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int8 v50; // al
  __int64 v51; // r8
  int v52; // r12d
  __int64 v53; // r14
  int v54; // r13d
  int v55; // r12d
  __m128i v56; // xmm0
  int v57; // ebx
  __int64 v58; // r8
  __m128i *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // [rsp-10h] [rbp-C8h]
  __int64 v65; // [rsp-8h] [rbp-C0h]
  __m128i v66; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+18h] [rbp-A0h]
  __int64 v68; // [rsp+20h] [rbp-98h] BYREF
  __int128 v69; // [rsp+28h] [rbp-90h]
  __int64 v70; // [rsp+38h] [rbp-80h]
  int v71; // [rsp+40h] [rbp-78h]
  __m128i v72; // [rsp+50h] [rbp-68h] BYREF
  __int64 v73; // [rsp+60h] [rbp-58h]
  __int64 v74; // [rsp+68h] [rbp-50h]
  int v75; // [rsp+70h] [rbp-48h]
  unsigned __int64 v76; // [rsp+78h] [rbp-40h]

  v66.m128i_i64[0] = a6;
  v76 = __readfsqword(0x28u);
  v12 = *a3;
  if ( (*a3 & 0x80000000) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 8);
    v72.m128i_i64[0] = 0;
    v67 = v13;
    sub_10260(v13, v72.m128i_i64, a4);
    if ( (v12 & 0xFFE0) != 0 || (v72.m128i_i64[0] & (1LL << v12)) == 0 )
      return 0;
    v15 = *(_WORD *)(a4 + 24);
    if ( v15 <= 0x63u )
    {
      if ( v15 > 7u )
      {
        switch ( *(_WORD *)(a4 + 24) )
        {
          case 8:
          case 0x14:
          case 0x46:
          case 0x47:
            goto LABEL_41;
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x60:
          case 0x61:
          case 0x62:
          case 0x63:
            goto LABEL_23;
          case 0x24:
            v48 = *(__int16 *)(a4 + 48);
            v49 = *(_QWORD *)(a1 + 8);
            v72.m128i_i64[0] = 1280;
            v73 = 0;
            v75 = 0;
            v72.m128i_i64[1] = v48 << 16;
            v50 = 7;
            v74 = 0;
            if ( *(_DWORD *)(*(_QWORD *)(v49 + 32) + 24LL) == 4 )
              v50 = 2;
            v72.m128i_i8[5] = v50;
            v36 = (__int64 *)(a4 + 80);
            goto LABEL_36;
          case 0x25:
            if ( !*(_QWORD *)(a1 + 56) || *(_BYTE *)(a4 + 41) != 5 )
              goto LABEL_56;
            if ( (get_flags_ex(*(_QWORD *)(a4 + 16), 4) & 0xF00000) != 0x500000
              || !(unsigned __int8)get_item_refinfo(&v72, *(_QWORD *)(a4 + 16), 0) )
            {
              goto LABEL_40;
            }
            v58 = *(_QWORD *)(a4 + 48);
            if ( *(_DWORD *)(*(_QWORD *)(v67 + 32) + 24LL) != 8 )
              v58 = (int)v58;
            if ( (unsigned __int8)calc_reference_data(&v68, 0, *(_QWORD *)(a4 + 16), &v72, v58) )
            {
              sub_16C90(a2, v68, a4, 0);
            }
            else
            {
LABEL_40:
              v15 = *(_WORD *)(a4 + 24);
LABEL_41:
              v39 = 1;
              if ( v15 != 8 )
              {
                if ( v15 == 20 )
                  v39 = 6;
                else
LABEL_56:
                  v39 = 0;
              }
              reg_finder_emulate_binary_op(a1, a2, v39, a4 + 80, a4 + 40, a4, a5, v66.m128i_i64[0], 0, 0);
            }
            return 1;
          case 0x26:
            if ( *(_BYTE *)(a4 + 41) != 5 )
              goto LABEL_9;
            v51 = *(_QWORD *)(a4 + 48);
            *(_BYTE *)(a2 + 24) = 10;
            v52 = 0;
            *(_QWORD *)(a2 + 8) = 0;
            v53 = *(_QWORD *)(a4 + 16);
            v54 = *(unsigned __int16 *)(a4 + 24);
            v20 = *(_BYTE *)(a4 + 81) == 5;
            v72.m128i_i64[0] = v51;
            v72.m128i_i64[1] = v53;
            LOWORD(v73) = v54;
            if ( v20 )
              v52 = *(_BYTE *)(a4 + 121) == 0;
            v21 = *(_QWORD *)a2;
            v22 = *(_QWORD *)(a2 + 16);
            WORD1(v73) = v52;
            if ( (unsigned __int64)&v72 < v21 || (unsigned __int64)&v72 >= v21 + 24 * v22 )
              goto LABEL_12;
            if ( !v22 )
            {
              v66.m128i_i64[0] = v51;
              v60 = qvector_reserve(a2, v21, 1, 24);
              v51 = v66.m128i_i64[0];
              *(_QWORD *)a2 = v60;
              v21 = 24LL * *(_QWORD *)(a2 + 8) + v60;
            }
            *(_QWORD *)v21 = v51;
            *(_QWORD *)(v21 + 8) = v53;
            *(_DWORD *)(v21 + 16) = v54 | (v52 << 16);
            goto LABEL_15;
          case 0x2B:
          case 0x4D:
          case 0x4E:
            goto LABEL_8;
          case 0x2D:
            if ( *(_BYTE *)(a4 + 41) == 7
              && *(_BYTE *)(a4 + 81) == 1
              && (unsigned __int16)v12 == *(unsigned __int16 *)(a4 + 86)
              && *(_QWORD *)(a4 + 16) + *(unsigned __int16 *)(a4 + 26) == *(_QWORD *)(a4 + 56) + 16LL * *(_QWORD *)a4 )
            {
              goto LABEL_68;
            }
            if ( (unsigned __int16)v12 != 29 )
            {
LABEL_8:
              if ( (unsigned __int16)v12 != 3 )
                goto LABEL_9;
              v32 = sub_FE10(v67, a4);
              if ( !v32 )
                goto LABEL_9;
              v33 = *(_QWORD *)(a1 + 8);
              v70 = 0;
              v68 = 0x3000000000100LL;
              v34 = 7;
              v71 = 0;
              v69 = 0;
              if ( *(_DWORD *)(*(_QWORD *)(v33 + 32) + 24LL) == 4 )
                v34 = 2;
              BYTE5(v68) = v34;
              v72.m128i_i64[1] = v32;
              v35 = 7;
              v72.m128i_i64[0] = 1280;
              v73 = 0;
              v74 = 0;
              v75 = 0;
              if ( *(_DWORD *)(*(_QWORD *)(v33 + 32) + 24LL) == 4 )
                v35 = 2;
              v72.m128i_i8[5] = v35;
              v36 = &v68;
LABEL_36:
              reg_finder_emulate_binary_op(a1, a2, 0, v36, &v72, a4, a5, v66.m128i_i64[0], 0, 0);
              return 1;
            }
            v66.m128i_i64[0] = *(_QWORD *)(a4 + 16) + *(unsigned __int16 *)(a4 + 26);
            if ( !(unsigned __int8)sub_21F90(v67, a4) )
              goto LABEL_9;
LABEL_68:
            *(_BYTE *)(a2 + 24) = 10;
            *(_QWORD *)(a2 + 8) = 0;
            v55 = *(unsigned __int16 *)(a4 + 24);
            v20 = *(_BYTE *)(a4 + 81) == 5;
            LOWORD(v73) = *(_WORD *)(a4 + 24);
            v56 = (__m128i)_mm_loadh_ps((const double *)(a4 + 16));
            v72 = v56;
            if ( v20 )
              v57 = (*(_BYTE *)(a4 + 121) == 0) | 0x10;
            else
              v57 = 16;
            v21 = *(_QWORD *)a2;
            v22 = *(_QWORD *)(a2 + 16);
            WORD1(v73) = v57;
            if ( (unsigned __int64)&v72 >= v21 && (unsigned __int64)&v72 < v21 + 24 * v22 )
            {
              if ( !v22 )
              {
                v66 = v56;
                v61 = qvector_reserve(a2, v21, 1, 24);
                v56 = _mm_load_si128(&v66);
                *(_QWORD *)a2 = v61;
                v21 = 24LL * *(_QWORD *)(a2 + 8) + v61;
              }
              *(__m128i *)v21 = v56;
              *(_DWORD *)(v21 + 16) = v55 | (v57 << 16);
              goto LABEL_15;
            }
            goto LABEL_12;
          case 0x54:
          case 0x55:
            if ( (unsigned __int16)v12 != 30 )
              goto LABEL_8;
            v40 = *(_BYTE *)(a4 + 121);
            if ( v40 != 1 )
            {
              if ( v40 != 5 )
                goto LABEL_9;
              v41 = *(_QWORD *)(a4 + 128);
              *(_BYTE *)(a2 + 24) = 10;
              v42 = 0;
              *(_QWORD *)(a2 + 8) = 0;
              v43 = *(_QWORD *)(a4 + 16);
              v44 = *(unsigned __int16 *)(a4 + 24);
              v20 = *(_BYTE *)(a4 + 81) == 5;
              v72.m128i_i64[0] = v41;
              v72.m128i_i64[1] = v43;
              LOWORD(v73) = v44;
              if ( v20 )
                v42 = *(_BYTE *)(a4 + 121) == 0;
              v45 = *(_QWORD *)a2;
              v46 = *(_QWORD *)(a2 + 16);
              WORD1(v73) = v42;
              if ( (unsigned __int64)&v72 < v45 || (unsigned __int64)&v72 >= v45 + 24 * v46 )
              {
                if ( !v46 )
                {
                  v62 = qvector_reserve(a2, v45, 1, 24);
                  *(_QWORD *)a2 = v62;
                  v45 = v62;
                }
                v59 = (__m128i *)(v45 + 24LL * *(_QWORD *)(a2 + 8));
                *v59 = _mm_load_si128(&v72);
                v59[1].m128i_i64[0] = v73;
              }
              else
              {
                if ( !v46 )
                {
                  v66.m128i_i64[0] = v41;
                  v63 = qvector_reserve(a2, v45, 1, 24);
                  v41 = v66.m128i_i64[0];
                  *(_QWORD *)a2 = v63;
                  v45 = v63;
                }
                v47 = 24LL * *(_QWORD *)(a2 + 8) + v45;
                *(_QWORD *)v47 = v41;
                *(_QWORD *)(v47 + 8) = v43;
                *(_DWORD *)(v47 + 16) = v44 | (v42 << 16);
              }
              goto LABEL_15;
            }
            if ( *(_WORD *)(a4 + 126) == 3
              && (unsigned __int8)sub_17220(v67, &v72, *(_QWORD *)(a4 + 16) + *(unsigned __int16 *)(a4 + 26), 3u) )
            {
              sub_16C90(a2, v72.m128i_i64[0], a4, 0);
              return 1;
            }
            break;
          default:
            goto LABEL_9;
        }
      }
      goto LABEL_9;
    }
    if ( v15 != 207 )
    {
LABEL_9:
      *(_BYTE *)(a2 + 24) = 4;
      v17 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      v18 = *(_QWORD *)(a4 + 16);
      v19 = *(unsigned __int16 *)(a4 + 24);
      v20 = *(_BYTE *)(a4 + 81) == 5;
      v72.m128i_i64[0] = -1;
      v72.m128i_i64[1] = v18;
      LOWORD(v73) = v19;
      if ( v20 )
        v17 = *(_BYTE *)(a4 + 121) == 0;
      v21 = *(_QWORD *)a2;
      v22 = *(_QWORD *)(a2 + 16);
      WORD1(v73) = v17;
      if ( (unsigned __int64)&v72 < v21 || (unsigned __int64)&v72 >= v21 + 24 * v22 )
      {
LABEL_12:
        if ( !v22 )
        {
          v23 = qvector_reserve(a2, v21, 1, 24);
          v24 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v23;
          v21 = v23 + 24 * v24;
        }
        *(__m128i *)v21 = _mm_load_si128(&v72);
        *(_QWORD *)(v21 + 16) = v73;
      }
      else
      {
        if ( !v22 )
        {
          v37 = qvector_reserve(a2, v21, 1, 24);
          v38 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v37;
          v21 = v37 + 24 * v38;
        }
        *(_QWORD *)v21 = -1;
        *(_QWORD *)(v21 + 8) = v18;
        *(_DWORD *)(v21 + 16) = v19 | (v17 << 16);
      }
LABEL_15:
      ++*(_QWORD *)(a2 + 8);
      return 1;
    }
LABEL_23:
    LODWORD(v67) = (unsigned __int16)v12;
    reg_finder_calc_op_addr(a1, a2, a4 + 40, a4, a5, v66.m128i_i64[0], 0);
    v25 = *(_WORD *)(a4 + 24);
    v26 = v64;
    v27 = v65;
    v28 = (unsigned __int16)v12;
    if ( v25 > 0x63u )
    {
      if ( v25 != 207 )
        goto LABEL_87;
    }
    else if ( v25 <= 0x5Fu )
    {
      if ( v25 > 0x12u )
        goto LABEL_88;
      if ( v25 > 0xFu )
      {
LABEL_27:
        v29 = 1;
        goto LABEL_28;
      }
      do
      {
LABEL_87:
        v25 = sub_16410(a1);
LABEL_88:
        ;
      }
      while ( (unsigned __int16)(v25 - 40) > 2u );
      goto LABEL_27;
    }
    v29 = 0;
LABEL_28:
    v30 = *(unsigned __int8 *)(a4 + 45);
    v66.m128i_i32[0] = v28;
    dtype_size = (unsigned int)get_dtype_size(v30, a2, v26, v27);
    if ( *(_WORD *)(a4 + 24) == 207
      && (v12 & 0xFFFE) != 0
      && *(_BYTE *)(a4 + 81) == 1
      && v66.m128i_i32[0] - 1 == *(unsigned __int16 *)(a4 + 86) )
    {
      v66.m128i_i32[0] = dtype_size;
      sub_17780(a2, 4, a4, a7, a8, a9);
      dtype_size = v66.m128i_u32[0];
    }
    reg_finder_emulate_mem_read(a1, a2, a2, dtype_size, v29, a4);
    return 1;
  }
  return reg_finder_may_modify_stkvar(a1, a2, v12);
}
