__int64 __fastcall sub_81AB70(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        int a6,
        unsigned __int8 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int8 v13; // cl
  __int16 v14; // dx
  unsigned __int8 v15; // si
  unsigned __int8 v16; // r12
  unsigned __int8 v17; // si
  unsigned __int8 v18; // r12
  __int16 v19; // r12
  __int16 v20; // si
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128i v29; // xmm0
  _QWORD *v30; // rax
  unsigned int v31; // r13d
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // eax
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __int64 v39; // r15
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rdx
  _QWORD *v46; // rax
  unsigned __int8 v47; // al
  __int64 result; // rax
  unsigned int v49; // [rsp+8h] [rbp-B0h]
  int v50; // [rsp+8h] [rbp-B0h]
  __int64 v51; // [rsp+8h] [rbp-B0h]
  __int64 v52; // [rsp+8h] [rbp-B0h]
  __int64 v53; // [rsp+8h] [rbp-B0h]
  __int64 v54; // [rsp+8h] [rbp-B0h]
  unsigned int v55; // [rsp+10h] [rbp-A8h]
  unsigned int v56; // [rsp+10h] [rbp-A8h]
  __int64 v57; // [rsp+10h] [rbp-A8h]
  __int16 v58; // [rsp+18h] [rbp-A0h]
  int v59; // [rsp+20h] [rbp-98h]
  __m128i v60; // [rsp+30h] [rbp-88h] BYREF
  __int64 v61; // [rsp+40h] [rbp-78h]
  __m128i v62; // [rsp+50h] [rbp-68h] BYREF
  __int64 v63; // [rsp+60h] [rbp-58h]

  v13 = a7;
  v14 = a9;
  v15 = *(_BYTE *)(a10 + 1);
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x45;
  v16 = v15;
  v17 = (v15 >> 1) & 3;
  v18 = (v16 >> 3) & 7;
  if ( byte_4AD234C )
  {
    v59 = a6;
    v58 = a5;
    v57 = a3;
    sub_AC4570(69);
    v14 = a9;
    v13 = a7;
    a6 = v59;
    a5 = v58;
    a3 = v57;
  }
  *(_QWORD *)(a1 + 8) = a3;
  *(_WORD *)(a1 + 22) = v14 + 1;
  v19 = (2 * v17) | (8 * v18);
  v20 = *(_WORD *)(a1 + 1);
  *(_DWORD *)(a1 + 16) = a6;
  *(_WORD *)(a1 + 20) = (2 * a5) | v13;
  *(_WORD *)(a1 + 1) = v20 & 0xF801 | v19;
  v21 = a2[274];
  v22 = 24LL * (a5 & 0x7FFF);
  a2[284] += v22;
  v23 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= v22 + v23 && v21 )
    a2[274] = v22 + v23;
  else
    v23 = sub_804090((__int64)(a2 + 274), v22, 3);
  *(_QWORD *)(a1 + 24) = v23;
  v24 = a1;
  sub_AC4830(&v62);
  v29 = _mm_load_si128(&v62);
  v61 = v63;
  v60 = v29;
  if ( (v29.m128i_i8[8] & 3) != 0 )
  {
    if ( v29.m128i_i64[1] > 3uLL )
    {
      sub_ACE150(&v60);
      if ( (v62.m128i_i8[8] & 3) == 0 )
        goto LABEL_9;
      goto LABEL_41;
    }
    v24 = 1;
    sub_ACE0F0(&v60, 1);
  }
  else
  {
    v60.m128i_i64[0] += 8;
  }
  if ( (v62.m128i_i8[8] & 3) == 0 )
  {
LABEL_9:
    v30 = (_QWORD *)v62.m128i_i64[0];
    goto LABEL_10;
  }
LABEL_41:
  v30 = (_QWORD *)sub_ACE280(&v62, v24, v25, v26, v27, v28);
