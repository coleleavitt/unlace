unsigned __int64 __fastcall sub_67F440(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v4; // r12
  char v6; // r13
  __int64 i; // rax
  __int64 v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  int v11; // esi
  __int64 v12; // rdi
  unsigned __int8 v13; // cl
  __int16 v14; // dx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  char v23; // dl
  __int16 v24; // ax
  unsigned int v25; // eax
  char v26; // al
  unsigned __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rbx
  char v30; // al
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  char v35; // al
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdx
  char v39; // al
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rsi
  __int16 v45; // ax
  unsigned __int64 v46; // rcx
  unsigned __int8 *v47; // rdx
  unsigned __int8 *v48; // rax
  __int64 v49; // rdx
  char v50; // al
  unsigned __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // r13
  char v56; // al
  unsigned int v57; // eax
  bool v58; // zf
  __int64 v59; // rax
  int v60; // eax
  unsigned __int8 v61; // cl
  unsigned __int8 *v62; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v63; // [rsp+8h] [rbp-100h]
  __m128i v64; // [rsp+10h] [rbp-F8h]
  __m128i v65; // [rsp+20h] [rbp-E8h]
  __m128i v66; // [rsp+30h] [rbp-D8h]
  __m128i v67; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v68; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v69; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v70; // [rsp+70h] [rbp-98h] BYREF
  __m128i v71; // [rsp+80h] [rbp-88h] BYREF
  __m128i v72; // [rsp+90h] [rbp-78h] BYREF
  __m128i v73; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v74[2]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v75; // [rsp+D8h] [rbp-30h]

  v4 = dword_2CCC3C8;
  v75 = __readfsqword(0x28u);
  if ( (dword_2CCC3C8 & 0x4000) != 0 )
  {
    if ( (dword_2CCC3C8 & 0x80u) != 0 )
    {
      v6 = *(_BYTE *)(a2 + 44);
      *(_BYTE *)(a2 + 48) = v6;
      memmove((void *)(a2 + 36), (const void *)(a2 + 32), 0xCu);
      v23 = *(_BYTE *)(a2 + 29);
      *(_WORD *)(a2 + 34) = *(_WORD *)(a2 + 30);
      v24 = (v23 & 0x10) != 0;
      if ( (v23 & 8) != 0 )
        v24 |= 2u;
      *(_WORD *)(a2 + 32) = v24;
      v25 = *(unsigned __int8 *)(a2 + 28);
      *(_BYTE *)(a2 + 28) &= 7u;
      *(_BYTE *)(a2 + 30) = 0;
      *(_BYTE *)(a2 + 29) = ((unsigned __int8)v25 >> 3) & 7;
      *(_BYTE *)(a2 + 31) = v25 >> 7;
      if ( (v4 & 1) != 0 )
        v6 = 0;
    }
    else
    {
      v6 = *(_BYTE *)(a2 + 48);
    }
    *(_BYTE *)(a2 + 182) = v6;
    for ( i = 0; i != -12; i -= 2 )
      *(_QWORD *)(a2 + 4 * i + 94) = *(unsigned __int16 *)(a2 + i + 46);
    v8 = *(unsigned __int16 *)(a2 + 34);
    v9 = _mm_loadu_si128((const __m128i *)a2);
    *(_OWORD *)(a2 + 102) = -1;
    *(_OWORD *)(a2 + 118) = -1;
    *(_OWORD *)(a2 + 134) = -1;
    *(_OWORD *)(a2 + 150) = -1;
    *(_OWORD *)(a2 + 166) = -1;
    v10 = _mm_loadu_si128((const __m128i *)a2);
    *(_QWORD *)(a2 + 46) = v8;
    v64 = v10;
    v65 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    v66 = _mm_loadu_si128((const __m128i *)(a2 + 32));
    v67 = _mm_loadu_si128((const __m128i *)(a2 + 48));
    v68 = _mm_loadu_si128((const __m128i *)(a2 + 64));
    v69 = _mm_loadu_si128((const __m128i *)(a2 + 80));
    v70 = _mm_loadu_si128((const __m128i *)(a2 + 96));
    v71 = _mm_loadu_si128((const __m128i *)(a2 + 112));
    v72 = _mm_loadu_si128((const __m128i *)(a2 + 128));
    v73 = _mm_loadu_si128((const __m128i *)(a2 + 144));
    v74[0] = _mm_loadu_si128((const __m128i *)(a2 + 160));
    *(__m128i *)((char *)v74 + 11) = _mm_loadu_si128((const __m128i *)(a2 + 171));
    v11 = *(_DWORD *)(a2 + 40);
    v12 = *(_QWORD *)(a2 + 32);
    v13 = *(_BYTE *)(a2 + 40);
    v14 = *(_WORD *)(a2 + 44);
    *(__m128i *)(a1 + 16) = _mm_loadu_si128((const __m128i *)(a2 + 16));
    v15 = _mm_loadu_si128((const __m128i *)&v67.m128i_u16[3]);
    *(_QWORD *)(a1 + 32) = v12;
    *(__m128i *)(a1 + 56) = v15;
    v16 = _mm_loadu_si128((const __m128i *)&v68.m128i_u16[3]);
    *(_DWORD *)(a1 + 40) = v11;
    *(__m128i *)(a1 + 72) = v16;
    v17 = _mm_loadu_si128((const __m128i *)&v69.m128i_u16[3]);
    *(_WORD *)(a1 + 44) = v14;
    *(__m128i *)(a1 + 88) = v17;
    v18 = _mm_loadu_si128((const __m128i *)&v70.m128i_u16[3]);
    *(_QWORD *)(a1 + 48) = v8;
    *(__m128i *)(a1 + 104) = v18;
    v19 = _mm_loadu_si128((const __m128i *)&v71.m128i_u16[3]);
    *(_BYTE *)(a1 + 184) = v6;
    *(__m128i *)(a1 + 120) = v19;
    v20 = _mm_loadu_si128((const __m128i *)&v72.m128i_u16[3]);
    *(_DWORD *)(a1 + 188) = -1;
    *(__m128i *)(a1 + 136) = v20;
    v21 = _mm_loadu_si128((const __m128i *)&v73.m128i_u16[3]);
    *(__m128i *)a1 = v9;
    *(__m128i *)(a1 + 152) = v21;
    *(__m128i *)(a1 + 168) = _mm_loadu_si128((const __m128i *)&v74[0].m128i_u16[3]);
    if ( v13 <= 0xEu )
      goto LABEL_7;
LABEL_43:
    sub_368890();
  }
  v62 = (unsigned __int8 *)a2;
  v63 = a3;
  v26 = is_cvt64(a1, a2, a3);
  v27 = v63;
  if ( v26 )
  {
    v29 = (unsigned int)unpack_dd(&v62);
    if ( v29 == 0xFFFFFFFFLL )
      v29 = -1;
  }
  else
  {
    v29 = unpack_dq(&v62);
  }
  *(_QWORD *)a1 = v29;
  v30 = is_cvt64(&v62, v27, v28);
  v31 = v63;
  if ( v30 )
  {
    v32 = (unsigned int)v29 + (unsigned int)unpack_dd(&v62);
    v33 = -1;
    if ( v32 == 0xFFFFFFFFLL )
      v32 = -1;
  }
  else
  {
    v32 = v29 + unpack_dq(&v62);
  }
  *(_QWORD *)(a1 + 8) = v32;
  if ( (unsigned __int8)is_cvt64(&v62, v31, v33) && *(_QWORD *)(a1 + 8) == -1 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 24LL) + 16LL);
  v35 = is_cvt64(&v62, v31, v34);
  v36 = v63;
  if ( v35 )
  {
    v37 = (unsigned int)unpack_dd(&v62);
    v38 = -1;
    if ( (unsigned int)v37 == 0xFFFFFFFFLL )
      v37 = -1;
  }
  else
  {
    v37 = unpack_dq(&v62);
  }
  *(_QWORD *)(a1 + 16) = v37;
  v39 = is_cvt64(&v62, v36, v38);
  v40 = v63;
  if ( v39 )
  {
    v41 = (unsigned int)unpack_dd(&v62);
    v42 = -1;
    if ( (unsigned int)v41 == 0xFFFFFFFFLL )
      v41 = -1;
  }
  else
  {
    v41 = unpack_dq(&v62);
  }
  *(_QWORD *)(a1 + 24) = v41;
  if ( (unsigned __int8)is_cvt64(&v62, v40, v42) )
  {
    v43 = (unsigned int)unpack_dd(&v62);
    if ( (unsigned int)v43 == 0xFFFFFFFFLL )
      v43 = -1;
  }
  else
  {
    v43 = unpack_dq(&v62);
  }
  *(_QWORD *)(a1 + 32) = v43;
  v44 = v63;
  v45 = unpack_dw(&v62, v63);
  v46 = v63;
  v47 = v62;
  *(_WORD *)(a1 + 44) = v45;
  if ( (unsigned __int64)v47 >= v46 )
  {
    *(_WORD *)(a1 + 40) = 0;
    v48 = v47;
    goto LABEL_30;
  }
  v44 = *v47;
  v48 = v47 + 1;
  v62 = v47 + 1;
  *(_BYTE *)(a1 + 40) = v44;
  if ( (unsigned __int64)(v47 + 1) >= v46 )
  {
    *(_BYTE *)(a1 + 41) = 0;
    goto LABEL_30;
  }
  v44 = v47[1];
  v48 = v47 + 2;
  v62 = v47 + 2;
  *(_BYTE *)(a1 + 41) = v44;
  if ( (unsigned __int64)(v47 + 2) >= v46 )
  {
LABEL_30:
    *(_BYTE *)(a1 + 42) = 0;
    goto LABEL_31;
  }
  v44 = v47[2];
  v48 = v47 + 3;
  v62 = v47 + 3;
  *(_BYTE *)(a1 + 42) = v44;
  if ( (unsigned __int64)(v47 + 3) < v46 )
  {
    v44 = v47[3];
    v48 = v47 + 4;
    v62 = v47 + 4;
    *(_BYTE *)(a1 + 43) = v44;
    if ( (unsigned __int64)(v47 + 4) >= v46 )
    {
      v49 = 0;
    }
    else
    {
      v48 = v47 + 5;
      v49 = v47[4];
    }
    goto LABEL_32;
  }
