__int64 __fastcall sub_1357DB0(__int64 a1, char *a2)
{
  __m128i si128; // xmm0
  void *v4; // rax
  _BYTE *v5; // rbp
  signed __int64 v6; // rbx
  signed __int64 v7; // rbp
  _QWORD *v8; // rbx
  __m128i v9; // xmm0
  __int64 v10; // r15
  __int64 v11; // r12
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  signed __int64 v14; // rbp
  char v15; // al
  __int64 v16; // rbp
  __int64 v17; // rbx
  char v18; // dl
  __int64 result; // rax
  __m128i src[4]; // [rsp+8h] [rbp-40h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(__m128i *)(a1 + 16) = si128;
  *(_QWORD *)a1 = &off_2BB2158;
  v4 = (void *)(a1 + 72);
  *(_OWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = a1 + 72;
  v5 = *((_BYTE **)a2 + 3);
  v6 = *((_QWORD *)a2 + 4);
  if ( &v5[v6] && !v5 )
LABEL_34:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v6 > 0xF )
  {
    if ( v6 < 0 )
LABEL_33:
      std::__throw_length_error("basic_string::_M_create");
    v4 = (void *)operator new(v6 + 1);
    *(_QWORD *)(a1 + 72) = v6;
    *(_QWORD *)(a1 + 56) = v4;
LABEL_31:
    memcpy(v4, v5, v6);
    v4 = *(void **)(a1 + 56);
    goto LABEL_6;
  }
  if ( v6 == 1 )
  {
    *(_BYTE *)(a1 + 72) = *v5;
    goto LABEL_6;
  }
  if ( v6 )
    goto LABEL_31;
LABEL_6:
  *(_QWORD *)(a1 + 64) = v6;
  *((_BYTE *)v4 + v6) = 0;
  v7 = *((_QWORD *)a2 + 12) - *((_QWORD *)a2 + 11);
  *(_OWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  if ( v7 >> 5 )
  {
    if ( (unsigned __int64)(v7 >> 5) > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v8 = (_QWORD *)operator new(v7);
  }
  else
  {
    v8 = nullptr;
  }
  src[0].m128i_i64[0] = (__int64)v8;
  v9 = _mm_loadl_epi64(src);
  *(_QWORD *)(a1 + 104) = (char *)v8 + v7;
  *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v9, v9);
  v10 = *((_QWORD *)a2 + 12);
  v11 = *((_QWORD *)a2 + 11);
  if ( v10 != v11 )
  {
    while ( 1 )
    {
      *v8 = v8 + 2;
      v13 = *(_BYTE **)v11;
      v14 = *(_QWORD *)(v11 + 8);
      if ( v14 + *(_QWORD *)v11 && !v13 )
        goto LABEL_34;
      if ( (unsigned __int64)v14 > 0xF )
        break;
      v12 = (_BYTE *)*v8;
      if ( v14 == 1 )
      {
        *v12 = *v13;
        v12 = (_BYTE *)*v8;
      }
      else if ( v14 )
      {
        goto LABEL_23;
      }
LABEL_12:
      v11 += 32;
      v8[1] = v14;
      v8 += 4;
      v12[v14] = 0;
      if ( v10 == v11 )
        goto LABEL_24;
    }
    src[0].m128i_i64[0] = *(_QWORD *)v11;
    if ( v14 < 0 )
      goto LABEL_33;
    v12 = (_BYTE *)operator new(v14 + 1);
    v8[2] = v14;
    v13 = (_BYTE *)src[0].m128i_i64[0];
    *v8 = v12;
LABEL_23:
    memcpy(v12, v13, v14);
    v12 = (_BYTE *)*v8;
    goto LABEL_12;
  }
LABEL_24:
  *(_QWORD *)(a1 + 96) = v8;
  v15 = *a2;
  v16 = *((_QWORD *)a2 + 15);
  v17 = *((_QWORD *)a2 + 14);
  *(_BYTE *)(a1 + 115) = 0;
  *(_BYTE *)(a1 + 112) = v15 & 1;
  *(_BYTE *)(a1 + 113) = (v15 & 4) != 0;
  v18 = v15;
  *(_BYTE *)(a1 + 116) = (v15 & 0x10) != 0;
  result = *((unsigned int *)a2 + 4);
  *(_BYTE *)(a1 + 114) = (v18 & 8) != 0;
  for ( *(_QWORD *)(a1 + 120) = (unsigned int)result; v16 != v17; v17 += 40 )
  {
    result = sub_1357C20(a1, *(_BYTE **)v17, *(_QWORD *)(v17 + 8));
    if ( (_BYTE)result )
      ++*(_DWORD *)(a1 + 124);
  }
  return result;
}
