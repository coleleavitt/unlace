__int64 __fastcall sub_1566470(const __m128i *a1, __int64 a2, int a3, double a4, __m128 a5)
{
  __int64 v5; // r14
  __int64 v8; // rax
  __int16 v9; // r12
  __int64 v10; // rax
  __int16 v11; // ax
  __int32 v12; // r15d
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  const __m128i *v15; // rax
  __m128 v16; // xmm1
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // r10
  char v22; // al
  unsigned int v23; // ecx
  char v25; // al
  int v26; // eax
  char v27; // r13
  char v28; // r14
  unsigned int v29; // edx
  char v30; // al
  __int32 v31; // eax
  __int64 v32; // rdi
  __int64 *v33; // rdi
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __m128i *v36; // rax
  __int32 v37; // ebp
  __int64 v38; // r10
  __int64 v39; // r12
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int32 v42; // edx
  _QWORD *v43; // rdi
  unsigned int v44; // ecx
  _QWORD *v45; // rdi
  __m128i si128; // xmm2
  __int64 v47; // rdi
  __int64 v48; // rdx
  int v49; // esi
  __int64 v50; // rax
  char v51; // dl
  unsigned int v52; // [rsp+0h] [rbp-C8h]
  __int64 v53; // [rsp+0h] [rbp-C8h]
  __int64 v54; // [rsp+0h] [rbp-C8h]
  __int64 v55; // [rsp+0h] [rbp-C8h]
  __int64 v56; // [rsp+0h] [rbp-C8h]
  unsigned int v57; // [rsp+0h] [rbp-C8h]
  __int64 v58; // [rsp+0h] [rbp-C8h]
  unsigned int v59; // [rsp+Ch] [rbp-BCh]
  unsigned int v60; // [rsp+Ch] [rbp-BCh]
  _WORD *v61; // [rsp+18h] [rbp-B0h]
  __m128 v62; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+30h] [rbp-98h]
  __m128i v64; // [rsp+40h] [rbp-88h] BYREF
  __int64 v65; // [rsp+50h] [rbp-78h]
  __int32 v66; // [rsp+58h] [rbp-70h]
  __int32 v67; // [rsp+5Ch] [rbp-6Ch]
  __int128 v68; // [rsp+60h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-58h]
  __int128 v70; // [rsp+80h] [rbp-48h]

  v5 = a2;
  v8 = a1->m128i_i64[1];
  v9 = a1[2].m128i_i16[0];
  *(_OWORD *)ptr = 0;
  v70 = 0;
  v10 = *(_QWORD *)(v8 + 56);
  v68 = 0;
  if ( (*(_BYTE *)(v10 + 1) & 8) != 0 )
  {
    v25 = sub_14D0170(a1, (__int64)&v68, 0, 0, 0, nullptr, (__m128i)0LL, 0, nullptr, 0, 0, 0);
    v23 = 0;
    if ( v25 )
      goto LABEL_19;
    v11 = a1[2].m128i_i16[0];
  }
  else
  {
    v11 = v9;
  }
  if ( v11 != 5 || (_DWORD)v68 && DWORD1(v68) && !*((_QWORD *)&v68 + 1) )
  {
    v22 = sub_1565A10((__int64)a1, (__int64)&v68, v9 != 416, a3, (__m128i)0LL, a5);
    v23 = 3;
    if ( !v22 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v12 = a1[1].m128i_i32[0];
  v61 = (_WORD *)a1[1].m128i_i64[1];
  if ( sub_155D950((__int64)a1, (__int64)v61) && (!(_DWORD)v68 || !DWORD1(v68)) && !*((_QWORD *)&v68 + 1) )
  {
    if ( (unsigned __int8)sub_1565A10((__int64)a1, (__int64)&v68, v9 != 416, a3, (__m128i)0LL, a5) )
    {
LABEL_18:
      v23 = 0;
      goto LABEL_19;
    }
    v23 = 1;
    if ( a1[2].m128i_i16[0] == 417 )
      goto LABEL_44;
    goto LABEL_19;
  }
  v13 = a1->m128i_i64[1];
  v14 = *(_QWORD *)(v13 + 2944);
  if ( *(unsigned int *)(v13 + 2912) <= v14 )
    v15 = (const __m128i *)sub_14180A0(v13, 1u);
  else
    v15 = (const __m128i *)(*(_QWORD *)(v13 + 2904) + 24 * v14);
  v16 = (__m128)_mm_loadu_si128(v15);
  v17 = a1[6].m128i_i64[0];
  v62 = v16;
  v63 = v15[1].m128i_i64[0];
  if ( !(_DWORD)v68 || (v18 = 0, !DWORD1(v68)) )
  {
    v18 = 0;
    if ( !*((_QWORD *)&v68 + 1) )
      v18 = a2;
  }
  v20 = sub_1802970(v17, v18);
  v21 = v19;
  if ( v20 != 11 )
  {
LABEL_15:
    switch ( v20 )
    {
      case 1u:
        goto LABEL_18;
      case 2u:
        a1[1].m128i_i64[1] = (__int64)v61;
        a1[2].m128i_i16[0] = *v61 & 0x1FF;
        v34 = (_QWORD *)a1->m128i_i64[1];
        v35 = v34[368];
        if ( v35 && v34[370] != v34[369] )
        {
          v36 = (__m128i *)(v34[363] + 8 * (3 * v35 - 3));
          *v36 = _mm_loadu_si128(a1 + 1);
          v36[1].m128i_i32[0] = a1[2].m128i_i32[0];
        }
        goto LABEL_58;
      case 3u:
        v55 = v21;
        if ( (unsigned __int8)sub_147EA30((__int64)a1) )
          goto LABEL_30;
        v37 = v68;
        v38 = v55;
        if ( (!(_DWORD)v68 || !DWORD1(v68)) && !*((_QWORD *)&v68 + 1) )
          v37 = v12;
        v32 = a1->m128i_i64[1];
        v39 = v55;
        if ( (*(_BYTE *)(*(_QWORD *)(v32 + 56) + 2LL) & 4) == 0 )
          goto LABEL_101;
        v40 = *(_QWORD *)(v32 + 2944);
        if ( v40 >= *(unsigned int *)(v32 + 2912) )
        {
          v41 = sub_14180A0(v32, 1u);
          v32 = a1->m128i_i64[1];
          v38 = v55;
        }
        else
        {
          v41 = *(_QWORD *)(v32 + 2904) + 24 * v40;
        }
        v42 = a1[1].m128i_i32[0];
        if ( *(_WORD *)(v41 + 16) != 47 )
          goto LABEL_71;
        v58 = v38;
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 34) > 2u )
          goto LABEL_71;
        a1[2].m128i_i32[2] = v42;
        sub_14634E0((__int64 *)v32, a1[1].m128i_i32);
        v49 = a1[2].m128i_i32[2];
        v64.m128i_i32[0] = 0;
        v50 = sub_14FA050((__int64)a1, v49, v58, 0, &v64, (__m128i)0LL, v16);
        if ( v51 || !v50 )
        {
          if ( a1[2].m128i_i16[0] == 1 )
            goto LABEL_18;
        }
        else
        {
          v39 = v50;
        }
        v32 = a1->m128i_i64[1];
LABEL_101:
        v42 = a1[1].m128i_i32[0];
LABEL_71:
        a1[1].m128i_i64[1] = v39;
        a1[2].m128i_i16[0] = 417;
        a1[1].m128i_i32[1] = v42;
        a1[1].m128i_i32[0] = v37;
        if ( *(_QWORD *)(v32 + 2944) && *(_QWORD *)(v32 + 2960) != *(_QWORD *)(v32 + 2952) )
        {
LABEL_51:
          sub_1417320(v32, a1 + 1);
          v23 = 4;
          goto LABEL_19;
        }
        goto LABEL_44;
      case 4u:
        v60 = v20;
        v56 = v21;
        if ( (unsigned __int8)sub_147EA30((__int64)a1) )
          goto LABEL_30;
        v43 = (_QWORD *)a1->m128i_i64[1];
        a1[1].m128i_i32[0] = v12;
        a1[2].m128i_i16[0] = 419;
        v44 = v60;
        a1[1].m128i_i64[1] = v56;
        a1[1].m128i_i32[1] = v12;
        if ( v43[368] && v43[370] != v43[369] )
        {
          sub_1417320((__int64)v43, a1 + 1);
          v44 = v60;
        }
        if ( (!(_DWORD)v68 || !DWORD1(v68)) && !*((_QWORD *)&v68 + 1) )
          goto LABEL_44;
        v57 = v44;
        sub_15655A0(a1, (__int64 *)&v68, v9 != 416);
        v23 = v57;
        goto LABEL_19;
      case 5u:
      case 6u:
        v45 = (_QWORD *)a1->m128i_i64[1];
        a1[1].m128i_i32[0] = v12;
        a1[1].m128i_i32[1] = v12;
        a1[2].m128i_i16[0] = (v20 != 5) + 420;
        a1[1].m128i_i64[1] = (__int64)v61;
        if ( v45[368] && v45[370] != v45[369] )
          sub_1417320((__int64)v45, a1 + 1);
LABEL_58:
        if ( (!(_DWORD)v68 || !DWORD1(v68)) && !*((_QWORD *)&v68 + 1) )
          goto LABEL_44;
        goto LABEL_43;
      case 7u:
        v31 = v68;
        a1[1].m128i_i64[1] = v21;
        a1[2].m128i_i16[0] = 422;
        a1[1].m128i_i32[1] = v12;
        if ( v31 && DWORD1(v68) || *((_QWORD *)&v68 + 1) )
          a1[1].m128i_i32[0] = v31;
        v32 = a1->m128i_i64[1];
        if ( !*(_QWORD *)(v32 + 2944) || *(_QWORD *)(v32 + 2960) == *(_QWORD *)(v32 + 2952) )
          goto LABEL_44;
        goto LABEL_51;
      case 8u:
        if ( (_WORD)v63 == 47 )
        {
          v27 = 1;
          v28 = 0;
          v29 = 2;
          goto LABEL_54;
        }
        if ( (_DWORD)v68 && DWORD1(v68) || (v23 = 2, *((_QWORD *)&v68 + 1)) )
        {
          sub_15655A0(a1, (__int64 *)&v68, v9 != 416);
          v23 = 2;
        }
        break;
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
        v29 = dword_261ADB0[v20 - 8];
        v28 = v20 == 12;
        v27 = v20 != 12;
        goto LABEL_38;
      default:
LABEL_30:
        if ( (_DWORD)v68 && DWORD1(v68) || (v23 = 3, *((_QWORD *)&v68 + 1)) )
        {
          sub_15655A0(a1, (__int64 *)&v68, v9 != 416);
          v23 = 3;
        }
        goto LABEL_19;
    }
    goto LABEL_19;
  }
  v53 = v19;
  v26 = sub_1562FA0(a1, 1);
  v21 = v53;
  if ( v26 == 1 )
  {
    si128 = _mm_load_si128((const __m128i *)&v62);
    v47 = a1[6].m128i_i64[0];
    v65 = v63;
    LOWORD(v65) = 0;
    v64 = si128;
    if ( (_DWORD)v68 && DWORD1(v68) )
    {
      v5 = 0;
    }
    else if ( *((_QWORD *)&v68 + 1) )
    {
      v5 = 0;
    }
    v20 = sub_1802970(v47, v5);
    v21 = v48;
    goto LABEL_15;
  }
  v27 = 1;
  v28 = 0;
  v29 = 5;
LABEL_38:
  if ( (_WORD)v63 == 47 )
  {
LABEL_54:
    v33 = (__int64 *)a1->m128i_i64[1];
    v59 = v29;
    v54 = v21;
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v33, a1[1].m128i_i32);
    v21 = v54;
    v29 = v59;
  }
  v67 = v12;
  v64.m128i_i32[0] = 0;
  v64.m128i_i64[1] = (__int64)v61;
  v66 = v12;
  v30 = sub_1556B20(a1, v21, v29, (__int64)&v68, 0, &v64, (__m128i)0LL, v16, v27, v28);
  v23 = 0;
  if ( !v30 )
  {
    if ( (_DWORD)v68 && DWORD1(v68) || (v23 = 4, *((_QWORD *)&v68 + 1)) )
    {
LABEL_43:
      sub_15655A0(a1, (__int64 *)&v68, v9 != 416);
LABEL_44:
      v23 = 4;
    }
  }
LABEL_19:
  if ( HIDWORD(ptr[1]) )
  {
    v52 = v23;
    free(ptr[0]);
    return v52;
  }
  return v23;
}
