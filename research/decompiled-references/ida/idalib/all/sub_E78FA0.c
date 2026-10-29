__int64 __fastcall sub_E78FA0(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  __int64 v7; // r12
  __int64 v8; // rax
  __int16 v9; // ax
  unsigned int v10; // r15d
  unsigned __int8 *v11; // r12
  unsigned __int8 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  void **v16; // r14
  __m128i *v17; // rdi
  __int64 v18; // rax
  size_t v20; // rdx
  _QWORD *v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // r15
  void *v27; // rdi
  __int64 v28; // [rsp+8h] [rbp-C0h]
  __int64 v29; // [rsp+8h] [rbp-C0h]
  void *src; // [rsp+20h] [rbp-A8h] BYREF
  size_t n; // [rsp+28h] [rbp-A0h]
  __m128i v34; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int8 *v35; // [rsp+40h] [rbp-88h] BYREF
  void *v36; // [rsp+48h] [rbp-80h]
  size_t v37; // [rsp+50h] [rbp-78h]
  _OWORD v38[7]; // [rsp+58h] [rbp-70h] BYREF

  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(_QWORD *)(v7 + 32);
  src = &v34;
  v28 = v8;
  sub_E78CB0(&src, "cannot mangle this %0 yet", (__int64)"");
  HIDWORD(v35) = 0;
  HIBYTE(v9) = BYTE1(v35) & 0xFE;
  LOBYTE(v9) = -20;
  LOWORD(v35) = v9;
  v36 = v38;
  if ( src == &v34 )
  {
    v38[0] = _mm_load_si128(&v34);
  }
  else
  {
    v36 = src;
    *(_QWORD *)&v38[0] = v34.m128i_i64[0];
  }
  v37 = n;
  v10 = sub_FD5980(v28, &v35);
  if ( v36 != v38 )
    operator delete(v36);
  sub_FC70B0(&v35, v7, a3, v10);
  v11 = v35;
  if ( !v35 )
  {
    v21 = v36;
    v22 = *((_DWORD *)v36 + 3744);
    if ( v22 )
    {
      v23 = (unsigned int)(v22 - 1);
      *((_DWORD *)v36 + 3744) = v23;
      v11 = (unsigned __int8 *)v21[v23 + 1856];
      v24 = *((unsigned int *)v11 + 134);
      v25 = *((_QWORD *)v11 + 66);
      *v11 = 0;
      *((_DWORD *)v11 + 106) = 0;
      v26 = v25 + (v24 << 6);
      while ( v25 != v26 )
      {
        while ( 1 )
        {
          v26 -= 64;
          v27 = *(void **)(v26 + 24);
          if ( v27 == (void *)(v26 + 40) )
            break;
          v29 = v25;
          operator delete(v27);
          v25 = v29;
          if ( v29 == v26 )
            goto LABEL_27;
        }
      }
LABEL_27:
      *((_DWORD *)v11 + 134) = 0;
    }
    else
    {
      v11 = (unsigned __int8 *)operator new(0x3A0u);
      *v11 = 0;
      *((_QWORD *)v11 + 12) = v11 + 112;
      *((_QWORD *)v11 + 16) = v11 + 144;
      *((_QWORD *)v11 + 20) = v11 + 176;
      *((_QWORD *)v11 + 24) = v11 + 208;
      *((_QWORD *)v11 + 28) = v11 + 240;
      *((_QWORD *)v11 + 32) = v11 + 272;
      *((_QWORD *)v11 + 36) = v11 + 304;
      *((_QWORD *)v11 + 40) = v11 + 336;
      *((_QWORD *)v11 + 44) = v11 + 368;
      *((_QWORD *)v11 + 48) = v11 + 400;
      *((_QWORD *)v11 + 52) = v11 + 432;
      *((_QWORD *)v11 + 13) = 0;
      v11[112] = 0;
      *((_QWORD *)v11 + 17) = 0;
      v11[144] = 0;
      *((_QWORD *)v11 + 21) = 0;
      v11[176] = 0;
      *((_QWORD *)v11 + 25) = 0;
      v11[208] = 0;
      *((_QWORD *)v11 + 29) = 0;
      v11[240] = 0;
      *((_QWORD *)v11 + 33) = 0;
      v11[272] = 0;
      *((_QWORD *)v11 + 37) = 0;
      v11[304] = 0;
      *((_QWORD *)v11 + 41) = 0;
      v11[336] = 0;
      *((_QWORD *)v11 + 45) = 0;
      v11[368] = 0;
      *((_QWORD *)v11 + 49) = 0;
      v11[400] = 0;
      *((_QWORD *)v11 + 53) = 0x800000000LL;
      *((_QWORD *)v11 + 66) = v11 + 544;
      *((_QWORD *)v11 + 67) = 0x600000000LL;
    }
    v35 = v11;
  }
  v11[*v11 + 1] = 0;
  src = &v34;
  sub_E78CB0(&src, a4, (__int64)&a4[a5]);
  v12 = v35;
  v13 = *v35;
  *v35 = v13 + 1;
  v14 = (unsigned __int8)v13;
  v15 = 32 * (v13 + 3);
  v16 = (void **)&v12[v15];
  v17 = *(__m128i **)&v12[v15];
  if ( src == &v34 )
  {
    v20 = n;
    if ( n )
    {
      if ( n == 1 )
        v17->m128i_i8[0] = v34.m128i_i8[0];
      else
        memcpy(v17, src, n);
      v20 = n;
      v17 = (__m128i *)*v16;
    }
    v16[1] = (void *)v20;
    v17->m128i_i8[v20] = 0;
    v17 = (__m128i *)src;
  }
  else
  {
    if ( v17 == (__m128i *)&v12[v15 + 16] )
    {
      *v16 = src;
      v16[1] = (void *)n;
      v16[2] = (void *)v34.m128i_i64[0];
    }
    else
    {
      v18 = *(_QWORD *)&v12[32 * v14 + 112];
      *v16 = src;
      v16[1] = (void *)n;
      v16[2] = (void *)v34.m128i_i64[0];
      if ( v17 )
      {
        src = v17;
        v34.m128i_i64[0] = v18;
        goto LABEL_10;
      }
    }
    v17 = &v34;
    src = &v34;
  }
LABEL_10:
  n = 0;
  v17->m128i_i8[0] = 0;
  if ( src != &v34 )
    operator delete(src);
  sub_FC70F0(a1, &v35);
  sub_AEA040((__int64)&v35);
  return a1;
}
