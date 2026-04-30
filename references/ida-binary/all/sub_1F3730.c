__m128i *__fastcall sub_1F3730(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r13
  __m128i *v5; // rbx
  bool v6; // zf
  char v7; // r12
  int v8; // eax
  __int64 *v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i *v12; // r12
  __int32 v14; // eax
  __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // r14
  __m128i v18; // [rsp+0h] [rbp-58h] BYREF
  __m128i v19; // [rsp+10h] [rbp-48h] BYREF
  __int32 v20; // [rsp+20h] [rbp-38h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v4 = (__int64 *)a2;
  v5 = (__m128i *)a1;
  v6 = *(_BYTE *)(a1 + 968) == 0;
  v21 = __readfsqword(0x28u);
  v7 = a3;
  v20 = 0;
  v19.m128i_i64[0] = 0;
  v19.m128i_i64[1] = -1;
  v18 = 0;
  if ( v6 )
  {
    a1 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 424) )
      goto LABEL_22;
    v8 = *(_DWORD *)(a1 + 416);
    if ( v8 == 2 )
    {
      a1 = *(_QWORD *)(a1 + 896);
    }
    else if ( v8 == 3 )
    {
      a1 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      a1 = 0;
      if ( v8 == 1 )
        a1 = v5[55].m128i_i64[1];
    }
  }
  a2 = &v18;
  v9 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD))(*(_QWORD *)a1 + 168LL))(
                    a1,
                    &v18,
                    (unsigned __int8)a3);
  if ( !v9 )
    return nullptr;
  if ( v7 )
  {
    v14 = v20;
    v12 = v5 + 10;
    v15 = v5[12].m128i_i64[1];
    v5[10] = _mm_load_si128(&v18);
    v16 = _mm_load_si128(&v19);
    v5[12].m128i_i32[0] = v14;
    v5[11] = v16;
    v17 = *v9;
    if ( v15 )
    {
      qfree(v15, v18.m128i_i8, a3, a4, v10, v11, *(_OWORD *)&v18, *(_OWORD *)&v19);
      v5[12].m128i_i64[1] = 0;
    }
    if ( v17 )
      v5[12].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    goto LABEL_11;
  }
  if ( !v5[26].m128i_i64[1] )
LABEL_22:
    sub_1E69C0(0.0, a1, (__int64)a2, a3, a4);
  v12 = v5 + 24;
LABEL_11:
  if ( v4 )
    *v4 = (__int64)v9;
  return v12;
}
