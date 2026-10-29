__int64 __fastcall sub_2060DC0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // r12d
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 v18; // r15
  __int64 v19; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  _QWORD *v22; // rdx
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // r15
  __int64 i; // r12
  _QWORD *v28; // rdi
  unsigned int v30; // [rsp+14h] [rbp-1B4h]
  __int64 v31; // [rsp+18h] [rbp-1B0h]
  __int64 *v32; // [rsp+28h] [rbp-1A0h]
  __int64 v33; // [rsp+30h] [rbp-198h]
  __int64 v34; // [rsp+40h] [rbp-188h] BYREF
  __m128 v35[2]; // [rsp+50h] [rbp-178h] BYREF
  void *ptr; // [rsp+70h] [rbp-158h] BYREF
  __int64 v37; // [rsp+78h] [rbp-150h]
  _BYTE v38[64]; // [rsp+80h] [rbp-148h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-108h] BYREF
  __int16 v40; // [rsp+C8h] [rbp-100h] BYREF
  __m128i v41; // [rsp+D0h] [rbp-F8h]
  __m128i v42; // [rsp+E0h] [rbp-E8h]
  __int64 v43; // [rsp+F0h] [rbp-D8h]
  __int64 v44; // [rsp+F8h] [rbp-D0h] BYREF
  int v45; // [rsp+100h] [rbp-C8h]
  __int64 v46; // [rsp+108h] [rbp-C0h]
  int v47; // [rsp+110h] [rbp-B8h]
  char v48; // [rsp+118h] [rbp-B0h]
  int v49; // [rsp+120h] [rbp-A8h] BYREF
  __m128i v50; // [rsp+128h] [rbp-A0h] BYREF
  __m128i v51; // [rsp+138h] [rbp-90h] BYREF
  __int64 v52; // [rsp+148h] [rbp-80h]
  __int64 v53; // [rsp+150h] [rbp-78h] BYREF
  int v54; // [rsp+158h] [rbp-70h]
  __int64 v55; // [rsp+160h] [rbp-68h] BYREF
  int v56; // [rsp+168h] [rbp-60h]
  char v57; // [rsp+170h] [rbp-58h]
  char v58; // [rsp+180h] [rbp-48h]

  v37 = 0x800000000LL;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = (__int64 *)v38;
  ptr = v38;
  v7 = v5 & 0x7FFFFFF;
  if ( (_DWORD)v7 )
  {
    v8 = 0;
    v9 = 8;
    v10 = (unsigned int)(v7 - 1);
    LODWORD(v11) = 0;
    v30 = 0;
    v12 = 0;
    while ( 1 )
    {
      v15 = *(_QWORD *)(a1 + 32 * (v8 - v7));
      if ( a2 == v15 )
      {
        v13 = (unsigned int)v11;
        ++v12;
        v15 = a3;
        v30 = v8;
        v14 = (unsigned int)v11 + 1LL;
        if ( v14 <= v9 )
        {
LABEL_4:
          *((_QWORD *)ptr + v13) = v15;
          v11 = (unsigned int)(v37 + 1);
          LODWORD(v37) = v37 + 1;
          if ( v10 == v8 )
            goto LABEL_9;
          goto LABEL_5;
        }
      }
      else
      {
        v13 = (unsigned int)v11;
        v14 = (unsigned int)v11 + 1LL;
        if ( v14 <= v9 )
          goto LABEL_4;
      }
      v31 = v15;
      sub_2237220(&ptr, v38, v14, 8);
      *((_QWORD *)ptr + (unsigned int)v37) = v31;
      v11 = (unsigned int)(v37 + 1);
      LODWORD(v37) = v37 + 1;
      if ( v10 == v8 )
      {
LABEL_9:
        v6 = (__int64 *)ptr;
        goto LABEL_10;
      }
LABEL_5:
      v9 = HIDWORD(v37);
      ++v8;
      v7 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
    }
  }
  v12 = 0;
  v30 = 0;
  v11 = 0;
LABEL_10:
  v16 = sub_2060B50(a1, v6, v11, *(__int64 ***)(a1 + 8), 1, 0);
  if ( !v16 )
  {
    v18 = *(_QWORD *)sub_20CB0D0(a1);
    v33 = v18 + 1704;
    sub_2052150((__int64)&v49, (__int64)ptr, (unsigned int)v37, a1);
    v19 = *(_QWORD *)(a1 + 8);
    v20 = _mm_loadu_si128(&v50);
    v48 = 0;
    v21 = _mm_loadu_si128(&v51);
    v39 = v19;
    v41 = v20;
    v40 = v49;
    v42 = v21;
    v43 = v52;
    if ( v57 )
    {
      v23 = v54;
      v48 = 1;
      v54 = 0;
      v45 = v23;
      v44 = v53;
      v24 = v56;
      v56 = 0;
      v47 = v24;
      v46 = v55;
      sub_200ED00((__int64)&v53);
    }
    v49 = sub_2053EA0((__int64)&v39);
    v50.m128i_i64[0] = v39;
    sub_2051AE0((__int64)&v50.m128i_i64[1], (__int64)&v40);
    v32 = (__int64 *)sub_2059CC0(v18 + 1704, (__int64)&v49);
    v22 = (_QWORD *)(*(_QWORD *)(v18 + 1704) + 8LL * *(unsigned int *)(v18 + 1720));
    sub_2059C50(v35, v22, v22, v18 + 1704, 1);
    if ( (__int64 *)v35[0].m128_u64[0] == v32 )
    {
      *(_QWORD *)sub_205B060(v18 + 1704, a1) = -8192;
      --*(_DWORD *)(v18 + 1712);
      ++*(_DWORD *)(v18 + 1716);
      if ( v12 == 1 )
      {
        sub_20166C0((_QWORD *)(a1 + 32 * (v30 - (unsigned __int64)(*(_DWORD *)(a1 + 4) & 0x7FFFFFF))), a3);
      }
      else
      {
        v25 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
        if ( v25 )
        {
          v26 = v25 - 1;
          for ( i = 0; ; ++i )
          {
            v28 = (_QWORD *)(a1 + 32 * (i - v25));
            if ( a2 == *v28 )
              sub_20166C0(v28, a3);
            if ( v26 == i )
              break;
            v25 = *(_DWORD *)(a1 + 4) & 0x7FFFFFF;
          }
        }
      }
      v34 = a1;
      sub_205DCD0((__m128i *)v35, v33, &v34, (__int64)&v49);
    }
    else
    {
      v16 = *v32;
    }
    if ( v58 )
      sub_200ED00((__int64)&v55);
    if ( v48 )
      sub_200ED00((__int64)&v44);
  }
  if ( ptr != v38 )
    free(ptr);
  return v16;
}
