unsigned __int64 __fastcall sub_113BCD0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 result; // rax
  __int64 *v19; // rbx
  __int64 *v20; // rbp
  __int64 v21; // r14
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 v25; // r15
  char *v26; // rsi
  char *v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rax
  _QWORD *v30; // r15
  const char *v31; // rax
  char *v32; // rsi
  char *v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rax
  _QWORD *v36; // r15
  const char *v37; // rax
  char *v38; // rsi
  char *v39; // rsi
  __int64 *v40; // rdi
  char *v41; // rsi
  char *v42; // rsi
  __int64 *v43; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v44; // [rsp+8h] [rbp-60h] BYREF
  __m128 v45; // [rsp+10h] [rbp-58h] BYREF
  __int64 v46; // [rsp+20h] [rbp-48h]

  v43 = a1;
  v45.m128_u64[0] = 0xA3600000966LL;
  v5 = sub_2193060(a2, &v45, 2);
  v6 = *(_QWORD *)(a2 + 8);
  v46 = 0xA3600000966LL;
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  v44 = v8;
  v45 = _mm_loadh_ps((const double *)&v44);
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        if ( (unsigned __int8)sub_2195AD0(*v7, 2406) || (unsigned __int8)sub_2195AD0(v9, 2614) )
          break;
      }
      v45.m128_u64[0] = (unsigned __int64)++v7;
      if ( v8 == v7 )
        goto LABEL_6;
    }
    v44 = v8;
    v46 = 0xA3600000966LL;
    v45 = _mm_loadh_ps((const double *)&v44);
    if ( v8 != v7 )
    {
      do
      {
        v28 = *v7;
        v29 = *(_QWORD *)(*v7 + 16LL);
        if ( !v29 )
          v29 = *v7;
        v30 = v7 + 1;
        *(_BYTE *)(v29 + 44) |= 1u;
        v45.m128_u64[0] = (unsigned __int64)v30;
        if ( v30 == v8 )
          break;
        while ( 1 )
        {
          if ( *v30 )
          {
            v44 = (_QWORD *)*v30;
            if ( (unsigned __int8)sub_2195AD0(v44, 2406) || (unsigned __int8)sub_2195AD0(v44, 2614) )
              break;
          }
          v45.m128_u64[0] = (unsigned __int64)++v30;
          if ( v8 == v30 )
            goto LABEL_40;
        }
        v7 = (_QWORD *)v45.m128_u64[0];
      }
      while ( v8 != (_QWORD *)v45.m128_u64[0] );
LABEL_40:
      if ( (unsigned __int8)sub_2195AD0(v28, 2406) )
        v31 = "+transactional-execution";
      else
        v31 = "-transactional-execution";
      v45.m128_u64[0] = (unsigned __int64)v31;
      v32 = *(char **)(a3 + 8);
      v45.m128_u64[1] = 24;
      if ( v32 == *(char **)(a3 + 16) )
      {
        sub_1052040(a3, v32, &v45);
      }
      else
      {
        *(_QWORD *)v32 = v31;
        v33 = v32 + 16;
        *((_QWORD *)v33 - 1) = 24;
        *(_QWORD *)(a3 + 8) = v33;
      }
    }
  }
LABEL_6:
  v45.m128_u64[0] = 0xAC800000B91LL;
  v10 = sub_2193060(a2, &v45, 2);
  v11 = *(_QWORD *)(a2 + 8);
  v46 = 0xAC800000B91LL;
  v12 = (_QWORD *)(v11 + 8LL * (unsigned int)v10);
  v13 = (_QWORD *)(v11 + 8 * HIDWORD(v10));
  v44 = v13;
  v45 = _mm_loadh_ps((const double *)&v44);
  if ( v12 != v13 )
  {
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 )
      {
        if ( (unsigned __int8)sub_2195AD0(*v12, 2961) || (unsigned __int8)sub_2195AD0(v14, 2760) )
          break;
      }
      v45.m128_u64[0] = (unsigned __int64)++v12;
      if ( v13 == v12 )
        goto LABEL_11;
    }
    v44 = v13;
    v46 = 0xAC800000B91LL;
    v45 = _mm_loadh_ps((const double *)&v44);
    if ( v13 != v12 )
    {
      do
      {
        v34 = *v12;
        v35 = *(_QWORD *)(*v12 + 16LL);
        if ( !v35 )
          v35 = *v12;
        v36 = v12 + 1;
        *(_BYTE *)(v35 + 44) |= 1u;
        v45.m128_u64[0] = (unsigned __int64)v36;
        if ( v36 == v13 )
          break;
        while ( 1 )
        {
          if ( *v36 )
          {
            v44 = (_QWORD *)*v36;
            if ( (unsigned __int8)sub_2195AD0(v44, 2961) || (unsigned __int8)sub_2195AD0(v44, 2760) )
              break;
          }
          v45.m128_u64[0] = (unsigned __int64)++v36;
          if ( v13 == v36 )
            goto LABEL_54;
        }
        v12 = (_QWORD *)v45.m128_u64[0];
      }
      while ( (_QWORD *)v45.m128_u64[0] != v13 );
LABEL_54:
      if ( (unsigned __int8)sub_2195AD0(v34, 2961) )
        v37 = "+vector";
      else
        v37 = "-vector";
      v45.m128_u64[0] = (unsigned __int64)v37;
      v38 = *(char **)(a3 + 8);
      v45.m128_u64[1] = 7;
      if ( v38 != *(char **)(a3 + 16) )
      {
        *(_QWORD *)v38 = v37;
        v39 = v38 + 16;
        v40 = v43;
        *((_QWORD *)v39 - 1) = 7;
        *(_QWORD *)(a3 + 8) = v39;
        if ( (unsigned int)sub_113B1C0(v40, a2) )
          goto LABEL_12;
        goto LABEL_58;
      }
      sub_1052040(a3, v38, &v45);
    }
  }
