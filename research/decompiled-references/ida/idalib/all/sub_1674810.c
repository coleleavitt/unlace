void __fastcall sub_1674810(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned int a8)
{
  bool v11; // zf
  size_t v12; // r14
  __int64 v13; // rdi
  void *v14; // r15
  __m128i *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  size_t v21; // r14
  __int64 v22; // rdi
  __int64 v23; // r14
  __m128i *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 *v31; // rdx
  __int64 *v32; // r15
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rsi
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r15
  __m128i *v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rax
  __int64 *v53; // rdx
  __int64 *v54; // r15
  _QWORD *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rsi
  _QWORD *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  size_t v68; // r14
  void *v69; // r15
  __m128i *v70; // r15
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  void *v75; // [rsp+20h] [rbp-E8h]
  char v76; // [rsp+20h] [rbp-E8h]
  __int64 v77; // [rsp+20h] [rbp-E8h]
  __int64 v78; // [rsp+20h] [rbp-E8h]
  void *v79; // [rsp+20h] [rbp-E8h]
  char v80; // [rsp+2Ch] [rbp-DCh]
  __m128i v81; // [rsp+50h] [rbp-B8h]
  __m128i v82; // [rsp+50h] [rbp-B8h]
  void *src; // [rsp+70h] [rbp-98h] BYREF
  size_t n; // [rsp+78h] [rbp-90h]
  _BYTE v85[16]; // [rsp+80h] [rbp-88h] BYREF
  char v86; // [rsp+90h] [rbp-78h]
  __m128i v87; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v88; // [rsp+B0h] [rbp-58h]
  unsigned int v89; // [rsp+C0h] [rbp-48h]

  v11 = *(_BYTE *)(a3 + 104) == 0;
  v86 = 0;
  if ( v11 )
    goto LABEL_2;
  sub_1671490((__int64)&src, a3 + 72);
  if ( !v86 )
    goto LABEL_2;
  v12 = n;
  v81 = _mm_loadu_si128((const __m128i *)&a7);
  if ( (a8 & 1) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 248);
    if ( n )
    {
      v14 = src;
      v87 = 0;
      v80 = (a8 & 2) != 0;
      v88 = 0;
      v89 = v89 & 0xFF000000 | 0x101A4;
      HIBYTE(v89) &= 0xFCu;
      v75 = (void *)sub_1673960((__int64 *)(v13 + 2352), n, 3u);
      memcpy(v75, v14, v12);
      v15 = (__m128i *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
      sub_B30000(v15, *(_QWORD *)(a1 + 248), &v87, v75, v12);
      v16 = sub_B35EA0(*(_QWORD *)(a1 + 248), v81.m128i_i64[0], v81.m128i_i64[1], (__int64)v15, v80, 0);
    }
    else
    {
      v16 = sub_B35E00(v13, v81.m128i_i64[0], v81.m128i_i64[1], 367, (a8 & 2) != 0, 0);
    }
    sub_B8CC60(a2, v16, v17, v18, v19, v20);
    goto LABEL_9;
  }
  v52 = (_QWORD *)sub_9C8850(a2);
  v54 = v53;
  v55 = v52;
  v56 = ((char *)v54 - (char *)v52) >> 5;
  v57 = v54 - v52;
  if ( v56 > 0 )
  {
    if ( *(_WORD *)(*v52 + 36LL) != 367 )
    {
      if ( *(_WORD *)(v52[1] + 36LL) == 367 )
      {
        v54 = v52 + 1;
      }
      else if ( *(_WORD *)(v52[2] + 36LL) == 367 )
      {
        v54 = v52 + 2;
      }
      else
      {
        v58 = &v52[4 * v56];
        if ( *(_WORD *)(v52[3] + 36LL) == 367 )
        {
          v54 = v52 + 3;
        }
        else
        {
          while ( 1 )
          {
            v52 = v55 + 4;
            if ( v58 == v55 + 4 )
            {
              v57 = v54 - v52;
              goto LABEL_55;
            }
            if ( *(_WORD *)(v55[4] + 36LL) == 367 )
              goto LABEL_62;
            if ( *(_WORD *)(v55[5] + 36LL) == 367 )
            {
              v54 = v55 + 5;
              goto LABEL_58;
            }
            if ( *(_WORD *)(v55[6] + 36LL) == 367 )
            {
              v54 = v55 + 6;
              goto LABEL_58;
            }
            if ( *(_WORD *)(v55[7] + 36LL) == 367 )
              break;
            v55 += 4;
          }
          v54 = v55 + 7;
        }
      }
      goto LABEL_58;
    }
    goto LABEL_62;
  }
LABEL_55:
  switch ( v57 )
  {
    case 2LL:
      goto LABEL_79;
    case 3LL:
      if ( *(_WORD *)(*v52 + 36LL) == 367 )
        goto LABEL_62;
      ++v52;
LABEL_79:
      if ( *(_WORD *)(*v52 + 36LL) != 367 )
      {
        ++v52;
LABEL_81:
        if ( *(_WORD *)(*v52 + 36LL) == 367 )
          v54 = v52;
        break;
      }
LABEL_62:
      v54 = v52;
      break;
    case 1LL:
      goto LABEL_81;
  }
LABEL_58:
  if ( (__int64 *)sub_9C88C0(a2) != v54 )
  {
    v78 = sub_B35EA0(*(_QWORD *)(a1 + 248), v81.m128i_i64[0], v81.m128i_i64[1], *v54, 1, 0);
    v63 = sub_B8C3D0(a2, v81.m128i_i64[0], v59, v60, v61, v62);
    sub_1672BE0((__int64)v63, (__int64)v54);
    sub_B8CC60(a2, v78, v64, v65, v66, v67);
  }
  if ( v12 )
  {
    v68 = n;
    v69 = src;
    v87 = 0;
    v88 = 0;
    v89 = v89 & 0xFF000000 | 0x101A4;
    HIBYTE(v89) &= 0xFCu;
    v79 = (void *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), n, 3u);
    memcpy(v79, v69, v68);
    v70 = (__m128i *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
    sub_B30000(v70, *(_QWORD *)(a1 + 248), &v87, v79, v68);
    sub_B8CC60(a2, (__int64)v70, v71, v72, v73, v74);
  }
LABEL_9:
  if ( v86 && src != v85 )
  {
    operator delete(src);
    v11 = *(_BYTE *)(a3 + 144) == 0;
    v86 = 0;
    if ( v11 )
      goto LABEL_3;
    goto LABEL_12;
  }
LABEL_2:
  v11 = *(_BYTE *)(a3 + 144) == 0;
  v86 = 0;
  if ( v11 )
    goto LABEL_3;
LABEL_12:
  sub_1671490((__int64)&src, a3 + 112);
  if ( !v86 )
    goto LABEL_3;
  v21 = n;
  v82 = _mm_loadu_si128((const __m128i *)&a7);
  if ( (a8 & 1) != 0 )
  {
    v30 = (_QWORD *)sub_9C8850(a2);
    v32 = v31;
    v33 = v30;
    v34 = ((char *)v32 - (char *)v30) >> 5;
    v35 = v32 - v30;
    if ( v34 > 0 )
    {
      if ( *(_WORD *)(*v30 + 36LL) != 264 )
      {
        if ( *(_WORD *)(v30[1] + 36LL) == 264 )
        {
          v32 = v30 + 1;
        }
        else if ( *(_WORD *)(v30[2] + 36LL) == 264 )
        {
          v32 = v30 + 2;
        }
        else
        {
          v36 = &v30[4 * v34];
          if ( *(_WORD *)(v30[3] + 36LL) == 264 )
          {
            v32 = v30 + 3;
          }
          else
          {
            while ( 1 )
            {
              v30 = v33 + 4;
              if ( v36 == v33 + 4 )
              {
                v35 = v32 - v30;
                goto LABEL_35;
              }
              if ( *(_WORD *)(v33[4] + 36LL) == 264 )
                goto LABEL_63;
              if ( *(_WORD *)(v33[5] + 36LL) == 264 )
              {
                v32 = v33 + 5;
                goto LABEL_38;
              }
              if ( *(_WORD *)(v33[6] + 36LL) == 264 )
              {
                v32 = v33 + 6;
                goto LABEL_38;
              }
              if ( *(_WORD *)(v33[7] + 36LL) == 264 )
                break;
              v33 += 4;
            }
            v32 = v33 + 7;
          }
        }
        goto LABEL_38;
      }
      goto LABEL_63;
    }
LABEL_35:
    if ( v35 != 2 )
    {
      if ( v35 != 3 )
      {
        if ( v35 != 1 )
        {
LABEL_38:
          if ( (__int64 *)sub_9C88C0(a2) != v32 )
          {
            v77 = sub_B35EA0(*(_QWORD *)(a1 + 248), v82.m128i_i64[0], v82.m128i_i64[1], *v32, 1, 0);
            v41 = sub_B8C3D0(a2, v82.m128i_i64[0], v37, v38, v39, v40);
            sub_1672BE0((__int64)v41, (__int64)v32);
            sub_B8CC60(a2, v77, v42, v43, v44, v45);
          }
          if ( v21 )
          {
            v87 = 0;
            v88 = 0;
            v89 = v89 & 0xFF000000 | 0x101A4;
            HIBYTE(v89) &= 0xFCu;
            v46 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL), src, n);
            v47 = (__m128i *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
            sub_B14B20(v47, *(_QWORD *)(a1 + 248), &v87, v46);
            sub_B8CC60(a2, (__int64)v47, v48, v49, v50, v51);
          }
          goto LABEL_17;
        }
LABEL_74:
        if ( *(_WORD *)(*v30 + 36LL) == 264 )
          v32 = v30;
        goto LABEL_38;
      }
      if ( *(_WORD *)(*v30 + 36LL) == 264 )
      {
LABEL_63:
        v32 = v30;
        goto LABEL_38;
      }
      ++v30;
    }
    if ( *(_WORD *)(*v30 + 36LL) != 264 )
    {
      ++v30;
      goto LABEL_74;
    }
    goto LABEL_63;
  }
  v22 = *(_QWORD *)(a1 + 248);
  if ( n )
  {
    v76 = (a8 & 2) != 0;
    v87 = 0;
    v88 = 0;
    v89 = v89 & 0xFF000000 | 0x101A4;
    HIBYTE(v89) &= 0xFCu;
    v23 = sub_6F3470(*(_QWORD *)(v22 + 17504), src, n);
    v24 = (__m128i *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
    sub_B14B20(v24, *(_QWORD *)(a1 + 248), &v87, v23);
    v25 = sub_B35EA0(*(_QWORD *)(a1 + 248), v82.m128i_i64[0], v82.m128i_i64[1], (__int64)v24, v76, 0);
  }
  else
  {
    v25 = sub_B35E00(v22, v82.m128i_i64[0], v82.m128i_i64[1], 264, (a8 & 2) != 0, 0);
  }
  sub_B8CC60(a2, v25, v26, v27, v28, v29);
LABEL_17:
  if ( v86 && src != v85 )
    operator delete(src);
LABEL_3:
  sub_1673CA0(a1, a2, a3, a4, a5, a6, (__int128)_mm_loadu_si128((const __m128i *)&a7), a8);
}
