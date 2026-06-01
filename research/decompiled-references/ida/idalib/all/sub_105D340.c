_QWORD *__fastcall sub_105D340(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  char *v4; // r14
  char *v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 *v8; // rdi
  char *v9; // r12
  char *v10; // r12
  char *v11; // rsi
  __int64 v12; // rdi
  char *v13; // rdx
  __int64 v14; // rax
  char *v15; // rbp
  char *v16; // rbx
  __int64 v17; // r12
  char *v18; // rsi
  __int64 v19; // rdi
  char *v20; // rbp
  void **v21; // r12
  void **v22; // r14
  void **v23; // r12
  void **v24; // r14
  void **v25; // rbp
  _QWORD *v26; // rbp
  __int64 *v27; // r13
  _BYTE *v28; // rsi
  __int64 v29; // rdx
  char *v30; // rcx
  __m128i *v31; // rax
  __m128i *v32; // rsi
  _QWORD *v33; // rax
  __int64 v34; // rbp
  __int64 v35; // r14
  unsigned __int64 v36; // rax
  __m128i *v37; // r12
  __m128i *v38; // rdi
  signed __int64 v39; // rbp
  _QWORD *v40; // rbx
  _QWORD *v41; // rbx
  _BYTE *v43; // rbx
  _QWORD *v44; // rax
  __int64 v45; // rax
  size_t v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // [rsp+8h] [rbp-330h]
  __int64 v49; // [rsp+8h] [rbp-330h]
  __int64 v51; // [rsp+18h] [rbp-320h]
  void ***v52; // [rsp+18h] [rbp-320h]
  _QWORD *v53; // [rsp+38h] [rbp-300h] BYREF
  void *v54[2]; // [rsp+40h] [rbp-2F8h] BYREF
  __int64 v55; // [rsp+50h] [rbp-2E8h] BYREF
  void *v56[2]; // [rsp+60h] [rbp-2D8h] BYREF
  __int64 v57; // [rsp+70h] [rbp-2C8h] BYREF
  void *v58; // [rsp+A0h] [rbp-298h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-290h] BYREF
  _QWORD v60[8]; // [rsp+B0h] [rbp-288h] BYREF
  __m128i ptr; // [rsp+F0h] [rbp-248h] BYREF
  __m128i v62; // [rsp+100h] [rbp-238h] BYREF
  __m128i v63; // [rsp+110h] [rbp-228h] BYREF
  __int64 v64; // [rsp+120h] [rbp-218h]

  v2 = a2;
  sub_22BC1E0(&ptr, *(_QWORD *)a2, *(_QWORD *)(a2 + 8), 0);
  sub_22B9ED0(v56, &ptr);
  if ( (__m128i *)ptr.m128i_i64[0] != &v62 )
    operator delete((void *)ptr.m128i_i64[0]);
  sub_1055B30(&v53, v56, a2);
  v3 = v53;
  if ( !v53 )
  {
    sub_FC70B0((__int64)&ptr, a1, 0, 67);
    sub_AEC220((unsigned __int8 **)&ptr, (_BYTE *)v56[0], (signed __int64)v56[1]);
    sub_AEA040((__int64)&ptr);
    goto LABEL_73;
  }
  v53[26] = a2;
  if ( *(_QWORD *)(a2 + 72) && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v3 + 456LL))(v3, a2 + 64) )
  {
    sub_FC70B0((__int64)&ptr, a1, 0, 65);
    sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(a2 + 64), *(_QWORD *)(a2 + 72));
    sub_AEA040((__int64)&ptr);
    ptr.m128i_i64[0] = (__int64)&v62;
    ptr.m128i_i64[1] = 0x2000000000LL;
    (*(void (__fastcall **)(_QWORD *, __m128i *))(*v53 + 464LL))(v53, &ptr);
    if ( ptr.m128i_i32[2] )
    {
LABEL_117:
      sub_FC70B0((__int64)&v58, a1, 0, 120);
      v46 = j__strlen(", ");
      sub_10525C0((__int64)v54, ptr.m128i_i64[0], ptr.m128i_i64[0] + 16LL * ptr.m128i_u32[2], (__int64)", ", v46);
      sub_AEC220((unsigned __int8 **)&v58, (_BYTE *)v54[0], (signed __int64)v54[1]);
      if ( v54[0] != &v55 )
        operator delete(v54[0]);
      sub_AEA040((__int64)&v58);
    }
