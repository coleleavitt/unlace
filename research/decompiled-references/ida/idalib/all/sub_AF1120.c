__int64 __fastcall sub_AF1120(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // r12
  __int16 v7; // dx
  __int16 v8; // ax
  __m128i v10; // xmm0
  __m128i v11; // xmm7
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm7
  __m128i v16; // xmm1
  __m128i v17; // xmm2
  __m128i v18; // xmm7
  __m128i v19; // xmm7
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // r14
  __m128i v23; // xmm4
  __m128i v24; // xmm5
  __m128i v25; // xmm6
  __m128i v26; // xmm1
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 *v29; // rax
  char v30; // r8
  __int64 v31; // rsi
  char v32; // al
  __m128i v33; // xmm3
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rdx
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rsi
  char v41; // al
  __int64 *v42; // rax
  char v43; // [rsp+7h] [rbp-221h]
  __int64 v44; // [rsp+8h] [rbp-220h]
  __m128i v45; // [rsp+10h] [rbp-218h]
  __int64 v46; // [rsp+28h] [rbp-200h] BYREF
  __m128i v47; // [rsp+30h] [rbp-1F8h]
  __int64 v48; // [rsp+40h] [rbp-1E8h]
  __m128i v49; // [rsp+50h] [rbp-1D8h]
  __int64 v50; // [rsp+60h] [rbp-1C8h]
  __m128i v51; // [rsp+70h] [rbp-1B8h]
  __int64 v52; // [rsp+80h] [rbp-1A8h]
  __m128i v53; // [rsp+90h] [rbp-198h]
  __int64 v54; // [rsp+A0h] [rbp-188h]
  __m128i v55; // [rsp+B0h] [rbp-178h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-168h]
  __m128i v57; // [rsp+D0h] [rbp-158h]
  __int64 v58; // [rsp+E0h] [rbp-148h]
  __m128i v59; // [rsp+E8h] [rbp-140h]
  __int64 v60; // [rsp+F8h] [rbp-130h]
  __m128i v61; // [rsp+100h] [rbp-128h] BYREF
  _BYTE v62[24]; // [rsp+110h] [rbp-118h] BYREF
  __int64 v63; // [rsp+128h] [rbp-100h]
  __m128i v64; // [rsp+130h] [rbp-F8h] BYREF
  _BYTE v65[24]; // [rsp+140h] [rbp-E8h] BYREF
  __int64 v66; // [rsp+158h] [rbp-D0h]
  __m128i v67; // [rsp+160h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+170h] [rbp-B8h]
  __m128i v69; // [rsp+178h] [rbp-B0h] BYREF
  __int64 v70; // [rsp+188h] [rbp-A0h]
  __m128i v71; // [rsp+190h] [rbp-98h] BYREF
  __m128i si128; // [rsp+1A0h] [rbp-88h] BYREF
  __m128i v73; // [rsp+1B0h] [rbp-78h]
  __m128i v74; // [rsp+1C0h] [rbp-68h]
  _OWORD v75[5]; // [rsp+1D0h] [rbp-58h] BYREF

  v7 = *(_WORD *)a3 & 0x1FF;
  v8 = *(_WORD *)a2 & 0x1FF;
  if ( v7 != 91 )
  {
    if ( v8 != 91 )
      goto LABEL_7;
    if ( v7 == 4 )
    {
      v3 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
      if ( v3 != (unsigned int)sub_BF97A0(*(_BYTE *)(a3 + 2) >> 3) )
        return 0;
      v34 = *(_QWORD *)(a3 + 16);
      v35 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
      if ( !v35 )
        goto LABEL_40;
    }
    else
    {
      if ( ((v7 + 394) & 0x1FFu) > 1 )
        goto LABEL_7;
      v3 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
      if ( v3 != (unsigned int)sub_BFAD70((*(_WORD *)(a3 + 2) >> 3) & 0x3F) )
        return 0;
      v39 = *(_QWORD *)(a3 + 16);
      v40 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
      if ( v40 && v39 )
        v41 = sub_AF1120(a1);
      else
        v41 = v39 == v40;
      if ( !v41 )
        return 0;
      v34 = *(_QWORD *)(a3 + 24);
      v35 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
      if ( !v35 )
        goto LABEL_40;
    }
    goto LABEL_37;
  }
  if ( v8 != 4 )
  {
    if ( ((v8 + 394) & 0x1FFu) > 1 )
    {
LABEL_7:
      v46 = a1;
      v3 = sub_AEF2D0(&v46, a2, a3);
      if ( !(_BYTE)v3 )
        return 0;
      sub_EE9E50(&v71, a3);
      v10 = _mm_loadu_si128((const __m128i *)&si128.m128i_u64[1]);
      v11 = _mm_load_si128(&v71);
      *(_QWORD *)v62 = v73.m128i_i64[1];
      v61 = v10;
      v64 = v11;
      *(_QWORD *)v65 = si128.m128i_i64[0];
      *(__m128i *)&v65[8] = v10;
      v66 = v73.m128i_i64[1];
      sub_EE9E50(&v71, a2);
      v12 = si128.m128i_i64[0];
      v13 = _mm_loadu_si128((const __m128i *)&si128.m128i_u64[1]);
      v14 = v73.m128i_i64[1];
      si128 = _mm_load_si128((const __m128i *)v65);
      v15 = _mm_load_si128((const __m128i *)&v65[16]);
      v16 = _mm_load_si128(&v64);
      *(__m128i *)&v62[8] = v13;
      v17 = _mm_load_si128(&v71);
      v73 = v15;
      *(_QWORD *)v62 = v12;
      v18 = _mm_load_si128((const __m128i *)v62);
      v63 = v14;
      v75[0] = v18;
      v19 = _mm_load_si128((const __m128i *)&v62[16]);
      v47 = v13;
      v20 = _mm_loadu_si128((const __m128i *)&si128.m128i_u64[1]);
      v75[1] = v19;
      v48 = v14;
      v71 = v16;
      v51 = v16;
      v21 = _mm_loadu_si128((const __m128i *)((char *)v75 + 8));
      v50 = v73.m128i_i64[1];
      v52 = si128.m128i_i64[0];
      v22 = v21.m128i_i64[0];
      v60 = v73.m128i_i64[1];
      v74 = v17;
      v49 = v20;
      v59 = v20;
      *(__m128i *)&v62[8] = v21;
      v63 = v19.m128i_i64[1];
      v68 = v73.m128i_i64[1];
      v54 = v73.m128i_i64[1];
      v57 = v20;
      v58 = v73.m128i_i64[1];
      *(_QWORD *)v65 = si128.m128i_i64[0];
      v61 = v21;
      *(__m128i *)&v65[8] = v17;
      v66 = *(_QWORD *)&v75[0];
      v67 = v20;
      v69 = v21;
      v70 = v19.m128i_i64[1];
      v53 = v20;
      v55 = v21;
      v56 = v19.m128i_i64[1];
      *(_QWORD *)v62 = v19.m128i_i64[1];
      v45 = v20;
      v44 = v21.m128i_i64[1];
      while ( 1 )
      {
        v29 = *(__int64 **)&v65[8];
        if ( *(_QWORD *)&v65[8] == v22 && *(_QWORD *)&v65[16] == v44 && *(_OWORD *)&v45 == *(_OWORD *)&v64 )
          return v3;
        if ( v67.m128i_i64[0] != v64.m128i_i64[0] )
          break;
        v30 = 0;
        if ( v67.m128i_i64[1] != v64.m128i_i64[1] )
        {
          if ( (v64.m128i_i8[8] & 3) != 0 )
          {
LABEL_69:
            v4 = *(_QWORD *)sub_EF2B30(&v64);
            v29 = *(__int64 **)&v65[8];
            goto LABEL_20;
          }
LABEL_19:
          v4 = *(_QWORD *)v64.m128i_i64[0];
LABEL_20:
          v30 = v3;
        }
        if ( v29 == (__int64 *)v69.m128i_i64[0] )
        {
          if ( *(_QWORD *)&v65[16] == v69.m128i_i64[1] )
            return 0;
          if ( (v65[16] & 3) != 0 )
          {
LABEL_66:
            v43 = v30;
            v42 = (__int64 *)sub_EF2B30(&v65[8]);
            v30 = v43;
            v31 = *v42;
            goto LABEL_24;
          }
        }
        else if ( (v65[16] & 3) != 0 )
        {
          goto LABEL_66;
        }
        v31 = *v29;
LABEL_24:
        if ( !v30 )
          return 0;
        v32 = v31 && v4 ? sub_AF1120(a1) : v31 == v4;
        if ( !v32 )
          return 0;
        if ( *(_OWORD *)&v64 == *(_OWORD *)&v67 )
        {
          v55 = _mm_load_si128(&v67);
          v56 = v68;
        }
        else
        {
          v33 = _mm_load_si128(&v64);
          *(_QWORD *)v62 = *(_QWORD *)v65;
          v61 = v33;
          if ( (v33.m128i_i8[8] & 3) != 0 )
          {
            if ( (v33.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              sub_EF2960(&v61);
            else
              sub_EF2750(&v61, 1);
          }
          else
          {
            v61.m128i_i64[0] += 8;
          }
          v23 = _mm_load_si128(&v61);
          v56 = *(_QWORD *)v62;
          v55 = v23;
        }
        if ( *(_OWORD *)&v65[8] == *(_OWORD *)&v69 )
        {
          v57 = _mm_loadu_si128(&v69);
          v26 = v57;
          v27 = v70;
          v58 = v70;
        }
        else
        {
          v24 = _mm_loadu_si128((const __m128i *)&v65[8]);
          *(_QWORD *)v62 = v66;
          v61 = v24;
          if ( (v24.m128i_i8[8] & 3) != 0 )
          {
            if ( (v24.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              sub_EF2960(&v61);
            else
              sub_EF2750(&v61, 1);
          }
          else
          {
            v61.m128i_i64[0] += 8;
          }
          v25 = _mm_load_si128(&v61);
          v58 = *(_QWORD *)v62;
          v26 = v25;
          v27 = *(_QWORD *)v62;
          v57 = v25;
        }
        v63 = v27;
        v28 = _mm_load_si128(&v55);
        v66 = v27;
        *(_QWORD *)v62 = v56;
        *(_QWORD *)v65 = v56;
        v61 = v28;
        *(__m128i *)&v62[8] = v26;
        *(__m128i *)&v65[8] = v26;
        v64 = v28;
      }
      if ( (v64.m128i_i8[8] & 3) != 0 )
        goto LABEL_69;
      goto LABEL_19;
    }
    if ( (unsigned int)sub_BFAD70((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != ((*(_BYTE *)(a3 + 3) >> 1) & 0x3F) )
      return 0;
    v36 = *(_QWORD *)(a2 + 16);
    v37 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
    if ( v36 && v37 )
      v38 = sub_AF1120(a1);
    else
      v38 = v37 == v36;
    if ( !v38 )
      return 0;
    v35 = *(_QWORD *)(a2 + 24);
    v34 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 40);
    if ( !v35 )
    {
LABEL_40:
      LOBYTE(v3) = v34 == v35;
      return v3;
    }
LABEL_37:
    if ( v34 )
      return (unsigned int)sub_AF1120(a1);
    goto LABEL_40;
  }
  if ( (unsigned int)sub_BF97A0(*(_BYTE *)(a2 + 2) >> 3) == ((*(_BYTE *)(a3 + 3) >> 1) & 0x3F) )
  {
    v35 = *(_QWORD *)(a2 + 16);
    v34 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
    if ( !v35 )
      goto LABEL_40;
    goto LABEL_37;
  }
  return 0;
}
