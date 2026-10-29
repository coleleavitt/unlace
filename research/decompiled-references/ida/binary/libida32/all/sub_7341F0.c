__int64 __fastcall sub_7341F0(const __m128i *a1, _DWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // r15
  int v16; // r13d
  char *v17; // r15
  void *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // rdx
  __m128i v25; // xmm2
  __m128i v26; // xmm3
  __int64 v27; // rdx
  __m128i v28; // xmm4
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // eax
  unsigned int v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+10h] [rbp-78h]
  unsigned int v38; // [rsp+1Ch] [rbp-6Ch]
  __int64 v39; // [rsp+20h] [rbp-68h] BYREF
  __int64 v40; // [rsp+28h] [rbp-60h] BYREF
  __int64 v41; // [rsp+30h] [rbp-58h] BYREF
  __int64 v42; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v43[9]; // [rsp+40h] [rbp-48h] BYREF

  v43[1] = __readfsqword(0x28u);
  if ( !a1 || a5 || !a1[9].m128i_i64[0] )
    return (unsigned int)-102;
  if ( a1[20].m128i_i64[0] )
    sub_734100((__int64)a1);
  if ( sub_7307F0((__int64)a1) )
    return (unsigned int)-103;
  v7 = sub_732680((__int64)a1, a1[6].m128i_i64[0], &v39);
  if ( v7 )
  {
    v7 = -1;
  }
  else if ( v39 != 67324752 )
  {
    v7 = -103;
  }
  if ( (unsigned int)sub_7325F0((__int64)a1, a1[6].m128i_i64[0], &v40) )
    v7 = -1;
  v8 = sub_7325F0((__int64)a1, a1[6].m128i_i64[0], &v41);
  v9 = a1[6].m128i_i64[0];
  if ( v8 )
  {
    sub_7325F0((__int64)a1, v9, &v40);
    goto LABEL_51;
  }
  if ( (unsigned int)sub_7325F0((__int64)a1, v9, &v40) )
  {
LABEL_51:
    v7 = -1;
    goto LABEL_17;
  }
  if ( !v7 )
  {
    v10 = a1[12].m128i_i64[1];
    if ( v10 == v40 )
    {
      if ( (v10 & 0xFFFFFFFFFFFFFFF7LL) != 0 && v10 != 12 )
        v7 = -103;
    }
    else
    {
      v7 = -103;
    }
  }
LABEL_17:
  v11 = sub_732680((__int64)a1, a1[6].m128i_i64[0], &v40);
  v12 = a1[6].m128i_i64[0];
  if ( v11 )
  {
    sub_732680((__int64)a1, v12, &v40);
    v7 = -1;
  }
  else if ( (unsigned int)sub_732680((__int64)a1, v12, &v40) )
  {
    v7 = -1;
  }
  else if ( !v7 && a1[13].m128i_i64[1] != v40 && (v41 & 8) == 0 )
  {
    v7 = -103;
  }
  if ( (unsigned int)sub_732680((__int64)a1, a1[6].m128i_i64[0], &v40) )
  {
    v7 = -1;
  }
  else if ( !v7 && v40 != 0xFFFFFFFFLL && v40 != a1[14].m128i_i64[0] )
  {
    v7 = (v41 & 8) == 0 ? 0xFFFFFF99 : 0;
  }
  if ( (unsigned int)sub_732680((__int64)a1, a1[6].m128i_i64[0], &v40) )
  {
    v13 = a1[6].m128i_i64[0];
    v7 = -1;
    goto LABEL_29;
  }
  v13 = a1[6].m128i_i64[0];
  if ( v40 == 0xFFFFFFFFLL )
  {
    v33 = sub_7325F0((__int64)a1, v13, &v42);
    v14 = v42;
    if ( v33 )
      goto LABEL_31;
    if ( v7 )
      goto LABEL_32;
  }
  else
  {
    if ( v7 )
      goto LABEL_29;
    if ( v40 != a1[14].m128i_i64[1] && (v41 & 8) == 0 )
    {
      v7 = -103;
LABEL_29:
      if ( !(unsigned int)sub_7325F0((__int64)a1, v13, &v42) )
      {
        LODWORD(v14) = v42;
        goto LABEL_32;
      }
      goto LABEL_30;
    }
    if ( (unsigned int)sub_7325F0((__int64)a1, v13, &v42) )
    {
LABEL_30:
      LODWORD(v14) = v42;
LABEL_31:
      v7 = -1;
      goto LABEL_32;
    }
    v14 = v42;
  }
  v7 = -103;
  if ( a1[15].m128i_i64[0] == v14 )
    v7 = 0;