LABEL_71:
    if ( (__m128i *)ptr.m128i_i64[0] != &v62 )
      free((void *)ptr.m128i_i64[0]);
    goto LABEL_73;
  }
  if ( *(_QWORD *)(a2 + 104)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v53 + 488LL))(v53, *(_QWORD *)(a2 + 96)) )
  {
    sub_FC70B0((__int64)&ptr, a1, 0, 65);
    sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(a2 + 96), *(_QWORD *)(a2 + 104));
    sub_AEA040((__int64)&ptr);
    ptr.m128i_i64[0] = (__int64)&v62;
    ptr.m128i_i64[1] = 0x2000000000LL;
    (*(void (__fastcall **)(_QWORD *, __m128i *))(*v53 + 472LL))(v53, &ptr);
    if ( ptr.m128i_i32[2] )
      goto LABEL_117;
    goto LABEL_71;
  }
  if ( *(_QWORD *)(a2 + 168) && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v53 + 512LL))(v53, a2 + 160) )
  {
    sub_FC70B0((__int64)&ptr, a1, 0, 64);
    sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(a2 + 160), *(_QWORD *)(a2 + 168));
    sub_AEA040((__int64)&ptr);
    goto LABEL_73;
  }
  if ( *(_QWORD *)(a2 + 136)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*v53 + 520LL))(v53, *(_QWORD *)(a2 + 128)) )
  {
    sub_FC70B0((__int64)&ptr, a1, 0, 66);
    sub_AEC220((unsigned __int8 **)&ptr, *(_BYTE **)(a2 + 128), *(_QWORD *)(a2 + 136));
    sub_AEA040((__int64)&ptr);
    goto LABEL_73;
  }
  v4 = *(char **)(a2 + 240);
  v5 = *(char **)(a2 + 232);
  v58 = &v53;
  v48 = a2 + 232;
  ptr.m128i_i64[0] = (__int64)&v53;
  v59 = a1;
  ptr.m128i_i64[1] = a1;
  v6 = (v4 - v5) >> 7;
  v7 = (v4 - v5) >> 5;
  if ( v6 > 0 )
  {
    v8 = (__int64 *)&v53;
    v9 = &v5[128 * v6];
    while ( !(unsigned __int8)sub_105CBA0(v8, &ptr.m128i_i64[1], *(_BYTE **)v5, *((_QWORD *)v5 + 1)) )
    {
      if ( (unsigned __int8)sub_105CBA0(
                              (__int64 *)ptr.m128i_i64[0],
                              &ptr.m128i_i64[1],
                              *((_BYTE **)v5 + 4),
                              *((_QWORD *)v5 + 5)) )
      {
        v5 += 32;
        goto LABEL_19;
      }
      if ( (unsigned __int8)sub_105CBA0(
                              (__int64 *)ptr.m128i_i64[0],
                              &ptr.m128i_i64[1],
                              *((_BYTE **)v5 + 8),
                              *((_QWORD *)v5 + 9)) )
      {
        v5 += 64;
        goto LABEL_19;
      }
      if ( (unsigned __int8)sub_105CBA0(
                              (__int64 *)ptr.m128i_i64[0],
                              &ptr.m128i_i64[1],
                              *((_BYTE **)v5 + 12),
                              *((_QWORD *)v5 + 13)) )
      {
        v5 += 96;
        goto LABEL_19;
      }
      v5 += 128;
      if ( v9 == v5 )
      {
        v7 = (v4 - v5) >> 5;
        goto LABEL_90;
      }
      v8 = (__int64 *)ptr.m128i_i64[0];
    }
    goto LABEL_19;
  }
LABEL_90:
  if ( v7 == 2 )
  {
LABEL_113:
    if ( !(unsigned __int8)sub_105CBA0(
                             (__int64 *)ptr.m128i_i64[0],
                             &ptr.m128i_i64[1],
                             *(_BYTE **)v5,
                             *((_QWORD *)v5 + 1)) )
    {
      v5 += 32;
      goto LABEL_93;
    }
    goto LABEL_19;
  }
  if ( v7 != 3 )
  {
    if ( v7 != 1 )
      goto LABEL_36;
LABEL_93:
    if ( !(unsigned __int8)sub_105CBA0(
                             (__int64 *)ptr.m128i_i64[0],
                             &ptr.m128i_i64[1],
                             *(_BYTE **)v5,
                             *((_QWORD *)v5 + 1)) )
      goto LABEL_36;
    goto LABEL_19;
  }
  if ( !(unsigned __int8)sub_105CBA0((__int64 *)ptr.m128i_i64[0], &ptr.m128i_i64[1], *(_BYTE **)v5, *((_QWORD *)v5 + 1)) )
  {
    v5 += 32;
    goto LABEL_113;
  }
