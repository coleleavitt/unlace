__int64 __fastcall sub_155C260(const __m128i *a1, char a2, char a3)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int16 v6; // ax
  unsigned int v7; // ebp
  __m128 v9; // xmm1
  __int64 v10; // rdi
  __int32 v11; // eax
  unsigned __int64 v12; // r13
  unsigned __int16 v13; // cx
  __int64 *v14; // rdi
  __int64 *v15; // rdi
  __int32 v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rdi
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm3
  __int32 v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  char *v28; // rdi
  char *v29; // rax
  __int64 *v30; // rdi
  __m128i v31; // xmm4
  __m128i v32; // xmm5
  __m128i v33; // xmm6
  __int32 v34; // eax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  char *v37; // rdi
  char *v38; // rax
  __m128i v39; // xmm4
  __m128i v40; // xmm5
  __m128i v41; // xmm6
  __int32 v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  char *v45; // rdi
  char *v46; // rax
  bool v47; // zf
  __int64 *v48; // rdi
  __int16 v49; // ax
  __int16 v50; // ax
  unsigned __int16 v51; // cx
  char v52; // al
  unsigned __int32 v53; // eax
  unsigned __int16 v54; // si
  __int64 v55; // rdx
  unsigned __int32 v56; // eax
  __int64 v57; // rdx
  unsigned __int16 v58; // cx
  unsigned __int32 v59; // eax
  unsigned __int16 v60; // si
  __int64 v61; // rdx
  __int16 v62; // ax
  __int32 v63; // eax
  unsigned __int32 v64; // eax
  unsigned __int16 v65; // si
  _WORD *v66; // rdx
  unsigned __int64 v67; // [rsp+0h] [rbp-208h]
  const __m128i *v69; // [rsp+8h] [rbp-200h]
  __int32 v70; // [rsp+10h] [rbp-1F8h]
  __int16 v71; // [rsp+14h] [rbp-1F4h]
  unsigned __int16 v72; // [rsp+16h] [rbp-1F2h]
  unsigned __int16 v73; // [rsp+18h] [rbp-1F0h]
  unsigned __int16 v74; // [rsp+1Ah] [rbp-1EEh]
  __int32 v75; // [rsp+1Ch] [rbp-1ECh]
  int v76[3]; // [rsp+2Ch] [rbp-1DCh] BYREF
  __m128 v77; // [rsp+38h] [rbp-1D0h] BYREF
  __m128i v78; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v79; // [rsp+58h] [rbp-1B0h]
  __m128i v80; // [rsp+60h] [rbp-1A8h] BYREF
  __int32 v81; // [rsp+70h] [rbp-198h]
  __int16 v82; // [rsp+90h] [rbp-178h] BYREF
  __m128i v83; // [rsp+98h] [rbp-170h] BYREF
  __m128i v84; // [rsp+A8h] [rbp-160h] BYREF
  __int64 v85; // [rsp+B8h] [rbp-150h]
  __m128i v86; // [rsp+C0h] [rbp-148h] BYREF
  __int32 v87; // [rsp+D0h] [rbp-138h]
  __int128 v88; // [rsp+F0h] [rbp-118h] BYREF
  void *ptr; // [rsp+100h] [rbp-108h]
  __int64 v90; // [rsp+108h] [rbp-100h]
  _BYTE v91[248]; // [rsp+110h] [rbp-F8h] BYREF

  if ( !a2 && (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 2LL) & 4) == 0 )
    return 1;
  if ( a1[2].m128i_i16[0] != 1 )
  {
    v4 = a1->m128i_i64[1];
    v5 = *(_QWORD *)(v4 + 2944) + 1LL;
    v6 = v5 >= *(unsigned int *)(v4 + 2912)
       ? *(_WORD *)(sub_14180A0(v4, 2u) + 16)
       : *(_WORD *)(*(_QWORD *)(v4 + 2904) + 24 * v5 + 16);
    if ( v6 == 153 )
      return 1;
  }
  v9 = (__m128)_mm_loadu_si128(a1 + 3);
  v10 = a1->m128i_i64[1];
  v79 = a1[5].m128i_i64[0];
  v11 = a1[2].m128i_i32[0];
  v12 = a1[169].m128i_u32[2];
  v77 = v9;
  v78 = _mm_loadu_si128(a1 + 4);
  v81 = v11;
  LOWORD(v11) = a1[5].m128i_i16[6];
  v80 = _mm_loadu_si128(a1 + 1);
  v71 = v11;
  v70 = a1[5].m128i_i32[2];
  sub_1418D30(v10, 0);
  if ( a1[2].m128i_i16[0] == 20 )
  {
    ++a1[5].m128i_i16[5];
  }
  else
  {
    v13 = a1[5].m128i_u16[5];
    if ( !v13 )
      goto LABEL_11;
    v53 = a1[174].m128i_u32[2];
    if ( v53 )
    {
      v54 = a1[5].m128i_u16[4];
      v55 = a1[174].m128i_i64[0] + 24LL * v53 - 24;
      do
      {
        if ( v54 == *(_WORD *)(v55 + 14) )
        {
          if ( *(_DWORD *)(v55 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
            goto LABEL_69;
        }
        else if ( v54 > *(_WORD *)(v55 + 14) )
        {
          goto LABEL_69;
        }
        if ( v13 <= *(_WORD *)(v55 + 16) && a1[5].m128i_i16[6] <= *(_WORD *)(v55 + 18) )
          break;
LABEL_69:
        --v53;
        v55 -= 24;
        a1[174].m128i_i32[2] = v53;
      }
      while ( v53 );
    }
    a1[5].m128i_i16[5] = v13 - 1;
  }
LABEL_11:
  v14 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v14, a1[1].m128i_i32);
  v15 = (__int64 *)a1->m128i_i64[1];
  if ( (*(_BYTE *)(v15[7] + 2) & 4) == 0 )
  {
    v51 = a1[5].m128i_u16[5];
    if ( a1[2].m128i_i16[0] == 20 )
    {
      a1[5].m128i_i16[5] = v51 + 1;
      goto LABEL_61;
    }
    if ( !v51 )
    {
LABEL_61:
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v15, a1[1].m128i_i32);
      LOWORD(v88) = 21;
      v52 = sub_15680D0(a1, &v88, 1, 0);
      v30 = (__int64 *)a1->m128i_i64[1];
      v69 = a1 + 169;
      if ( a1[2].m128i_i16[0] != 21 || !v52 )
      {
        v7 = 2;
        goto LABEL_26;
      }
      goto LABEL_63;
    }
    v59 = a1[174].m128i_u32[2];
    if ( !v59 )
    {
LABEL_97:
      a1[5].m128i_i16[5] = v51 - 1;
      goto LABEL_61;
    }
    v60 = a1[5].m128i_u16[4];
    v61 = a1[174].m128i_i64[0] + 24LL * v59 - 24;
    while ( 1 )
    {
      if ( v60 == *(_WORD *)(v61 + 14) )
      {
        if ( *(_DWORD *)(v61 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
          goto LABEL_92;
      }
      else if ( v60 > *(_WORD *)(v61 + 14) )
      {
        goto LABEL_92;
      }
      if ( *(_WORD *)(v61 + 16) >= v51 && a1[5].m128i_i16[6] <= *(_WORD *)(v61 + 18) )
        goto LABEL_97;
LABEL_92:
      --v59;
      v61 -= 24;
      a1[174].m128i_i32[2] = v59;
      if ( !v59 )
        goto LABEL_97;
    }
  }
  v85 = a1[5].m128i_i64[0];
  v16 = a1[2].m128i_i32[0];
  v83 = _mm_loadu_si128(a1 + 3);
  v87 = v16;
  v17 = a1[169].m128i_u32[2];
  v84 = _mm_loadu_si128(a1 + 4);
  v75 = v17;
  v67 = v17;
  LOWORD(v17) = a1[5].m128i_i16[4];
  v86 = _mm_loadu_si128(a1 + 1);
  v73 = v17;
  v72 = a1[5].m128i_u16[5];
  v74 = a1[5].m128i_u16[6];
  sub_1418D30((__int64)v15, 0);
  ptr = v91;
  v88 = 0;
  v90 = 0x400000000LL;
  if ( (unsigned __int8)sub_14CACB0((__int64)a1, (__int64 *)&v88, v76, v18, v19, v20, 0.0, v9) )
  {
    v21 = ptr;
    v7 = 0;
    if ( ptr == v91 )
      goto LABEL_18;
    goto LABEL_17;
  }
  v21 = ptr;
  if ( v76[0] < 0 )
  {
LABEL_38:
    if ( ptr != v91 )
      free(ptr);
    sub_1417BC0(a1->m128i_i64[1]);
    v39 = _mm_loadu_si128(&v83);
    v40 = _mm_loadu_si128(&v84);
    v41 = _mm_load_si128(&v86);
    a1[5].m128i_i64[0] = v85;
    v42 = v87;
    a1[3] = v39;
    a1[2].m128i_i32[0] = v42;
    v69 = a1 + 169;
    v43 = a1[169].m128i_u32[2];
    a1[4] = v40;
    a1[1] = v41;
    if ( v67 != v43 )
    {
      if ( v67 >= v43 )
      {
        if ( v67 > a1[169].m128i_u32[3] )
        {
          sub_2237220(v69, &a1[170], v67, 8);
          v43 = a1[169].m128i_u32[2];
        }
        v44 = a1[169].m128i_i64[0];
        v45 = (char *)(v44 + 8 * v43);
        v46 = (char *)(v44 + 8 * v67);
        if ( v45 != v46 )
          memset(v45, 0, 8 * ((unsigned __int64)(v46 - 8 - v45) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v75;
    }
    v47 = a1[2].m128i_i16[0] == 20;
    a1[5].m128i_i16[4] = v73;
    a1[5].m128i_i16[5] = v72;
    a1[5].m128i_i16[6] = v74;
    if ( v47 )
    {
      a1[5].m128i_i16[5] = v72 + 1;
      goto LABEL_49;
    }
    if ( !v72 )
    {
LABEL_49:
      v48 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v48, a1[1].m128i_i32);
      v49 = a1[2].m128i_i16[0];
      if ( v49 == 21 )
      {
LABEL_86:
        v30 = (__int64 *)a1->m128i_i64[1];
        goto LABEL_87;
      }
      if ( v49 != 66 )
      {
        while ( 1 )
        {
          LODWORD(v88) = 0;
          if ( !sub_14A90A0((__int64)a1, &v88, 2, 0, 0.0, *(double *)v9.m128_u64) )
            break;
          v50 = a1[2].m128i_i16[0];
          v30 = (__int64 *)a1->m128i_i64[1];
          if ( v50 == 72 )
          {
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v30, a1[1].m128i_i32);
            if ( !sub_14A90A0((__int64)a1, &v88, 2, 0, 0.0, *(double *)v9.m128_u64) )
              break;
            v50 = a1[2].m128i_i16[0];
            v30 = (__int64 *)a1->m128i_i64[1];
          }
          if ( v50 == 22 )
          {
            v63 = a1[1].m128i_i32[0];
            ++a1[5].m128i_i16[4];
            a1[2].m128i_i32[2] = v63;
            sub_14634E0(v30, a1[1].m128i_i32);
            v82 = 23;
            if ( !(unsigned __int8)sub_15680D0(a1, &v82, 1, 0) )
              break;
            v50 = a1[2].m128i_i16[0];
            v30 = (__int64 *)a1->m128i_i64[1];
          }
          if ( v50 == 27 )
          {
            a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
            sub_14634E0(v30, a1[1].m128i_i32);
            v50 = a1[2].m128i_i16[0];
            v30 = (__int64 *)a1->m128i_i64[1];
          }
          if ( v50 != 66 )
          {
            if ( v50 != 21 )
            {
              v7 = 0;
              goto LABEL_26;
            }
LABEL_87:
            v58 = a1[5].m128i_u16[5];
            if ( !v58 )
            {
LABEL_88:
              a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
              sub_14634E0(v30, a1[1].m128i_i32);
              v30 = (__int64 *)a1->m128i_i64[1];
              v7 = a1[2].m128i_i16[0] == 21;
              goto LABEL_26;
            }
            v64 = a1[174].m128i_u32[2];
            if ( !v64 )
            {
LABEL_115:
              a1[5].m128i_i16[5] = v58 - 1;
              goto LABEL_88;
            }
            v65 = a1[5].m128i_u16[4];
            v66 = (_WORD *)(a1[174].m128i_i64[0] + 24LL * v64 - 24);
            while ( 2 )
            {
              if ( v65 == v66[7] )
              {
                if ( *((_DWORD *)v66 + 4) != *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
                {
LABEL_113:
                  if ( v58 <= v66[8] && a1[5].m128i_i16[6] <= v66[9] )
                    goto LABEL_115;
                }
              }
              else if ( v65 <= v66[7] )
              {
                goto LABEL_113;
              }
              --v64;
              v66 -= 12;
              a1[174].m128i_i32[2] = v64;
              if ( !v64 )
                goto LABEL_115;
              continue;
            }
          }
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v30, a1[1].m128i_i32);
          v62 = a1[2].m128i_i16[0];
          if ( v62 == 21 )
            goto LABEL_86;
          if ( v62 == 66 )
            goto LABEL_100;
        }
        v30 = (__int64 *)a1->m128i_i64[1];
        v7 = 0;
        goto LABEL_26;
      }
LABEL_100:
      v30 = (__int64 *)a1->m128i_i64[1];
LABEL_63:
      v7 = 1;
      goto LABEL_26;
    }
    v56 = a1[174].m128i_u32[2];
    if ( !v56 )
    {
LABEL_85:
      a1[5].m128i_i16[5] = v72 - 1;
      goto LABEL_49;
    }
    v57 = a1[174].m128i_i64[0] + 24LL * v56 - 24;
    while ( 1 )
    {
      if ( v73 == *(_WORD *)(v57 + 14) )
      {
        if ( *(_DWORD *)(v57 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
          goto LABEL_80;
      }
      else if ( v73 > *(_WORD *)(v57 + 14) )
      {
        goto LABEL_80;
      }
      if ( v72 <= *(_WORD *)(v57 + 16) && v74 <= *(_WORD *)(v57 + 18) )
        goto LABEL_85;
LABEL_80:
      --v56;
      v57 -= 24;
      a1[174].m128i_i32[2] = v56;
      if ( !v56 )
        goto LABEL_85;
    }
  }
  if ( v76[0] > 1 )
  {
    v7 = 0;
    if ( v76[0] == 2 )
      goto LABEL_16;
    goto LABEL_38;
  }
  v7 = 1;
  if ( a1[2].m128i_i16[0] != 21 )
    v7 = 2 * (a3 == 0);
LABEL_16:
  if ( ptr != v91 )
LABEL_17:
    free(v21);
LABEL_18:
  sub_1417BC0(a1->m128i_i64[1]);
  v22 = _mm_loadu_si128(&v83);
  v23 = _mm_loadu_si128(&v84);
  v24 = _mm_load_si128(&v86);
  a1[5].m128i_i64[0] = v85;
  v25 = v87;
  a1[3] = v22;
  a1[2].m128i_i32[0] = v25;
  v69 = a1 + 169;
  v26 = a1[169].m128i_u32[2];
  a1[4] = v23;
  a1[1] = v24;
  if ( v67 != v26 )
  {
    if ( v67 >= v26 )
    {
      if ( v67 > a1[169].m128i_u32[3] )
      {
        sub_2237220(v69, &a1[170], v67, 8);
        v26 = a1[169].m128i_u32[2];
      }
      v27 = a1[169].m128i_i64[0];
      v28 = (char *)(v27 + 8 * v26);
      v29 = (char *)(v27 + 8 * v67);
      if ( v28 != v29 )
        memset(v28, 0, 8 * ((unsigned __int64)(v29 - 8 - v28) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v75;
  }
  v30 = (__int64 *)a1->m128i_i64[1];
  a1[5].m128i_i16[4] = v73;
  a1[5].m128i_i16[5] = v72;
  a1[5].m128i_i16[6] = v74;
LABEL_26:
  sub_1417BC0((__int64)v30);
  v31 = _mm_loadu_si128((const __m128i *)&v77);
  v32 = _mm_loadu_si128(&v78);
  v33 = _mm_load_si128(&v80);
  a1[5].m128i_i64[0] = v79;
  v34 = v81;
  a1[3] = v31;
  a1[2].m128i_i32[0] = v34;
  v35 = a1[169].m128i_u32[2];
  a1[4] = v32;
  a1[1] = v33;
  if ( v12 != v35 )
  {
    if ( v12 >= v35 )
    {
      if ( v12 > a1[169].m128i_u32[3] )
      {
        sub_2237220(v69, &a1[170], v12, 8);
        v35 = a1[169].m128i_u32[2];
      }
      v36 = a1[169].m128i_i64[0];
      v37 = (char *)(v36 + 8 * v35);
      v38 = (char *)(v36 + 8 * v12);
      if ( v37 != v38 )
        memset(v37, 0, 8 * ((unsigned __int64)(v38 - 8 - v37) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v12;
  }
  a1[5].m128i_i32[2] = v70;
  a1[5].m128i_i16[6] = v71;
  return v7;
}
