__int64 __fastcall sub_C0CBF0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  char v11; // al
  bool v12; // zf
  char v13; // r10
  char v14; // dl
  char v15; // al
  char v16; // cl
  char v17; // al
  __int16 v18; // dx
  __int16 v19; // ax
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __m128i v24; // xmm4
  _QWORD *v25; // rax
  unsigned int v26; // r15d
  unsigned int v27; // r13d
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // eax
  __m128i v31; // xmm1
  unsigned int v32; // edx
  __int64 v33; // r13
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __m128i v38; // xmm3
  __int64 v39; // rdx
  _QWORD *v40; // rax
  unsigned __int8 v41; // al
  __int64 result; // rax
  char v43; // [rsp+0h] [rbp-A8h]
  unsigned int v44; // [rsp+8h] [rbp-A0h]
  unsigned int v45; // [rsp+8h] [rbp-A0h]
  __int64 v46; // [rsp+8h] [rbp-A0h]
  __int64 v47; // [rsp+8h] [rbp-A0h]
  __int64 v48; // [rsp+8h] [rbp-A0h]
  __int64 v49; // [rsp+8h] [rbp-A0h]
  __int64 v50; // [rsp+8h] [rbp-A0h]
  unsigned int v51; // [rsp+10h] [rbp-98h]
  unsigned int v52; // [rsp+10h] [rbp-98h]
  __int16 v53; // [rsp+10h] [rbp-98h]
  unsigned int v54; // [rsp+18h] [rbp-90h]
  __m128i v55; // [rsp+20h] [rbp-88h] BYREF
  __int64 v56; // [rsp+30h] [rbp-78h]
  __m128i v57; // [rsp+40h] [rbp-68h] BYREF
  __int64 v58; // [rsp+50h] [rbp-58h]

  v11 = a7;
  v12 = unk_2CD7484 == 0;
  v13 = *(_BYTE *)(a10 + 1);
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x44;
  if ( !v12 )
  {
    v54 = a6;
    v53 = a5;
    v50 = a3;
    v43 = v13;
    sub_EE9B50(68);
    v11 = a7;
    a6 = v54;
    a5 = v53;
    a3 = v50;
    v13 = v43;
  }
  *(_QWORD *)(a1 + 8) = a3;
  v14 = v11;
  v15 = *(_BYTE *)(a1 + 20);
  v16 = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(a1 + 2) &= 0xF8u;
  *(_DWORD *)(a1 + 16) = a6;
  v17 = v14 & 1 | v15 & 0xFE;
  v18 = 2 * a5;
  *(_WORD *)(a1 + 22) = a9 + 1;
  *(_BYTE *)(a1 + 20) = v17;
  v19 = *(_WORD *)(a1 + 20);
  v20 = a5 & 0x7FFF;
  *(_BYTE *)(a1 + 1) = v13 & 0x3E | v16 & 1;
  *(_WORD *)(a1 + 20) = v18 | v19 & 1;
  v21 = a2[294];
  a2[304] += 24 * v20;
  v22 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v23 = 24 * v20 + v22;
  if ( a2[295] >= v23 && v21 )
    a2[294] = v23;
  else
    v22 = sub_986170((__int64)(a2 + 294), 24 * v20, 24 * v20, 3, v20, a6);
  *(_QWORD *)(a1 + 24) = v22;
  sub_EE9E50(&v57, a1);
  v24 = _mm_load_si128(&v57);
  v56 = v58;
  v55 = v24;
  if ( (v24.m128i_i8[8] & 3) != 0 )
  {
    if ( (v24.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      sub_EF2960(&v55);
      if ( (v57.m128i_i8[8] & 3) == 0 )
        goto LABEL_9;
      goto LABEL_44;
    }
    sub_EF2750(&v55, 1);
  }
  else
  {
    v55.m128i_i64[0] += 8;
  }
  if ( (v57.m128i_i8[8] & 3) == 0 )
  {
LABEL_9:
    v25 = (_QWORD *)v57.m128i_i64[0];
    goto LABEL_10;
  }
LABEL_44:
  v25 = (_QWORD *)sub_EF2B30(&v57);
LABEL_10:
  *v25 = a10;
  v26 = 0;
  v27 = 0;
  if ( *(_WORD *)(a1 + 20) >> 1 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)(a1 + 24);
      v29 = 3LL * v26;
      *(__m128i *)(v28 + 8 * v29) = _mm_loadu_si128((const __m128i *)(a4 + 24LL * v26));
      *(_QWORD *)(v28 + 8 * v29 + 16) = *(_QWORD *)(a4 + 24LL * v26 + 16);
      v30 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL * v26);
      if ( v30 == 1 )
        break;
      if ( v30 == 2 )
      {
        v35 = v27 + 1;
        v36 = *(_QWORD *)(a8 + 8LL * v27);
        v57 = _mm_load_si128(&v55);
        v58 = v56;
        if ( (v55.m128i_i8[8] & 3) == 0 )
        {
          v55.m128i_i64[0] += 8;
          goto LABEL_22;
        }
        v51 = v27 + 1;
        v48 = v36;
        if ( (v55.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          sub_EF2960(&v55);
          v36 = v48;
          v35 = v51;
          if ( (v57.m128i_i8[8] & 3) != 0 )
            goto LABEL_38;
LABEL_23:
          v37 = (_QWORD *)v57.m128i_i64[0];
        }
        else
        {
          sub_EF2750(&v55, 1);
          v35 = v51;
          v36 = v48;
LABEL_22:
          if ( (v57.m128i_i8[8] & 3) == 0 )
            goto LABEL_23;
LABEL_38:
          v52 = v35;
          v49 = v36;
          v37 = (_QWORD *)sub_EF2B30(&v57);
          v35 = v52;
          v36 = v49;
        }
        *v37 = v36;
        v27 += 2;
        v38 = _mm_load_si128(&v55);
        v39 = *(_QWORD *)(a8 + 8 * v35);
        v58 = v56;
        v57 = v38;
        if ( (v55.m128i_i8[8] & 3) == 0 )
        {
          v55.m128i_i64[0] += 8;
          goto LABEL_26;
        }
        v46 = v39;
        if ( (v55.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          sub_EF2960(&v55);
          v39 = v46;
          if ( (v57.m128i_i8[8] & 3) != 0 )
            goto LABEL_35;
LABEL_27:
          v40 = (_QWORD *)v57.m128i_i64[0];
        }
        else
        {
          sub_EF2750(&v55, 1);
          v39 = v46;
LABEL_26:
          if ( (v57.m128i_i8[8] & 3) == 0 )
            goto LABEL_27;
LABEL_35:
          v47 = v39;
          v40 = (_QWORD *)sub_EF2B30(&v57);
          v39 = v47;
        }
        *v40 = v39;
      }
LABEL_13:
      if ( *(_WORD *)(a1 + 20) >> 1 == ++v26 )
        goto LABEL_29;
    }
    v31 = _mm_load_si128(&v55);
    v32 = v27 + 1;
    v33 = *(_QWORD *)(a8 + 8LL * v27);
    v58 = v56;
    v57 = v31;
    if ( (v55.m128i_i8[8] & 3) != 0 )
    {
      v44 = v32;
      if ( (v55.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        sub_EF2960(&v55);
        v32 = v44;
        if ( (v57.m128i_i8[8] & 3) == 0 )
          goto LABEL_18;
        goto LABEL_32;
      }
      sub_EF2750(&v55, 1);
      v32 = v44;
    }
    else
    {
      v55.m128i_i64[0] += 8;
    }
    if ( (v57.m128i_i8[8] & 3) == 0 )
    {
LABEL_18:
      v34 = (_QWORD *)v57.m128i_i64[0];
LABEL_19:
      *v34 = v33;
      v27 = v32;
      goto LABEL_13;
    }
LABEL_32:
    v45 = v32;
    v34 = (_QWORD *)sub_EF2B30(&v57);
    v32 = v45;
    goto LABEL_19;
  }
LABEL_29:
  v41 = sub_B64A30(a1);
  *(_BYTE *)(a1 + 1) = (v41 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v41 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}
