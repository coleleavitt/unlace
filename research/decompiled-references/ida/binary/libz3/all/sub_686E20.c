__int64 __fastcall sub_686E20(
        const __m128i *a1,
        __int64 a2,
        int a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 result; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // r13
  __int64 v18; // rsi
  bool (__fastcall *v19)(__int64, __int64); // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 *v22; // rcx
  __int64 v23; // rbp
  __int64 v24; // rax
  int v25; // edi
  unsigned int v26; // edx
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 *v29; // r8
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // [rsp+0h] [rbp-58h] BYREF
  __int64 v37; // [rsp+8h] [rbp-50h] BYREF
  __m128i v38; // [rsp+10h] [rbp-48h] BYREF
  __m128i v39[3]; // [rsp+20h] [rbp-38h] BYREF

  result = sub_15D1F10(a2);
  v17 = result;
  if ( !a3 )
  {
    if ( !*(_WORD *)(a2 + 4) )
    {
      v18 = *(_QWORD *)(a2 + 16);
      result = *(_QWORD *)(v18 + 24);
      if ( !result || *(_DWORD *)result == -1 )
      {
        result = *(unsigned int *)(a2 + 24);
        if ( (_DWORD)result )
          return sub_681BA0(a1, v18, (unsigned int *)a2, v17, a4, a5, a6, a7, v15, v16, a10, a11);
      }
    }
    return result;
  }
  if ( a3 != 1 )
    return result;
  v19 = *(bool (__fastcall **)(__int64, __int64))(a1->m128i_i64[0] + 56);
  if ( v19 == sub_676470 )
  {
    result = *(_QWORD *)(v17 + 24);
    if ( !result || *(_DWORD *)result != 4 )
      return result;
  }
  else
  {
    result = ((__int64 (__fastcall *)(const __m128i *, __int64))v19)(a1, v17);
    if ( !(_BYTE)result )
      return result;
  }
  result = sub_15D26C0(a1->m128i_i64[1], a2);
  if ( !(_BYTE)result )
    return result;
  sub_676260((__int64)&v38, a1[1].m128i_i64[0], a1[1].m128i_i64[1], a2);
  v20 = sub_679460((__int64)a1, v17);
  v21 = v38.m128i_i64[0];
  v22 = *(__int64 **)v20;
  v23 = v20;
  v24 = *(unsigned int *)(v20 + 8);
  v25 = *(_DWORD *)(v38.m128i_i64[0] + 12);
  v26 = v24 - 1;
  v24 *= 16;
  v27 = (__int64 *)((char *)v22 + v24);
  v28 = 16LL * (v25 & v26);
  v29 = &v22[(unsigned __int64)v28 / 8];
  if ( v28 == v24 )
  {
LABEL_31:
    if ( v22 != v29 )
    {
      while ( 1 )
      {
        v32 = *v22;
        if ( (unsigned __int64)*v22 > 1 )
        {
          if ( *(_DWORD *)(v32 + 12) == v25 && v38.m128i_i64[0] == v32 )
          {
            v30 = v22;
            goto LABEL_27;
          }
        }
        else if ( !v32 )
        {
          goto LABEL_18;
        }
        v22 += 2;
        if ( v29 == v22 )
          goto LABEL_18;
      }
    }
    goto LABEL_18;
  }
  v30 = &v22[(unsigned __int64)v28 / 8];
  while ( 1 )
  {
    v31 = *v30;
    if ( (unsigned __int64)*v30 > 1 )
      break;
    if ( !v31 )
      goto LABEL_18;
LABEL_15:
    v30 += 2;
    if ( v27 == v30 )
      goto LABEL_31;
  }
  if ( *(_DWORD *)(v31 + 12) != v25 || v38.m128i_i64[0] != v31 )
    goto LABEL_15;
LABEL_27:
  if ( v30[1] == a2 )
  {
LABEL_18:
    v37 = v38.m128i_i64[0];
    goto LABEL_19;
  }
  if ( (unsigned __int8)sub_15D26C0(a1->m128i_i64[1], v30[1]) )
  {
    v33 = a1[1].m128i_i64[1];
    v34 = a1->m128i_i64[1];
    sub_15E1B70(v34);
    v35 = sub_15E1A70(v34);
    v36 = v35;
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    sub_6761A0((unsigned int **)(v33 + 24), &v36);
  }
  else
  {
    v21 = v38.m128i_i64[0];
    v37 = v38.m128i_i64[0];
    if ( v38.m128i_i64[0] )
LABEL_19:
      ++*(_DWORD *)(v21 + 8);
    sub_675F80(&a1[3].m128i_i64[1], &v37);
    v39[0] = _mm_unpacklo_epi64(_mm_loadl_epi64(&v38), (__m128i)(unsigned __int64)a2);
    sub_686B20(v23, v39);
  }
  return sub_675460(v38.m128i_i64[0], v38.m128i_i64[1]);
}