LABEL_11:
  if ( (unsigned int)sub_113B1C0(v43, a2) )
    goto LABEL_12;
LABEL_58:
  v41 = *(char **)(a3 + 8);
  v45.m128_u64[1] = 11;
  v45.m128_u64[0] = (unsigned __int64)"+soft-float";
  if ( v41 == *(char **)(a3 + 16) )
  {
    sub_1052040(a3, v41, &v45);
  }
  else
  {
    *(_QWORD *)v41 = "+soft-float";
    v42 = v41 + 16;
    *((_QWORD *)v42 - 1) = 11;
    *(_QWORD *)(a3 + 8) = v42;
  }
LABEL_12:
  v45.m128_u64[0] = 0xABB00000B70LL;
  v15 = sub_2193060(a2, &v45, 2);
  v16 = *(_QWORD *)(a2 + 8);
  v46 = 0xABB00000B70LL;
  v17 = (unsigned int)v15;
  result = HIDWORD(v15);
  v19 = (__int64 *)(v16 + 8 * v17);
  v20 = (__int64 *)(v16 + 8 * result);
  v43 = v20;
  v45 = _mm_loadh_ps((const double *)&v43);
  if ( v19 != v20 )
  {
    while ( 1 )
    {
      v21 = *v19;
      if ( *v19 )
      {
        if ( (unsigned __int8)sub_2195AD0(*v19, 2928) )
          break;
        result = sub_2195AD0(v21, 2747);
        if ( (_BYTE)result )
          break;
      }
      v45.m128_u64[0] = (unsigned __int64)++v19;
      if ( v20 == v19 )
        return result;
    }
    result = 0xABB00000B70LL;
    v43 = v20;
    v46 = 0xABB00000B70LL;
    v45 = _mm_loadh_ps((const double *)&v43);
    if ( v20 != v19 )
    {
      do
      {
        v22 = *v19;
        v23 = *(_QWORD *)(*v19 + 16);
        if ( !v23 )
          v23 = *v19;
        v24 = v19 + 1;
        *(_BYTE *)(v23 + 44) |= 1u;
        v45.m128_u64[0] = (unsigned __int64)v24;
        if ( v24 == v20 )
          break;
        while ( 1 )
        {
          v25 = *v24;
          if ( *v24 )
          {
            if ( (unsigned __int8)sub_2195AD0(*v24, 2928) || (unsigned __int8)sub_2195AD0(v25, 2747) )
              break;
          }
          v45.m128_u64[0] = (unsigned __int64)++v24;
          if ( v20 == v24 )
            goto LABEL_26;
        }
        v19 = (__int64 *)v45.m128_u64[0];
      }
      while ( v20 != (__int64 *)v45.m128_u64[0] );
LABEL_26:
      if ( (unsigned __int8)sub_2195AD0(v22, 2928) )
        result = (unsigned __int64)"+unaligned-symbols";
      else
        result = (unsigned __int64)"-unaligned-symbols";
      v45.m128_u64[0] = result;
      v26 = *(char **)(a3 + 8);
      v45.m128_u64[1] = 18;
      if ( v26 == *(char **)(a3 + 16) )
      {
        return sub_1052040(a3, v26, &v45);
      }
      else
      {
        *(_QWORD *)v26 = result;
        v27 = v26 + 16;
        *((_QWORD *)v27 - 1) = 18;
        *(_QWORD *)(a3 + 8) = v27;
      }
    }
  }
  return result;
}

