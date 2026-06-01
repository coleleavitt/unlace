__int64 __fastcall clang_createAPISet(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // xmm2_8
  __m128i v6; // xmm1
  unsigned __int64 v7; // rdx
  _BYTE *v8; // r8
  size_t v9; // rbp
  void *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rbp
  __m128i si128; // xmm0
  _BYTE *v14; // rsi
  void *v15; // rdx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __m128 v18; // xmm3
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rbp
  __int64 v22; // rsi
  _QWORD *v24; // rdi
  void *v25; // rax
  __m128i v26; // [rsp+0h] [rbp-88h] BYREF
  int v27; // [rsp+14h] [rbp-74h]
  _BYTE *v28; // [rsp+18h] [rbp-70h]
  void *v29; // [rsp+28h] [rbp-60h]
  void *v30[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v31[9]; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 && a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    v4 = v3[10];
    v27 = sub_FEE5B0(v3);
    v5 = operator new(0x1E8u);
    v6 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(unsigned __int64)v5);
    v26 = v6;
    v8 = (_BYTE *)sub_FED840(v3);
    v9 = v7;
    if ( !v8 )
    {
      LOBYTE(v31[0]) = 0;
      v30[0] = v31;
      v30[1] = nullptr;
      goto LABEL_10;
    }
    v29 = (void *)v7;
    v10 = (void *)v7;
    v30[0] = v31;
    if ( v7 > 0xF )
    {
      v28 = v8;
      v25 = (void *)std::string::_M_create();
      v8 = v28;
      v30[0] = v25;
      v24 = v25;
      v31[0] = v29;
    }
    else
    {
      if ( v7 == 1 )
      {
        LOBYTE(v31[0]) = *v8;
LABEL_7:
        v11 = v31;
LABEL_8:
        v30[1] = v10;
        *((_BYTE *)v10 + (_QWORD)v11) = 0;
LABEL_10:
        v12 = *(_QWORD *)(v4 + 17288);
        *(_QWORD *)(v5 + 72) = 0;
        *(_QWORD *)(v5 + 16) = v5 + 32;
        *(_OWORD *)v5 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E570);
        *(_QWORD *)(v5 + 24) = 0x400000000LL;
        *(_QWORD *)(v5 + 64) = v5 + 80;
        *(_QWORD *)(v5 + 96) = v5 + 112;
        *(__m128i *)(v5 + 80) = si128;
        sub_63E170((__int64 *)(v5 + 96), *(_BYTE **)(v12 + 216), *(_QWORD *)(v12 + 216) + *(_QWORD *)(v12 + 224));
        v14 = v30[0];
        v15 = v30[1];
        v16 = *(_QWORD *)(v12 + 264);
        v17 = _mm_loadu_si128((const __m128i *)(v12 + 248));
        *(_DWORD *)(v5 + 176) = 0;
        *(_QWORD *)(v5 + 160) = 0;
        *(_QWORD *)(v5 + 144) = v16;
        LOBYTE(v16) = v27;
        *(_QWORD *)(v5 + 168) = 0;
        *(_BYTE *)(v5 + 152) = v16;
        *(_QWORD *)(v5 + 184) = v5 + 200;
        *(__m128i *)(v5 + 128) = v17;
        *(_QWORD *)(v5 + 192) = 0x2000000000LL;
        *(_QWORD *)(v5 + 456) = v5 + 472;
        sub_63E170((__int64 *)(v5 + 456), v14, (__int64)v15 + (_QWORD)v14);
        if ( v30[0] != v31 )
          operator delete(v30[0], v31[0] + 1LL);
        v18 = (__m128)_mm_load_si128(&v26);
        *(__m128 *)v30 = v18;
        v19 = v3[240];
        v20 = v19;
        if ( v3[241] != v19 )
        {
          sub_FF0B30(v3);
          v19 = v3[241];
          v20 = v3[240];
        }
        v21 = (__int64 *)v3[37];
        while ( 1 )
        {
          if ( v20 == v19 )
          {
            if ( (__int64 *)v3[38] == v21 )
            {
LABEL_19:
              *a2 = v5;
              return 0;
            }
          }
          else
          {
            sub_FF0B30(v3);
            if ( (__int64 *)v3[38] == v21 )
              goto LABEL_19;
          }
          v22 = *v21++;
          sub_66D270((__int64 *)v30, v22, *(double *)v17.m128i_i64, v6, *(double *)&v5, v18);
          v19 = v3[241];
          v20 = v3[240];
        }
      }
      if ( !v7 )
        goto LABEL_7;
      v24 = v31;
    }
    memcpy(v24, v8, v9);
    v10 = v29;
    v11 = v30[0];
    goto LABEL_8;
  }
  return 3;
}

