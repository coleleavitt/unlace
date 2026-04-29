__int64 __fastcall sub_DE80(__int64 a1, _WORD *a2, unsigned int *a3, char a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __m128i v25; // xmm1
  __m128i v26; // xmm0
  __m128i v27; // xmm1
  unsigned int v28; // ecx
  __m128i v29; // xmm1
  __int64 v31; // rsi
  unsigned int v33; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+14h] [rbp-84h]
  unsigned int v35; // [rsp+18h] [rbp-80h]
  unsigned int v36; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v37; // [rsp+20h] [rbp-78h]
  unsigned int v38; // [rsp+24h] [rbp-74h]
  unsigned int v39; // [rsp+28h] [rbp-70h]
  unsigned int v40; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v41; // [rsp+30h] [rbp-68h]
  unsigned int v42; // [rsp+34h] [rbp-64h]
  unsigned __int16 v43; // [rsp+38h] [rbp-60h]
  unsigned __int16 v44; // [rsp+3Ah] [rbp-5Eh]
  unsigned int v45; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v46; // [rsp+40h] [rbp-58h]
  __int64 v47; // [rsp+44h] [rbp-54h]
  int v48; // [rsp+4Ch] [rbp-4Ch]
  unsigned int v49; // [rsp+50h] [rbp-48h]
  unsigned int v50; // [rsp+54h] [rbp-44h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v7 = (unsigned __int16)*a2;
  if ( a4 )
  {
    LOWORD(v7) = v7 - 320;
    v8 = 96;
    if ( (unsigned __int16)v7 <= 0x23u )
    {
      v9 = 0x900000001LL;
      v8 = _bittest64(&v9, v7) == 0 ? 96LL : 72LL;
    }
  }
  else
  {
    v8 = 72;
    if ( (v7 & 0xFFDF) != 0x142 )
      v8 = 96;
  }
  sub_DB90(a1, a3, v8, "ECOFF fdr count", -1, -1);
  v10 = *a3;
  if ( !v10 )
    return 0;
  v11 = qcalloc(v10, 96);
  v12 = v11;
  if ( !v11 )
    sub_5B40((__int64)"ecoff fdr");
  if ( v10 > 0 )
  {
    v13 = 0x900000001LL;
    v14 = v11;
    v15 = v11 + 96LL * (unsigned int)v10;
    v16 = (unsigned __int16)*a2;
    if ( !a4 )
    {
      while ( 1 )
      {
        if ( (v16 & 0xFFDF) == 0x142 )
        {
          v14 += 96;
          lread(a1, &v33, 72);
          *(_QWORD *)(v14 - 96) = v33;
          *(_DWORD *)(v14 - 64) = v34;
          *(_DWORD *)(v14 - 60) = v35;
          *(_QWORD *)(v14 - 72) = v36;
          *(_DWORD *)(v14 - 56) = v37;
          *(_DWORD *)(v14 - 52) = v38;
          *(_DWORD *)(v14 - 48) = v39;
          *(_DWORD *)(v14 - 44) = v40;
          *(_DWORD *)(v14 - 40) = v41;
          *(_DWORD *)(v14 - 36) = v42;
          *(__m128i *)(v14 - 32) = _mm_unpacklo_epi64(
                                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(v43), _mm_cvtsi32_si128(v44)),
                                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(v45), _mm_cvtsi32_si128(v46)));
          *(_QWORD *)(v14 - 16) = v47;
          *(_DWORD *)(v14 - 8) = v48;
          *(_QWORD *)(v14 - 88) = v49;
          *(_QWORD *)(v14 - 80) = v50;
          if ( v15 == v14 )
            return v12;
        }
        else
        {
          v31 = v14;
          v14 += 96;
          lread(a1, v31, 96);
          if ( v14 == v15 )
            return v12;
        }
        LOWORD(v16) = *a2;
      }
    }
    LOWORD(v16) = v16 - 320;
    if ( (unsigned __int16)v16 > 0x23u )
      goto LABEL_12;
