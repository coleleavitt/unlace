__int64 __fastcall sub_215B0B0(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  __int64 v7; // r13
  __int64 v8; // rax
  void (__fastcall ***v9)(__int64 *); // rdi
  __int64 v11; // r14
  __int64 v12; // r13
  __int16 v13; // bx
  __m128 v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // [rsp+8h] [rbp-70h] BYREF
  __int64 v17; // [rsp+18h] [rbp-60h] BYREF
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  void (__fastcall ***v19)(__int64 *); // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int16 v22; // [rsp+40h] [rbp-38h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    sub_21573D0(a1);
    return a1;
  }
  if ( a4 )
  {
    sub_215A210((__int64)&v18, a2, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 104), *(_WORD *)(a2 + 112));
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 16);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    sub_215AC80((__int64)&v18, a2, v7 + v8, a3);
    if ( *a3 )
    {
      sub_21573D0(a1);
      v9 = v19;
      goto LABEL_5;
    }
  }
  v11 = v20;
  v12 = v21;
  v16.m128i_i64[0] = v18;
  v13 = v22;
  if ( !v19 )
  {
    v15 = _mm_loadl_epi64(&v16);
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = v12;
    *(_WORD *)(a1 + 32) = v13;
    *(_QWORD *)(a1 + 40) = (unsigned __int64)a3 & 0xFFFFFFFFFFFFFFFBLL;
    *(__m128i *)a1 = v15;
    return a1;
  }
  (**v19)(&v17);
  v9 = v19;
  *(_QWORD *)(a1 + 16) = v11;
  *(_QWORD *)(a1 + 24) = v12;
  v14 = _mm_loadh_ps((const double *)&v17);
  *(_WORD *)(a1 + 32) = v13;
  *(__m128 *)a1 = v14;
  *(_QWORD *)(a1 + 40) = (unsigned __int64)a3 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_5:
  if ( v9 )
    (*v9)[2]((__int64 *)v9);
  return a1;
}
