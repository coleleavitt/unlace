__int64 __fastcall sub_21901F0(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // r14
  int v13; // eax
  int v14; // edx
  __int64 v15; // r8
  unsigned int v16; // esi
  int v17; // edx
  int v18; // r15d
  unsigned int *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int *v24; // rdx
  __int16 v25; // ax
  int v26; // eax
  char v27; // si
  __int16 v28; // dx
  int v29; // eax
  char v30; // dl
  int v31; // eax
  size_t v32; // rax
  void *v33; // rax
  int v34; // edx
  void *v35; // rax
  void *v36; // rax
  size_t v37; // rax
  size_t v38; // rax
  const char *v39; // rsi
  size_t v40; // rax
  size_t v41; // rax
  size_t v42; // rax
  _QWORD *v43; // [rsp+10h] [rbp-88h]
  int v44; // [rsp+1Ch] [rbp-7Ch]
  __int64 v45; // [rsp+20h] [rbp-78h] BYREF
  char v46; // [rsp+28h] [rbp-70h]
  void *s1[2]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v48; // [rsp+40h] [rbp-58h] BYREF
  char v49; // [rsp+50h] [rbp-48h]

  v43 = a2 + 7;
  sub_218FF40((__int64)&v45, a2 + 7, a3, HIDWORD(a3), a5, a6);
  if ( (v46 & 1) != 0 )
  {
    v10 = v45;
    *(_BYTE *)(a1 + 8) |= 1u;
    v45 = 0;
    *(_QWORD *)a1 = v10;
    goto LABEL_3;
  }
  v12 = v45;
  v13 = *(unsigned __int8 *)(v45 + 12);
  v14 = v13 >> 4;
  if ( v13 >> 4 )
  {
    LOBYTE(v8) = v14 == 2;
    v15 = 4 * (unsigned int)(v14 == 2) + 130;
    v16 = 4 * (v14 == 2) + 138;
    v17 = 4 * (v14 == 2) + 10;
    v18 = 4 * (unsigned __int8)v8 + 2;
  }
  else
  {
    v15 = 128;
    v16 = 136;
    v17 = 8;
    v18 = 0;
  }
  if ( *(_WORD *)(v45 + 14) == 0xFFF1 )
  {
    v18 = v17;
    v15 = v16;
  }
  v19 = (unsigned int *)a2[16];
  if ( (unsigned __int8)((v13 & 0xF) - 3) <= 1u )
    v18 = v15;
  if ( v19 )
  {
    v44 = v15;
    sub_2172330((__int64)&v48, v43, v19, v8, v15, v9);
    if ( (v49 & 1) != 0 )
    {
LABEL_12:
      v20 = v48.m128i_i64[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      v48.m128i_i64[0] = 0;
      *(_QWORD *)a1 = v20;
      sub_216F640(v48.m128i_i64);
      goto LABEL_3;
    }
    if ( v12 == v48.m128i_i64[0] )
      v18 = v44;
  }
  else
  {
    v49 &= ~1u;
    v48 = 0u;
  }
  sub_216F640(v48.m128i_i64);
  v24 = (unsigned int *)a2[15];
  if ( v24 )
  {
    sub_2172330((__int64)&v48, v43, v24, v21, v22, v23);
    if ( (v49 & 1) != 0 )
      goto LABEL_12;
    if ( v12 == v48.m128i_i64[0] )
      LOBYTE(v18) = v18 | 0x80;
  }
  else
  {
    v49 &= ~1u;
    v48 = 0u;
  }
  sub_216F640(v48.m128i_i64);
  v25 = *(_WORD *)(a2[7] + 18LL);
  switch ( v25 )
  {
    case 183:
      (*(void (__fastcall **)(__m128i *, _QWORD *, unsigned __int64))(*a2 + 80LL))(&v48, a2, a3);
      if ( (v49 & 1) == 0 )
      {
        *(__m128i *)s1 = _mm_load_si128(&v48);
LABEL_45:
        v32 = j__strlen("$d");
        if ( sub_9C7D00((__int64)s1, "$d", v32) )
        {
LABEL_46:
          LOBYTE(v18) = v18 | 0x80;
LABEL_47:
          sub_111DFC0(v48.m128i_i64);
          break;
        }
        v38 = j__strlen("$x");
        v39 = "$x";
LABEL_67:
        if ( !sub_9C7D00((__int64)s1, v39, v38) )
          goto LABEL_47;
        goto LABEL_46;
      }
LABEL_48:
      v33 = (void *)v48.m128i_i64[0];
      v48.m128i_i64[0] = 0;
      s1[0] = v33;
      sub_A0E8E0((_QWORD **)s1);
      if ( s1[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)s1[0] + 8LL))(s1[0]);
      goto LABEL_47;
    case 40:
      (*(void (__fastcall **)(__m128i *, _QWORD *, unsigned __int64))(*a2 + 80LL))(&v48, a2, a3);
      if ( (v49 & 1) != 0 )
      {
        v36 = (void *)v48.m128i_i64[0];
        v48.m128i_i64[0] = 0;
        s1[0] = v36;
        sub_A0E8E0((_QWORD **)s1);
        if ( s1[0] )
          (*(void (__fastcall **)(void *))(*(_QWORD *)s1[0] + 8LL))(s1[0]);
      }
      else
      {
        *(__m128i *)s1 = _mm_load_si128(&v48);
        if ( !s1[1]
          || (v40 = j__strlen("$d"), sub_9C7D00((__int64)s1, "$d", v40))
          || (v41 = j__strlen("$t"), sub_9C7D00((__int64)s1, "$t", v41))
          || (v42 = j__strlen("$a"), sub_9C7D00((__int64)s1, "$a", v42)) )
        {
          LOBYTE(v18) = v18 | 0x80;
        }
      }
      sub_111DFC0(v48.m128i_i64);
      v26 = *(unsigned __int8 *)(v12 + 12);
      v27 = *(_BYTE *)(v12 + 12) & 0xF;
      if ( v27 == 2 )
      {
        v34 = v18;
        if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
        {
          BYTE1(v34) = BYTE1(v18) | 1;
          v18 = v34;
        }
      }
      goto LABEL_24;
    case 252:
      (*(void (__fastcall **)(__m128i *, _QWORD *, unsigned __int64))(*a2 + 80LL))(&v48, a2, a3);
      if ( (v49 & 1) == 0 )
      {
        *(__m128i *)s1 = _mm_load_si128(&v48);
        v37 = j__strlen("$d");
        if ( sub_9C7D00((__int64)s1, "$d", v37) )
          goto LABEL_46;
        v38 = j__strlen("$t");
        v39 = "$t";
        goto LABEL_67;
      }
      goto LABEL_48;
    case 243:
      (*(void (__fastcall **)(__m128i *, _QWORD *, unsigned __int64))(*a2 + 80LL))(&v48, a2, a3);
      if ( (v49 & 1) == 0 )
      {
        *(__m128i *)s1 = _mm_load_si128(&v48);
        v35 = (void *)j__strlen(".L0 ");
        if ( s1[1] == v35 && (!s1[1] || !memcmp(s1[0], ".L0 ", (size_t)s1[1])) )
          goto LABEL_46;
        goto LABEL_45;
      }
      goto LABEL_48;
  }
  v26 = *(unsigned __int8 *)(v12 + 12);
  v27 = *(_BYTE *)(v12 + 12) & 0xF;
LABEL_24:
  v28 = *(_WORD *)(v12 + 14);
  if ( !v28 )
    v18 |= 1u;
  if ( v27 == 5 || v28 == -14 )
    v18 |= 0x10u;
  v29 = v26 >> 4;
  v30 = *(_BYTE *)(v12 + 13) & 3;
  if ( ((unsigned __int8)(v29 - 1) <= 1u || v29 == 10) && (!v30 || v30 == 3) )
    v18 |= 0x40u;
  if ( v27 == 10 )
    v18 |= 0x20u;
  v31 = v18;
  if ( v30 == 2 )
  {
    BYTE1(v31) = BYTE1(v18) | 2;
    v18 = v31;
  }
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = v18;
LABEL_3:
  sub_218B120(&v45);
  return a1;
}