LABEL_9:
    if ( _bittest64(&v13, v16) )
    {
      v14 += 96;
      lread(a1, &v33, 72);
      *(_QWORD *)(v14 - 96) = _byteswap_ulong(v33);
      *(_DWORD *)(v14 - 64) = _byteswap_ulong(v34);
      *(_DWORD *)(v14 - 60) = _byteswap_ulong(v35);
      *(_QWORD *)(v14 - 72) = _byteswap_ulong(v36);
      *(_DWORD *)(v14 - 56) = _byteswap_ulong(v37);
      *(_DWORD *)(v14 - 52) = _byteswap_ulong(v38);
      *(_DWORD *)(v14 - 48) = _byteswap_ulong(v39);
      *(_DWORD *)(v14 - 44) = _byteswap_ulong(v40);
      *(_DWORD *)(v14 - 40) = _byteswap_ulong(v41);
      *(_DWORD *)(v14 - 36) = _byteswap_ulong(v42);
      *(__m128i *)(v14 - 32) = _mm_unpacklo_epi64(
                                 _mm_unpacklo_epi32(
                                   _mm_cvtsi32_si128((unsigned __int16)__ROL2__(v43, 8)),
                                   _mm_cvtsi32_si128((unsigned __int16)__ROL2__(v44, 8))),
                                 _mm_unpacklo_epi32(
                                   _mm_cvtsi32_si128(_byteswap_ulong(v45)),
                                   _mm_cvtsi32_si128(_byteswap_ulong(v46))));
      *(_DWORD *)(v14 - 16) = _byteswap_ulong(v47);
      *(_DWORD *)(v14 - 12) = _byteswap_ulong(HIDWORD(v47));
      *(_DWORD *)(v14 - 8) = v48;
      *(_QWORD *)(v14 - 88) = _byteswap_ulong(v49);
      *(_QWORD *)(v14 - 80) = _byteswap_ulong(v50);
      if ( v15 != v14 )
        goto LABEL_11;
    }
    else
    {
LABEL_12:
      while ( 1 )
      {
        v17 = v14;
        v14 += 96;
        lread(a1, v17, 96);
        v18 = swap64(*(_QWORD *)(v14 - 96));
        v19 = *(_QWORD *)(v14 - 88);
        *(_QWORD *)(v14 - 96) = v18;
        v20 = swap64(v19);
        v21 = *(_QWORD *)(v14 - 80);
        *(_QWORD *)(v14 - 88) = v20;
        v22 = swap64(v21);
        v23 = *(_QWORD *)(v14 - 72);
        *(_QWORD *)(v14 - 80) = v22;
        v24 = swap64(v23);
        LODWORD(v17) = *(_DWORD *)(v14 - 20);
        *(_QWORD *)(v14 - 72) = v24;
        v25 = _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v14 - 48)));
        LODWORD(v23) = _byteswap_ulong(*(_DWORD *)(v14 - 44));
        LODWORD(v24) = *(_DWORD *)(v14 - 40);
        *(__m128i *)(v14 - 64) = _mm_unpacklo_epi64(
                                   _mm_unpacklo_epi32(
                                     _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v14 - 64))),
                                     _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v14 - 60)))),
                                   _mm_unpacklo_epi32(
                                     _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v14 - 56))),
                                     _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v14 - 52)))));
        v26 = _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v14 - 32)));
        v27 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(v25, _mm_cvtsi32_si128(v23)),
                _mm_unpacklo_epi32(
                  _mm_cvtsi32_si128(_byteswap_ulong(v24)),
                  _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(v14 - 36)))));
        v28 = _byteswap_ulong(*(_DWORD *)(v14 - 28));
        LODWORD(v24) = *(_DWORD *)(v14 - 24);
        *(__m128i *)(v14 - 48) = v27;
        v29 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(_byteswap_ulong(v24)), _mm_cvtsi32_si128(_byteswap_ulong(v17)));
        *(_DWORD *)(v14 - 16) = _byteswap_ulong(*(_DWORD *)(v14 - 16));
        LODWORD(v24) = *(_DWORD *)(v14 - 12);
        *(__m128i *)(v14 - 32) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v26, _mm_cvtsi32_si128(v28)), v29);
        *(_DWORD *)(v14 - 12) = _byteswap_ulong(v24);
        if ( v14 == v15 )
          break;
LABEL_11:
        v16 = (unsigned __int16)*a2;
        LOWORD(v16) = v16 - 320;
        if ( (unsigned __int16)v16 <= 0x23u )
          goto LABEL_9;
      }
    }
  }
  return v12;
}
