__int64 __fastcall sub_12472A0(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r13
  _QWORD *v10; // rbx
  __int64 v11; // r15
  _QWORD *v13; // r15
  __int64 v14; // rax
  _QWORD *v15; // r13
  __int64 v16; // rax
  __int64 v17; // r12
  _DWORD *v18; // rbx
  size_t v19; // rdx
  const char *v20; // rbx
  size_t v21; // rax
  unsigned __int64 v22; // r12
  char *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i *v28; // rax
  __m128i *v29; // rax
  unsigned __int8 **v30; // rdi
  void *v31; // rdi
  __int64 **v32; // rdi
  const char *v33; // rax
  __int64 v34; // rdx
  __int64 **v35; // rdi
  const char *v36; // rdi
  __m128i *v37; // rax
  _QWORD *v39; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int8 **v40; // [rsp+18h] [rbp-F0h]
  void *v41[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+30h] [rbp-D8h] BYREF
  void *v43; // [rsp+40h] [rbp-C8h]
  signed __int64 v44; // [rsp+48h] [rbp-C0h]
  __m128i v45; // [rsp+50h] [rbp-B8h] BYREF
  void *v46; // [rsp+60h] [rbp-A8h] BYREF
  signed __int64 v47; // [rsp+68h] [rbp-A0h]
  __m128i v48; // [rsp+70h] [rbp-98h] BYREF
  __m128 v49; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v50; // [rsp+90h] [rbp-78h]
  unsigned int v51; // [rsp+94h] [rbp-74h]
  __int64 v52; // [rsp+A0h] [rbp-68h]

  v6 = *a2;
  v49.m128_u64[0] = __PAIR64__(a4, a3);
  v40 = (unsigned __int8 **)&v49;
  v7 = sub_21B6DA0(v6, &v49, 2);
  v8 = *(_QWORD *)(v6 + 8);
  v51 = a4;
  v50 = a3;
  v9 = (_QWORD *)(v8 + 8LL * (unsigned int)v7);
  v10 = (_QWORD *)(v8 + 8 * HIDWORD(v7));
  v39 = v10;
  v49 = _mm_loadh_ps((const double *)&v39);
  if ( v9 == v10 )
    goto LABEL_6;
  while ( 1 )
  {
    v11 = *v9;
    if ( *v9 )
    {
      if ( (unsigned __int8)sub_21B9810(*v9, a3) || (unsigned __int8)sub_21B9810(v11, a4) )
        break;
    }
    v49.m128_u64[0] = (unsigned __int64)++v9;
    if ( v10 == v9 )
      goto LABEL_6;
  }
  v39 = v10;
  v50 = a3;
  v51 = a4;
  v49 = _mm_loadh_ps((const double *)&v39);
  if ( v10 == v9 )
    goto LABEL_6;
  do
  {
    v13 = (_QWORD *)*v9;
    v14 = *(_QWORD *)(*v9 + 16LL);
    if ( !v14 )
      v14 = *v9;
    v15 = v9 + 1;
    *(_BYTE *)(v14 + 44) |= 1u;
    v49.m128_u64[0] = (unsigned __int64)v15;
    if ( v15 == v10 )
      break;
    while ( 1 )
    {
      if ( *v15 )
      {
        v39 = (_QWORD *)*v15;
        if ( (unsigned __int8)sub_21B9810(v39, a3) || (unsigned __int8)sub_21B9810(v39, a4) )
          break;
      }
      v49.m128_u64[0] = (unsigned __int64)++v15;
      if ( v10 == v15 )
        goto LABEL_16;
    }
    v9 = (_QWORD *)v49.m128_u64[0];
  }
  while ( v10 != (_QWORD *)v49.m128_u64[0] );
LABEL_16:
  v16 = v13[1];
  v17 = **(_QWORD **)(v16 + 8);
  v18 = (_DWORD *)(*(_QWORD *)(v16 + 32) + 80LL * (unsigned int)(*(_DWORD *)(*v13 + 40LL) - 1));
  if ( *v18 )
  {
    v19 = 0;
    v36 = (const char *)(v17 + *(unsigned int *)(*(_QWORD *)(v16 + 16) + 4LL * (unsigned int)(*v18 + 1)));
    if ( v36 )
      v19 = (unsigned int)strlen(v36);
    v21 = 0;
    v20 = (const char *)(v17 + (unsigned int)v18[1]);
    if ( !v20 )
    {
LABEL_19:
      v22 = 0;
      if ( v19 > v21 )
        goto LABEL_21;
      goto LABEL_20;
    }
LABEL_18:
    v39 = (_QWORD *)v19;
    v21 = strlen(v20);
    v19 = (size_t)v39;
    goto LABEL_19;
  }
  v19 = 0;
  v20 = (const char *)(v17 + (unsigned int)v18[1]);
  if ( v20 )
    goto LABEL_18;
  v19 = 0;
  v21 = 0;
LABEL_20:
  v22 = v21 - v19;
  v21 = v19;
LABEL_21:
  v23 = (char *)&v20[v21];
  if ( (unsigned __int8)sub_21B9810(v13, a4) )
  {
    v35 = (__int64 **)a2[1];
    LOWORD(v52) = 261;
    v49.m128_u64[0] = (unsigned __int64)v23;
    v49.m128_u64[1] = v22;
    v33 = sub_1244E20(v35, 0, 261, v25, v26, v27, (char)v23);
    goto LABEL_43;
  }
  if ( *(_BYTE *)a2[2] )
  {
    if ( *(_DWORD *)a2[5] <= 0x43u )
    {
      sub_FC70B0((__int64)v40, *(_QWORD *)a2[3], 0, 428);
      v46 = &v48;
      if ( v23 )
      {
        sub_1244700(&v46, v23, (__int64)&v23[v22]);
      }
      else
      {
        v47 = 0;
        v48.m128i_i8[0] = 0;
      }
      v28 = (__m128i *)sub_99BDC0(&v46, 0, 0, "-", 1u);
      v43 = &v45;
      if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
      {
        v45 = _mm_loadu_si128(v28 + 1);
      }
      else
      {
        v43 = (void *)v28->m128i_i64[0];
        v45.m128i_i64[0] = v28[1].m128i_i64[0];
      }
      v44 = v28->m128i_i64[1];
      v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
      v28->m128i_i64[1] = 0;
      v28[1].m128i_i8[0] = 0;
      if ( v46 != &v48 )
        operator delete(v46);
      sub_AEC220(v40, v43, v44);
      sub_D8B070(
        v41,
        (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
        16,
        (__int64)"%u",
        *(_DWORD *)a2[5]);
      v29 = (__m128i *)sub_99BDC0(v41, 0, 0, "v", 1u);
      v46 = &v48;
      if ( (__m128i *)v29->m128i_i64[0] == &v29[1] )
      {
        v48 = _mm_loadu_si128(v29 + 1);
      }
      else
      {
        v46 = (void *)v29->m128i_i64[0];
        v48.m128i_i64[0] = v29[1].m128i_i64[0];
      }
      v30 = v40;
      v47 = v29->m128i_i64[1];
      v29->m128i_i64[0] = (__int64)v29[1].m128i_i64;
      v29->m128i_i64[1] = 0;
      v29[1].m128i_i8[0] = 0;
      sub_AEC220(v30, v46, v47);
      if ( v46 != &v48 )
        operator delete(v46);
      if ( v41[0] != &v42 )
        operator delete(v41[0]);
      v31 = v43;
      if ( v43 == &v45 )
        goto LABEL_38;
      goto LABEL_37;
    }
    v49.m128_u64[0] = (unsigned __int64)v23;
    v32 = (__int64 **)a2[1];
    LOWORD(v52) = 261;
    v49.m128_u64[1] = v22;
    v33 = sub_1244E20(v32, 1, v24, v25, v26, v27, (char)v23);
LABEL_43:
    *(_QWORD *)a1 = v33;
    *(_QWORD *)(a1 + 8) = v34;
    *(_BYTE *)(a1 + 16) = 1;
    return a1;
  }
  sub_FC70B0((__int64)v40, *(_QWORD *)a2[3], 0, 427);
  v46 = &v48;
  if ( v23 )
  {
    sub_1244700(&v46, v23, (__int64)&v23[v22]);
  }
  else
  {
    v47 = 0;
    v48.m128i_i8[0] = 0;
  }
  v37 = (__m128i *)sub_99BDC0(&v46, 0, 0, "-", 1u);
  v43 = &v45;
  if ( (__m128i *)v37->m128i_i64[0] == &v37[1] )
  {
    v45 = _mm_loadu_si128(v37 + 1);
  }
  else
  {
    v43 = (void *)v37->m128i_i64[0];
    v45.m128i_i64[0] = v37[1].m128i_i64[0];
  }
  v44 = v37->m128i_i64[1];
  v37->m128i_i64[0] = (__int64)v37[1].m128i_i64;
  v37->m128i_i64[1] = 0;
  v37[1].m128i_i8[0] = 0;
  if ( v46 != &v48 )
    operator delete(v46);
  sub_AEC220(v40, v43, v44);
  v31 = v43;
  if ( v43 == &v45 )
    goto LABEL_38;
LABEL_37:
  operator delete(v31);
LABEL_38:
  sub_AEA040((__int64)v40);
LABEL_6:
  *(_BYTE *)(a1 + 16) = 0;
  return a1;
}
