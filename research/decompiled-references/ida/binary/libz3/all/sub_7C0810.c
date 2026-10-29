__int64 __fastcall sub_7C0810(__int64 a1, __int64 a2, __m128i a3)
{
  char **exception; // rbp
  __int64 v4; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // r14
  unsigned int v11; // r15d
  size_t v12; // rsi
  unsigned int *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r14
  __int64 v16; // rdx
  unsigned int *v17; // r11
  __int64 v18; // r9
  unsigned int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // r15
  __int64 v23; // rbp
  unsigned int *v24; // r14
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned int *v28; // rdi
  unsigned int v29; // eax
  unsigned int *v30; // rbx
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // ebx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int *v36; // r9
  __int64 v37; // rsi
  unsigned int *v38; // rdx
  __int64 v39; // rdi
  int v40; // eax
  __int64 v41; // rax
  __int64 (__fastcall *v42)(); // rax
  __int64 v43; // rax
  __int64 v44; // r15
  unsigned int v45; // ebx
  __int64 v46; // r9
  __int64 result; // rax
  int v48; // edx
  __int64 v49; // rdi
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __m128i v53; // xmm3
  bool v54; // zf
  __m128i v55; // xmm2
  _QWORD *v56; // rax
  __int64 (__fastcall *v57)(); // rax
  __int64 v58; // rax
  unsigned int *v59; // r15
  unsigned int *v60; // rbp
  unsigned int *v61; // r15
  __int64 v62; // rbp
  unsigned int v63; // ebx
  int v64; // eax
  __int64 v65; // rdi
  __m128i v66; // xmm4
  double v67; // xmm0_8
  __int64 v68; // rsi
  __int64 (__fastcall *v69)(_QWORD); // rax
  __int64 v70; // rax
  int v71; // eax
  unsigned int v72; // [rsp+Ch] [rbp-8Ch]
  unsigned int v73; // [rsp+Ch] [rbp-8Ch]
  unsigned int v74; // [rsp+Ch] [rbp-8Ch]
  unsigned int v75; // [rsp+Ch] [rbp-8Ch]
  unsigned int v76; // [rsp+Ch] [rbp-8Ch]
  unsigned int v77; // [rsp+Ch] [rbp-8Ch]
  unsigned int v78; // [rsp+10h] [rbp-88h]
  unsigned int v79; // [rsp+10h] [rbp-88h]
  unsigned int v80; // [rsp+10h] [rbp-88h]
  int v81; // [rsp+18h] [rbp-80h]
  int v82; // [rsp+1Ch] [rbp-7Ch]
  unsigned int *v83; // [rsp+20h] [rbp-78h]
  unsigned int *v84; // [rsp+30h] [rbp-68h] BYREF
  __int64 v85; // [rsp+38h] [rbp-60h] BYREF
  int v86[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v87; // [rsp+48h] [rbp-50h]

  v7 = *(_QWORD **)(a1 + 976);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 3296LL);
  if ( !v8 )
  {
    if ( !v7 )
      goto LABEL_11;
    v9 = 0;
    goto LABEL_63;
  }
  v9 = 2 * *(_DWORD *)(v8 - 4);
  if ( v7 )
  {
    v10 = *((unsigned int *)v7 - 1);
    if ( (unsigned int)v10 >= v9 )
    {
LABEL_63:
      *((_DWORD *)v7 - 1) = v9;
      goto LABEL_11;
    }
  }
  else
  {
    if ( !v9 )
      goto LABEL_11;
    v10 = 0;
    v56 = (_QWORD *)sub_186B270(0x10u);
    v7 = v56 + 1;
    *v56 = 2;
    *(_QWORD *)(a1 + 976) = v56 + 1;
  }
  while ( 1 )
  {
    v14 = *((_DWORD *)v7 - 2);
    if ( v14 >= v9 )
      break;
    v11 = (3 * v14 + 1) >> 1;
    v12 = 4 * v11 + 8;
    if ( 4 * v14 + 8 >= (unsigned int)v12 || v14 >= v11 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_113C8C((__int64 *)v86, "Overflow encountered when expanding vector", v4);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v86);
      sub_233E40((__int64)v86);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v13 = (unsigned int *)sub_186B300(v7 - 1, v12);
    v7 = v13 + 2;
    *v13 = v11;
    *(_QWORD *)(a1 + 976) = v13 + 2;
  }
  v15 = 4 * v10;
  *((_DWORD *)v7 - 1) = v9;
  v16 = 4LL * v9;
  if ( v15 != v16 )
    memset((char *)v7 + v15, 0, v16 - v15);
LABEL_11:
  v17 = (unsigned int *)(a2 + 64);
  v18 = *(unsigned int *)(a2 + 32);
  if ( 4 * v18 )
  {
    v19 = (unsigned int *)(a2 + 64);
    do
    {
      v20 = *v19++;
      ++*((_DWORD *)v7 + v20);
    }
    while ( v19 != (unsigned int *)(a2 + 64 + 4 * v18) );
    LODWORD(v18) = *(_DWORD *)(a2 + 32);
  }
  v21 = *(unsigned int *)(a2 + 60);
  v22 = (_DWORD)v18 != 0 && (_DWORD)v21 != 0;
  if ( !v22 )
  {
    v25 = 0;
    v22 = 1;
    v24 = nullptr;
    v54 = 4LL * (unsigned int)v18 == 0;
    v36 = &v17[(unsigned int)v18];
    if ( v54 )
    {
      if ( !(_DWORD)v21 )
      {
        v40 = *(_DWORD *)(a2 + 16);
        if ( v40 != -2 )
          goto LABEL_69;
LABEL_100:
        result = sub_7AFFA0(a1, (_BYTE *)a2, "recompiled to true", *(double *)a3.m128i_i64);
LABEL_51:
        if ( v24 )
          return sub_186B220(v24 - 2);
        return result;
      }
      if ( (_DWORD)v21 == 1 )
      {
        v50 = *(_DWORD *)(a2 + 16);
        if ( v50 == -2 )
        {
LABEL_74:
          v57 = *(__int64 (__fastcall **)())(*(_QWORD *)a2 + 72LL);
          if ( v57 == sub_7C6000 )
          {
            *(_QWORD *)v86 = 0;
            v58 = *(unsigned int *)(a2 + 32);
            if ( !(_DWORD)v58 )
            {
              v61 = nullptr;
              v62 = 0;
              if ( !(_DWORD)v25 )
              {
LABEL_84:
                v64 = *(unsigned __int8 *)(a2 + 48);
                v65 = *(_QWORD *)(a1 + 24);
                v66 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
                v87 = 0;
                *(_QWORD *)&v67 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v64 + 1), v66).m128i_u64[0];
                *(double *)v86 = v67;
                sub_11C4C20(v65, (unsigned int)v25, v62, v86, v25, v36);
                result = sub_7AFFA0(a1, (_BYTE *)a2, "recompiled to clause", v67);
                if ( v62 )
                  result = sub_186B220((void *)(v62 - 8));
                goto LABEL_51;
              }
              goto LABEL_79;
            }
            v59 = v17;
            v60 = &v17[v58];
            do
            {
              v74 = v25;
              sub_7B4F60(v86, v59++);
              v25 = v74;
            }
            while ( v59 != v60 );
          }
          else
          {
            v77 = v25;
            ((void (__fastcall *)(int *, __int64, __int64 (__fastcall *)(), __int64, __int64, unsigned int *))v57)(
              v86,
              a2,
              sub_7C6000,
              v21,
              v25,
              v36);
            v25 = v77;
          }
          v61 = *(unsigned int **)v86;
          if ( !(_DWORD)v25 )
          {
            v62 = 0;
            goto LABEL_82;
          }
LABEL_79:
          v62 = 0;
          v63 = 0;
          do
          {
            v75 = v25;
            v85 = v62;
            sub_7B4F60(&v85, v61);
            v25 = v75;
            ++v63;
            v62 = v85;
            ++v61;
          }
          while ( v63 < v75 );
          v61 = *(unsigned int **)v86;
LABEL_82:
          if ( v61 )
          {
            v76 = v25;
            sub_186B220(v61 - 2);
            v25 = v76;
          }
          goto LABEL_84;
        }
        goto LABEL_65;
      }
    }
    else
    {
LABEL_28:
      v37 = *(_QWORD *)(a1 + 976);
      v38 = v17;
      do
      {
        v39 = *v38++;
        *(_DWORD *)(v37 + 4 * v39) = 0;
        *(_DWORD *)(v37 + 4LL * ((unsigned int)v39 ^ 1)) = 0;
      }
      while ( v36 != v38 );
      if ( !(_DWORD)v21 )
        goto LABEL_31;
LABEL_43:
      if ( (_DWORD)v21 == 1 )
      {
        v50 = *(_DWORD *)(a2 + 16);
        if ( v50 == -2 )
          goto LABEL_74;
        if ( (_DWORD)v25 )
        {
          if ( !v22 )
          {
            v51 = *(_QWORD *)a2;
            *(_DWORD *)(a2 + 32) = v25;
            v42 = *(__int64 (__fastcall **)())(v51 + 152);
            if ( v42 != sub_7C58F0 )
              goto LABEL_58;
LABEL_35:
            *(_DWORD *)(a2 + 60) = v21;
            goto LABEL_36;
          }
          goto LABEL_93;
        }
        goto LABEL_65;
      }
      if ( (_DWORD)v25 )
      {
        if ( (unsigned int)v25 >= (unsigned int)v21 )
        {
          if ( v22 )
            goto LABEL_93;
        }
        else if ( v22 )
        {
          v48 = *(_DWORD *)(a2 + 16);
          v49 = *(_QWORD *)(a1 + 24);
          a3.m128i_i64[0] = _mm_unpacklo_epi32(
                              _mm_cvtsi32_si128((unsigned int)*(unsigned __int8 *)(a2 + 48) + 1),
                              _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12))).m128i_u64[0];
          if ( v48 != -2 )
          {
            LODWORD(v85) = v48 ^ 1;
LABEL_49:
            v87 = 0;
            *(_QWORD *)v86 = a3.m128i_i64[0];
            sub_11C4C20(v49, 1, &v85, v86, v25, v36);
LABEL_50:
            result = sub_7AFFA0(a1, (_BYTE *)a2, "recompiled to clause", *(double *)a3.m128i_i64);
            goto LABEL_51;
          }
          *(_QWORD *)v86 = a3.m128i_i64[0];
          goto LABEL_99;
        }
