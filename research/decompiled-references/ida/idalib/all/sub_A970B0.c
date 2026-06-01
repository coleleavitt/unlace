__int64 __fastcall sub_A970B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r13
  __int64 v7; // r12
  unsigned int v9; // esi
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int64 *v15; // rdx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 *v19; // r10
  int v20; // eax
  bool v21; // zf
  __m128i v22; // [rsp+0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+18h] [rbp-40h] BYREF
  __int64 *v24; // [rsp+28h] [rbp-30h] BYREF

  v6 = (__int64 *)(a1 + 2000);
  v7 = a3;
  v23 = a2;
  v9 = *(_DWORD *)(a1 + 2016);
  if ( !v9 )
  {
    v24 = nullptr;
    goto LABEL_17;
  }
  a3 = v23;
  a5 = v9 - 1;
  v10 = *(_QWORD *)(a1 + 2000);
  v11 = a5 & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
  v12 = (__int64 *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( v23 == *v12 )
    goto LABEL_3;
  a6 = 1;
  v19 = nullptr;
  if ( v13 == -4096 )
  {
LABEL_10:
    v20 = *(_DWORD *)(a1 + 2008);
    a4 = 3 * v9;
    v24 = v12;
    result = (unsigned int)(v20 + 1);
    if ( 4 * (int)result < (unsigned int)a4 )
    {
      a4 = v9 - *(_DWORD *)(a1 + 2012) - (unsigned int)result;
      if ( (unsigned int)a4 > v9 >> 3 )
      {
LABEL_12:
        v21 = *v12 == -4096;
        *(_DWORD *)(a1 + 2008) = result;
        if ( !v21 )
          --*(_DWORD *)(a1 + 2012);
        v12[1] = 0;
        *v12 = a3;
        v15 = (unsigned __int64 *)(v12 + 1);
        goto LABEL_15;
      }
LABEL_18:
      sub_A96E50((__int64)v6, v9, a3, a4, a5, a6);
      sub_A6E950(v6, &v23, &v24);
      a3 = v23;
      v12 = v24;
      result = (unsigned int)(*(_DWORD *)(a1 + 2008) + 1);
      goto LABEL_12;
    }
LABEL_17:
    v9 *= 2;
    goto LABEL_18;
  }
  while ( 1 )
  {
    if ( !v19 && v13 == -8192 )
      v19 = v12;
    v11 = a5 & (a6 + v11);
    v12 = (__int64 *)(v10 + 16LL * v11);
    v13 = *v12;
    if ( v23 == *v12 )
      break;
    if ( v13 == -4096 )
    {
      if ( v19 )
        v12 = v19;
      goto LABEL_10;
    }
    a6 = (unsigned int)(a6 + 1);
  }
LABEL_3:
  result = v12[1];
  v15 = (unsigned __int64 *)(v12 + 1);
  v16 = result & 0xFFFFFFFFFFFFFFF8LL;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
LABEL_15:
    *v15 = v7 & 0xFFFFFFFFFFFFFFFBLL;
    return result;
  }
  if ( (result & 4) != 0 )
  {
    result = *(unsigned int *)(v16 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(v16 + 12) )
    {
      sub_2237220(v12[1] & 0xFFFFFFFFFFFFFFF8LL, v16 + 16, result + 1, 8);
      result = *(unsigned int *)(v16 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v16 + 8 * result) = v7;
    ++*(_DWORD *)(v16 + 8);
  }
  else
  {
    v22.m128i_i64[0] = v7;
    v22 = (__m128i)_mm_loadh_ps((const double *)v22.m128i_i64);
    v17 = operator new(0x30u);
    v18 = _mm_load_si128(&v22);
    *(_QWORD *)(v17 + 8) = 0x400000002LL;
    *(_QWORD *)v17 = v17 + 16;
    *(__m128i *)(v17 + 16) = v18;
    result = v17 | 4;
    v12[1] = result;
  }
  return result;
}
