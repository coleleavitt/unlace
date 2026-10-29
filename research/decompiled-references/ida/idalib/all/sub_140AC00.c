__int64 __fastcall sub_140AC00(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__m128i *, char *, unsigned __int64))
{
  __int64 v9; // rax
  __int64 v10; // r14
  __m128i *v11; // r13
  __m128i *v12; // rbp
  unsigned __int64 v13; // rdx
  signed __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r12
  __int64 *v17; // r15
  __int64 v18; // rbp
  __m128i *v19; // r12
  unsigned __int64 v20; // rbx
  _QWORD *v21; // rsi
  __int64 v22; // r12
  unsigned __int64 v23; // r12
  __int64 v24; // r15
  _QWORD *v25; // rbx
  unsigned __int64 v26; // r15
  _QWORD *v27; // rsi
  __int64 v28; // rax
  __int64 result; // rax
  __m128i *v30; // rbp
  __int64 v31; // r13
  _QWORD *v32; // rbx
  __int64 *i; // rbp
  _QWORD *v34; // r15
  unsigned __int64 v35; // r12
  __int64 *v36; // rbx
  _QWORD *v37; // rsi
  __int64 v38; // r12
  __int64 *v39; // rbp
  unsigned __int64 v40; // rbx
  _QWORD *v41; // rsi
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rdx
  signed __int64 v44; // r15
  __m128i *v45; // rbx
  __int64 v46; // r12
  __int64 *v47; // r13
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r14
  __int64 v51; // rdi
  __m128i *v52; // rsi
  __int64 v53; // rdi
  _QWORD *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // [rsp+8h] [rbp-90h]
  __m128i *v59; // [rsp+18h] [rbp-80h]
  __m128i *v60; // [rsp+28h] [rbp-70h]
  __int64 v61; // [rsp+28h] [rbp-70h]
  __int64 v63; // [rsp+38h] [rbp-60h]
  __m128i *v64; // [rsp+38h] [rbp-60h]
  __int64 v65; // [rsp+40h] [rbp-58h]
  __int64 v66; // [rsp+40h] [rbp-58h]
  int v67; // [rsp+40h] [rbp-58h]
  __m128i *v68; // [rsp+48h] [rbp-50h]
  __int64 v69; // [rsp+48h] [rbp-50h]
  __m128i *v70; // [rsp+48h] [rbp-50h]
  __int64 v71; // [rsp+48h] [rbp-50h]
  unsigned __int64 v72; // [rsp+50h] [rbp-48h]
  unsigned __int64 v73; // [rsp+50h] [rbp-48h]
  unsigned __int64 v74; // [rsp+58h] [rbp-40h]
  unsigned __int64 v75; // [rsp+58h] [rbp-40h]

  v59 = (__m128i *)a1;
  v9 = a5;
  v57 = a5;
  if ( a7 <= a5 )
    v9 = a7;
  if ( a4 <= v9 )
  {
    v16 = a1;
    goto LABEL_62;
  }
  if ( a7 >= a5 )
  {
    v16 = a1;
LABEL_31:
    result = sub_140AA10((__int64)a2, a3, a6);
    if ( a2 == (__m128i *)v16 )
    {
      v55 = a3;
      v56 = result;
    }
    else
    {
      if ( result == a6 )
        return result;
      v30 = a2;
      v31 = a3;
      v32 = (_QWORD *)(result - 72);
      for ( i = &v30[-5].m128i_i64[1]; ; i -= 9 )
      {
        while ( 1 )
        {
          v31 -= 72;
          if ( ((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *))a8)(v32, i) )
            break;
          sub_A0AAD0(v31, v32);
          sub_A0AAD0(v31 + 32, v32 + 4);
          result = v32[8];
          *(_QWORD *)(v31 + 64) = result;
          if ( (_QWORD *)a6 == v32 )
            return result;
          v32 -= 9;
        }
        sub_A0AAD0(v31, i);
        sub_A0AAD0(v31 + 32, i + 4);
        *(_QWORD *)(v31 + 64) = i[8];
        if ( i == (__int64 *)v16 )
          break;
      }
      v55 = v31;
      v56 = (__int64)(v32 + 9);
    }
    return sub_1406650(a6, v56, v55);
  }
  v10 = a4;
  while ( 1 )
  {
    if ( v10 <= v57 )
    {
      v12 = v59;
      v11 = (__m128i *)((char *)a2 + 72 * (v57 / 2));
      v61 = v57 / 2;
      v43 = 0x8E38E38E38E38E39LL * (((char *)a2 - (char *)v59) >> 3);
      if ( (char *)a2 - (char *)v59 > 0 )
      {
        v64 = a2;
        v44 = 0x8E38E38E38E38E39LL * (((char *)a2 - (char *)v59) >> 3);
        v45 = v59;
        while ( 1 )
        {
          v46 = v44 >> 1;
          if ( a8(v11, &v45->m128i_i8[72 * (v44 >> 1)], v43) )
          {
            if ( !v46 )
            {
LABEL_56:
              v12 = v45;
              a2 = v64;
              v63 = 0x8E38E38E38E38E39LL * (((char *)v12 - (char *)v59) >> 3);
              v10 -= v63;
              goto LABEL_57;
            }
          }
          else
          {
            v45 = (__m128i *)((char *)v45 + 72 * (v44 >> 1) + 72);
            v46 = v44 - v46 - 1;
            if ( v46 <= 0 )
              goto LABEL_56;
          }
          v44 = v46;
        }
      }
      LODWORD(v63) = 0;
LABEL_57:
      v57 -= v57 / 2;
    }
    else
    {
      v11 = a2;
      v12 = (__m128i *)((char *)v59 + 72 * (v10 / 2));
      v63 = v10 / 2;
      v13 = 0x8E38E38E38E38E39LL * ((a3 - (__int64)a2) >> 3);
      if ( a3 - (__int64)a2 > 0 )
      {
        v14 = 0x8E38E38E38E38E39LL * ((a3 - (__int64)a2) >> 3);
        v60 = a2;
        while ( 1 )
        {
          v15 = v14 >> 1;
          if ( a8((__m128i *)((char *)a2 + 72 * (v14 >> 1)), v12->m128i_i8, v13) )
          {
            a2 = (__m128i *)((char *)a2 + 72 * (v14 >> 1) + 72);
            v15 = v14 - v15 - 1;
            if ( v15 <= 0 )
              goto LABEL_13;
          }
          else if ( !v15 )
          {
LABEL_13:
            v11 = a2;
            a2 = v60;
            v57 -= 0x8E38E38E38E38E39LL * (((char *)v11 - (char *)v60) >> 3);
            v61 = 0x8E38E38E38E38E39LL * (((char *)v11 - (char *)v60) >> 3);
            goto LABEL_14;
          }
          v14 = v15;
        }
      }
      v61 = 0;
LABEL_14:
      v10 -= v10 / 2;
    }
    if ( v61 < v10 && v61 <= a7 )
    {
      v16 = (__int64)v12;
      if ( !v61 )
        goto LABEL_27;
      v65 = (char *)a2 - (char *)v12;
      v72 = 0x8E38E38E38E38E39LL * (((char *)a2 - (char *)v12) >> 3);
      if ( (char *)v11 - (char *)a2 <= 0 )
      {
        if ( v65 <= 0 )
        {
          v16 = (__int64)v12;
          goto LABEL_27;
        }
        v74 = 0;
        v69 = 0;
      }
      else
      {
        v17 = (__int64 *)a2;
        v68 = v12;
        v18 = a6;
        v19 = a2;
        v20 = 0x8E38E38E38E38E39LL * (((char *)v11 - (char *)a2) >> 3);
        do
        {
          sub_A0AAD0(v18, v17);
          v21 = v17 + 4;
          v17 += 9;
          sub_A0AAD0(v18 + 32, v21);
          v18 += 72;
          *(_QWORD *)(v18 - 8) = *(v17 - 1);
          --v20;
        }
        while ( v20 );
        a2 = v19;
        v22 = v18 - a6;
        v12 = v68;
        v69 = v22;
        v74 = 0x8E38E38E38E38E39LL * (v22 >> 3);
        if ( v65 <= 0 )
        {
LABEL_24:
          v16 = (__int64)v12;
          if ( v69 > 0 )
          {
            v25 = (_QWORD *)a6;
            v26 = v74;
            do
            {
              sub_A0AAD0(v16, v25);
              v27 = v25 + 4;
              v25 += 9;
              sub_A0AAD0(v16 + 32, v27);
              v16 += 72;
              *(_QWORD *)(v16 - 8) = *(v25 - 1);
              --v26;
            }
            while ( v26 );
          }
          goto LABEL_27;
        }
      }
      v23 = v72;
      v24 = (__int64)v11;
      do
      {
        a2 = (__m128i *)((char *)a2 - 72);
        v24 -= 72;
        sub_A0AAD0(v24, a2);
        sub_A0AAD0(v24 + 32, (__m128i *)a2[2].m128i_i64);
        *(_QWORD *)(v24 + 64) = a2[4].m128i_i64[0];
        --v23;
      }
      while ( v23 );
      goto LABEL_24;
    }
    if ( a7 < v10 )
    {
      sub_14098F0(v12, a2, v11);
      v16 = (__int64)v12->m128i_i64 + (char *)v11 - (char *)a2;
      goto LABEL_27;
    }
    v16 = (__int64)v11;
    if ( !v10 )
      goto LABEL_27;
    v66 = (char *)v11 - (char *)a2;
    v73 = 0x8E38E38E38E38E39LL * (((char *)v11 - (char *)a2) >> 3);
    if ( (char *)a2 - (char *)v12 <= 0 )
    {
      if ( v66 <= 0 )
      {
        v16 = (__int64)v11;
        goto LABEL_27;
      }
      v75 = 0;
      v34 = (_QWORD *)a6;
      v71 = 0;
LABEL_43:
      v38 = (__int64)v12;
      v67 = (int)v12;
      v39 = (__int64 *)a2;
      v40 = v73;
      do
      {
        sub_A0AAD0(v38, v39);
        v41 = v39 + 4;
        v39 += 9;
        sub_A0AAD0(v38 + 32, v41);
        v38 += 72;
        *(_QWORD *)(v38 - 8) = *(v39 - 1);
        --v40;
      }
      while ( v40 );
      LODWORD(v12) = v67;
      goto LABEL_46;
    }
    v34 = (_QWORD *)a6;
    v70 = a2;
    v35 = 0x8E38E38E38E38E39LL * (((char *)a2 - (char *)v12) >> 3);
    v36 = (__int64 *)v12;
    do
    {
      sub_A0AAD0((__int64)v34, v36);
      v37 = v36 + 4;
      v36 += 9;
      sub_A0AAD0((__int64)(v34 + 4), v37);
      v34 += 9;
      *(v34 - 1) = *(v36 - 1);
      --v35;
    }
    while ( v35 );
    a2 = v70;
    v71 = (__int64)v34 - a6;
    v75 = 0x8E38E38E38E38E39LL * (((__int64)v34 - a6) >> 3);
    if ( v66 > 0 )
      goto LABEL_43;
LABEL_46:
    v16 = (__int64)v11;
    if ( v71 > 0 )
    {
      v42 = v75;
      do
      {
        v34 -= 9;
        v16 -= 72;
        sub_A0AAD0(v16, v34);
        sub_A0AAD0(v16 + 32, v34 + 4);
        *(_QWORD *)(v16 + 64) = v34[8];
        --v42;
      }
      while ( v42 );
    }
LABEL_27:
    sub_140AC00((_DWORD)v59, (_DWORD)v12, v16, v63, v61, a6, a7, (__int64)a8);
    v28 = v57;
    if ( a7 <= v57 )
      v28 = a7;
    if ( v28 >= v10 )
      break;
    v59 = (__m128i *)v16;
    a2 = v11;
    if ( a7 >= v57 )
      goto LABEL_31;
  }
  a2 = v11;
