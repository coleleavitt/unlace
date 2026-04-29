unsigned __int64 __fastcall sub_558D0(__int64 a1, _QWORD *a2, __int64 a3, __int16 a4)
{
  unsigned int v4; // r14d
  signed int v6; // r15d
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rax
  __int64 named_type_tid; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // rsi
  __int64 v25; // r9
  __int64 v26; // r10
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  __m128i v29; // xmm0
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // rsi
  __m128i si128; // xmm0
  __m128i *v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // r9
  __int64 v40; // r10
  unsigned __int64 v41; // rdx
  __int64 v42; // rsi
  __m128i v43; // xmm0
  __m128i *v44; // r9
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+18h] [rbp-70h]
  unsigned __int64 v47; // [rsp+18h] [rbp-70h]
  unsigned __int64 v48; // [rsp+18h] [rbp-70h]
  unsigned __int64 v49; // [rsp+18h] [rbp-70h]
  __int64 v50; // [rsp+20h] [rbp-68h]
  __int64 v51; // [rsp+20h] [rbp-68h]
  __int64 v52; // [rsp+20h] [rbp-68h]
  __int64 v53; // [rsp+20h] [rbp-68h]
  __int64 v54; // [rsp+28h] [rbp-60h]
  __int64 v55; // [rsp+28h] [rbp-60h]
  __int64 v56; // [rsp+28h] [rbp-60h]
  __int64 v57; // [rsp+28h] [rbp-60h]
  __int64 v58; // [rsp+30h] [rbp-58h] BYREF
  __int128 v59; // [rsp+38h] [rbp-50h]
  unsigned __int64 v60; // [rsp+48h] [rbp-40h]

  v4 = a4 & 0x2000;
  v6 = v4 >> 13;
  v60 = __readfsqword(0x28u);
  v8 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    v6 += 2;
    v12 = *(_QWORD *)(a1 + 8 * (v6 + 696LL));
    if ( v12 )
    {
      if ( v12 != -1 )
        goto LABEL_9;
    }
    else
    {
      named_type_tid = get_named_type_tid();
      *(_QWORD *)(a1 + 8 * (v6 + 696LL)) = named_type_tid;
      if ( named_type_tid != -1 )
      {
LABEL_9:
        v13 = a3 + 48;
        v11 = a3 + 64;
        if ( !v4 )
          v11 = v13;
        goto LABEL_11;
      }
    }
    v58 = 0;
    v59 = 0;
    sub_30660(&v58);
    v32 = v59;
    if ( (_QWORD)v59 )
    {
      v34 = v59 + 103;
      v33 = v59 + 104;
      v32 = v59 - 1;
    }
    else
    {
      v33 = 105;
      v34 = 104;
    }
    v35 = v58;
    if ( *((_QWORD *)&v59 + 1) < v33 )
    {
      v55 = v32;
      v51 = v34;
      v47 = v33;
      v58 = qvector_reserve();
      v32 = v55;
      v35 = v58;
      v34 = v51;
      v33 = v47;
    }
    *(_QWORD *)&v59 = v33;
    si128 = _mm_load_si128((const __m128i *)&xmmword_950B0);
    *(_BYTE *)(v35 + v34) = 0;
    v37 = (__m128i *)(v32 + v58);
    *v37 = si128;
    v38 = _mm_load_si128((const __m128i *)&xmmword_950C0);
    v37[6].m128i_i64[0] = 0x3B66664F7265626DLL;
    v37[1] = v38;
    v37[2] = _mm_load_si128((const __m128i *)&xmmword_950D0);
    v37[3] = _mm_load_si128((const __m128i *)&xmmword_950E0);
    v37[4] = _mm_load_si128((const __m128i *)&xmmword_950F0);
    v37[5] = _mm_load_si128((const __m128i *)&xmmword_95100);
    goto LABEL_24;
  }
  v9 = *(_QWORD *)(a1 + 8 * (v6 + 696LL));
  if ( v9 )
  {
    if ( v9 != -1 )
      goto LABEL_4;
  }
  else
  {
    v19 = get_named_type_tid();
    *(_QWORD *)(a1 + 8 * (v6 + 696LL)) = v19;
    if ( v19 != -1 )
    {
LABEL_4:
      v10 = a3 + 32;
      v11 = a3 + 48;
      if ( !v4 )
        v11 = v10;
LABEL_11:
      create_data();
      goto LABEL_12;
    }
  }
  v58 = 0;
  v59 = 0;
  sub_30660(&v58);
