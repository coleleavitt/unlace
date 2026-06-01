__int64 __fastcall sub_27F440(_BYTE *a1, const __m128i **a2, __m128i *a3, const __m128i *a4)
{
  bool v5; // zf
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int32 v16; // eax
  __m128i v17; // xmm0
  __int64 *v19; // [rsp+0h] [rbp-78h] BYREF
  int v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+10h] [rbp-68h]
  __m128i v22; // [rsp+20h] [rbp-58h] BYREF
  __m128i v23; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-38h]
  unsigned __int64 v25; // [rsp+58h] [rbp-20h]

  v5 = a1[741] == 0;
  v25 = __readfsqword(0x28u);
  if ( v5 )
  {
    v9 = (*(__int64 (__fastcall **)(_BYTE *, const __m128i *))(*(_QWORD *)a1 + 712LL))(a1, a4);
    v10 = _mm_loadu_si128(a4);
    v21 = v9;
    v11 = a4[2].m128i_i64[0];
    v22 = v10;
    v12 = _mm_loadu_si128(a4 + 1);
    v20 = -1;
    v19 = &idaplace_t___vtable;
    v24 = v11;
    v23 = v12;
    v13 = idaplace_t__clone(&v19);
    v14 = a3[2].m128i_i64[1];
    v15 = v13;
    if ( v14 )
    {
      qfree(v14, a4->m128i_i8);
      a3[2].m128i_i64[1] = 0;
    }
    v16 = v24;
    *a3 = _mm_load_si128(&v22);
    v17 = _mm_load_si128(&v23);
    a3[2].m128i_i32[0] = v16;
    a3[1] = v17;
    if ( v15 )
    {
      a3[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      qfree(v15, a4->m128i_i8);
    }
    *a2 = a3;
  }
  else
  {
    *a2 = a4;
  }
  return 1;
}
