__int64 *__fastcall sub_1B3410(unsigned __int64 *a1, __int64 *a2, double a3, double a4)
{
  __int64 module_data; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // r14d
  __int64 v8; // rbp
  unsigned __int64 v9; // r10
  const char *v10; // rsi
  __int64 i; // r13
  int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // r8
  __m128i v15; // xmm1
  unsigned __int64 v16; // xmm0_8
  __int64 *result; // rax
  unsigned __int64 v18; // r11
  const char *v19; // rcx
  char *v20; // r12
  __m128i v21; // xmm0
  unsigned __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  __m128i v26; // xmm1
  unsigned __int64 v27; // rdx
  char *v28; // rsi
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v32; // [rsp+10h] [rbp-58h]
  __int64 v33; // [rsp+10h] [rbp-58h]
  unsigned __int64 v34; // [rsp+10h] [rbp-58h]
  __int64 v35; // [rsp+18h] [rbp-50h]
  unsigned __int64 v36; // [rsp+18h] [rbp-50h]
  unsigned __int64 v37; // [rsp+20h] [rbp-48h]
  __int64 v38; // [rsp+20h] [rbp-48h]
  unsigned __int64 v39; // [rsp+28h] [rbp-40h]

  module_data = get_module_data((unsigned int)dword_4EF998);
  v5 = *a1;
  if ( !*(_QWORD *)(module_data + 1344) )
    return sub_FAAD0(a2, (__int64)"%a.%a", a3, a4);
  v6 = module_data;
  v7 = 1;
  v8 = 0;
  v9 = a1[1] + v5;
  v10 = (const char *)&unk_418793;
  for ( i = *(_QWORD *)(module_data + 1344); ; i = *(_QWORD *)(v6 + 1344) )
  {
    v12 = v8;
    v13 = 32LL * (int)v8;
    v14 = i + v13 + 528;
    v15 = _mm_loadu_si128((const __m128i *)(i + v13 + 536));
    v16 = _mm_add_epi64(_mm_srli_si128(v15, 8), v15).m128i_u64[0];
    result = (__int64 *)v16;
    if ( v5 >= v16 )
      goto LABEL_15;
    result = (__int64 *)v15.m128i_i64[0];
    v18 = v15.m128i_i64[0];
    if ( v9 <= v15.m128i_i64[0] )
      v18 = v9;
    if ( v5 >= v18 )
      break;
    v39 = v9;
    v38 = v6;
    v34 = v18;
    sub_FAAD0(a2, (__int64)"%s%a", v10, *(double *)&v16);
    v30 = v34 - v5;
    if ( v34 != -1 )
    {
      if ( v30 > 0xC )
      {
        sub_FAAD0(a2, (__int64)"..%a", *(double *)&v16);
        v5 = v34;
        v9 = v39;
        v10 = ",";
        result = *(__int64 **)(i + v13 + 536);
        v6 = v38;
        v14 = i + v13 + 528;
      }
      else
      {
        sub_FAAD0(a2, (__int64)".%a", *(double *)&v16);
        v5 = v34;
        v14 = i + v13 + 528;
        v10 = ",";
        result = *(__int64 **)(i + v13 + 536);
        v6 = v38;
        v9 = v39;
      }
      break;
    }
    sub_FAAD0(a2, (__int64)"..", v30, v29, i + v13 + 528);
    v9 = v39;
    v6 = v38;
    result = *(__int64 **)(i + v13 + 536);
    if ( (unsigned __int64)result >= v39 )
      return result;
    v5 = -1;
    v10 = ",";
    if ( v8 != 5 )
      goto LABEL_10;
LABEL_15:
    ++v7;
    ++v8;
    if ( v7 == 7 )
      goto LABEL_19;
LABEL_16:
    ;
  }
  if ( (unsigned __int64)result >= v9 )
    goto LABEL_19;
  if ( (__int64 *)v5 != result || v9 < v5 + *(_QWORD *)(i + 32LL * (int)v8 + 544) )
  {
    if ( v8 != 5 )
    {
LABEL_10:
      if ( *(_QWORD *)(*(_QWORD *)(v6 + 1344) + 32LL * v7 + 536) < v5 )
        goto LABEL_15;
    }
    v19 = *(const char **)(32LL * (int)v8 + i + 560);
    v20 = (char *)result + *(_QWORD *)(i + 32LL * (int)v8 + 544);
    if ( (unsigned __int64)v20 > v9 )
      v20 = (char *)v9;
    if ( v19 && v5 < (unsigned __int64)v20 )
    {
      v36 = v9;
      v33 = v6;
      sub_FAAD0(a2, (__int64)"%s%s+%a", v10, v19, *(double *)&v16);
      v25 = (unsigned __int64)&v20[-v5];
      v26 = _mm_loadu_si128((const __m128i *)(i + 32 * v8 + 536));
      v16 = _mm_add_epi64(_mm_srli_si128(v26, 8), v26).m128i_u64[0];
      if ( (char *)v16 == v20 )
      {
        result = sub_FAAD0(a2, (__int64)"..", v25, v23, v24, v33);
        v6 = v33;
        v9 = v36;
      }
      else if ( v25 <= 0xC )
      {
        result = sub_FAAD0(a2, (__int64)".%a", *(double *)&v16);
        v6 = v33;
        v9 = v36;
      }
      else
      {
        result = sub_FAAD0(a2, (__int64)"..%a", *(double *)&v16);
        v9 = v36;
        v6 = v33;
      }
      v5 = (unsigned __int64)v20;
      v10 = ",";
    }
    goto LABEL_15;
  }
  v37 = v9;
  v35 = v6;
  ++v7;
  v32 = v14;
  ++v8;
  result = sub_FAAD0(a2, (__int64)"%s%s", v10, *(const char **)(32LL * v12 + i + 552));
  v6 = v35;
  v10 = ",";
  v9 = v37;
  v21 = _mm_loadu_si128((const __m128i *)(v32 + 8));
  v16 = _mm_add_epi64(v21, _mm_srli_si128(v21, 8)).m128i_u64[0];
  v5 = v16;
  if ( v7 != 7 )
    goto LABEL_16;
LABEL_19:
  v22 = v9;
  if ( v5 < v9 )
  {
    sub_FAAD0(a2, (__int64)"%s%a", v10, *(double *)&v16);
    v27 = v22 - v5;
    if ( v22 == -1 )
    {
      return sub_FAAD0(a2, (__int64)"..", v27);
    }
    else
    {
      v28 = ".%a";
      if ( v27 > 0xC )
      {
        v27 = v22;
        v28 = "..%a";
      }
      return sub_FAAD0(a2, (__int64)v28, v27);
    }
  }
  return result;
}