LABEL_95:
        v70 = *(_QWORD *)a2;
        *(_DWORD *)(a2 + 32) = v25;
        v42 = *(__int64 (__fastcall **)())(v70 + 152);
        if ( v42 != sub_7C58F0 )
          goto LABEL_58;
        if ( (unsigned int)v21 > 0xEE6B27FF )
        {
          sub_1872CE0("");
          sub_1873130(114, 116);
        }
        goto LABEL_35;
      }
    }
    v50 = *(_DWORD *)(a2 + 16);
    if ( v50 != -2 )
    {
LABEL_65:
      v53 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
      v49 = *(_QWORD *)(a1 + 24);
      LODWORD(v85) = v50 ^ 1;
      a3.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)*(unsigned __int8 *)(a2 + 48) + 1), v53).m128i_u64[0];
      goto LABEL_49;
    }
    v71 = *(_DWORD *)(a1 + 12);
    v49 = *(_QWORD *)(a1 + 24);
    v86[0] = 1;
    v86[1] = v71;
LABEL_99:
    v87 = 0;
    sub_11C4C20(v49, 0, 0, v86, v25, v36);
    goto LABEL_50;
  }
  v23 = 0;
  v24 = nullptr;
  v25 = 0;
  while ( 1 )
  {
    v27 = *(unsigned int *)(a2 + 4 * v23 + 64);
    v28 = (unsigned int *)v7 + v27;
    v29 = *v28;
    v30 = (unsigned int *)v7 + (*(_DWORD *)(a2 + 4 * v23 + 64) ^ 1u);
    v31 = *v30;
    if ( !*v28 || v29 < v31 )
      goto LABEL_18;
    if ( v31 >= (unsigned int)v21 )
      break;
    v21 = (unsigned int)v21 - v31;
    v32 = v29 - v31;
    *v30 = 0;
    *v28 = 0;
    v33 = v32;
    if ( v32 )
    {
      v22 &= v32 == 1;
      if ( !v24 || (v34 = *(v24 - 1), (_DWORD)v34 == *(v24 - 2)) )
      {
        v83 = v17;
        v82 = v18;
        v81 = v25;
        v78 = v21;
        v84 = v24;
        sub_2FD3F0(&v84);
        v24 = v84;
        v17 = v83;
        LODWORD(v18) = v82;
        LODWORD(v25) = v81;
        v34 = *(v84 - 1);
        v21 = v78;
      }
      v24[v34] = v33;
      v26 = (unsigned int)v25;
      v25 = (unsigned int)(v25 + 1);
      ++*(v24 - 1);
      *(_DWORD *)(a2 + 4 * v26 + 64) = v27;
    }
LABEL_18:
    if ( (unsigned int)++v23 >= (unsigned int)v18 )
    {
      v35 = *(unsigned int *)(a2 + 32);
      v36 = &v17[v35];
      if ( !(v35 * 4) )
        goto LABEL_43;
      goto LABEL_28;
    }
    v7 = *(_QWORD **)(a1 + 976);
  }
  v21 = 0;
  v52 = *(unsigned int *)(a2 + 32);
  v36 = &v17[v52];
  if ( v52 * 4 )
    goto LABEL_28;
