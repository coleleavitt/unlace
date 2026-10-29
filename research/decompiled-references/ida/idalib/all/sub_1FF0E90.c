__int64 __fastcall sub_1FF0E90(__m128i **a1, __m128i **a2, int a3)
{
  __m128i *v4; // r15
  __m128i *v5; // rax
  signed __int64 v6; // rbp
  __m128i *v7; // r12
  _QWORD *v8; // rbx
  __m128i v9; // xmm0
  __int64 v10; // rcx
  _BYTE *v11; // rsi
  signed __int64 v12; // rbp
  __int64 v13; // r14
  _BYTE *v14; // rax
  void ***v15; // r12
  void **v16; // rbp
  void **v17; // rbx
  __int32 v18; // eax
  __m128i src; // [rsp+0h] [rbp-48h] BYREF

  switch ( a3 )
  {
    case 2:
      v4 = *a2;
      v5 = (__m128i *)operator new(0x20u);
      v6 = v4->m128i_i64[1] - v4->m128i_i64[0];
      v7 = v5;
      *v5 = 0;
      v5[1].m128i_i64[0] = 0;
      if ( v6 >> 5 )
      {
        if ( (unsigned __int64)(v6 >> 5) > 0x7FFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v8 = (_QWORD *)operator new(v6);
      }
      else
      {
        v8 = nullptr;
      }
      src.m128i_i64[0] = (__int64)v8;
      v9 = _mm_loadl_epi64(&src);
      v7[1].m128i_i64[0] = (__int64)v8 + v6;
      *v7 = _mm_unpacklo_epi64(v9, v9);
      v10 = v4->m128i_i64[0];
      src.m128i_i64[1] = v4->m128i_i64[1];
      if ( src.m128i_i64[1] == v10 )
      {
LABEL_36:
        v18 = v4[1].m128i_i32[2];
        v7->m128i_i64[1] = (__int64)v8;
        *a1 = v7;
        v7[1].m128i_i32[2] = v18;
        return 0;
      }
      *v8 = v8 + 2;
      v11 = *(_BYTE **)v10;
      v12 = *(_QWORD *)(v10 + 8);
      if ( v12 + *(_QWORD *)v10 && !v11 )
LABEL_19:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v13 = v10 + 32;
      while ( (unsigned __int64)v12 <= 0xF )
      {
        v14 = (_BYTE *)*v8;
        if ( v12 == 1 )
        {
          *v14 = *v11;
          v14 = (_BYTE *)*v8;
        }
        else if ( v12 )
        {
          goto LABEL_33;
        }
LABEL_16:
        v8[1] = v12;
        v8 += 4;
        v14[v12] = 0;
        if ( src.m128i_i64[1] == v13 )
          goto LABEL_36;
        v13 += 32;
        *v8 = v8 + 2;
        v11 = *(_BYTE **)(v13 - 32);
        v12 = *(_QWORD *)(v13 - 24);
        if ( &v11[v12] && !v11 )
          goto LABEL_19;
      }
      if ( v12 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      src.m128i_i64[0] = (__int64)v11;
      v14 = (_BYTE *)operator new(v12 + 1);
      v8[2] = v12;
      v11 = (_BYTE *)src.m128i_i64[0];
      *v8 = v14;
LABEL_33:
      memcpy(v14, v11, v12);
      v14 = (_BYTE *)*v8;
      goto LABEL_16;
    case 3:
      v15 = (void ***)*a1;
      if ( *a1 )
      {
        v16 = v15[1];
        v17 = *v15;
        if ( v16 != *v15 )
        {
          do
          {
            while ( *v17 != v17 + 2 )
            {
              operator delete(*v17);
              v17 += 4;
              if ( v17 == v16 )
                goto LABEL_24;
            }
            v17 += 4;
          }
          while ( v16 != v17 );
LABEL_24:
          v17 = *v15;
        }
        if ( v17 )
          operator delete(v17);
        operator delete(v15, 0x20u);
      }
      break;
    case 1:
      *a1 = *a2;
      break;
  }
  return 0;
}