LABEL_19:
  if ( v5 != v4 )
  {
    v10 = v5 + 32;
    if ( v4 == v5 + 32 )
      goto LABEL_26;
    do
    {
      while ( (unsigned __int8)sub_105CBA0((__int64 *)v58, &v59, *(_BYTE **)v10, *((_QWORD *)v10 + 1)) )
      {
        v10 += 32;
        if ( v4 == v10 )
          goto LABEL_25;
      }
      v11 = v10;
      v12 = (__int64)v5;
      v10 += 32;
      v5 += 32;
      sub_A0AAD0(v12, v11);
    }
    while ( v4 != v10 );
LABEL_25:
    if ( v4 != v5 )
    {
LABEL_26:
      v13 = *(char **)(v2 + 240);
      v14 = v13 - v4;
      if ( v4 != v13 && v14 > 0 )
      {
        v51 = v2;
        v15 = v4;
        v16 = v5;
        v17 = v14 >> 5;
        do
        {
          v18 = v15;
          v19 = (__int64)v16;
          v15 += 32;
          v16 += 32;
          sub_A0AAD0(v19, v18);
          --v17;
        }
        while ( v17 );
        v2 = v51;
        v13 = *(char **)(v51 + 240);
        v14 = v13 - v4;
      }
      v20 = &v5[v14];
      if ( &v5[v14] != v13 )
      {
        v21 = (void **)&v5[v14];
        v22 = (void **)v13;
        do
        {
          while ( *v21 != v21 + 2 )
          {
            operator delete(*v21);
            v21 += 4;
            if ( v21 == v22 )
            {
              *(_QWORD *)(v2 + 240) = v20;
              goto LABEL_36;
            }
          }
          v21 += 4;
        }
        while ( v21 != v22 );
        *(_QWORD *)(v2 + 240) = v20;
      }
    }
  }
LABEL_36:
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, _QWORD, __int64))(*v53 + 440LL))(
          v53,
          v2 + 280,
          a1,
          *(_QWORD *)(v2 + 64),
          *(_QWORD *)(v2 + 72),
          v48) )
    goto LABEL_73;
  v23 = *(void ***)(v2 + 256);
  v24 = *(void ***)(v2 + 264);
  if ( v23 != v24 )
  {
    v25 = *(void ***)(v2 + 256);
    do
    {
      while ( *v25 != v25 + 2 )
      {
        operator delete(*v25);
        v25 += 4;
        if ( v25 == v24 )
        {
          *(_QWORD *)(v2 + 264) = v23;
          goto LABEL_42;
        }
      }
      v25 += 4;
    }
    while ( v24 != v25 );
    *(_QWORD *)(v2 + 264) = v23;
  }
LABEL_42:
  sub_10298F0((__int64 **)&ptr, *(__int64 **)(v2 + 280), *(_DWORD *)(v2 + 288) == 0);
  v26 = (_QWORD *)ptr.m128i_i64[0];
  sub_10298F0((__int64 **)&ptr, (__int64 *)(*(_QWORD *)(v2 + 280) + 8LL * *(unsigned int *)(v2 + 288)), 1);
  v52 = (void ***)(v2 + 256);
  v49 = ptr.m128i_i64[0];
  if ( (_QWORD *)ptr.m128i_i64[0] != v26 )
  {
    v27 = (__int64 *)*v26;
    v28 = (_BYTE *)(*v26 + 16LL);
    if ( *v26 == -16 )
      goto LABEL_60;
LABEL_44:
    v29 = *v27;
    v58 = v60;
    sub_10388C0(&v58, v28, (__int64)&v28[v29]);
    while ( 1 )
    {
      v30 = "-";
      if ( *((_BYTE *)v27 + 8) )
        v30 = "+";
      v31 = (__m128i *)sub_99BDC0(&v58, 0, 0, v30, 1u);
      ptr.m128i_i64[0] = (__int64)&v62;
      if ( (__m128i *)v31->m128i_i64[0] == &v31[1] )
      {
        v62 = _mm_loadu_si128(v31 + 1);
      }
      else
      {
        ptr.m128i_i64[0] = v31->m128i_i64[0];
        v62.m128i_i64[0] = v31[1].m128i_i64[0];
      }
      ptr.m128i_i64[1] = v31->m128i_i64[1];
      v31[1].m128i_i8[0] = 0;
      v32 = *(__m128i **)(v2 + 264);
      v31->m128i_i64[0] = (__int64)v31[1].m128i_i64;
      v31->m128i_i64[1] = 0;
      if ( v32 == *(__m128i **)(v2 + 272) )
      {
        sub_A82970(v52, v32, &ptr);
        if ( (__m128i *)ptr.m128i_i64[0] != &v62 )
          operator delete((void *)ptr.m128i_i64[0]);
      }
      else
      {
        v32->m128i_i64[0] = (__int64)v32[1].m128i_i64;
        if ( (__m128i *)ptr.m128i_i64[0] == &v62 )
        {
          v32[1] = _mm_load_si128(&v62);
        }
        else
        {
          v32->m128i_i64[0] = ptr.m128i_i64[0];
          v32[1].m128i_i64[0] = v62.m128i_i64[0];
        }
        v32->m128i_i64[1] = ptr.m128i_i64[1];
        *(_QWORD *)(v2 + 264) += 32LL;
      }
      if ( v58 != v60 )
        operator delete(v58);
      v27 = (__int64 *)v26[1];
      v33 = v26 + 1;
      if ( !v27 )
        break;
LABEL_57:
      if ( v27 == (__int64 *)-8LL )
        goto LABEL_56;
      if ( (_QWORD *)v49 == v33 )
        goto LABEL_61;
      v26 = v33;
      v28 = v27 + 2;
      if ( v27 != (__int64 *)-16LL )
        goto LABEL_44;
LABEL_60:
      v58 = v60;
      v59 = 0;
      LOBYTE(v60[0]) = 0;
    }
    do
LABEL_56:
      v27 = (__int64 *)*++v33;
    while ( !*v33 );
    goto LABEL_57;
  }
