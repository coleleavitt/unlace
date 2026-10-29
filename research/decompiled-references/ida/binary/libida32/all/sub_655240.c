__int64 __fastcall sub_655240(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        unsigned int **a5,
        int a6,
        double a7,
        __m128i a8,
        __m128i a9)
{
  __int64 v11; // rbx
  unsigned int *v12; // r13
  __int64 v13; // r8
  unsigned int v14; // r14d
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rax
  unsigned __int32 v21; // eax
  char v22; // r13
  __int64 v23; // xmm0_8
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  unsigned int *i; // r15
  __int64 v29; // rax
  _QWORD *v30; // rsi
  unsigned int v31; // r15d
  unsigned int v33; // r14d
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int8 v36; // bl
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  unsigned int *v40; // r9
  char *v41; // rbx
  unsigned int *v42; // r13
  int v43; // r14d
  char *v44; // rdx
  char *v45; // rax
  char *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  void *v49; // rax
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  int v54; // eax
  int v55; // [rsp+0h] [rbp-D8h]
  int v56; // [rsp+8h] [rbp-D0h]
  int v57; // [rsp+10h] [rbp-C8h]
  unsigned int v58; // [rsp+14h] [rbp-C4h]
  unsigned int v59; // [rsp+18h] [rbp-C0h]
  int v60; // [rsp+18h] [rbp-C0h]
  unsigned int v61; // [rsp+1Ch] [rbp-BCh]
  int v62; // [rsp+28h] [rbp-B0h]
  bool v63; // [rsp+2Eh] [rbp-AAh]
  unsigned __int8 v64; // [rsp+2Fh] [rbp-A9h]
  char *v65; // [rsp+30h] [rbp-A8h]
  unsigned int **v66; // [rsp+38h] [rbp-A0h]
  __m128i v67; // [rsp+40h] [rbp-98h] BYREF
  void *v68; // [rsp+50h] [rbp-88h] BYREF
  __int128 v69; // [rsp+58h] [rbp-80h]
  int v70; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  __int128 v72; // [rsp+78h] [rbp-60h]
  __int64 v73; // [rsp+88h] [rbp-50h]
  int v74; // [rsp+90h] [rbp-48h]
  void *v75; // [rsp+98h] [rbp-40h]
  __int64 v76; // [rsp+A0h] [rbp-38h]
  int v77; // [rsp+A8h] [rbp-30h]
  int v78; // [rsp+B0h] [rbp-28h]
  int v79; // [rsp+B8h] [rbp-20h]
  __int64 v80; // [rsp+C0h] [rbp-18h]

  v65 = a4;
  v58 = a3;
  v66 = a5;
  v62 = a6;
  v64 = a6;
  v75 = (void *)__readfsqword(0x28u);
  v11 = (__int64)(a1 + 194);
  v12 = sub_4EEBF0((__int64)(a1 + 194));
  v14 = sub_4EEB90((__int64)(a1 + 194), 0xFFFFFFFF)[1];
  v59 = *v12;
  v61 = a2 + *v12;
  if ( !__CFADD__(a2, *v12) && v14 + a2 - 1 < v14 - 1 )
    return (unsigned int)-2;
  v15 = *a1;
  ptr = nullptr;
  sub_6141A0(v15, 26, &ptr, 8u, v13);
  v20 = ptr;
  ptr = nullptr;
  v73 = 0;
  v67.m128i_i64[0] = (__int64)v20;
  v74 = -1;
  v72 = 0;
  if ( v59 < v14 )
  {
    v49 = (void *)qvector_reserve(&ptr, 0, 1, 8);
    v16 = v72;
    a9 = _mm_cvtsi32_si128(v14);
    ptr = v49;
    *((_QWORD *)v49 + v72) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), a9).m128i_u64[0];
    *(_QWORD *)&v72 = v72 + 1;
  }
  if ( (v58 & 0x80u) == 0 )
  {
    v63 = sub_651F30(a1, -a2, v16, v17, v18);
    if ( !v63 )
    {
      v31 = -11;
      if ( !(_BYTE)v62 )
        sub_365330();
      goto LABEL_18;
    }
  }
  else
  {
    v63 = 0;
  }
  v21 = a2 + sub_614FB0(*a1, 93, v16, v17, v18, v19);
  v22 = 1;
  if ( v21 >= v67.m128i_i32[0] )
    v22 = v21 >= v67.m128i_i32[1];
  v68 = nullptr;
  v23 = 0;
  v69 = 0;
  for ( i = sub_4EEBF0(v11); i; i = sub_4EE960(v11, *i) )
  {
    if ( v67.m128i_i32[0] < i[1] )
      v22 &= *i >= v67.m128i_i32[1];
    v29 = v69;
    v30 = v68;
    if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
    {
      v68 = (void *)qvector_reserve(&v68, v68, v69 + 1, 8);
      v30 = v68;
      v29 = v69;
    }
    v30[v29] = i;
    *(_QWORD *)&v69 = v69 + 1;
  }
  if ( !v63 )
  {
    if ( !v22 )
      goto LABEL_42;
    rangeset_t_sub(
      (int)&ptr,
      (int)&v67,
      v24,
      v25,
      v26,
      v27,
      v55,
      (int)&v68,
      v57,
      v59,
      (int)&ptr,
      v62,
      (int)v65,
      (int)v66,
      v67.m128i_i32[0],
      v67.m128i_i32[2],
      (int)v68,
      v69,
      SDWORD2(v69),
      v70,
      (int)ptr,
      v72,
      SDWORD2(v72),
      v73,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
  }
  if ( v59 < v61 )
  {
    v44 = (char *)v68;
    v45 = (char *)v68 + 8 * v69;
    if ( v68 != v45 )
    {
      v46 = v45 - 8;
      if ( v68 < v46 )
      {
        do
        {
          v47 = *(_QWORD *)v44;
          v48 = *(_QWORD *)v46;
          v44 += 8;
          v46 -= 8;
          *((_QWORD *)v44 - 1) = v48;
          *((_QWORD *)v46 + 1) = v47;
        }
        while ( v44 < v46 );
      }
    }
  }
  v31 = sub_651FD0((__int64)a1, (const __m128i ***)&v68, a2, v58, v26, v27);
  if ( v31 )
    goto LABEL_40;
  v33 = v14 - v59;
  if ( (unsigned __int8)sub_4F0620(a1 + 161, v59, v61, v33) )
  {
    v36 = sub_4F0620(a1 + 301, v59, v61, v33);
    if ( v36 )
    {
      v67.m128i_i64[1] = 0;
      if ( !v63 )
      {
        if ( (_BYTE)v62 )
          goto LABEL_40;
        if ( (v58 & 1) != 0 )
        {
LABEL_31:
          v39 = v58;
          if ( (v58 & 8) != 0 )
          {
            v40 = (unsigned int *)ptr;
            v60 = v58 | 2;
            v41 = (char *)ptr + 8 * v72;
            if ( v41 == ptr )
              goto LABEL_54;
          }
          else
          {
            v40 = (unsigned int *)ptr;
            v60 = v58;
            v41 = (char *)ptr + 8 * v72;
            if ( ptr == v41 )
              goto LABEL_55;
          }
          v42 = v40;
          v43 = 0;
          do
          {
            if ( (unsigned int)sub_653C60(
                                 a1,
                                 *v42,
                                 a2 + *v42,
                                 v42[1] - *v42,
                                 v60 | 0x40u,
                                 *(double *)&v23,
                                 a8,
                                 *(double *)a9.m128i_i64) )
              v43 = -5;
            v42 += 2;
          }
          while ( v41 != (char *)v42 );
          if ( v43 )
            goto LABEL_38;
LABEL_54:
          if ( (v58 & 0xA) == 8 && !(unsigned __int8)sub_625020(0xFFFFFFFF, a2, 0, (v58 & 4) != 0) )
          {
            v31 = -5;
            goto LABEL_40;
          }
LABEL_55:
          v53 = *a1;
          v54 = sub_614FB0(*a1, 93, v34, v39, v37, (__int64)v40);
          if ( v54 != -1 )
            sub_615AB0(v53, 93, a2 + v54);
          sub_651600(*a1, v66, (__int64)&v68, a2, *v65, v64);
LABEL_38:
          if ( (v60 & 0x80u) == 0 )
            sub_514C30(*a1, a2);
          goto LABEL_40;
        }
        goto LABEL_51;
      }
      v56 = sub_614FB0(*a1, 29, v34, v35, v37, v38);
      v50 = sub_3B90A0(a1, v59);
      if ( a2 == v56 + v61 - v50 )
      {
        a8 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 224);
        v23 = _mm_add_epi32(_mm_loadl_epi64(&v67), a8).m128i_u64[0];
        v67.m128i_i64[1] = v23;
        if ( (_BYTE)v62 )
          goto LABEL_40;
        if ( (v58 & 1) != 0 )
        {
          sub_615AB0(*a1, 29, (int)(v50 - v61));
          sub_6160D0(*a1, 26, &v67.m128i_i8[8], 8u, v51, v52);
          v64 = v36;
          goto LABEL_31;
        }
LABEL_51:
        sub_365330();
      }
      if ( !((unsigned __int8)v62 | (unsigned __int8)v22 ^ 1) )
        sub_365330();
LABEL_42:
      v31 = -11;
      goto LABEL_40;
    }
    v31 = -10;
  }
  else
  {
    v31 = -9;
  }
LABEL_40:
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
LABEL_18:
  if ( ptr )
  {
    *(_QWORD *)&v72 = 0;
    qfree(ptr);
  }
  return v31;
}

