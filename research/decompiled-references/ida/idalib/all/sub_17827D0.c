__int64 __fastcall sub_17827D0(__m128i *a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 *v9; // r13
  unsigned __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // rbp
  __int64 v13; // r13
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *v17; // r15
  __int64 *v18; // r14
  __int64 v19; // r13
  __int64 *v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // r15
  unsigned __int64 v27; // rbp
  __m128d v28; // xmm0
  __int64 v29; // r15
  unsigned __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+10h] [rbp-48h]
  unsigned __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 *v35; // [rsp+18h] [rbp-40h]

  result = (char *)a2 - (char *)a1;
  v32 = a3;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v6 = a2;
    v7 = (char *)a2 - (char *)a1;
    if ( !a3 )
    {
      v20 = a2;
      goto LABEL_16;
    }
    v35 = &a1->m128i_i64[1];
    while ( 1 )
    {
      v8 = a1->m128i_i64[1];
      --v32;
      v9 = &a1->m128i_i64[v7 >> 4];
      v10 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v9 + 16LL))(*v9) >> 32;
      if ( (unsigned int)v10 <= (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8) >> 32 )
      {
        v26 = a1->m128i_i64[1];
        v27 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*(v6 - 1) + 16LL))(*(v6 - 1)) >> 32;
        if ( (unsigned int)v27 > (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26) >> 32 )
          goto LABEL_21;
        v29 = *v9;
        v30 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*(v6 - 1) + 16LL))(*(v6 - 1)) >> 32;
        if ( (unsigned int)v30 <= (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29) >> 32 )
        {
LABEL_23:
          v31 = a1->m128i_i64[0];
          a1->m128i_i64[0] = *v9;
          *v9 = v31;
          v16 = a1->m128i_i64[0];
          goto LABEL_8;
        }
      }
      else
      {
        v11 = *v9;
        v12 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*(v6 - 1) + 16LL))(*(v6 - 1)) >> 32;
        if ( (unsigned int)v12 > (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11) >> 32 )
          goto LABEL_23;
        v13 = a1->m128i_i64[1];
        v14 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*(v6 - 1) + 16LL))(*(v6 - 1)) >> 32;
        if ( (unsigned int)v14 <= (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13) >> 32 )
        {
LABEL_21:
          v28 = (__m128d)_mm_loadu_si128(a1);
          v16 = a1->m128i_i64[1];
          *(__m128d *)a1 = _mm_shuffle_pd(v28, v28, 1);
          goto LABEL_8;
        }
      }
      v15 = a1->m128i_i64[0];
      a1->m128i_i64[0] = *(v6 - 1);
      *(v6 - 1) = v15;
      v16 = a1->m128i_i64[0];
LABEL_8:
      v17 = v35;
      v18 = v6;
      while ( 1 )
      {
        v19 = *v17;
        v20 = v17;
        v33 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16) >> 32;
        if ( (unsigned int)v33 > (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19) >> 32 )
          goto LABEL_9;
        do
        {
          --v18;
          v21 = a1->m128i_i64[0];
          v34 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v18 + 16LL))(*v18) >> 32;
        }
        while ( (unsigned int)v34 > (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21) >> 32 );
        if ( v17 >= v18 )
          break;
        v22 = *v17;
        *v17 = *v18;
        *v18 = v22;
LABEL_9:
        v16 = a1->m128i_i64[0];
        ++v17;
      }
      result = sub_17827D0(v17, v6, v32);
      v7 = (char *)v17 - (char *)a1;
      if ( (char *)v17 - (char *)a1 <= 128 )
        return result;
      v6 = v17;
      if ( !v32 )
      {
LABEL_16:
        v23 = v7 >> 3;
        v24 = ((v7 >> 3) - 2) >> 1;
        sub_1782620((__int64)a1, v24, v7 >> 3, a1->m128i_i64[v24]);
        do
        {
          --v24;
          sub_1782620((__int64)a1, v24, v23, a1->m128i_i64[v24]);
        }
        while ( v24 );
        do
        {
          v25 = *--v20;
          *v20 = a1->m128i_i64[0];
          result = sub_1782620((__int64)a1, 0, ((char *)v20 - (char *)a1) >> 3, v25);
        }
        while ( (char *)v20 - (char *)a1 > 8 );
        return result;
      }
    }
  }
  return result;
}
