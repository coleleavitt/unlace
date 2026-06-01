__int64 __fastcall sub_D77400(_QWORD *a1, char a2)
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
  __int64 *v17; // rdx
  char v18; // dl
  __int64 *v19; // rdi
  char v20; // di
  int v21; // eax
  __int64 *v22; // rsi
  __int64 *v24; // rdi
  __int64 *v25; // rsi
  _QWORD *v26; // rdi
  __int64 *v27; // rax
  char v28; // cl
  __int64 *v29; // rsi
  char v30; // si
  int v31; // edx
  bool v32; // zf
  __int64 *v33; // rsi
  int v34; // ecx
  __m128i v35; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v36; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v38; // [rsp+30h] [rbp-98h] BYREF
  __int64 v39; // [rsp+40h] [rbp-88h] BYREF
  __int64 *v40; // [rsp+48h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-68h] BYREF
  __int64 v42; // [rsp+68h] [rbp-60h]
  char v43; // [rsp+74h] [rbp-54h]
  _QWORD v44[9]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a1[22];
  v35 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v4, 16));
  sub_DFDA50(v4, 16);
  v5 = a1[22];
  v38 = _mm_load_si128(&v35);
  v6 = 16;
  v35 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v5, 16));
  sub_DFDA50(v5, 16);
  v37 = _mm_load_si128(&v35);
  v7 = sub_21D4FB0(v37.m128i_u32[2]);
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
  v36.m128i_i64[0] = v13;
  v36.m128i_i32[2] = v14;
  v16 = sub_21D5390(v8, v6, v15);
  if ( !a2 )
  {
    sub_CDADA0((__int64)&v41, (__int64)&v38);
    sub_CDADA0((__int64)&v39, (__int64)&v37);
    v24 = &v39;
    if ( v16 == v39 )
      v24 = v40;
    if ( (unsigned __int8)sub_21D7760(v24) )
    {
      v25 = &v39;
      if ( v16 != v39 )
      {
LABEL_26:
        sub_21D5A60(v44, v25);
        goto LABEL_27;
      }
LABEL_45:
      sub_21DC120(v44, v25);
      goto LABEL_27;
    }
    if ( v16 == v41 )
    {
      if ( !(unsigned __int8)sub_21D7760(v42) )
      {
LABEL_33:
        v27 = &v39;
        if ( v16 == v39 )
          v27 = v40;
        v28 = *((_BYTE *)v27 + 20);
        if ( (v28 & 7) == 1 )
        {
          sub_9718E0((__int64)v44, &v41);
          goto LABEL_21;
        }
        v29 = &v41;
        if ( v16 == v41 )
          v29 = (__int64 *)v42;
        v30 = *((_BYTE *)v29 + 20);
        if ( (v30 & 7) == 1 )
        {
          sub_9718E0((__int64)v44, &v39);
          goto LABEL_21;
        }
        if ( (v28 & 7) == 3 && (v30 & 7) == 3 )
        {
          v34 = v28 & 8;
          if ( (v34 != 0) != ((v30 & 8) != 0) )
          {
            v32 = (_BYTE)v34 == 0;
            goto LABEL_57;
          }
        }
        if ( v16 != v39 )
        {
LABEL_16:
          v21 = sub_21D6700(&v39, &v41);
          goto LABEL_17;
        }
LABEL_42:
        v21 = sub_21DD2E0(&v39, &v41);
LABEL_17:
        v22 = &v39;
        if ( !v21 )
          v22 = &v41;
        if ( v16 != *v22 )
          goto LABEL_20;
        goto LABEL_50;
      }
    }
    else if ( !(unsigned __int8)sub_21D7760(&v41) )
    {
      goto LABEL_33;
    }
    v25 = &v41;
    if ( v16 != v41 )
      goto LABEL_26;
    goto LABEL_45;
  }
  sub_CDADA0((__int64)&v41, (__int64)&v38);
  sub_CDADA0((__int64)&v39, (__int64)&v37);
  v17 = &v39;
  if ( v39 == v16 )
    v17 = v40;
  v18 = *((_BYTE *)v17 + 20);
  if ( (v18 & 7) != 1 )
  {
    v19 = &v41;
    if ( v16 == v41 )
      v19 = (__int64 *)v42;
    v20 = *((_BYTE *)v19 + 20);
    if ( (v20 & 7) == 1 )
    {
      v22 = &v39;
      if ( v39 != v16 )
      {
LABEL_20:
        sub_21D5A60(v44, v22);
        goto LABEL_21;
      }
LABEL_50:
      sub_21DC120(v44, v22);
      goto LABEL_21;
    }
    if ( (v20 & 7) == 3 && (v18 & 7) == 3 )
    {
      v31 = v18 & 8;
      if ( (v31 != 0) != ((v20 & 8) != 0) )
      {
        v32 = (_BYTE)v31 == 0;
LABEL_57:
        v33 = &v39;
        if ( !v32 )
          v33 = &v41;
        sub_9718E0((__int64)v44, v33);
        goto LABEL_21;
      }
    }
    if ( v39 != v16 )
      goto LABEL_16;
    goto LABEL_42;
  }
  if ( v16 == v41 )
  {
    if ( (*(_BYTE *)(v42 + 20) & 7) != 1 )
    {
      sub_21DC120(v44, &v41);
      goto LABEL_21;
    }
    sub_21DC120(v44, &v41);
  }
  else
  {
    if ( (v43 & 7) != 1 )
    {
      sub_21D5A60(v44, &v41);
      goto LABEL_21;
    }
    sub_21D5A60(v44, &v41);
  }
LABEL_27:
  v26 = v44;
  if ( v16 == v44[0] )
    v26 = (_QWORD *)v44[1];
  sub_21D94F0(v26);
LABEL_21:
  sub_CDAFD0((__int64)&v36, v44);
  sub_971860(v44);
  sub_971860(&v39);
  sub_971860(&v41);
  *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v36);
  return 1;
}