LABEL_10:
  *v30 = a10;
  v31 = 0;
  v32 = 0;
  if ( *(_WORD *)(a1 + 20) >> 1 )
  {
    while ( 1 )
    {
      v33 = *(_QWORD *)(a1 + 24);
      v34 = 3LL * v31;
      *(__m128i *)(v33 + 8 * v34) = _mm_loadu_si128((const __m128i *)(a4 + 24LL * v31));
      v35 = *(_QWORD *)(a4 + 24LL * v31 + 16);
      *(_QWORD *)(v33 + 8 * v34 + 16) = v35;
      v36 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL * v31);
      if ( v36 == 1 )
        break;
      if ( v36 == 2 )
      {
        v41 = (unsigned int)(v32 + 1);
        v42 = *(_QWORD *)(a8 + 8LL * (unsigned int)v32);
        v62 = _mm_load_si128(&v60);
        v63 = v61;
        if ( (v60.m128i_i8[8] & 3) == 0 )
        {
          v60.m128i_i64[0] += 8;
          goto LABEL_22;
        }
        v55 = v32 + 1;
        v53 = v42;
        if ( v60.m128i_i64[1] <= 3uLL )
        {
          v35 = 1;
          sub_ACE0F0(&v60, 1);
          v41 = v55;
          v42 = v53;
LABEL_22:
          if ( (v62.m128i_i8[8] & 3) == 0 )
            goto LABEL_23;
LABEL_38:
          v56 = v41;
          v54 = v42;
          v43 = (_QWORD *)sub_ACE280(&v62, v35, v41, v42, v27, v28);
          v41 = v56;
          v42 = v54;
        }
        else
        {
          sub_ACE150(&v60);
          v42 = v53;
          v41 = v55;
          if ( (v62.m128i_i8[8] & 3) != 0 )
            goto LABEL_38;
LABEL_23:
          v43 = (_QWORD *)v62.m128i_i64[0];
        }
        *v43 = v42;
        v32 = (unsigned int)(v32 + 2);
        v44 = _mm_load_si128(&v60);
        v45 = *(_QWORD *)(a8 + 8 * v41);
        v63 = v61;
        v62 = v44;
        if ( (v60.m128i_i8[8] & 3) == 0 )
        {
          v60.m128i_i64[0] += 8;
          goto LABEL_26;
        }
        v51 = v45;
        if ( v60.m128i_i64[1] <= 3uLL )
        {
          v35 = 1;
          sub_ACE0F0(&v60, 1);
          v45 = v51;
LABEL_26:
          if ( (v62.m128i_i8[8] & 3) == 0 )
            goto LABEL_27;
LABEL_35:
          v52 = v45;
          v46 = (_QWORD *)sub_ACE280(&v62, v35, v45, v42, v27, v28);
          v45 = v52;
        }
        else
        {
          sub_ACE150(&v60);
          v45 = v51;
          if ( (v62.m128i_i8[8] & 3) != 0 )
            goto LABEL_35;
LABEL_27:
          v46 = (_QWORD *)v62.m128i_i64[0];
        }
        *v46 = v45;
      }
LABEL_13:
      if ( *(_WORD *)(a1 + 20) >> 1 == ++v31 )
        goto LABEL_29;
    }
    v37 = _mm_load_si128(&v60);
    v38 = (unsigned int)(v32 + 1);
    v39 = *(_QWORD *)(a8 + 8 * v32);
    v63 = v61;
    v62 = v37;
    if ( (v60.m128i_i8[8] & 3) != 0 )
    {
      v49 = v38;
      if ( v60.m128i_i64[1] > 3uLL )
      {
        sub_ACE150(&v60);
        v38 = v49;
        if ( (v62.m128i_i8[8] & 3) == 0 )
          goto LABEL_18;
        goto LABEL_32;
      }
      v35 = 1;
      sub_ACE0F0(&v60, 1);
      v38 = v49;
    }
    else
    {
      v60.m128i_i64[0] += 8;
    }
    if ( (v62.m128i_i8[8] & 3) == 0 )
    {
LABEL_18:
      v40 = (_QWORD *)v62.m128i_i64[0];
LABEL_19:
      *v40 = v39;
      v32 = (unsigned int)v38;
      goto LABEL_13;
    }
LABEL_32:
    v50 = v38;
    v40 = (_QWORD *)sub_ACE280(&v62, v35, v38, v33, v27, v28);
    LODWORD(v38) = v50;
    goto LABEL_19;
  }
LABEL_29:
  v47 = sub_76C880(a1);
  *(_BYTE *)(a1 + 1) = (v47 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v47 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