LABEL_31:
  v40 = *(_DWORD *)(a2 + 16);
  if ( v40 == -2 )
    goto LABEL_100;
  if ( !(_DWORD)v25 )
  {
LABEL_69:
    v55 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
    v49 = *(_QWORD *)(a1 + 24);
    LODWORD(v85) = v40;
    a3.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)*(unsigned __int8 *)(a2 + 48) + 1), v55).m128i_u64[0];
    goto LABEL_49;
  }
  if ( v22 )
  {
    v21 = 0;
LABEL_93:
    if ( *(_DWORD *)(a2 + 32) - *(_DWORD *)(a2 + 60) < (unsigned int)(v25 - v21) )
    {
      sub_1872CE0("");
      sub_1873130(114, 2327);
    }
    v22 = 1;
    goto LABEL_95;
  }
  v41 = *(_QWORD *)a2;
  *(_DWORD *)(a2 + 32) = v25;
  v21 = 0;
  v42 = *(__int64 (__fastcall **)())(v41 + 152);
  if ( v42 == sub_7C58F0 )
    goto LABEL_35;
LABEL_58:
  v80 = v25;
  v73 = v21;
  ((void (__fastcall *)(__int64, _QWORD))v42)(a2, (unsigned int)v21);
  v25 = v80;
  v21 = v73;
