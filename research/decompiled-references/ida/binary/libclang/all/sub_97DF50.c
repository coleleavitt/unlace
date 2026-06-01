void __fastcall sub_97DF50(unsigned __int8 ***a1, __int64 a2)
{
  unsigned __int8 v2; // cl
  unsigned __int8 **v3; // r15
  size_t v4; // rbp
  _BYTE *v5; // r14
  unsigned __int8 *v6; // rbx
  double *v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  size_t v12; // rsi
  _BYTE *v13; // rbp
  double *v14; // rdi
  __m128 v15; // xmm0
  __int64 v16; // rax
  double v17; // rcx
  double *v18; // rdi
  unsigned __int8 *v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // r13
  void *v25; // rdi
  __int64 v26; // [rsp+8h] [rbp-B0h]
  void *v27; // [rsp+20h] [rbp-98h] BYREF
  size_t v28; // [rsp+28h] [rbp-90h]
  double src[2]; // [rsp+30h] [rbp-88h] BYREF
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-70h]
  _BYTE v32[96]; // [rsp+58h] [rbp-60h] BYREF

  v2 = *(_BYTE *)(a2 + 12);
  ptr = v32;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  sub_2593F40(a2, (unsigned int)&ptr, 10, v2 ^ 1, 0, 1, 0);
  v3 = *a1;
  v4 = n[0];
  v5 = ptr;
  v6 = **a1;
  if ( !v6 )
  {
    v19 = v3[1];
    v20 = *((_DWORD *)v19 + 3744);
    if ( v20 )
    {
      v21 = (unsigned int)(v20 - 1);
      *((_DWORD *)v19 + 3744) = v21;
      v6 = *(unsigned __int8 **)&v19[8 * v21 + 14848];
      v22 = *((unsigned int *)v6 + 134);
      *v6 = 0;
      v23 = *((_QWORD *)v6 + 66);
      *((_DWORD *)v6 + 106) = 0;
      v24 = v23 + (v22 << 6);
      v26 = v23;
      while ( v26 != v24 )
      {
        v24 -= 64;
        v25 = *(void **)(v24 + 24);
        if ( v25 != (void *)(v24 + 40) )
          operator delete(v25, *(_QWORD *)(v24 + 40) + 1LL);
      }
      *((_DWORD *)v6 + 134) = 0;
    }
    else
    {
      v6 = (unsigned __int8 *)operator new(0x3A0u);
      *v6 = 0;
      *((_QWORD *)v6 + 12) = v6 + 112;
      *((_QWORD *)v6 + 16) = v6 + 144;
      *((_QWORD *)v6 + 20) = v6 + 176;
      *((_QWORD *)v6 + 24) = v6 + 208;
      *((_QWORD *)v6 + 28) = v6 + 240;
      *((_QWORD *)v6 + 32) = v6 + 272;
      *((_QWORD *)v6 + 36) = v6 + 304;
      *((_QWORD *)v6 + 40) = v6 + 336;
      *((_QWORD *)v6 + 44) = v6 + 368;
      *((_QWORD *)v6 + 48) = v6 + 400;
      *((_QWORD *)v6 + 13) = 0;
      v6[112] = 0;
      *((_QWORD *)v6 + 17) = 0;
      v6[144] = 0;
      *((_QWORD *)v6 + 21) = 0;
      v6[176] = 0;
      *((_QWORD *)v6 + 25) = 0;
      v6[208] = 0;
      *((_QWORD *)v6 + 29) = 0;
      v6[240] = 0;
      *((_QWORD *)v6 + 33) = 0;
      v6[272] = 0;
      *((_QWORD *)v6 + 37) = 0;
      v6[304] = 0;
      *((_QWORD *)v6 + 41) = 0;
      v6[336] = 0;
      *((_QWORD *)v6 + 45) = 0;
      v6[368] = 0;
      *((_QWORD *)v6 + 49) = 0;
      v6[400] = 0;
      *((_QWORD *)v6 + 52) = v6 + 432;
      *((_QWORD *)v6 + 53) = 0x800000000LL;
      *((_QWORD *)v6 + 66) = v6 + 544;
      *((_QWORD *)v6 + 67) = 0x600000000LL;
    }
    *v3 = v6;
  }
  v6[*v6 + 1] = 0;
  v27 = src;
  if ( !v5 && v4 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  if ( v4 > 0xF )
  {
    v27 = (void *)std::string::_M_create();
    v18 = (double *)v27;
    *(_QWORD *)&src[0] = v4;
  }
  else
  {
    if ( v4 == 1 )
    {
      LOBYTE(src[0]) = *v5;
LABEL_7:
      v7 = src;
      goto LABEL_8;
    }
    if ( !v4 )
      goto LABEL_7;
    v18 = src;
  }
  memcpy(v18, v5, v4);
  v7 = (double *)v27;
LABEL_8:
  v28 = v4;
  *((_BYTE *)v7 + v4) = 0;
  v8 = *v3;
  v9 = **v3;
  *v8 = v9 + 1;
  v10 = (unsigned __int8)v9;
  v11 = 32 * v9;
  v12 = v28;
  v13 = &v8[v11];
  v14 = *(double **)&v8[v11 + 96];
  if ( v14 == (double *)&v8[v11 + 112] )
  {
    if ( v27 != src )
    {
      *((_QWORD *)v13 + 12) = v27;
      *(__m128 *)&v8[32 * v10 + 104] = _mm_loadh_ps(src);
LABEL_23:
      v27 = src;
      v14 = src;
      goto LABEL_12;
    }
  }
  else if ( v27 != src )
  {
    v15 = _mm_loadh_ps(src);
    v16 = 32LL * v10;
    v17 = *(double *)&v8[v16 + 112];
    *((_QWORD *)v13 + 12) = v27;
    *(__m128 *)&v8[v16 + 104] = v15;
    if ( v14 )
    {
      v27 = v14;
      src[0] = v17;
      goto LABEL_12;
    }
    goto LABEL_23;
  }
  if ( &v27 == (void **)&v8[v11 + 96] )
  {
    v14 = (double *)v27;
  }
  else
  {
    if ( v28 )
    {
      if ( v28 == 1 )
        *(_BYTE *)v14 = LOBYTE(src[0]);
      else
        memcpy(v14, src, v28);
      v12 = v28;
      v14 = *((double **)v13 + 12);
    }
    *((_QWORD *)v13 + 13) = v12;
    *((_BYTE *)v14 + v12) = 0;
    v14 = (double *)v27;
  }
LABEL_12:
  v28 = 0;
  *(_BYTE *)v14 = 0;
  if ( v27 != src )
    operator delete(v27, *(_QWORD *)&src[0] + 1LL);
  if ( ptr != v32 )
    free(ptr);
}

