__int64 __fastcall sub_126F010(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  _BYTE *v7; // rsi
  __int64 v8; // r13
  __m128i *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __m128i *v12; // rdi
  void *v13[2]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v14[16]; // [rsp+10h] [rbp-88h] BYREF
  void *v15; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+28h] [rbp-70h]
  __m128i v17; // [rsp+30h] [rbp-68h] BYREF
  void *v18[2]; // [rsp+40h] [rbp-58h] BYREF
  _WORD v19[36]; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(v4 + 496) )
  {
    v5 = *(_QWORD *)(a2 + 2176) + 192LL * *(unsigned int *)(a2 + 2184) - 192;
    *(_QWORD *)a1 = a1 + 16;
    sub_126E200((_QWORD *)a1, *(_BYTE **)(v4 + 488), *(_QWORD *)(v4 + 488) + *(_QWORD *)(v4 + 496));
    sub_9EE560((_QWORD *)a1, *(_BYTE **)(v5 + 32), *(_QWORD *)(v5 + 40));
    return a1;
  }
  v7 = *(_BYTE **)(v4 + 104);
  v13[0] = v14;
  sub_126E200(v13, v7, (__int64)&v7[*(_QWORD *)(v4 + 112)]);
  v8 = *(_QWORD *)(a2 + 2176) + 192LL * *(unsigned int *)(a2 + 2184) - 192;
  v18[0] = v19;
  sub_126E200(v18, (_BYTE *)v13[0], (__int64)v13[0] + (unsigned __int64)v13[1]);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v18[1] <= 0xA )
    std::__throw_length_error("basic_string::append");
  sub_9EE560(v18, "/../sysroot", 0xBu);
  v9 = (__m128i *)sub_9EE560(v18, *(_BYTE **)(v8 + 32), *(_QWORD *)(v8 + 40));
  v15 = &v17;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
  {
    v17 = _mm_loadu_si128(v9 + 1);
  }
  else
  {
    v15 = (void *)v9->m128i_i64[0];
    v17.m128i_i64[0] = v9[1].m128i_i64[0];
  }
  v10 = v9->m128i_i64[1];
  v9[1].m128i_i8[0] = 0;
  v16 = v10;
  v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
  v9->m128i_i64[1] = 0;
  if ( v18[0] != v19 )
    operator delete(v18[0]);
  v18[0] = &v15;
  v19[8] = 260;
  v11 = sub_228C1E0(v18, 0);
  *(_QWORD *)a1 = a1 + 16;
  if ( v11 )
  {
    v12 = (__m128i *)v15;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
    if ( v12 != &v17 )
      operator delete(v12);
  }
  else
  {
    if ( v15 == &v17 )
    {
      *(__m128i *)(a1 + 16) = _mm_load_si128(&v17);
    }
    else
    {
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 16) = v17.m128i_i64[0];
    }
    *(_QWORD *)(a1 + 8) = v16;
  }
  if ( v13[0] == v14 )
    return a1;
  operator delete(v13[0]);
  return a1;
}
