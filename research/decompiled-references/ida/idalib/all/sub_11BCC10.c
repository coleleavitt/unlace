__int64 __fastcall sub_11BCC10(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  const char **v6; // rax
  size_t v7; // rsi
  const char *v8; // r14
  __int64 *v9; // rax
  unsigned __int8 *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // rbx
  __int64 v17; // rbp
  __m128i v18; // xmm1
  __int64 v19; // r15
  __m128i *p_si128; // r14
  __int64 v21; // rsi
  __m128i v22; // xmm1
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 *v25; // rbx
  __int64 v26; // r14
  __m128i *v27; // rdx
  __int64 v28; // rsi
  __int64 result; // rax
  __int64 *v30; // rdx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  void *v37; // rdi
  __m128i v38; // [rsp+8h] [rbp-C0h] BYREF
  unsigned __int32 v39; // [rsp+1Ch] [rbp-ACh]
  void *v40[2]; // [rsp+20h] [rbp-A8h] BYREF
  int v41; // [rsp+30h] [rbp-98h] BYREF
  __m128i si128; // [rsp+40h] [rbp-88h] BYREF
  __int128 v43; // [rsp+50h] [rbp-78h] BYREF
  int v44; // [rsp+60h] [rbp-68h]

  v4 = sub_10DCD30(a2, 0x22Cu);
  if ( !v4 )
  {
    v39 = 0;
    goto LABEL_11;
  }
  v5 = v4;
  v6 = *(const char ***)(v4 + 48);
  v7 = 0;
  v8 = *v6;
  if ( *v6 )
    v7 = j__strlen(*v6);
  if ( !(unsigned __int8)sub_2247970(v8, v7, 10, &si128) && si128.m128i_i64[0] == si128.m128i_u32[0] )
  {
    v39 = si128.m128i_i32[0];
    if ( (unsigned int)(si128.m128i_i32[0] - 2) <= 3 )
      goto LABEL_11;
  }
  else
  {
    v39 = 0;
  }
  sub_FC70B0((__int64)&si128, **(_QWORD **)(a1 + 8), 0, 382);
  sub_21B5FF0(v40, v5, a2);
  sub_AEC220((unsigned __int8 **)&si128, (_BYTE *)v40[0], (signed __int64)v40[1]);
  v9 = *(__int64 **)(v5 + 48);
  v10 = (unsigned __int8 *)si128.m128i_i64[0];
  v11 = *v9;
  if ( !si128.m128i_i64[0] )
  {
    v31 = si128.m128i_i64[1];
    v32 = *(_DWORD *)(si128.m128i_i64[1] + 14976);
    if ( v32 )
    {
      v33 = (unsigned int)(v32 - 1);
      *(_DWORD *)(si128.m128i_i64[1] + 14976) = v33;
      v10 = *(unsigned __int8 **)(v31 + 8 * v33 + 14848);
      v34 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v35 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v36 = v35 + (v34 << 6);
      while ( v35 != v36 )
      {
        while ( 1 )
        {
          v36 -= 64;
          v37 = *(void **)(v36 + 24);
          if ( v37 == (void *)(v36 + 40) )
            break;
          v38.m128i_i64[1] = v36;
          v38.m128i_i64[0] = v35;
          operator delete(v37);
          v36 = v38.m128i_i64[1];
          if ( v35 == v38.m128i_i64[1] )
            goto LABEL_49;
        }
      }
LABEL_49:
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 52) = v10 + 432;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    si128.m128i_i64[0] = (__int64)v10;
  }
  v10[*v10 + 1] = 1;
  v12 = si128.m128i_i64[0];
  v13 = *(unsigned __int8 *)si128.m128i_i64[0];
  *(_BYTE *)si128.m128i_i64[0] = v13 + 1;
  *(_QWORD *)(v12 + 8 * v13 + 16) = v11;
  if ( v40[0] != &v41 )
    operator delete(v40[0]);
  sub_AEA040((__int64)&si128);
LABEL_11:
  LODWORD(v43) = 2006;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9B00);
  v14 = sub_21B6DA0(a2, &si128, 5);
  v15 = *(_QWORD *)(a2 + 8);
  v41 = 2006;
  v44 = 2006;
  v16 = (__int64 *)(v15 + 8LL * (unsigned int)v14);
  v17 = v15 + 8 * HIDWORD(v14);
  *(__m128i *)v40 = _mm_load_si128((const __m128i *)&xmmword_23A9B00);
  v38.m128i_i64[0] = v17;
  v43 = *(_OWORD *)v40;
  v18 = (__m128i)_mm_loadh_ps((const double *)v38.m128i_i64);
  si128 = v18;
  if ( v16 != (__int64 *)v17 )
  {
    v38.m128i_i64[0] = (__int64)&v43 + 4;
    do
    {
      v19 = *v16;
      p_si128 = &si128;
      if ( *v16 )
      {
        do
        {
          v21 = p_si128[1].m128i_u32[0];
          if ( !(_DWORD)v21 )
            break;
          if ( (unsigned __int8)sub_21B9810(v19, v21) )
          {
            v38.m128i_i64[0] = v17;
            v18 = (__m128i)_mm_loadh_ps((const double *)v38.m128i_i64);
            goto LABEL_19;
          }
          p_si128 = (__m128i *)((char *)p_si128 + 4);
        }
        while ( (__m128i *)v38.m128i_i64[0] != p_si128 );
      }
      si128.m128i_i64[0] = (__int64)++v16;
    }
    while ( (__int64 *)v17 != v16 );
    v38.m128i_i64[0] = v17;
    v22 = _mm_loadl_epi64(&v38);
    v18 = _mm_unpacklo_epi64(v22, v22);
  }
