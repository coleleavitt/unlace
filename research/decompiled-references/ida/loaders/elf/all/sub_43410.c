__int64 __fastcall sub_43410(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r15
  __int64 v9; // rbp
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  const char *v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  char v16; // al
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rax
  char v20; // al
  char *v21; // rbp
  __m128i v22; // xmm0
  const char *v23; // r12
  unsigned int v24; // ebx
  int segm_qty; // eax
  __int64 result; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // zf
  unsigned __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // r12
  __int64 v35; // rsi
  unsigned __int64 i; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  char *v39; // rax
  const char *v40; // rcx
  char *v41; // rax
  char v44; // [rsp+10h] [rbp-128h]
  const char *v45; // [rsp+10h] [rbp-128h]
  char *haystacka; // [rsp+18h] [rbp-120h]
  char haystack; // [rsp+18h] [rbp-120h]
  unsigned __int64 v48; // [rsp+28h] [rbp-110h] BYREF
  __m128i v49; // [rsp+30h] [rbp-108h] BYREF
  __int64 v50; // [rsp+50h] [rbp-E8h]
  __int64 v51; // [rsp+58h] [rbp-E0h]
  __int64 v52; // [rsp+60h] [rbp-D8h]
  __int128 v53; // [rsp+68h] [rbp-D0h]
  __int128 v54; // [rsp+78h] [rbp-C0h]
  __int128 v55; // [rsp+88h] [rbp-B0h]
  __int128 v56; // [rsp+98h] [rbp-A0h]
  __int128 v57; // [rsp+A8h] [rbp-90h]
  __int128 v58; // [rsp+B8h] [rbp-80h]
  __int128 v59; // [rsp+C8h] [rbp-70h]
  __int128 v60; // [rsp+D8h] [rbp-60h]
  unsigned __int64 v61; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+F8h] [rbp-40h]

  v9 = a2;
  v62 = __readfsqword(0x28u);
  memset(&v49, 0, 32);
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v61 = 0xFFFFFFFF00000000LL;
  v53 = -1;
  v54 = -1;
  v55 = -1;
  v56 = -1;
  v57 = -1;
  v58 = -1;
  v59 = -1;
  v60 = -1;
  v11 = *(_QWORD *)(a5 + 32);
  if ( !v11 && *(_WORD *)(a2 + 520) == 2 && *(_DWORD *)(a5 + 4) == 8 )
  {
    v27 = *(_QWORD *)(a2 + 32);
    v30 = *(_QWORD *)(a5 + 16);
    v31 = v27 + 56LL * *(_QWORD *)(a2 + 40);
    if ( v27 == v31 )
      return 0;
    while ( 1 )
    {
      if ( *(_DWORD *)v27 == 1 )
      {
        v32 = *(_QWORD *)(v27 + 40);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v27 + 16);
          v34 = *(_QWORD *)(v9 + 456) & (v32 + v33);
          if ( v30 >= v33 && v34 >= v30 )
            break;
        }
      }
      v27 += 56;
      if ( v31 == v27 )
        return 0;
    }
    v11 = v34 - v30;
    if ( !v11 )
      return 0;
    v35 = *(unsigned int *)(v9 + 568);
    if ( (unsigned int)v35 > 1 )
    {
      if ( !*(_BYTE *)(v9 + 248) )
      {
        sub_30AC0();
LABEL_72:
        haystack = v17;
        v45 = v40;
        v41 = strstr(v40, "_local_data");
        if ( !v41 )
          goto LABEL_15;
        v40 = v45;
        LOBYTE(v17) = haystack;
        if ( v41[11] )
          goto LABEL_15;
        goto LABEL_65;
      }
      for ( i = 1; i != v35; ++i )
      {
        if ( i < *(_QWORD *)(v9 + 120) )
          v37 = *(_QWORD *)(v9 + 112) + (i << 6);
        else
          v37 = 0;
        v38 = *(_QWORD *)(v37 + 16);
        if ( v30 < v38 && v38 < v30 + v11 )
          v11 = v38 - v30;
      }
      if ( !v11 )
        return 0;
    }
  }
  v12 = *(_QWORD *)(a1 + 240);
  v48 = -1;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, unsigned __int64 *))(*(_QWORD *)v12 + 152LL))(
          v12,
          a5,
          a6,
          &v48) )
    return 0;
  if ( v48 != -1 )
  {
    v13 = &s1;
    if ( !*(_QWORD *)(a6 + 8) )
      goto LABEL_6;
    goto LABEL_37;
  }
  v28 = sub_41B70(a1, v9, a5);
  v29 = *(_QWORD *)(a6 + 8) == 0;
  v13 = &s1;
  v48 = v28;
  if ( !v29 )
