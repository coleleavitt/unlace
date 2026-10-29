__int64 __fastcall sub_1ECEB70(
        unsigned __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3,
        signed __int64 a4,
        unsigned int a5,
        char a6,
        unsigned __int8 a7)
{
  __int64 v7; // r12
  char v8; // dl
  __int64 result; // rax
  __int64 v10; // rcx
  char v11; // al
  char *v12; // rsi
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  unsigned __int8 v15; // al
  __m128 *v16; // r15
  __m128 v17; // xmm0
  unsigned __int8 *v18; // r14
  unsigned __int8 *v19; // r12
  unsigned __int8 *v20; // rax
  unsigned int *v21; // r14
  unsigned int *v22; // r15
  unsigned int v23; // r13d
  unsigned int *v24; // rax
  char *v25; // rax
  __int64 v26; // rdx
  size_t v27; // rax
  __m128i *v28; // rax
  signed __int64 v29; // rcx
  unsigned __int8 **v30; // r15
  _BYTE *v31; // rsi
  unsigned __int64 v32; // [rsp+8h] [rbp-100h] BYREF
  __m128 *v33; // [rsp+10h] [rbp-F8h]
  __int64 v34; // [rsp+18h] [rbp-F0h]
  _BYTE *v35; // [rsp+20h] [rbp-E8h]
  signed __int64 v36; // [rsp+28h] [rbp-E0h]
  __m128 i; // [rsp+30h] [rbp-D8h]
  void *v38[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v39[16]; // [rsp+50h] [rbp-B8h] BYREF
  void *v40; // [rsp+60h] [rbp-A8h]
  signed __int64 v41; // [rsp+68h] [rbp-A0h]
  __m128i v42; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int8 *v43[17]; // [rsp+80h] [rbp-88h] BYREF

  v7 = *(_QWORD *)(a2 + 152);
  v35 = a3;
  v36 = a4;
  v8 = *(_BYTE *)(v7 + 24);
  if ( (_BYTE)a5 )
  {
    result = 0;
    if ( (v8 & 0x10) != 0 )
      return result;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 152) + 24LL) & 0x10) != 0 && !a6 )
    {
      result = a5;
      if ( !a7 )
        return result;
      sub_FC70B0((__int64)v43, a2, 0, 901);
      v12 = "-Wsystem-headers";
      goto LABEL_54;
    }
  }
  if ( (v8 & 4) == 0 )
  {
    v13 = *(_BYTE *)(v7 + 25);
    if ( v13 == 3 )
      goto LABEL_17;
    goto LABEL_14;
  }
  v10 = *(_QWORD *)(a1 + 152);
  v11 = *(_BYTE *)(v10 + 24);
  if ( (v11 & 4) == 0 )
  {
    result = 1;
    if ( !a7 )
      return result;
    sub_FC70B0((__int64)v43, a2, 0, 901);
    v12 = "-Werror";
LABEL_54:
    sub_AE9DF0(v43, (__int64)v12, 1u);
    sub_AEC220(v43, v35, v36);
    sub_AEA040((__int64)v43);
    return a7;
  }
  if ( (*(_BYTE *)(v7 + 24) & 2) != 0 && (v11 & 2) == 0 )
  {
    result = 1;
    if ( !a7 )
      return result;
    sub_FC70B0((__int64)v43, a2, 0, 901);
    v12 = "-Weverything -Werror";
    goto LABEL_54;
  }
  v13 = *(_BYTE *)(v7 + 25);
  if ( v13 != 3 )
  {
LABEL_14:
    if ( v13 <= 3u )
      goto LABEL_17;
    v14 = *(_QWORD *)(a1 + 152);
    v15 = *(_BYTE *)(v14 + 25);
    if ( v15 == 3 )
    {
      if ( (*(_BYTE *)(v14 + 24) & 4) != 0 )
        goto LABEL_17;
      goto LABEL_40;
    }
LABEL_16:
    if ( v15 > 3u )
      goto LABEL_17;
LABEL_40:
    result = 1;
    if ( !a7 )
      return result;
    sub_FC70B0((__int64)v43, a2, 0, 901);
    v12 = "-pedantic-errors";
    goto LABEL_54;
  }
  v15 = *(_BYTE *)(v10 + 25);
  if ( v15 != 3 )
    goto LABEL_16;
