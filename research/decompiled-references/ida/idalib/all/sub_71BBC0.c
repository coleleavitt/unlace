__int64 __fastcall sub_71BBC0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v11; // r13
  int v13; // r14d
  __int64 v14; // rax
  _BYTE *v15; // rbx
  __int64 v16; // r15
  double v17; // xmm4_8
  double v18; // xmm5_8
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // r14
  unsigned __int64 i; // rbx
  __int64 v24; // rax
  __int64 v25; // rsi
  double v26; // xmm4_8
  double v27; // xmm5_8
  double v28; // xmm4_8
  double v29; // xmm5_8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  double v34; // xmm4_8
  double v35; // xmm5_8
  __int64 *v36; // r15
  __int64 *v37; // r13
  unsigned __int8 v38; // dl
  unsigned int v39; // eax
  unsigned int v40; // eax
  __int64 *v41; // r13
  __int64 v42; // r15
  __int64 v43; // rax
  double v44; // xmm4_8
  double v45; // xmm5_8
  char v46; // dl
  int v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // rbx
  unsigned int v50; // eax
  __int64 v51; // r8
  double v52; // xmm4_8
  double v53; // xmm5_8
  __int64 v54; // rsi
  double v55; // xmm4_8
  double v56; // xmm5_8
  __int64 v57; // rax
  double v58; // xmm4_8
  double v59; // xmm5_8
  unsigned int v60; // eax
  __int64 v61; // r15
  unsigned int v62; // eax

  v11 = 0;
  v13 = *(unsigned __int16 *)(a2 + 4);
  if ( *(_WORD *)(a2 + 4) )
  {
    do
    {
      while ( 1 )
      {
        v14 = sub_C95050(a2);
        v15 = (_BYTE *)(v14 + 16 * v11);
        if ( (*v15 & 1) == 0 )
          break;
LABEL_3:
        if ( v13 == (_DWORD)++v11 )
          goto LABEL_12;
      }
      v16 = *(_QWORD *)(a2 + 8 * v11 + 32);
      if ( (unsigned __int8)sub_C94FB0(a2, v14 + 16 * v11) )
      {
        if ( *(_QWORD *)v15 > 7u
          && !(unsigned __int8)sub_709840(a1, *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFF8LL, a4, a5, a6, a7, v17, v18, a10, a11) )
        {
          return 0;
        }
        goto LABEL_3;
      }
      if ( !(unsigned __int8)sub_70DBE0(a1, v16, 0, a4, a5, a6, a7, v17, v18, a10, a11) )
        return 0;
      ++v11;
    }
    while ( v13 != (_DWORD)v11 );
  }
LABEL_12:
  v20 = *(_QWORD *)(sub_C95340(a2) + 56);
  v21 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v20 & 4) != 0 )
    v21 = (__int64 *)v21[4];
  v22 = *v21;
  for ( i = (unsigned __int64)(v21 + 1); ; i = v60 * ((i != -4) + (i + 4 - (i != -4)) / v60) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v24 = v22;
          if ( (v22 & 7) != 0 || (v22 & 8) != 0 )
            goto LABEL_16;
          v38 = *(_BYTE *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
          if ( v38 == 26 )
            goto LABEL_58;
          if ( v38 == 40 )
          {
            if ( !v22 )
              goto LABEL_58;
            i += 8LL;
            goto LABEL_32;
          }
          if ( v38 != 8 )
            break;
          if ( !v22 )
            goto LABEL_58;
          v39 = sub_F6C520(*(_QWORD *)(v22 + 40));
          v22 = *(_QWORD *)(v22 + 40);
          i = v39 * ((i != -8) + (i + 8 - (i != -8)) / v39);
        }
        if ( v38 == 9 )
        {
          if ( !v22 )
            goto LABEL_58;
          ++i;
          goto LABEL_32;
        }
        if ( v38 != 27 )
          break;
        if ( !v22 )
          goto LABEL_58;
        i += 16LL;
LABEL_32:
        v40 = sub_F6C520(*(_QWORD *)(v22 + 32));
        v22 = *(_QWORD *)(v22 + 32);
        i = v40 * ((i != 0) + (i - (i != 0)) / v40);
      }
      if ( v38 != 24 )
        break;
      if ( !v22 )
      {
LABEL_58:
        if ( (v22 & 8) == 0 )
        {
LABEL_59:
          if ( *(_BYTE *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
            goto LABEL_17;
        }
LABEL_16:
        i = 0;
        v22 = 0;
        goto LABEL_17;
      }
      v61 = 16;
      if ( (unsigned __int8)(*(_WORD *)(v22 + 18) >> 3) == 6 )
        v61 = 16LL * (*(_QWORD *)(v22 + 32) != 0);
      v62 = sub_F6C520(*(_QWORD *)(v22 + 40));
      v22 = *(_QWORD *)(v22 + 40);
      i = ((i + v61 != 0) + (i + v61 - (i + v61 != 0)) / v62) * v62;
    }
    if ( v38 <= 1u )
      break;
    if ( v38 != 30 )
      goto LABEL_58;
    if ( !v22 )
      goto LABEL_67;
    v60 = sub_F6C520(*(_QWORD *)(v22 + 24));
    v22 = *(_QWORD *)(v22 + 24);
  }
  if ( v22 )
    goto LABEL_32;
  if ( MEMORY[0x10102464C458F] != 30 )
  {
    v24 = 0;
    goto LABEL_59;
  }