LABEL_61:
  v34 = *(_QWORD *)(v2 + 264);
  v35 = *(_QWORD *)(v2 + 256);
  if ( v34 != v35 )
  {
    _BitScanReverse64(&v36, (v34 - v35) >> 5);
    sub_105CCD0(*(__m128i **)(v2 + 256), *(__m128i **)(v2 + 264), 2LL * (int)(63 - (v36 ^ 0x3F)));
    if ( v34 - v35 <= 512 )
    {
      sub_1039220(v35, v34);
    }
    else
    {
      v37 = (__m128i *)(v35 + 512);
      sub_1039220(v35, v35 + 512);
      if ( v34 != v35 + 512 )
      {
        do
        {
          v38 = v37;
          v37 += 2;
          sub_1038F70(v38);
        }
        while ( (__m128i *)v34 != v37 );
      }
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, void ***, __int64))(*v53 + 576LL))(v53, v52, a1) )
    goto LABEL_73;
  (*(void (__fastcall **)(_QWORD *))(*v53 + 840LL))(v53);
  (*(void (__fastcall **)(_QWORD *))(*v53 + 856LL))(v53);
  (*(void (__fastcall **)(_QWORD *))(*v53 + 216LL))(v53);
  v39 = *(_QWORD *)(v2 + 432);
  if ( !v39 )
    goto LABEL_67;
  v43 = *(_BYTE **)(v2 + 424);
  v58 = v60;
  if ( &v43[v39] && !v43 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v39 > 0xF )
  {
    if ( v39 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v47 = (_QWORD *)operator new(v39 + 1);
    v60[0] = v39;
    v58 = v47;
  }
  else
  {
    if ( v39 == 1 )
    {
      LOBYTE(v60[0]) = *v43;
      v44 = v60;
      goto LABEL_103;
    }
    v47 = v60;
  }
  memcpy(v47, v43, v39);
  v44 = v58;
LABEL_103:
  v59 = v39;
  *((_BYTE *)v44 + v39) = 0;
  sub_22B9ED0(&ptr, &v58);
  if ( v58 != v60 )
    operator delete(v58);
  v40 = v53;
  if ( *((_BYTE *)v53 + 464) )
  {
    sub_A0AAD0((__int64)(v53 + 51), &ptr);
    *(__m128i *)(v40 + 55) = _mm_load_si128(&v63);
    v40[57] = v64;
    if ( (__m128i *)ptr.m128i_i64[0] != &v62 )
      operator delete((void *)ptr.m128i_i64[0]);
LABEL_67:
    v40 = v53;
    goto LABEL_68;
  }
  v53[51] = v53 + 53;
  if ( (__m128i *)ptr.m128i_i64[0] == &v62 )
  {
    *(__m128i *)(v40 + 53) = _mm_load_si128(&v62);
  }
  else
  {
    v40[51] = ptr.m128i_i64[0];
    v40[53] = v62.m128i_i64[0];
  }
  v40[52] = ptr.m128i_i64[1];
  *(__m128i *)(v40 + 55) = _mm_load_si128(&v63);
  v45 = v64;
  *((_BYTE *)v40 + 464) = 1;
  v40[57] = v45;
LABEL_68:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v40 + 888LL))(v40, a1) )
  {
    nullsub_570();
    v41 = v53;
    goto LABEL_75;
  }
LABEL_73:
  v41 = v53;
  if ( v53 )
  {
    v41 = nullptr;
    (*(void (__fastcall **)(_QWORD *))(*v53 + 8LL))(v53);
  }
LABEL_75:
  if ( v56[0] != &v57 )
    operator delete(v56[0]);
  return v41;
}