LABEL_31:
  *(_BYTE *)(a1 + 43) = 0;
  v49 = 0;
LABEL_32:
  *(_BYTE *)(a1 + 184) = v49;
  v62 = v48;
  v50 = is_cvt64(&v62, v44, v49);
  v51 = v63;
  if ( v50 )
  {
    v52 = (unsigned int)unpack_dd(&v62);
    v53 = -1;
    if ( (unsigned int)v52 == 0xFFFFFFFFLL )
      v52 = -1;
  }
  else
  {
    v52 = unpack_dq(&v62);
  }
  *(_QWORD *)(a1 + 48) = v52;
  v54 = a1 + 56;
  v55 = a1 + 184;
  do
  {
    while ( 1 )
    {
      v56 = is_cvt64(&v62, v51, v53);
      v51 = v63;
      if ( v56 )
        break;
      v54 += 8;
      *(_QWORD *)(v54 - 8) = unpack_dq(&v62) - 1;
      if ( v55 == v54 )
        goto LABEL_40;
    }
    v57 = unpack_dd(&v62);
    v58 = v57 == 0xFFFFFFFFLL;
    v59 = v57 - 1LL;
    v53 = -2;
    if ( v58 )
      v59 = -2;
    v54 += 8;
    *(_QWORD *)(v54 - 8) = v59;
  }
  while ( v55 != v54 );
LABEL_40:
  v60 = -1;
  if ( (dword_2CCC3C8 & 0x8000) == 0 )
    v60 = unpack_dd(&v62) - 1;
  v61 = *(_BYTE *)(a1 + 40);
  *(_DWORD *)(a1 + 188) = v60;
  if ( v61 > 0xEu )
    goto LABEL_43;
LABEL_7:
  if ( *(_BYTE *)(a1 + 41) > 7u )
    sub_368890();
  if ( *(_BYTE *)(a1 + 42) > 7u )
    sub_368890();
  if ( *(_BYTE *)(a1 + 43) > 2u )
    sub_368890();
  if ( *(_BYTE *)(a1 + 184) > 0xCu )
    sub_368890();
  return v75 - __readfsqword(0x28u);
}