LABEL_24:
  if ( !v4 )
    goto LABEL_32;
  v20 = *(_QWORD *)(a1 + 5624);
  if ( !v20 )
  {
    v45 = get_named_type_tid();
    *(_QWORD *)(a1 + 5624) = v45;
    if ( v45 != -1 )
      goto LABEL_27;
    v20 = sub_52B40(
            (__int64)"unsigned int   Data1;unsigned short Data2;unsigned short Data3;unsigned char  Data4[8];",
            "_GUID");
    *(_QWORD *)(a1 + 5624) = v20;
  }
  if ( v20 != -1 )
  {
LABEL_27:
    v21 = v59;
    if ( (_QWORD)v59 )
    {
      v23 = v59 + 10;
      v22 = v59 + 11;
      v21 = v59 - 1;
    }
    else
    {
      v22 = 12;
      v23 = 11;
    }
    v24 = v58;
    if ( *((_QWORD *)&v59 + 1) < v22 )
    {
      v56 = v23;
      v52 = v21;
      v48 = v22;
      v58 = qvector_reserve();
      v23 = v56;
      v24 = v58;
      v21 = v52;
      v22 = v48;
    }
    *(_QWORD *)&v59 = v22;
    *(_BYTE *)(v24 + v23) = 0;
    qmemcpy((void *)(v58 + v21), "_GUID guid;", 11);
    goto LABEL_32;
  }
  v39 = v59;
  if ( (_QWORD)v59 )
  {
    v40 = v59 + 17;
    v41 = v59 + 18;
    v39 = v59 - 1;
  }
  else
  {
    v41 = 19;
    v40 = 18;
  }
  v42 = v58;
  if ( *((_QWORD *)&v59 + 1) < v41 )
  {
    v57 = v39;
    v53 = v40;
    v49 = v41;
    v58 = qvector_reserve();
    v39 = v57;
    v42 = v58;
    v40 = v53;
    v41 = v49;
  }
  v43 = _mm_load_si128((const __m128i *)&xmmword_95110);
  *(_QWORD *)&v59 = v41;
  *(_BYTE *)(v42 + v40) = 0;
  v44 = (__m128i *)(v58 + v39);
  v44[1].m128i_i16[0] = 15197;
  *v44 = v43;
LABEL_32:
  v25 = v59;
  if ( (_QWORD)v59 )
  {
    v26 = v59 + 26;
    v27 = v59 + 27;
    v25 = v59 - 1;
  }
  else
  {
    v27 = 28;
    v26 = 27;
  }
  v28 = v58;
  if ( *((_QWORD *)&v59 + 1) < v27 )
  {
    v54 = v26;
    v50 = v25;
    v46 = v27;
    v58 = qvector_reserve();
    v26 = v54;
    v28 = v58;
    v25 = v50;
    v27 = v46;
  }
  v29 = _mm_load_si128((const __m128i *)&xmmword_95120);
  *(_QWORD *)&v59 = v27;
  *(_BYTE *)(v28 + v26) = 0;
  v30 = v58 + v25;
  *(__m128i *)v30 = v29;
  *(__m128i *)(v30 + 11) = _mm_load_si128((const __m128i *)&xmmword_95130);
  parse_decls();
  *(_QWORD *)(a1 + 8LL * v6 + 5568) = get_named_type_tid();
  get_type_ordinal();
  set_type_choosable();
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  v31 = a3 + 32;
  v11 = a3 + 48;
  if ( !v8 )
    v11 = v31;
  if ( v4 )
    v11 += 16;
  if ( *(_QWORD *)(a1 + 8LL * v6 + 5568) != -1 )
    goto LABEL_11;
LABEL_12:
  v14 = sub_51C60(a1, *a2 + 20LL, 0, 1u, 0);
  if ( v14 )
    sub_51B00(v14, 1);
  v15 = sub_51C60(a1, *a2 + 28LL, 0, 1u, 0);
  if ( v15 )
    sub_51B00(v15, 1);
  if ( v8 )
  {
    v17 = sub_51C60(a1, *a2 + 40LL, 0, 1u, 0);
    if ( v17 )
      sub_51B00(v17, 1);
  }
  *a2 += v11;
  return v60 - __readfsqword(0x28u);
}
