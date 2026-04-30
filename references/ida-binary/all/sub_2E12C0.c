__int64 __fastcall sub_2E12C0(__int64 a1, __m128i *a2, const __m128i *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int32 v15; // eax
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 *v20; // rax
  __int64 v21; // rdi
  int v23; // [rsp+Ch] [rbp-ACh] BYREF
  __int64 v24; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v25; // [rsp+18h] [rbp-A0h]
  __int64 *v26; // [rsp+30h] [rbp-88h] BYREF
  int v27; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+40h] [rbp-78h]
  __m128i v29; // [rsp+50h] [rbp-68h] BYREF
  __m128i v30; // [rsp+60h] [rbp-58h] BYREF
  __int64 v31; // [rsp+70h] [rbp-48h]
  unsigned __int64 v32; // [rsp+88h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v3 = a3[2].m128i_i64[1];
  if ( !v3 )
    return 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 128LL))(v3);
  v6 = sub_27D380(v5);
  v7 = v6;
  if ( v6 == -1 )
  {
    return 0;
  }
  else
  {
    v8.m128i_i64[0] = 0;
    v24 = 0;
    v25 = 0;
    if ( (int)generate_disassembly(&v24, &v23, v6, 100, 0) <= 0 )
    {
      v16 = 0;
    }
    else
    {
      v9 = _mm_loadu_si128(a3);
      v28 = v7;
      v27 = v23;
      v26 = &idaplace_t___vtable;
      v10 = a3[2].m128i_i64[0];
      v29 = v9;
      v11 = _mm_loadu_si128(a3 + 1);
      v31 = v10;
      v30 = v11;
      v12 = idaplace_t__clone(&v26);
      v13 = a2[2].m128i_i64[1];
      v14 = v12;
      if ( v13 )
      {
        qfree(v13, (const char *)&v23);
        a2[2].m128i_i64[1] = 0;
      }
      v15 = v31;
      *a2 = _mm_load_si128(&v29);
      v8 = _mm_load_si128(&v30);
      a2[2].m128i_i32[0] = v15;
      a2[1] = v8;
      if ( v14 )
      {
        a2[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        *(double *)v8.m128i_i64 = qfree(v14, (const char *)&v23);
      }
      v16 = 1;
    }
    v17 = v24;
    if ( v24 )
    {
      v18 = v25;
      if ( (_QWORD)v25 )
      {
        v19 = 0;
        do
        {
          v20 = (__int64 *)(v17 + 24 * v19);
          v21 = *v20;
          if ( *v20 )
          {
            v20[1] = 0;
            *(double *)v8.m128i_i64 = qfree(v21, (const char *)&v23, *(double *)v8.m128i_i64);
            v17 = v24;
          }
          ++v19;
        }
        while ( v18 != v19 );
      }
      *(_QWORD *)&v25 = 0;
      qfree(v17, (const char *)&v23, *(double *)v8.m128i_i64);
    }
  }
  return v16;
}
