__int64 __fastcall sub_218B940(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v11; // r15
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // edi
  int v16; // esi
  int v17; // r14d
  unsigned __int64 *v18; // rdx
  __int64 v19; // rax
  unsigned __int64 *v20; // rdx
  __int16 v21; // ax
  int v22; // ebp
  char v23; // r12
  __int16 v24; // ax
  int v25; // ebp
  char v26; // al
  int v27; // edx
  size_t v28; // rax
  void *v29; // rax
  char v30; // al
  int v31; // edx
  void *v32; // rax
  void *v33; // rax
  size_t v34; // rax
  size_t v35; // rax
  const char *v36; // rsi
  size_t v37; // rax
  size_t v38; // rax
  size_t v39; // rax
  _QWORD *v40; // [rsp+10h] [rbp-88h]
  int v41; // [rsp+1Ch] [rbp-7Ch]
  __int64 v42; // [rsp+20h] [rbp-78h] BYREF
  char v43; // [rsp+28h] [rbp-70h]
  void *s1[2]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v45; // [rsp+40h] [rbp-58h] BYREF
  char v46; // [rsp+50h] [rbp-48h]

  v40 = a2 + 7;
  sub_218B690((__int64)&v42, a2 + 7, a3, HIDWORD(a3), a5, a6);
  if ( (v43 & 1) != 0 )
  {
    v9 = v42;
    *(_BYTE *)(a1 + 8) |= 1u;
    v42 = 0;
    *(_QWORD *)a1 = v9;
    goto LABEL_3;
  }
  v11 = v42;
  v12 = *(unsigned __int8 *)(v42 + 4);
  v13 = v12 >> 4;
  if ( v12 >> 4 )
  {
    v14 = 4 * (v13 == 2) + 130;
    v15 = 4 * (v13 == 2) + 138;
    v16 = 4 * (v13 == 2) + 10;
    v17 = 4 * (v13 == 2) + 2;
  }
  else
  {
    v14 = 128;
    v15 = 136;
    v16 = 8;
    v17 = 0;
  }
  v18 = (unsigned __int64 *)a2[16];
  if ( __ROL2__(*(_WORD *)(v42 + 6), 8) == 0xFFF1 )
  {
    v14 = v15;
    v17 = v16;
  }
  if ( (unsigned __int8)((v12 & 0xF) - 3) <= 1u )
    v17 = v14;
  if ( v18 )
  {
    v41 = v14;
    sub_217B850((__int64)&v45, v40, v18);
    if ( (v46 & 1) != 0 )
    {
LABEL_12:
      v19 = v45.m128i_i64[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      v45.m128i_i64[0] = 0;
      *(_QWORD *)a1 = v19;
      sub_216FAA0(v45.m128i_i64);
      goto LABEL_3;
    }
    if ( v11 == v45.m128i_i64[0] )
      v17 = v41;
  }
  else
  {
    v46 &= ~1u;
    v45 = 0u;
  }
  sub_216FAA0(v45.m128i_i64);
  v20 = (unsigned __int64 *)a2[15];
  if ( v20 )
  {
    sub_217B850((__int64)&v45, v40, v20);
    if ( (v46 & 1) != 0 )
      goto LABEL_12;
    if ( v11 == v45.m128i_i64[0] )
      LOBYTE(v17) = v17 | 0x80;
  }
  else
  {
    v46 &= ~1u;
    v45 = 0u;
  }
  sub_216FAA0(v45.m128i_i64);
  v21 = __ROL2__(*(_WORD *)(a2[7] + 18LL), 8);
  switch ( v21 )
  {
    case 183:
      (*(void (__fastcall **)(__m128i *, _QWORD *, unsigned __int64))(*a2 + 80LL))(&v45, a2, a3);
      if ( (v46 & 1) == 0 )
      {
        *(__m128i *)s1 = _mm_load_si128(&v45);
LABEL_45:
        v28 = j__strlen("$d");
        if ( sub_9C7D00((__int64)s1, "$d", v28) )
        {
LABEL_46:
          LOBYTE(v17) = v17 | 0x80;
LABEL_47:
          sub_111DFC0(v45.m128i_i64);
          break;
        }
        v35 = j__strlen("$x");
        v36 = "$x";
LABEL_67:
        if ( !sub_9C7D00((__int64)s1, v36, v35) )
          goto LABEL_47;
        goto LABEL_46;
      }
LABEL_48:
      v29 = (void *)v45.m128i_i64[0];
      v45.m128i_i64[0] = 0;
      s1[0] = v29;
      sub_A0E8E0((_QWORD **)s1);
      if ( s1[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)s1[0] + 8LL))(s1[0]);
      goto LABEL_47;
    case 40:
      (*(void (__fastcall **)(__m128i *, _QWORD *, unsigned __int64))(*a2 + 80LL))(&v45, a2, a3);
      if ( (v46 & 1) != 0 )
      {
        v33 = (void *)v45.m128i_i64[0];
        v45.m128i_i64[0] = 0;
        s1[0] = v33;
        sub_A0E8E0((_QWORD **)s1);
        if ( s1[0] )
          (*(void (__fastcall **)(void *))(*(_QWORD *)s1[0] + 8LL))(s1[0]);
      }
      else
      {
        *(__m128i *)s1 = _mm_load_si128(&v45);
        if ( !s1[1]
          || (v37 = j__strlen("$d"), sub_9C7D00((__int64)s1, "$d", v37))
          || (v38 = j__strlen("$t"), sub_9C7D00((__int64)s1, "$t", v38))
          || (v39 = j__strlen("$a"), sub_9C7D00((__int64)s1, "$a", v39)) )
        {
          LOBYTE(v17) = v17 | 0x80;
        }
      }
      sub_111DFC0(v45.m128i_i64);
      v22 = *(unsigned __int8 *)(v11 + 4);
      v23 = *(_BYTE *)(v11 + 4) & 0xF;
      if ( v23 == 2 )
      {
        v30 = sub_2162D00(*(_QWORD *)(v11 + 8));
        v31 = v17;
        if ( (v30 & 1) != 0 )
        {
          BYTE1(v31) = BYTE1(v17) | 1;
          v17 = v31;
        }
      }
      goto LABEL_24;
    case 252:
      (*(void (__fastcall **)(__m128i *, _QWORD *, unsigned __int64))(*a2 + 80LL))(&v45, a2, a3);
      if ( (v46 & 1) == 0 )
      {
        *(__m128i *)s1 = _mm_load_si128(&v45);
        v34 = j__strlen("$d");
        if ( sub_9C7D00((__int64)s1, "$d", v34) )
          goto LABEL_46;
        v35 = j__strlen("$t");
        v36 = "$t";
        goto LABEL_67;
      }
      goto LABEL_48;
    case 243:
      (*(void (__fastcall **)(__m128i *, _QWORD *, unsigned __int64))(*a2 + 80LL))(&v45, a2, a3);
      if ( (v46 & 1) == 0 )
      {
        *(__m128i *)s1 = _mm_load_si128(&v45);
        v32 = (void *)j__strlen(".L0 ");
        if ( s1[1] == v32 && (!s1[1] || !memcmp(s1[0], ".L0 ", (size_t)s1[1])) )
          goto LABEL_46;
        goto LABEL_45;
      }
      goto LABEL_48;
  }
  v22 = *(unsigned __int8 *)(v11 + 4);
  v23 = *(_BYTE *)(v11 + 4) & 0xF;
LABEL_24:
  v24 = __ROL2__(*(_WORD *)(v11 + 6), 8);
  if ( !v24 )
    v17 |= 1u;
  if ( v23 == 5 || v24 == -14 )
    v17 |= 0x10u;
  v25 = v22 >> 4;
  v26 = *(_BYTE *)(v11 + 5) & 3;
  if ( ((unsigned __int8)(v25 - 1) <= 1u || v25 == 10) && (!v26 || v26 == 3) )
    v17 |= 0x40u;
  if ( v23 == 10 )
    v17 |= 0x20u;
  v27 = v17;
  if ( v26 == 2 )
  {
    BYTE1(v27) = BYTE1(v17) | 2;
    v17 = v27;
  }
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = v17;
LABEL_3:
  sub_218A810(&v42);
  return a1;
}
