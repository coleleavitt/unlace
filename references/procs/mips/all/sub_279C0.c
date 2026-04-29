__int64 __fastcall sub_279C0(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 *v5; // rax
  char v6; // r12
  unsigned __int16 v7; // ax
  bool v9; // zf
  __int64 v10; // rdx
  char v11; // cl
  __int64 **v12; // rax
  __int64 *v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int64 v16; // r15
  __int16 v17; // r14
  __int64 v18; // r13
  int v19; // eax
  unsigned __int16 v20; // ax
  __m128i si128; // xmm0
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // rdx
  unsigned int v27; // ecx
  __int64 v28; // rdi
  __int64 first_seg; // rax
  __int64 *v30; // rbp
  __int64 v31; // r13
  unsigned __int64 v32; // rax
  __int16 v33; // r13
  __int16 v34; // ax
  char v35; // cl
  __int64 v36; // rsi
  __int64 v37; // rax
  __int16 v38; // dx
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // cl
  __int64 v42; // rdx
  __int16 v43; // ax
  __int16 v44; // dx
  char v45; // cl
  __m128i v46; // xmm0
  __int64 v47; // rax
  __int16 v48; // ax
  __int16 v49; // r14
  __int64 v50; // r13
  __int16 flags; // ax
  __int16 v52; // ax
  __int16 v53; // r13
  __int64 v54; // rax
  char v55; // cl
  __int64 v56; // rbp
  __int64 v57; // rsi
  __int16 v58; // ax
  __int64 v59; // rax
  char v60; // cl
  __int64 v61; // rbp
  __int16 v62; // ax
  __int16 v63; // r14
  __int64 v64; // rax
  __int64 v65; // [rsp+0h] [rbp-1E8h]
  unsigned __int16 v66; // [rsp+0h] [rbp-1E8h]
  __int16 v67; // [rsp+Ch] [rbp-1DCh]
  __int64 *v68; // [rsp+10h] [rbp-1D8h] BYREF
  __m128i v69; // [rsp+18h] [rbp-1D0h]
  __int64 v70; // [rsp+28h] [rbp-1C0h]
  __int64 v71; // [rsp+30h] [rbp-1B8h]
  _BYTE v72[360]; // [rsp+40h] [rbp-1A8h] BYREF
  unsigned __int64 v73; // [rsp+1A8h] [rbp-40h] BYREF

  v73 = __readfsqword(0x28u);
  v5 = (unsigned __int64 *)&v72[40];
  memset(v72, 255, 24);
  *(_QWORD *)&v72[24] = 0;
  *(_QWORD *)&v72[32] = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( v5 != &v73 );
  v6 = (sub_1F290(a1, *(_QWORD *)(a2 + 16)) ^ 1) & a3;
  if ( !v6 )
  {
LABEL_4:
    if ( *(_BYTE *)(a2 + 81) == 4 )
    {
      if ( *(_WORD *)(a2 + 86) == 29 )
        return 0;
      qmemcpy(v72, (const void *)a2, sizeof(v72));
      if ( (unsigned __int8)sub_45FC0(a1, a2, 0.0) )
      {
        v9 = *(_DWORD *)(a1 + 260) == 2;
        v10 = *(_QWORD *)(a2 + 88);
        v11 = 16;
        v72[81] = 2;
        if ( v9 )
          v11 = 12;
        *(_QWORD *)&v72[96] = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
                            & ((int)(v10 << v11) + (__int64)*(__int16 *)&v72[96]);
      }
LABEL_14:
      qmemcpy((void *)a2, v72, 0x168u);
      return 0;
    }
    v7 = *(_WORD *)(a2 + 24);
    if ( v7 == 37 )
    {
      if ( *(_BYTE *)(a2 + 121) )
        return 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_595D0);
      v68 = nullptr;
      qmemcpy(v72, (const void *)a2, sizeof(v72));
      v69 = si128;
      v70 = 0;
      v71 = 0;
      if ( ((unsigned __int8)get_fixup(&v68, *(_QWORD *)&v72[16])
         || *(_WORD *)&v72[26] > 2u
         && (unsigned __int8)getinf_flag(3, 32)
         && (unsigned __int8)get_fixup(&v68, *(_QWORD *)&v72[16] + 2LL))
        && (BYTE4(v68) & 4) == 0
        || !(unsigned __int8)sub_45FC0(a1, a2, *(double *)si128.m128i_i64) )
      {
        goto LABEL_14;
      }
      v22 = *(_QWORD *)(a2 + 88);
      v23 = 16;
      if ( *(_DWORD *)(a1 + 260) == 2 )
        v23 = 12;
      v24 = *(unsigned __int16 *)&v72[88];
LABEL_35:
      sub_1BF10(a1, (unsigned __int64)v72, (int)(v22 << v23) + v24, 0);
      goto LABEL_14;
    }
    if ( v7 <= 0x25u )
    {
      if ( ((v7 - 31) & 0xFFFD) != 0 || *(_BYTE *)(a2 + 121) || *(_WORD *)(a2 + 46) == 29 )
        return 0;
      v25 = _mm_load_si128((const __m128i *)&xmmword_595D0);
      v68 = nullptr;
      qmemcpy(v72, (const void *)a2, sizeof(v72));
      v69 = v25;
      v70 = 0;
      v71 = 0;
      if ( ((unsigned __int8)get_fixup(&v68, *(_QWORD *)&v72[16])
         || *(_WORD *)&v72[26] > 2u
         && (unsigned __int8)getinf_flag(3, 32)
         && (unsigned __int8)get_fixup(&v68, *(_QWORD *)&v72[16] + 2LL))
        && (BYTE4(v68) & 4) == 0
        || !(unsigned __int8)sub_45FC0(a1, a2, *(double *)v25.m128i_i64) )
      {
        goto LABEL_14;
      }
      v22 = *(_QWORD *)(a2 + 88);
      v23 = 16;
      if ( *(_DWORD *)(a1 + 260) == 2 )
        v23 = 12;
      v24 = *(__int16 *)&v72[88];
      goto LABEL_35;
    }
    if ( v7 != 135 || !v6 )
      return 0;
    v12 = *(__int64 ***)(a1 + 616);
    qmemcpy(v72, (const void *)a2, sizeof(v72));
    if ( v12 )
    {
      v13 = *v12;
      v68 = v13;
      if ( v13 )
      {
        v14 = v13[1];
LABEL_20:
        v15 = *(unsigned __int16 *)(a2 + 26);
        v16 = *(_QWORD *)(a2 + 16);
        v69 = (__m128i)v14;
        v17 = v15;
        v18 = v16 + v15;
        LOWORD(v70) = 0;
        if ( (unsigned __int8)sub_270C0(a2, v18) )
        {
          *(_BYTE *)(a2 + 33) = v72[33] & 3 | *(_BYTE *)(a2 + 33) & 0xFC;
          v65 = *(_QWORD *)(a1 + 616);
          v19 = sub_26E20(a1, (__m128i *)a2, (__int64)&v68, 0.0);
          *(_QWORD *)(a1 + 616) = v65;
          *(_BYTE *)(a2 + 40) = 0;
          *(_BYTE *)(a2 + 80) = 1;
          *(_BYTE *)(a2 + 120) = 2;
          *(_BYTE *)(a2 + 160) = 3;
          *(_BYTE *)(a2 + 200) = 4;
          *(_BYTE *)(a2 + 240) = 5;
          *(_BYTE *)(a2 + 280) = 6;
          *(_BYTE *)(a2 + 320) = 7;
          if ( !v19 )
            *(_DWORD *)(a2 + 24) = 0;
        }
        if ( !*(_BYTE *)(a2 + 121) )
        {
          if ( *(_BYTE *)(a2 + 81) == 4 )
          {
            v43 = *(_WORD *)(a2 + 86);
            if ( v43 == *(_WORD *)&v72[46] )
            {
              v44 = *(_WORD *)(a2 + 46);
              if ( v43 == v44 || v43 == 1 && (v44 == 1 || (*(_BYTE *)(a1 + 188) & 0x20) != 0) )
              {
                *(_BYTE *)(a2 + 81) = 2;
                v45 = 16;
                if ( *(_DWORD *)(a1 + 260) == 2 )
                  v45 = 12;
                v46 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v72[8]), (__m128i)v16);
                v47 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
                    & ((int)(*(_QWORD *)&v72[88] << v45) + (__int64)*(__int16 *)(a2 + 96));
                *(_DWORD *)(a2 + 28) |= 8u;
                *(_WORD *)(a2 + 26) += v17;
                *(_QWORD *)(a2 + 96) = v47;
                *(__m128i *)(a2 + 8) = v46;
                return 1;
              }
            }
          }
          else
          {
            v20 = *(_WORD *)(a2 + 24);
            if ( v20 > 0x25u )
            {
              if ( v20 == 57 )
              {
                v58 = *(_WORD *)(a2 + 46);
                if ( v58 == *(_WORD *)&v72[46] && (*(_BYTE *)(a1 + 188) & 0x20) != 0 && v58 == 1 )
                {
                  v59 = *(_QWORD *)(a1 + 616);
                  *(_WORD *)&v72[24] = 553;
                  if ( v59 )
                    sub_1B3E0(*(__int64 **)v59, *(_QWORD *)(v59 + 8));
                  v60 = 16;
                  if ( *(_DWORD *)(a1 + 260) == 2 )
                    v60 = 12;
                  v61 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (int)(*(_QWORD *)&v72[88] << v60);
                  *(_QWORD *)&v72[88] = v61;
                  if ( (unsigned __int8)getinf_flag(3, 32) )
                    *(_QWORD *)&v72[88] = _byteswap_ulong(v61);
                  v62 = *(_WORD *)(a2 + 86);
                  v63 = *(_WORD *)(a2 + 26) + v17;
                  v72[85] = 3;
                  v72[41] = 9;
                  *(_WORD *)&v72[46] = v62;
                  v72[45] = 3;
                  *(_WORD *)&v72[73] = 260;
                  *(_WORD *)&v72[26] = v63;
                  qmemcpy((void *)a2, v72, 0x168u);
                  return 1;
                }
              }
              else if ( v20 == 524 )
              {
                v48 = *(_WORD *)(a2 + 46);
                if ( v48 == *(_WORD *)&v72[46] && (*(_BYTE *)(a1 + 188) & 0x20) != 0 && v48 == 1 )
                {
                  v49 = *(_WORD *)(a2 + 86);
                  v50 = *(unsigned __int16 *)(a2 + 26) + v18;
                  flags = get_flags_ex(v50, 4);
                  if ( (flags & 0x1000) == 0 && (flags & 0x600) != 0x400 )
                  {
                    sub_271A0(a1, (__int64)v72, (__m128i *)a2, v50, (__int64)&v68, 0.0);
                    if ( *(_WORD *)(a2 + 24) == 57 && !*(_WORD *)(a2 + 46) && *(_WORD *)(a2 + 86) == v49 )
                    {
                      v52 = *(_WORD *)(a2 + 26);
                      *(_WORD *)&v72[24] = 554;
                      v53 = v52 + v50;
                      v54 = *(_QWORD *)(a1 + 616);
                      if ( v54 )
                        sub_1B3E0(*(__int64 **)v54, *(_QWORD *)(v54 + 8));
                      v55 = 16;
                      if ( *(_DWORD *)(a1 + 260) == 2 )
                        v55 = 12;
                      v56 = ((*(_QWORD *)&v72[88] << v55) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)) << 32;
                      if ( (unsigned __int8)getinf_flag(3, 32) )
                        v56 = swap64(v56);
                      v72[41] = 9;
                      *(_QWORD *)&v72[88] = v56;
                      v72[85] = 4;
                      *(_WORD *)&v72[46] = v49;
                      v72[45] = 4;
                      *(_WORD *)&v72[73] = 260;
                      *(_WORD *)&v72[26] = v53 - v16;
                      qmemcpy((void *)a2, v72, 0x168u);
                      return 1;
                    }
                  }
                }
              }
            }
            else if ( v20 > 1u )
            {
              switch ( *(_WORD *)(a2 + 24) )
              {
                case 2:
                case 5:
                  v33 = *(_WORD *)(a2 + 46);
                  if ( v33 != *(_WORD *)&v72[46] )
                    goto LABEL_67;
                  v66 = *(_WORD *)(a2 + 26);
                  v34 = get_flags_ex(*(_QWORD *)(a2 + 16) + v66, 4);
                  if ( (v34 & 0x1000) != 0 )
                    goto LABEL_67;
                  if ( (v34 & 0x600) == 0x400 )
                    goto LABEL_67;
                  v67 = *(_WORD *)(a2 + 86);
                  sub_271A0(
                    a1,
                    (__int64)v72,
                    (__m128i *)a2,
                    *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26),
                    (__int64)&v68,
                    0.0);
                  if ( *(_BYTE *)(a2 + 81) != 4
                    || v33 != *(_WORD *)(a2 + 86)
                    || v33 != *(_WORD *)(a2 + 46) && ((*(_BYTE *)(a1 + 188) & 0x20) == 0 || v33 != 1) )
                  {
                    goto LABEL_67;
                  }
                  v35 = 16;
                  v36 = *(_QWORD *)(a2 + 96);
                  v37 = *(_QWORD *)&v72[88];
                  v38 = *(_WORD *)(a2 + 26) + v17 + v66;
                  *(__m128i *)(a2 + 8) = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&v72[8]), (__m128i)v16);
                  if ( *(_DWORD *)(a1 + 260) == 2 )
                    v35 = 12;
                  v39 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & ((__int16)v36 + (__int64)(int)(v37 << v35));
                  *(_DWORD *)(a2 + 28) |= 8u;
                  *(_QWORD *)(a2 + 96) = v39;
                  *(_WORD *)(a2 + 86) = v67;
                  *(_WORD *)(a2 + 26) = v38;
                  return 1;
                case 0x1F:
                case 0x21:
                  if ( *(_WORD *)(a2 + 46) != *(_WORD *)&v72[46] )
                    goto LABEL_67;
                  v40 = *(_QWORD *)&v72[88];
                  v41 = 16;
                  if ( *(_DWORD *)(a1 + 260) == 2 )
                    v41 = 12;
                  v42 = *(__int16 *)(a2 + 88);
                  goto LABEL_86;
                case 0x25:
                  if ( *(_WORD *)(a2 + 46) != *(_WORD *)&v72[46] )
                    goto LABEL_67;
                  v40 = *(_QWORD *)&v72[88];
                  v41 = 16;
                  if ( *(_DWORD *)(a1 + 260) == 2 )
                    v41 = 12;
                  v42 = *(unsigned __int16 *)(a2 + 88);
LABEL_86:
                  sub_1BF10(a1, (unsigned __int64)v72, (int)(v40 << v41) + v42, 0);
                  *(_WORD *)&v72[26] += *(_WORD *)(a2 + 26);
                  qmemcpy((void *)a2, v72, 0x168u);
                  break;
                default:
                  goto LABEL_67;
              }
              return 1;
            }
          }
        }