LABEL_67:
  i = 0;
LABEL_17:
  v25 = sub_C95360(a2);
  if ( !(unsigned __int8)sub_7154D0(a1, v25, a4, a5, a6, a7, v26, v27, a10, a11) )
    return 0;
  if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 && *(_BYTE *)(v22 + 16) != 25 && *(_WORD *)(v22 + 22) )
  {
    v41 = (__int64 *)(i + 16);
    v42 = i + 8LL * ((unsigned int)*(unsigned __int16 *)(v22 + 22) - 1) + 24;
    while ( !*v41 || (unsigned __int8)sub_709840(a1, *v41, a4, a5, a6, a7, v28, v29, a10, a11) )
    {
      if ( (__int64 *)v42 == ++v41 )
        goto LABEL_19;
    }
    return 0;
  }
LABEL_19:
  v30 = sub_6F33F0(v22);
  v36 = (__int64 *)(v30 + 8 * v31);
  v37 = (__int64 *)v30;
  if ( (__int64 *)v30 != v36 )
  {
    while ( (unsigned __int8)sub_70EBE0(a1, *v37, v31, v32, v33, a4, a5, a6, a7, v34, v35, a10, a11) )
    {
      if ( v36 == ++v37 )
        goto LABEL_40;
    }
    return 0;
  }
LABEL_40:
  v43 = sub_6F3390(v22);
  if ( v43 && !(unsigned __int8)sub_70DBE0(a1, v43, a3, a4, a5, a6, a7, v44, v45, a10, a11) )
    return 0;
  if ( (*(_BYTE *)(a2 + 2) & 0x40) != 0 )
  {
    v46 = *(_BYTE *)(v22 + 16);
    if ( v46 == 26 )
    {
      v47 = 15;
      if ( v22 )
        v47 = 8 * ((*(_BYTE *)(v22 + 19) & 0x1E) != 0) + 15;
LABEL_46:
      v48 = 8 * ((v47 + 8 * (unsigned int)*(unsigned __int16 *)(v22 + 22)) >> 3) + 8;
    }
    else
    {
      v48 = 16;
      if ( v46 != 25 )
      {
        v47 = 15;
        goto LABEL_46;
      }
    }
    v49 = v48 + i;
    v50 = sub_F6C520(*(_QWORD *)(v22 + 24));
    if ( !(unsigned __int8)sub_717AC0(
                             a1,
                             *(_QWORD *)(v22 + 24),
                             v50 * ((v49 != 0) + (v49 - (v49 != 0)) / v50),
                             v50,
                             v51,
                             a4,
                             a5,
                             a6,
                             a7,
                             v52,
                             v53,
                             a10,
                             a11) )
      return 0;
  }
  v54 = *(_QWORD *)sub_C953A0(a2);
  if ( !(unsigned __int8)sub_70DBE0(a1, v54, a3, a4, a5, a6, a7, v55, v56, a10, a11) )
    return 0;
  v57 = sub_C94E80(a2);
  result = sub_70DBE0(a1, v57, a3, a4, a5, a6, a7, v58, v59, a10, a11);
  if ( !(_BYTE)result )
    return 0;
  return result;
}