LABEL_17:
  v32 = a1;
  v16 = (__m128 *)v43;
  v33 = (__m128 *)v43;
  v17 = _mm_loadh_ps((const double *)&v32);
  v32 = 0;
  for ( i = v17; ; v7 = *(_QWORD *)(*(unsigned __int64 *)((char *)i.m128_u64 + v32) + 152) )
  {
    sub_FCE200(
      v16,
      (int *)(*(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 16)),
      (int *)(*(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 16)),
      v7,
      1);
    v18 = v43[0];
    if ( *(_DWORD *)(v7 + 8) )
      sub_FCE200(v33, *(int **)v7, (int *)(*(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 16)), v7, 0);
    else
      sub_FCE200(
        v16,
        (int *)(*(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 16)),
        (int *)(*(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 16)),
        v7,
        1);
    v19 = v43[1];
    if ( v43[0] != v18 )
      break;
LABEL_31:
    v32 += 8LL;
    if ( v32 == 16 )
      return 0;
    v16 = v33;
  }
  v34 = *(_QWORD *)(a2 + 32);
  v20 = v18;
  v21 = (unsigned int *)v43[0];
  v22 = (unsigned int *)v20;
  while ( 1 )
  {
    v23 = *v21;
    if ( (unsigned __int8)sub_FD3E40(v34, *v21, 0, a2) > 3u
      && (unsigned __int8)sub_FD3E40(*(_QWORD *)(a1 + 32), v23, 0, a1) <= 3u )
    {
      break;
    }
    if ( v21 + 2 != (unsigned int *)v19 )
    {
      if ( v21[2] < 0xFFFFFFFE )
      {
        v21 += 2;
        goto LABEL_30;
      }
      v24 = v21 + 4;
      while ( 1 )
      {
        v21 = v24;
        if ( v24 == (unsigned int *)v19 )
          break;
        v24 += 2;
        if ( *v21 < 0xFFFFFFFE )
          goto LABEL_30;
      }
    }
    v21 = (unsigned int *)v19;
LABEL_30:
    if ( v21 == v22 )
      goto LABEL_31;
  }
  if ( a7 )
  {
    sub_FC70B0((__int64)v33, a2, 0, 901);
    v25 = sub_FD4050(*(_QWORD *)(a2 + 32), v23);
    if ( v25 )
    {
      v38[0] = v39;
      sub_1EA9D80(v38, v25, (__int64)&v25[v26]);
    }
    else
    {
      v39[0] = 0;
      v38[0] = v39;
      v38[1] = nullptr;
    }
    v27 = j__strlen("-Werror=");
    v28 = (__m128i *)sub_99BDC0(v38, 0, 0, "-Werror=", v27);
    v40 = &v42;
    if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
    {
      v42 = _mm_loadu_si128(v28 + 1);
    }
    else
    {
      v40 = (void *)v28->m128i_i64[0];
      v42.m128i_i64[0] = v28[1].m128i_i64[0];
    }
    v29 = v28->m128i_i64[1];
    v30 = (unsigned __int8 **)v33;
    v28[1].m128i_i8[0] = 0;
    v41 = v29;
    v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
    v31 = v40;
    v28->m128i_i64[1] = 0;
    sub_AEC220(v30, v31, v41);
    sub_AEC220(v30, v35, v36);
    if ( v40 != &v42 )
      operator delete(v40);
    if ( v38[0] != v39 )
      operator delete(v38[0]);
    sub_AEA040((__int64)v33);
  }
  return 1;
}
