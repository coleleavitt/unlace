__int64 __fastcall sub_E79430(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int16 v8; // ax
  unsigned int v9; // r15d
  unsigned __int8 *v10; // r12
  unsigned __int8 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  void **v15; // r14
  __m128i *v16; // rdi
  __int64 v17; // rax
  size_t v19; // rdx
  _QWORD *v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r15
  void *v26; // rdi
  __int64 v27; // [rsp+0h] [rbp-B8h]
  __int64 v28; // [rsp+0h] [rbp-B8h]
  void *src; // [rsp+10h] [rbp-A8h] BYREF
  size_t n; // [rsp+18h] [rbp-A0h]
  __m128i v32; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int8 *v33; // [rsp+30h] [rbp-88h] BYREF
  void *v34; // [rsp+38h] [rbp-80h]
  size_t v35; // [rsp+40h] [rbp-78h]
  _OWORD v36[7]; // [rsp+48h] [rbp-70h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(v6 + 32);
  src = &v32;
  v27 = v7;
  sub_E78CB0(&src, "cannot mangle this %0 yet", (__int64)"");
  HIDWORD(v33) = 0;
  HIBYTE(v8) = BYTE1(v33) & 0xFE;
  LOBYTE(v8) = -20;
  LOWORD(v33) = v8;
  v34 = v36;
  if ( src == &v32 )
  {
    v36[0] = _mm_load_si128(&v32);
  }
  else
  {
    v34 = src;
    *(_QWORD *)&v36[0] = v32.m128i_i64[0];
  }
  v35 = n;
  v9 = sub_FD5980(v27, &v33);
  if ( v34 != v36 )
    operator delete(v34);
  sub_FC70B0(&v33, v6, 0, v9);
  v10 = v33;
  if ( !v33 )
  {
    v20 = v34;
    v21 = *((_DWORD *)v34 + 3744);
    if ( v21 )
    {
      v22 = (unsigned int)(v21 - 1);
      *((_DWORD *)v34 + 3744) = v22;
      v10 = (unsigned __int8 *)v20[v22 + 1856];
      v23 = *((unsigned int *)v10 + 134);
      v24 = *((_QWORD *)v10 + 66);
      *v10 = 0;
      *((_DWORD *)v10 + 106) = 0;
      v25 = v24 + (v23 << 6);
      while ( v24 != v25 )
      {
        while ( 1 )
        {
          v25 -= 64;
          v26 = *(void **)(v25 + 24);
          if ( v26 == (void *)(v25 + 40) )
            break;
          v28 = v24;
          operator delete(v26);
          v24 = v28;
          if ( v28 == v25 )
            goto LABEL_27;
        }
      }
LABEL_27:
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
    v33 = v10;
  }
  v10[*v10 + 1] = 0;
  src = &v32;
  sub_E78CB0(&src, a3, (__int64)&a3[a4]);
  v11 = v33;
  v12 = *v33;
  *v33 = v12 + 1;
  v13 = (unsigned __int8)v12;
  v14 = 32 * (v12 + 3);
  v15 = (void **)&v11[v14];
  v16 = *(__m128i **)&v11[v14];
  if ( src == &v32 )
  {
    v19 = n;
    if ( n )
    {
      if ( n == 1 )
        v16->m128i_i8[0] = v32.m128i_i8[0];
      else
        memcpy(v16, src, n);
      v19 = n;
      v16 = (__m128i *)*v15;
    }
    v15[1] = (void *)v19;
    v16->m128i_i8[v19] = 0;
    v16 = (__m128i *)src;
  }
  else
  {
    if ( v16 == (__m128i *)&v11[v14 + 16] )
    {
      *v15 = src;
      v15[1] = (void *)n;
      v15[2] = (void *)v32.m128i_i64[0];
    }
    else
    {
      v17 = *(_QWORD *)&v11[32 * v13 + 112];
      *v15 = src;
      v15[1] = (void *)n;
      v15[2] = (void *)v32.m128i_i64[0];
      if ( v16 )
      {
        src = v16;
        v32.m128i_i64[0] = v17;
        goto LABEL_10;
      }
    }
    v16 = &v32;
    src = &v32;
  }
LABEL_10:
  n = 0;
  v16->m128i_i8[0] = 0;
  if ( src != &v32 )
    operator delete(src);
  sub_FC70F0(a1, &v33);
  sub_AEA040((__int64)&v33);
  return a1;
}