LABEL_67:
        v30 = v68;
        if ( v68 )
        {
          v31 = v69.m128i_i64[0];
          v32 = v68[1];
          if ( v32 < v69.m128i_i64[0] )
          {
            v57 = *v68;
            if ( (unsigned __int64)v68[2] < v69.m128i_i64[0] )
            {
              v64 = qvector_reserve(v68, v57, v69.m128i_i64[0], 1);
              *v30 = v64;
              v57 = v64;
              v32 = v30[1];
            }
            memset((void *)(v57 + v32), 0, v31 - v32);
            v30[1] = v31;
          }
          else if ( v69.m128i_i64[0] != v32 )
          {
            v68[1] = v69.m128i_i64[0];
          }
        }
        goto LABEL_14;
      }
    }
    else
    {
      v68 = nullptr;
    }
    v14 = 0;
    goto LABEL_20;
  }
  if ( !(unsigned __int8)sub_27500(a1, a2) )
  {
    v27 = *(_DWORD *)(a1 + 120);
    if ( v27 > 5 )
      goto LABEL_129;
    if ( ((1LL << v27) & 0x16) != 0 )
    {
LABEL_53:
      if ( *(_WORD *)(a2 + 24) != 135 || !(unsigned __int8)sub_27200(a1, a2) )
        goto LABEL_4;
      return 1;
    }
    if ( ((1LL << v27) & 0x29) != 0 )
    {
      v28 = *(_QWORD *)(a2 + 16);
      if ( v28 == -1 )
        first_seg = get_first_seg(-1, a2, v26);
      else
        first_seg = getseg(v28);
      if ( first_seg )
      {
        if ( *(_BYTE *)(first_seg + 43) != 2 && (unsigned int)(*(_DWORD *)(a1 + 184) - 4) > 1 )
          goto LABEL_4;
        goto LABEL_53;
      }
    }
    else
    {
LABEL_129:
      if ( under_debugger )
        goto LABEL_133;
      interr(10339);
    }
    if ( !under_debugger )
      interr(10206);
LABEL_133:
    BUG();
  }
  return 1;
}