LABEL_32:
  if ( (unsigned int)sub_7325F0((__int64)a1, a1[6].m128i_i64[0], v43) )
    return (unsigned int)-103;
  v16 = v43[0];
  v37 = v42 + a1[19].m128i_i64[1] + 30;
  v38 = LODWORD(v43[0]) + v14;
  if ( v7 )
    return (unsigned int)-103;
  v17 = (char *)malloc(0x140u);
  if ( !v17 )
    return (unsigned int)-104;
  v18 = malloc(0x4000u);
  *((_DWORD *)v17 + 36) = v16;
  *(_QWORD *)v17 = v18;
  *((_QWORD *)v17 + 17) = v37;
  *((_QWORD *)v17 + 19) = 0;
  *((_DWORD *)v17 + 78) = a4;
  if ( !v18 )
  {
    v7 = -104;
    free(v17);
    return v7;
  }
  *((_QWORD *)v17 + 16) = 0;
  if ( a2 )
    *a2 = a1[12].m128i_i64[1];
  if ( a3 )
  {
    *a3 = 6;
    v19 = a1[12].m128i_i64[0] & 6;
    switch ( v19 )
    {
      case 4LL:
        *a3 = 2;
        break;
      case 6LL:
        *a3 = 1;
        break;
      case 2LL:
        *a3 = 9;
        break;
    }
  }
  v20 = a1[13].m128i_i64[1];
  v21 = a1[12].m128i_i64[1];
  *((_QWORD *)v17 + 21) = 0;
  v22 = _mm_loadu_si128(a1);
  v23 = _mm_loadu_si128(a1 + 1);
  *((_QWORD *)v17 + 20) = 0;
  *((_QWORD *)v17 + 22) = v20;
  v24 = a1[6].m128i_i64[0];
  v25 = _mm_loadu_si128(a1 + 2);
  v26 = _mm_loadu_si128(a1 + 3);
  *((_QWORD *)v17 + 37) = v21;
  *((_QWORD *)v17 + 36) = v24;
  v27 = a1[5].m128i_i64[0];
  v28 = _mm_loadu_si128(a1 + 4);
  *(__m128i *)(v17 + 200) = v22;
  *((_QWORD *)v17 + 35) = v27;
  v29 = a1[7].m128i_i64[1];
  *(__m128i *)(v17 + 216) = v23;
  *(__m128i *)(v17 + 232) = v25;
  *(__m128i *)(v17 + 248) = v26;
  *(__m128i *)(v17 + 264) = v28;
  *((_QWORD *)v17 + 38) = v29;
  *((_QWORD *)v17 + 6) = 0;
  if ( v21 == 12 )
  {
    if ( !a4 )
      *((_DWORD *)v17 + 78) = 1;
  }
  else if ( !a4 && v21 == 8 )
  {
    *((_QWORD *)v17 + 9) = 0;
    *((_QWORD *)v17 + 10) = 0;
    *((_QWORD *)v17 + 11) = 0;
    *((_QWORD *)v17 + 1) = 0;
    *((_DWORD *)v17 + 4) = 0;
    v34 = sub_72E240((_QWORD *)v17 + 1, -15, "1.3.1", 112);
    if ( v34 )
    {
      v36 = v34;
      free(*(void **)v17);
      free(v17);
      return v36;
    }
    *((_QWORD *)v17 + 16) = 8;
  }
  v30 = a1[14].m128i_i64[0];
  v31 = a1[19].m128i_i64[1];
  *((_DWORD *)v17 + 4) = 0;
  a1[20].m128i_i64[0] = (__int64)v17;
  *((_QWORD *)v17 + 23) = v30;
  v32 = a1[14].m128i_i64[1];
  a1[20].m128i_i32[2] = 0;
  *((_QWORD *)v17 + 24) = v32;
  *((_QWORD *)v17 + 15) = v31 + v38 + 30;
  return v7;
}