LABEL_62:
  v47 = (__int64 *)a6;
  v48 = sub_140AA10(v16, (__int64)a2, a6);
  v49 = v48;
  if ( (__m128i *)a3 != a2 && v48 != a6 )
  {
    do
    {
      while ( 1 )
      {
        v50 = v16 + 32;
        if ( !((unsigned __int8 (__fastcall *)(__m128i *, __int64 *))a8)(a2, v47) )
          break;
        v51 = v16;
        v16 += 72;
        sub_A0AAD0(v51, a2);
        v52 = a2 + 2;
        a2 = (__m128i *)((char *)a2 + 72);
        sub_A0AAD0(v50, v52);
        *(_QWORD *)(v16 - 8) = a2[-1].m128i_i64[1];
        if ( (__m128i *)a3 == a2 || (__int64 *)v49 == v47 )
          goto LABEL_67;
      }
      v53 = v16;
      v16 += 72;
      sub_A0AAD0(v53, v47);
      v54 = v47 + 4;
      v47 += 9;
      sub_A0AAD0(v50, v54);
      *(_QWORD *)(v16 - 8) = *(v47 - 1);
    }
    while ( (__int64 *)v49 != v47 && (__m128i *)a3 != a2 );
LABEL_67:
    a6 = (__int64)v47;
  }
  result = a6;
  if ( v49 != a6 )
    return sub_140AA10(a6, v49, v16);
  return result;
}