LABEL_19:
  si128 = v18;
  if ( (__int64 *)v17 == v16 )
    goto LABEL_30;
  v38.m128i_i64[1] = (__int64)&v43 + 4;
LABEL_21:
  v23 = *v16;
  v24 = *(_QWORD *)(*v16 + 16);
  if ( !v24 )
    v24 = *v16;
  v25 = v16 + 1;
  *(_BYTE *)(v24 + 44) |= 1u;
  for ( si128.m128i_i64[0] = (__int64)v25; (__int64 *)v17 != v25; si128.m128i_i64[0] = (__int64)v25 )
  {
    v26 = *v25;
    v27 = &si128;
    if ( *v25 )
    {
      do
      {
        v28 = v27[1].m128i_u32[0];
        v38.m128i_i64[0] = (__int64)v27;
        if ( !(_DWORD)v28 )
          break;
        if ( (unsigned __int8)sub_21B9810(v26, v28) )
        {
          v16 = (__int64 *)si128.m128i_i64[0];
          if ( v17 != si128.m128i_i64[0] )
            goto LABEL_21;
          goto LABEL_29;
        }
        v27 = (__m128i *)(v38.m128i_i64[0] + 4);
      }
      while ( v38.m128i_i64[0] + 4 != v38.m128i_i64[1] );
    }
    ++v25;
  }
LABEL_29:
  result = sub_11BB730(*(_QWORD *)(v23 + 24), *(_QWORD *)(v23 + 32));
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 5 && *(_DWORD *)(a1 + 60) == 20 )
    {
      v30 = *(__int64 **)(a1 + 8);
      v38.m128i_i32[0] = 5;
      sub_FC70B0((__int64)&si128, *v30, 0, 495);
      sub_AEC220((unsigned __int8 **)&si128, *(_BYTE **)(v23 + 24), *(_QWORD *)(v23 + 32));
      sub_AEC220((unsigned __int8 **)&si128, *(_BYTE **)(a1 + 16), *(_QWORD *)(a1 + 24));
      sub_AEA040((__int64)&si128);
      return v38.m128i_u32[0];
    }
  }
  else
  {
LABEL_30:
    result = v39;
    if ( !v39 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 424LL))(a1);
  }
  return result;
}
