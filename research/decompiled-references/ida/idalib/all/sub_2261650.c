_QWORD *__fastcall sub_2261650(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  signed __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  _QWORD *v16; // r12
  _BYTE *v17; // rdi
  _QWORD *v18; // rdi
  size_t v19; // rsi
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rax
  unsigned int v23; // [rsp+Ch] [rbp-14Ch]
  void *v24[2]; // [rsp+10h] [rbp-148h] BYREF
  _BYTE v25[16]; // [rsp+20h] [rbp-138h] BYREF
  __m128i v26[2]; // [rsp+30h] [rbp-128h] BYREF
  __int16 v27; // [rsp+50h] [rbp-108h]
  __m128i v28; // [rsp+60h] [rbp-F8h] BYREF
  __int16 v29; // [rsp+80h] [rbp-D8h]
  __m128i v30[3]; // [rsp+90h] [rbp-C8h] BYREF
  __m128i v31[2]; // [rsp+C0h] [rbp-98h] BYREF
  __int16 v32; // [rsp+E0h] [rbp-78h]
  __m128i src; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+100h] [rbp-58h] BYREF

  v4 = a3;
  v7 = a2[6];
  v31[0].m128i_i64[0] = (__int64)"\n";
  v32 = 259;
  v8 = a2[7];
  v28.m128i_i64[0] = v7;
  v29 = 261;
  v28.m128i_i64[1] = v8;
  v24[0] = v25;
  sub_2096AC0(v24, v4, 32);
  v26[0].m128i_i64[0] = (__int64)v24;
  v27 = 260;
  sub_A41580(v30, v26, &v28, v9, v10, v11);
  sub_A41580(&src, v30, v31, v12, v13, v14);
  sub_2253560(a1, &src);
  if ( v24[0] != v25 )
    operator delete(v24[0]);
  v15 = a2[20];
  v16 = a2 + 18;
  v23 = a3 + 2;
  if ( (_QWORD *)v15 != v16 )
  {
    do
    {
      (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD))(**(_QWORD **)(v15 + 64) + 24LL))(
        &src,
        *(_QWORD *)(v15 + 64),
        v23);
      v19 = a1[1];
      v18 = (_QWORD *)*a1;
      v20 = src.m128i_i64[1] + v19;
      if ( (_QWORD *)*a1 == a1 + 2 )
        v21 = 15;
      else
        v21 = a1[2];
      if ( v20 <= v21 )
      {
        if ( src.m128i_i64[1] )
        {
          v17 = (char *)v18 + v19;
          if ( src.m128i_i64[1] == 1 )
            *v17 = *(_BYTE *)src.m128i_i64[0];
          else
            memcpy(v17, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
          v18 = (_QWORD *)*a1;
        }
      }
      else
      {
        sub_998B30((__int64)a1, v19, 0, src.m128i_i64[0], src.m128i_u64[1]);
        v18 = (_QWORD *)*a1;
      }
      a1[1] = v20;
      *((_BYTE *)v18 + v20) = 0;
      if ( (__int64 *)src.m128i_i64[0] != &v34 )
        operator delete((void *)src.m128i_i64[0]);
      v15 = std::_Rb_tree_increment(v15);
    }
    while ( v16 != (_QWORD *)v15 );
  }
  return a1;
}
