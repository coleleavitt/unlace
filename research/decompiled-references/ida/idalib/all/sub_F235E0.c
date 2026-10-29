void __fastcall sub_F235E0(__int64 *a1, const __m128i *a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  int v5; // r13d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  _BYTE *v10; // rax
  unsigned __int64 v11; // rbx
  __m128i *v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _BYTE *v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int8 v20; // al
  __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  const void *v23; // rax
  size_t v24; // rdx
  void *v25; // rdi
  size_t v26; // rbx
  _BYTE *v27; // rax
  char v28; // al
  __int64 v29; // rax
  unsigned __int16 v30; // dx
  unsigned int v31; // r13d
  _BYTE *v32; // rax
  unsigned __int16 v33; // r13
  __int64 v34; // rdi
  __int64 *v35; // rax
  __int64 v36; // rdx
  __m128i si128; // xmm0
  __int64 v38; // [rsp+0h] [rbp-48h] BYREF
  _BYTE *v39; // [rsp+8h] [rbp-40h]
  __int64 v40; // [rsp+10h] [rbp-38h]

  v5 = a4;
  v7 = (__int64)a2;
  v8 = *a1;
  v9 = (*a1 >> 1) & 3;
  if ( ((*a1 >> 1) & 3) == 0 )
  {
    if ( (v8 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v10 = (_BYTE *)sub_F22BD0(a1, 0);
      v11 = (unsigned __int64)v10;
      if ( (a3->m128i_i8[5] & 1) != 0 )
      {
        v11 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 32LL))(v10);
        if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x44 )
          goto LABEL_14;
        if ( (a3->m128i_i8[5] & 1) != 0 )
          goto LABEL_6;
      }
      else if ( (v10[28] & 0x7F) != 0x44 )
      {
        goto LABEL_14;
      }
      v15 = *(_QWORD *)(v11 + 40);
      if ( (v15 & 7) == 0 && (v15 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
LABEL_14:
        if ( v5 )
        {
          sub_B76DD0((_QWORD *)v11, a2, (__int64)a3);
          return;
        }
        goto LABEL_15;
      }
LABEL_6:
      v12 = (__m128i *)a2[2].m128i_i64[0];
      if ( a2[1].m128i_i64[1] - (__int64)v12 > 0x12uLL )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A90C0);
        v12[1].m128i_i8[2] = 45;
        v12[1].m128i_i16[0] = 29285;
        *v12 = si128;
        a2[2].m128i_i64[0] += 19;
      }
      else
      {
        v7 = sub_227BF10(a2, "template-parameter-", 19);
      }
      v13 = sub_227B910(v7, *(_DWORD *)(v11 + 64) & 0xFFFFF);
      v14 = *(_BYTE **)(v13 + 32);
      if ( *(_BYTE **)(v13 + 24) == v14 )
      {
        v13 = sub_227BF10(v13, "-", 1);
      }
      else
      {
        *v14 = 45;
        ++*(_QWORD *)(v13 + 32);
      }
      sub_227B910(v13, *(_WORD *)(v11 + 66) >> 4);
      return;
    }
LABEL_58:
    BUG();
  }
  if ( v9 == 3 )
  {
    if ( v8 )
    {
      v35 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v35 )
      {
        sub_F23090(v35, (__int64)a2, a3);
        return;
      }
    }
    goto LABEL_58;
  }
  if ( !v8 )
    goto LABEL_58;
  if ( v9 == 2 )
  {
    v16 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v17 = (_BYTE *)v16;
    if ( !v16 )
      goto LABEL_58;
    if ( (a3->m128i_i8[5] & 1) == 0 )
    {
      v18 = *(_QWORD *)(v16 + 8);
      v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (_DWORD)a4 && v19 )
      {
        sub_E90250(v19, (__int64)a2, a3, 0, 1);
        v18 = *((_QWORD *)v17 + 1);
      }
      if ( (v18 & 4) != 0 )
      {
        v36 = a2[2].m128i_i64[0];
        if ( (unsigned __int64)(a2[1].m128i_i64[1] - v36) > 8 )
        {
          *(_BYTE *)(v36 + 8) = 32;
          *(_QWORD *)v36 = 0x6574616C706D6574LL;
          a2[2].m128i_i64[0] += 9;
        }
        else
        {
          sub_227BF10(a2, "template ", 9);
        }
      }
      v38 = *((_QWORD *)v17 + 2);
      v11 = sub_F22BD0(&v38, 0);
      if ( (*(_BYTE *)(v11 + 28) & 0x7F) != 0x44 )
        goto LABEL_15;
      v20 = a3->m128i_i8[5];
      if ( (v20 & 1) != 0 )
        goto LABEL_6;
      v21 = *(_QWORD *)(v11 + 40);
      if ( (v21 & 7) != 0 )
        goto LABEL_6;
      v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v22 )
        goto LABEL_6;
      if ( (v20 & 0x10) == 0 )
      {
LABEL_15:
        sub_B72CF0(v11, (__int64)a2);
        return;
      }
      v23 = (const void *)sub_FDE1C0(v22);
      v25 = (void *)a2[2].m128i_i64[0];
      v26 = v24;
      if ( a2[1].m128i_i64[1] - (__int64)v25 < v24 )
      {
        sub_227BF10(a2, v23, v24);
      }
      else if ( v24 )
      {
        memcpy(v25, v23, v24);
        a2[2].m128i_i64[0] += v26;
      }
      return;
    }
LABEL_35:
    v38 = *((_QWORD *)v17 + 2);
    sub_F235E0(&v38, a2, a3, (unsigned int)a4);
    return;
  }
  v27 = (_BYTE *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
  v17 = v27;
  if ( !v27 )
    goto LABEL_58;
  v28 = *v27 & 7;
  switch ( v28 )
  {
    case 3:
      goto LABEL_35;
    case 4:
      sub_BC0150(*((_QWORD *)v17 + 3) & 0xFFFFFFFFFFFFFFF8LL);
      sub_B72CF0(*(_QWORD *)(v29 + 8LL * ((*(_DWORD *)v17 >> 3) & 0x3FFF) + 24), (__int64)a2);
      return;
    case 1:
      v38 = *((_QWORD *)v17 + 1);
      sub_B84F80(&v38, (__int64)a2, a3, a4, a5);
      return;
  }
  if ( v28 != 2 )
  {
    if ( !v28 )
    {
      (*(void (__fastcall **)(_QWORD, const __m128i *, const __m128i *))(**((_QWORD **)v17 + 1) + 88LL))(
        *((_QWORD *)v17 + 1),
        a2,
        a3);
      return;
    }
    goto LABEL_58;
  }
  v38 = *((_QWORD *)v17 + 2);
  sub_F235E0(&v38, a2, a3, 1);
  v30 = *((_WORD *)v17 + 1);
  v31 = *(_DWORD *)v17;
  v39 = v17 + 24;
  v32 = (_BYTE *)a2[2].m128i_i64[0];
  v33 = (v31 >> 3) & 0x3FFF;
  v40 = v30 >> 1;
  if ( (_BYTE *)a2[1].m128i_i64[1] == v32 )
  {
    v34 = sub_227BF10(a2, ":", 1);
  }
  else
  {
    *v32 = 58;
    v34 = (__int64)a2;
    ++a2[2].m128i_i64[0];
  }
  sub_227B910(v34, v33);
  sub_F712D0(a2, v39, v40, a3, 0);
}