LABEL_37:
    v13 = *(const char **)a6;
LABEL_6:
  if ( !(unsigned __int8)sub_43320(a1, a5, v13, &v48) )
    return 0;
  v14 = v48;
  if ( *(_BYTE *)(v9 + 248) && *(_QWORD *)(v9 + 120) && *(_WORD *)(v9 + 520) == 1 )
    *(_QWORD *)(a5 + 16) = v48;
  v6 = 0x100000000LL;
  v15 = v11 + v14;
  if ( *(_DWORD *)(v9 + 464) == 8 )
    v6 = -1;
  if ( v15 != v6 )
    v6 = *(_QWORD *)(v9 + 456) & v15;
  v16 = sub_40B90(*(_QWORD *)(a5 + 48), NAN);
  v17 = *(_QWORD *)(a5 + 8);
  BYTE1(v51) = 2;
  LOBYTE(v51) = v16;
  v18 = *(_BYTE *)(v9 + 618);
  LOBYTE(v9) = (2 * v17) & 2;
  BYTE3(v51) = v18 + 1;
  v52 = *(_QWORD *)(a1 + 176);
  BYTE2(v51) = v9 | 4;
  v19 = *(_QWORD *)(a6 + 8);
  if ( (v17 & 4) == 0 )
  {
    if ( !v19 )
      goto LABEL_41;
    v40 = *(const char **)a6;
    goto LABEL_65;
  }
  v44 = v17;
  if ( !v19 || !*(_QWORD *)a6 )
    goto LABEL_15;
  haystacka = *(char **)a6;
  v39 = strstr(*(const char **)a6, "_VTABLE__");
  v40 = haystacka;
  LOBYTE(v17) = v44;
  if ( !v39 )
    goto LABEL_72;
LABEL_65:
  if ( *v40 == 69 && v40[1] == 80 )
  {
LABEL_15:
    v20 = 2;
    BYTE2(v51) = v9 | 5;
    v21 = "CODE";
    goto LABEL_16;
  }
LABEL_41:
  v20 = 9;
  v21 = "BSS";
  if ( *(_DWORD *)(a5 + 4) != 8 )
  {
    v20 = 3;
    v21 = "CONST";
    if ( (v17 & 1) != 0 )
      v21 = "DATA";
  }
LABEL_16:
  if ( !v11 )
  {
    ++v6;
    v20 = 7;
  }
  v22 = _mm_loadl_epi64((const __m128i *)&v48);
  LOBYTE(v61) = v20;
  v49 = _mm_unpacklo_epi64(v22, (__m128i)v6);
  if ( *(_QWORD *)(a1 + 512) < v6 )
    *(_QWORD *)(a1 + 512) = v6;
  if ( *(_BYTE *)(a1 + 525) && (_BYTE)v61 == 2 )
    v49.m128i_i64[1] = v22.m128i_i64[0] + ((v6 - v22.m128i_i64[0] + 1) >> 1);
  v23 = &s1;
  if ( *(_QWORD *)(a6 + 8) )
    v23 = *(const char **)a6;
  v24 = (*(_WORD *)(a1 + 520) & 0x10) == 0 ? 37 : 53;
  segm_qty = get_segm_qty();
  if ( segm_qty > 63 )
  {
    if ( segm_qty == 64 )
      sub_EAA0((__int64)"Too many segments, future segment addition messages will not be displayed...\n");
    v24 |= 8u;
  }
  result = add_segm_ex(&v49, v23, v21, v24);
  if ( !(_BYTE)result )
    return 0;
  if ( a3 )
    *a3 = v49.m128i_i64[0];
  if ( a4 )
    *a4 = v49.m128i_i64[1];
  return result;
}

