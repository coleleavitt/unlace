__int64 __fastcall sub_218EF00(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // r15
  int v14; // eax
  int v15; // edx
  __int64 v16; // r8
  unsigned int v17; // edi
  int v18; // esi
  int v19; // r14d
  unsigned int *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int *v25; // rdx
  __int16 v26; // ax
  int v27; // edx
  char v28; // si
  __int16 v29; // ax
  int v30; // edx
  char v31; // al
  int v32; // edx
  size_t v33; // rax
  void *v34; // rax
  void *v35; // rax
  void *v36; // rax
  size_t v37; // rax
  size_t v38; // rax
  const char *v39; // rsi
  size_t v40; // rax
  size_t v41; // rax
  size_t v42; // rax
  __int64 *v43; // [rsp+10h] [rbp-88h]
  int v44; // [rsp+1Ch] [rbp-7Ch]
  __int64 v45; // [rsp+20h] [rbp-78h] BYREF
  char v46; // [rsp+28h] [rbp-70h]
  void *s1[2]; // [rsp+30h] [rbp-68h] BYREF
  __m128i v48; // [rsp+40h] [rbp-58h] BYREF
  char v49; // [rsp+50h] [rbp-48h]

  v43 = a2 + 7;
  sub_218EC50((__int64)&v45, a2 + 7, a3, HIDWORD(a3), a5, a6);
  if ( (v46 & 1) != 0 )
  {
    v11 = v45;
    *(_BYTE *)(a1 + 8) |= 1u;
    v45 = 0;
    *(_QWORD *)a1 = v11;
    goto LABEL_3;
  }
  v13 = v45;
  v14 = *(unsigned __int8 *)(v45 + 12);
  v15 = v14 >> 4;
  if ( v14 >> 4 )
  {
    LOBYTE(v9) = v15 == 2;
    v16 = 4 * (unsigned int)(v15 == 2) + 130;
    v17 = 4 * (v15 == 2) + 138;
    v18 = 4 * (v15 == 2) + 10;
    v19 = 4 * (v15 == 2) + 2;
  }
  else
  {
    v16 = 128;
    v17 = 136;
    v18 = 8;
    v19 = 0;
  }
  v20 = (unsigned int *)a2[16];
  if ( __ROL2__(*(_WORD *)(v45 + 14), 8) == 0xFFF1 )
  {
    v16 = v17;
    v19 = v18;
  }
  if ( (unsigned __int8)((v14 & 0xF) - 3) <= 1u )
    v19 = v16;
  if ( v20 )
  {
    v44 = v16;
    sub_21754C0((__int64)&v48, v43, v20, v9, v16, v10);
    if ( (v49 & 1) != 0 )
    {
LABEL_12:
      v21 = v48.m128i_i64[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      v48.m128i_i64[0] = 0;
      *(_QWORD *)a1 = v21;
      sub_216F7E0(v48.m128i_i64);
      goto LABEL_3;
    }
    if ( v13 == v48.m128i_i64[0] )
      v19 = v44;
  }
  else
  {
    v49 &= ~1u;
    v48 = 0u;
  }
  sub_216F7E0(v48.m128i_i64);
  v25 = (unsigned int *)a2[15];
  if ( v25 )
  {
    sub_21754C0((__int64)&v48, v43, v25, v22, v23, v24);
    if ( (v49 & 1) != 0 )
      goto LABEL_12;
    if ( v13 == v48.m128i_i64[0] )
      LOBYTE(v19) = v19 | 0x80;
  }
  else
  {
    v49 &= ~1u;
    v48 = 0u;
  }
  sub_216F7E0(v48.m128i_i64);
  v26 = __ROL2__(*(_WORD *)(a2[7] + 18), 8);
  switch ( v26 )
  {
    case 183:
      (*(void (__fastcall **)(__m128i *, __int64 *, unsigned __int64))(*a2 + 80))(&v48, a2, a3);
      if ( (v49 & 1) == 0 )
      {
        *(__m128i *)s1 = _mm_load_si128(&v48);
LABEL_45:
        v33 = j__strlen("$d");
        if ( sub_9C7D00((__int64)s1, "$d", v33) )
        {
LABEL_46:
          LOBYTE(v19) = v19 | 0x80;
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
      v34 = (void *)v48.m128i_i64[0];
      v48.m128i_i64[0] = 0;
      s1[0] = v34;
      sub_A0E8E0((_QWORD **)s1);
      if ( s1[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)s1[0] + 8LL))(s1[0]);
      goto LABEL_47;
    case 40:
      (*(void (__fastcall **)(__m128i *, __int64 *, unsigned __int64))(*a2 + 80))(&v48, a2, a3);
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
          LOBYTE(v19) = v19 | 0x80;
        }
      }
      sub_111DFC0(v48.m128i_i64);
      v27 = *(unsigned __int8 *)(v13 + 12);
      v28 = *(_BYTE *)(v13 + 12) & 0xF;
      if ( v28 == 2 && (sub_2180190(*(_DWORD *)(v13 + 4)) & 1) != 0 )
        v19 |= 0x100u;
      goto LABEL_24;
    case 252:
      (*(void (__fastcall **)(__m128i *, __int64 *, unsigned __int64))(*a2 + 80))(&v48, a2, a3);
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
      (*(void (__fastcall **)(__m128i *, __int64 *, unsigned __int64))(*a2 + 80))(&v48, a2, a3);
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
  v27 = *(unsigned __int8 *)(v13 + 12);
  v28 = *(_BYTE *)(v13 + 12) & 0xF;
LABEL_24:
  v29 = __ROL2__(*(_WORD *)(v13 + 14), 8);
  if ( !v29 )
    v19 |= 1u;
  if ( v28 == 5 || v29 == -14 )
    v19 |= 0x10u;
  v30 = v27 >> 4;
  v31 = *(_BYTE *)(v13 + 13) & 3;
  if ( ((unsigned __int8)(v30 - 1) <= 1u || v30 == 10) && (!v31 || v31 == 3) )
    v19 |= 0x40u;
  if ( v28 == 10 )
    v19 |= 0x20u;
  v32 = v19;
  if ( v31 == 2 )
  {
    BYTE1(v32) = BYTE1(v19) | 2;
    v19 = v32;
  }
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = v19;
LABEL_3:
  sub_218AE00(&v45);
  return a1;
}
