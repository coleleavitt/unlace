__int64 __fastcall sub_D77910(_QWORD *a1, char a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r13
  __int32 v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 *v17; // rax
  char v18; // dl
  __int64 *v19; // rdi
  char v20; // r8
  int v21; // eax
  __int64 *v22; // rsi
  __int64 *v23; // rdi
  __int64 *v24; // rsi
  _QWORD *v25; // rdi
  __int64 *v27; // rax
  char v28; // dl
  __int64 *v29; // rsi
  char v30; // si
  int v31; // eax
  int v32; // edx
  __int64 *v33; // rsi
  __m128i v34; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v35; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v36; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v37; // [rsp+30h] [rbp-98h] BYREF
  __int64 v38; // [rsp+40h] [rbp-88h] BYREF
  __int64 *v39; // [rsp+48h] [rbp-80h]
  __int64 v40; // [rsp+60h] [rbp-68h] BYREF
  __int64 v41; // [rsp+68h] [rbp-60h]
  char v42; // [rsp+74h] [rbp-54h]
  _QWORD v43[9]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a1[22];
  v34 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v4, 16));
  sub_DFDA50(v4, 16);
  v5 = a1[22];
  v37 = _mm_load_si128(&v34);
  v6 = 16;
  v34 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v5, 16));
  sub_DFDA50(v5, 16);
  v36 = _mm_load_si128(&v34);
  v7 = sub_21D4FB0(v36.m128i_u32[2]);
  v8 = v7;
  if ( ((unsigned __int64)(unsigned int)sub_21D53F0(v7) + 63) >> 6 == 1 )
  {
    v14 = sub_21D5100(v7);
    v13 = 0;
  }
  else
  {
    v9 = (unsigned int)sub_21D53F0(v7);
    v12 = a1[71];
    v6 = 8 * ((unsigned __int64)(v9 + 63) >> 6);
    v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    a1[81] += v6;
    if ( a1[72] >= (unsigned __int64)(v6 + v13) && v12 )
      a1[71] = v6 + v13;
    else
      v13 = sub_962430((__int64)(a1 + 71), v6, v6, 3, v10, v11);
    v8 = v7;
    v14 = sub_21D5100(v7);
  }
  v35.m128i_i64[0] = v13;
  v35.m128i_i32[2] = v14;
  v16 = sub_21D5390(v8, v6, v15);
  if ( !a2 )
  {
    sub_CDADA0((__int64)&v40, (__int64)&v37);
    sub_CDADA0((__int64)&v38, (__int64)&v36);
    v23 = &v38;
    if ( v16 == v38 )
      v23 = v39;
    if ( (unsigned __int8)sub_21D7760(v23) )
    {
      v24 = &v38;
      if ( v16 != v38 )
      {
LABEL_25:
        sub_21D5A60(v43, v24);
        goto LABEL_26;
      }
LABEL_51:
      sub_21DC120(v43, v24);
LABEL_26:
      v25 = v43;
      if ( v16 != v43[0] )
      {
LABEL_27:
        sub_21D94F0(v25);
        goto LABEL_28;
      }
LABEL_48:
      v25 = (_QWORD *)v43[1];
      goto LABEL_27;
    }
    if ( v16 == v40 )
    {
      if ( !(unsigned __int8)sub_21D7760(v41) )
      {
LABEL_32:
        v27 = &v38;
        if ( v16 == v38 )
          v27 = v39;
        v28 = *((_BYTE *)v27 + 20);
        if ( (v28 & 7) == 1 )
        {
          sub_9718E0((__int64)v43, &v40);
          goto LABEL_28;
        }
        v29 = &v40;
        if ( v16 == v40 )
          v29 = (__int64 *)v41;
        v30 = *((_BYTE *)v29 + 20);
        if ( (v30 & 7) == 1 )
        {
          sub_9718E0((__int64)v43, &v38);
          goto LABEL_28;
        }
        if ( (v28 & 7) == 3 && (v30 & 7) == 3 )
        {
          v32 = v28 & 8;
          if ( (v32 != 0) != ((v30 & 8) != 0) )
            goto LABEL_62;
        }
        if ( v16 == v40 )
          v31 = sub_21DD2E0(&v40, &v38);
        else
          v31 = sub_21D6700(&v40, &v38);
        v22 = &v38;
        if ( !v31 )
          v22 = &v40;
        if ( v16 == *v22 )
          goto LABEL_45;
LABEL_20:
        sub_21D5A60(v43, v22);
        goto LABEL_28;
      }
    }
    else if ( !(unsigned __int8)sub_21D7760(&v40) )
    {
      goto LABEL_32;
    }
    v24 = &v40;
    if ( v16 != v40 )
      goto LABEL_25;
    goto LABEL_51;
  }
  sub_CDADA0((__int64)&v40, (__int64)&v37);
  sub_CDADA0((__int64)&v38, (__int64)&v36);
  v17 = &v38;
  if ( v38 == v16 )
    v17 = v39;
  v18 = *((_BYTE *)v17 + 20);
  if ( (v18 & 7) == 1 )
  {
    if ( v16 == v40 )
    {
      if ( (*(_BYTE *)(v41 + 20) & 7) != 1 )
      {
        sub_21DC120(v43, &v40);
        goto LABEL_28;
      }
      sub_21DC120(v43, &v40);
    }
    else
    {
      if ( (v42 & 7) != 1 )
      {
        sub_21D5A60(v43, &v40);
        goto LABEL_28;
      }
      sub_21D5A60(v43, &v40);
    }
    v25 = v43;
    if ( v43[0] != v16 )
      goto LABEL_27;
    goto LABEL_48;
  }
  v19 = &v40;
  if ( v16 == v40 )
    v19 = (__int64 *)v41;
  v20 = *((_BYTE *)v19 + 20);
  if ( (v20 & 7) == 1 )
  {
    v22 = &v38;
    if ( v38 == v16 )
      goto LABEL_45;
    goto LABEL_20;
  }
  if ( (v20 & 7) != 3 || (v18 & 7) != 3 || (v32 = v18 & 8, (v32 != 0) == ((v20 & 8) != 0)) )
  {
    if ( v16 == v40 )
      v21 = sub_21DD2E0(&v40, &v38);
    else
      v21 = sub_21D6700(&v40, &v38);
    v22 = &v38;
    if ( !v21 )
      v22 = &v40;
    if ( *v22 != v16 )
      goto LABEL_20;
LABEL_45:
    sub_21DC120(v43, v22);
    goto LABEL_28;
  }
LABEL_62:
  v33 = &v40;
  if ( (_BYTE)v32 )
    v33 = &v38;
  sub_9718E0((__int64)v43, v33);
LABEL_28:
  sub_CDAFD0((__int64)&v35, v43);
  sub_971860(v43);
  sub_971860(&v38);
  sub_971860(&v40);
  *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v35);
  return 1;
}

