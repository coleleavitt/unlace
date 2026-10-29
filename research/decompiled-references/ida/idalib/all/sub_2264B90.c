__int64 __fastcall sub_2264B90(__int64 a1, __int64 a2, const char **a3, char a4, unsigned __int64 a5)
{
  __int64 v8; // r14
  void *v9; // rdi
  __int64 v11; // rax
  int v12; // eax
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  char v17; // dl
  __int64 v18; // rax
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rax
  bool v23; // zf
  char v24; // [rsp+10h] [rbp-2E8h]
  _QWORD v26[4]; // [rsp+40h] [rbp-2B8h] BYREF
  __int16 v27; // [rsp+60h] [rbp-298h]
  _BYTE v28[16]; // [rsp+70h] [rbp-288h] BYREF
  __m128i v29[2]; // [rsp+80h] [rbp-278h] BYREF
  _BYTE v30[48]; // [rsp+A0h] [rbp-258h] BYREF
  void *v31; // [rsp+D0h] [rbp-228h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-220h]
  _BYTE v33[136]; // [rsp+E8h] [rbp-210h] BYREF
  void *v34; // [rsp+170h] [rbp-188h] BYREF
  __m128i v35; // [rsp+178h] [rbp-180h]
  _BYTE v36[136]; // [rsp+188h] [rbp-170h] BYREF
  _BYTE ptr[24]; // [rsp+210h] [rbp-E8h] BYREF
  _BYTE v38[128]; // [rsp+228h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+2A8h] [rbp-50h]
  char v40; // [rsp+2B0h] [rbp-48h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v31 = v33;
  sub_22538C0(a3, (__int64)&v31);
  (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)a2 + 112LL))(a2, &v31);
  if ( *(_BYTE *)(a2 + 56) )
    sub_228F0B0(&v31, 1, 0);
  v8 = *(_QWORD *)(a2 + 16);
  if ( !si128.m128i_i64[0] )
  {
    *(_QWORD *)ptr = v38;
    *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_225F770(a1, (__int64)ptr, v8);
    v9 = *(void **)ptr;
    if ( *(_BYTE **)ptr != v38 )
      goto LABEL_5;
    goto LABEL_6;
  }
  sub_22892D0(v28, v31, si128.m128i_i64[0], 0);
  sub_2289320(v30, v31, si128.m128i_i64[0]);
  while ( 1 )
  {
    while ( 1 )
    {
      *(__m128i *)ptr = _mm_load_si128(v29);
      v11 = sub_225F490(v8 + 136, (__int64)ptr);
      if ( v11 == v8 + 144 )
      {
        sub_2289340(v28);
        goto LABEL_38;
      }
      v8 = *(_QWORD *)(v11 + 64);
      sub_2289340(v28);
      if ( !v8 )
        goto LABEL_38;
      v12 = *(_DWORD *)(v8 + 8);
      if ( v12 == 3 )
        break;
      if ( !v12 )
      {
        if ( (unsigned __int8)sub_22895C0(v28, v30) )
        {
          *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          *(_QWORD *)ptr = v38;
          if ( !si128.m128i_i64[0] )
          {
LABEL_29:
            v20 = v8;
            goto LABEL_30;
          }
LABEL_46:
          sub_9C3DB0((void **)ptr, (const void **)&v31);
          goto LABEL_29;
        }
LABEL_38:
        *(_BYTE *)(a1 + 160) |= 1u;
        v22 = std::_V2::generic_category((std::_V2 *)v28);
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v22;
        goto LABEL_6;
      }
      if ( v12 == 2 )
      {
        if ( (unsigned __int8)sub_22895C0(v28, v30) )
        {
          v21 = *(_QWORD *)(v8 + 48);
          *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          *(_QWORD *)ptr = v38;
          if ( si128.m128i_i64[0] )
            sub_9C3DB0((void **)ptr, (const void **)&v31);
          v20 = v21;
LABEL_30:
          sub_225F770(a1, (__int64)ptr, v20);
          v9 = *(void **)ptr;
          if ( *(_BYTE **)ptr != v38 )
            goto LABEL_5;
          goto LABEL_6;
        }
        goto LABEL_38;
      }
      if ( (unsigned __int8)sub_22895C0(v28, v30) )
      {
        *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
        *(_QWORD *)ptr = v38;
        if ( !si128.m128i_i64[0] )
          goto LABEL_29;
        goto LABEL_46;
      }
    }
    if ( (unsigned __int8)sub_22895C0(v28, v30) == 1 && !a4 )
    {
      *(__m128i *)&ptr[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      *(_QWORD *)ptr = v38;
      if ( !si128.m128i_i64[0] )
        goto LABEL_29;
      goto LABEL_46;
    }
    if ( a5 > 0x10 )
      goto LABEL_38;
    v13 = *(_BYTE **)(v8 + 48);
    v14 = *(_QWORD *)(v8 + 56);
    v34 = v36;
    v35 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(&v34, v13, &v13[v14]);
    v15 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a2 + 112LL))(a2, &v34);
    if ( v15 )
    {
      *(_BYTE *)(a1 + 160) |= 1u;
      *(_DWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = v16;
      goto LABEL_24;
    }
    v27 = 261;
    v26[0] = v34;
    v26[1] = v35.m128i_i64[0];
    sub_2264B90(ptr, a2, v26, 1, a5 + 1);
    if ( (v40 & 1) != 0 )
      goto LABEL_50;
    if ( (unsigned __int8)sub_22895C0(v28, v30) )
      break;
    v8 = v39;
    v17 = v40 & 1;
    if ( *(_DWORD *)(v39 + 8) != 1 )
    {
      *(_BYTE *)(a1 + 160) |= 1u;
      v24 = v17;
      v18 = std::_V2::generic_category((std::_V2 *)v28);
      *(_DWORD *)a1 = 2;
      v19 = v24;
      *(_QWORD *)(a1 + 8) = v18;
      goto LABEL_21;
    }
    if ( !v17 && *(_BYTE **)ptr != v38 )
      free(*(void **)ptr);
    if ( v34 != v36 )
      free(v34);
  }
  if ( (v40 & 1) != 0 )
  {
LABEL_50:
    *(_BYTE *)(a1 + 160) |= 1u;
    *(_DWORD *)a1 = *(_DWORD *)ptr;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&ptr[8];
  }
  else
  {
    *(_BYTE *)(a1 + 160) &= ~1u;
    v23 = *(_QWORD *)&ptr[8] == 0;
    *(_QWORD *)a1 = a1 + 24;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 128;
    if ( v23 )
    {
      *(_QWORD *)(a1 + 152) = v39;
      goto LABEL_22;
    }
    sub_9C3C90((char **)a1, (char **)ptr);
    v19 = v40 & 1;
    *(_QWORD *)(a1 + 152) = v39;
LABEL_21:
    if ( !v19 )
    {
LABEL_22:
      if ( *(_BYTE **)ptr != v38 )
        free(*(void **)ptr);
    }
  }
LABEL_24:
  v9 = v34;
  if ( v34 == v36 )
    goto LABEL_6;
LABEL_5:
  free(v9);
LABEL_6:
  if ( v31 != v33 )
    free(v31);
  return a1;
}