LABEL_36:
  if ( !v22 )
  {
    v43 = *(_QWORD *)(a1 + 984);
    if ( v43 )
      *(_DWORD *)(v43 - 4) = 0;
    v44 = 0;
    do
    {
      v79 = v25;
      v72 = v21;
      v86[0] = v24[v44];
      v86[1] = *(_DWORD *)(a2 + 4 * v44 + 64);
      sub_7B8130((_QWORD *)(a1 + 984), v86);
      LODWORD(v25) = v79;
      ++v44;
      LODWORD(v21) = v72;
    }
    while ( (unsigned int)v44 < v79 );
    v45 = *(_DWORD *)(a2 + 16);
    sub_7AFFA0(a1, (_BYTE *)a2, "recompiled to pb", *(double *)a3.m128i_i64);
    sub_7B8DC0(a1, v45, (int **)(a1 + 984), v72, *(_BYTE *)(a2 + 48), v46, a3);
    return sub_186B220(v24 - 2);
  }
  v68 = *(unsigned int *)(a2 + 16);
  if ( (_DWORD)v68 == -2
    || ((v69 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL), v69 != sub_7C55E0)
      ? (result = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD), __int64, __int64))v69)(
                    a1,
                    v68,
                    sub_7C55E0,
                    v21,
                    v25))
      : (result = sub_7C55E0(a1)),
        (_DWORD)result == 1) )
  {
    result = sub_7AFDF0((_QWORD *)a1, a2);
  }
  if ( v24 )
    return sub_186B220(v24 - 2);
  return result;
}

