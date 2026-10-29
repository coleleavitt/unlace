__int64 __fastcall sub_215B790(__int64 a1, __int64 *a2, int a3, int a4, int a5, int a6, __int128 a7, __int128 a8)
{
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r12
  size_t v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  char v13; // r12
  __int64 v14; // rbp
  unsigned __int64 v15; // r14
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // r12
  const void *v19; // r14
  int v20; // eax
  char v21; // dl
  __int16 v22; // ax
  __int64 v23; // rax
  size_t v24; // rax
  char v25; // al
  char v26; // r12
  __int16 v27; // ax
  __int16 v28; // ax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int16 v34; // ax
  size_t v35; // r14
  __int64 v36; // rax
  size_t v37; // rax
  __int64 v38; // rax
  __int16 v39; // ax
  _BYTE *s1; // [rsp+8h] [rbp-130h]
  void *s1a; // [rsp+8h] [rbp-130h]
  size_t n; // [rsp+10h] [rbp-128h]
  _BYTE *v43; // [rsp+20h] [rbp-118h] BYREF
  size_t v44; // [rsp+28h] [rbp-110h]
  char v45; // [rsp+30h] [rbp-108h]
  __m128i v46; // [rsp+40h] [rbp-F8h] BYREF
  char v47; // [rsp+50h] [rbp-E8h]
  size_t v48[2]; // [rsp+60h] [rbp-D8h] BYREF
  char v49; // [rsp+70h] [rbp-C8h]
  __m128i v50; // [rsp+80h] [rbp-B8h] BYREF
  char v51; // [rsp+90h] [rbp-A8h]
  __m128i v52; // [rsp+A0h] [rbp-98h] BYREF
  __m128i v53; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v54; // [rsp+C0h] [rbp-78h]
  __int64 v55; // [rsp+C8h] [rbp-70h]
  const char *v56; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-60h]
  __int64 v58; // [rsp+E0h] [rbp-58h]
  __int16 v59; // [rsp+F0h] [rbp-48h]
  __int64 v60; // [rsp+F8h] [rbp-40h]

  sub_215DE90(a1, 0, a3, a4, a5, a6, a7, a8);
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 48) = 0;
  v9 = *(_QWORD **)(a1 + 16);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)a1 = &off_2BE9620;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 112) = -1;
  *(_OWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  if ( v8 <= 7 )
  {
LABEL_2:
    v10 = j__strlen("<bigaf>\n");
    if ( v8 < v10 || v10 && memcmp(v9, "<bigaf>\n", v10) )
    {
      v56 = "file too small to be an archive";
      v59 = 259;
      v14 = operator new(0x38u);
      result = sub_2195A00(v14, &v56, 2);
      *a2 = v14;
    }
    else
    {
      result = *(_BYTE *)(a1 + 114) & 0xF0 | 6u;
      *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF0 | 6;
    }
    return result;
  }
  if ( *v9 == 0xA3E6E6968743C21LL )
  {
    *(_BYTE *)(a1 + 114) |= 8u;
  }
  else
  {
    if ( *v9 != 0xA3E686372613C21LL )
      goto LABEL_2;
    *(_BYTE *)(a1 + 114) &= ~8u;
  }
  *(_BYTE *)(a1 + 114) &= 0xF8u;
  result = sub_215B0B0((__int64)&v52, a1, a2, 0);
  if ( !*a2 )
  {
    sub_21573D0((__int64)&v56);
    result = v55 | v60;
    if ( ((v55 | v60) & 0xFFFFFFFFFFFFFFF8LL) == 0 || (result = v53.m128i_i64[0], v58 == v53.m128i_i64[0]) )
    {
      *a2 = 0;
LABEL_17:
      if ( v57 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      goto LABEL_9;
    }
    (*(void (__fastcall **)(_BYTE **))(*(_QWORD *)v52.m128i_i64[1] + 24LL))(&v43);
    v12 = (__int64)v43;
    v13 = v45 & 1;
    if ( (v45 & 1) != 0 )
    {
      v43 = nullptr;
      *a2 = v12;
LABEL_16:
      result = sub_111DFC0((__int64 *)&v43);
      goto LABEL_17;
    }
    v15 = v44;
    s1 = v43;
    v16 = j__strlen("__.SYMDEF");
    if ( v16 == v15 )
    {
      if ( !v16 || (n = v16, !memcmp(s1, "__.SYMDEF", v16)) )
      {
        v21 = 2;
      }
      else
      {
        if ( n != j__strlen("__.SYMDEF_64") || memcmp(s1, "__.SYMDEF_64", n) )
        {
LABEL_28:
          v17 = j__strlen("#1/");
          if ( v17 <= v15 && (!v17 || !memcmp(s1, "#1/", v17)) )
          {
            *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF8 | 2;
            sub_2157700((__int64)v48, (__int64)&v52);
            if ( (v49 & 1) == 0 )
            {
              v18 = v48[1];
              v19 = (const void *)v48[0];
              if ( j__strlen("__.SYMDEF SORTED") == v18 )
              {
                if ( !v18 || !memcmp(v19, "__.SYMDEF SORTED", v18) )
                  goto LABEL_83;
                if ( v18 != j__strlen("__.SYMDEF") )
                {
                  if ( j__strlen("__.SYMDEF_64 SORTED") == v18 )
                    goto LABEL_37;
                  goto LABEL_91;
                }
              }
              else
              {
                if ( j__strlen("__.SYMDEF") != v18 )
                {
                  if ( j__strlen("__.SYMDEF_64 SORTED") != v18 )
                  {
LABEL_91:
                    if ( j__strlen("__.SYMDEF_64") != v18 )
                      goto LABEL_86;
                    if ( v18 )
                    {
LABEL_39:
                      if ( !memcmp(v19, "__.SYMDEF_64", v18) )
                        goto LABEL_40;
LABEL_86:
                      v28 = v54;
                      *(__m128i *)(a1 + 96) = _mm_load_si128(&v53);
                      *(_WORD *)(a1 + 112) = v28;
                      goto LABEL_43;
                    }
LABEL_40:
                    *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF8 | 4;
                    sub_2157B60((__int64)&v50, (__int64)&v52);
                    if ( (v51 & 1) == 0 )
                    {
                      *(__m128i *)(a1 + 48) = _mm_load_si128(&v50);
                      sub_111E100(&v52);
                      if ( *a2 )
                      {
LABEL_42:
                        sub_111DFC0(v50.m128i_i64);
LABEL_43:
                        sub_111DFC0((__int64 *)v48);
                        goto LABEL_16;
                      }
                      goto LABEL_85;
                    }
                    goto LABEL_94;
                  }
                  if ( !v18 )
                    goto LABEL_40;
LABEL_37:
                  if ( !memcmp(v19, "__.SYMDEF_64 SORTED", v18) )
                    goto LABEL_40;
                  if ( v18 != j__strlen("__.SYMDEF_64") )
                    goto LABEL_86;
                  goto LABEL_39;
                }
                if ( !v18 )
                {
LABEL_83:
                  sub_2157B60((__int64)&v50, (__int64)&v52);
                  if ( (v51 & 1) == 0 )
                  {
                    *(__m128i *)(a1 + 48) = _mm_load_si128(&v50);
                    sub_111E100(&v52);
                    if ( *a2 )
                      goto LABEL_42;
LABEL_85:
                    sub_111DFC0(v50.m128i_i64);
                    goto LABEL_86;
                  }
LABEL_94:
                  v29 = v50.m128i_i64[0];
                  v50.m128i_i64[0] = 0;
                  *a2 = v29;
                  goto LABEL_42;
                }
              }
              if ( memcmp(v19, "__.SYMDEF", v18) )
              {
                if ( v18 != j__strlen("__.SYMDEF_64 SORTED") )
                  goto LABEL_91;
                goto LABEL_37;
              }
              goto LABEL_83;
            }
LABEL_62:
            v24 = v48[0];
            v48[0] = 0;
            *a2 = v24;
            goto LABEL_43;
          }
          if ( j__strlen("/") == v15 )
          {
            if ( v15 && memcmp(s1, "/", v15) )
            {
              if ( v15 != j__strlen("/SYM64/") )
              {
                if ( j__strlen("//") != v15 )
                  goto LABEL_80;
                goto LABEL_58;
              }
LABEL_56:
              if ( memcmp(s1, "/SYM64/", v15) )
              {
                if ( v15 != j__strlen("//") )
                  goto LABEL_80;
LABEL_58:
                if ( !memcmp(s1, "//", v15) )
                  goto LABEL_59;
LABEL_80:
                if ( *s1 != 47 )
                {
                  v25 = *(_BYTE *)(a1 + 114) & 0xF8;
                  *(__m128i *)(a1 + 96) = _mm_load_si128(&v53);
                  v26 = v25 | v13;
                  v27 = v54;
                  *(_BYTE *)(a1 + 114) = v26;
                  *(_WORD *)(a1 + 112) = v27;
                  *a2 = 0;
                  goto LABEL_16;
                }
                if ( j__strlen("/") != v15 || v15 && memcmp(s1, "/", v15) )
                {
                  v31 = sub_2195B10();
                  sub_2220500(&v50, 3, v31);
                  *a2 = v50.m128i_i64[0];
                  goto LABEL_16;
                }
                *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF8 | 5;
                sub_2157B60((__int64)&v46, (__int64)&v52);
                if ( (v47 & 1) != 0 )
                {
                  v30 = v46.m128i_i64[0];
                  v46.m128i_i64[0] = 0;
                  *a2 = v30;
LABEL_103:
                  sub_111DFC0(v46.m128i_i64);
                  goto LABEL_16;
                }
                *(__m128i *)(a1 + 48) = _mm_load_si128(&v46);
                sub_111E100(&v52);
                if ( *a2 )
                  goto LABEL_103;
                if ( ((v60 | v55) & 0xFFFFFFFFFFFFFFF8LL) == 0 || v53.m128i_i64[0] == v58 )
                  goto LABEL_113;
                (*(void (__fastcall **)(__m128i *))(*(_QWORD *)v52.m128i_i64[1] + 24LL))(&v50);
                sub_2157570((__int64)&v43, &v50);
                sub_111DFC0(v50.m128i_i64);
                v33 = (__int64)v43;
                if ( (v45 & 1) != 0 )
                {
                  v43 = nullptr;
                  *a2 = v33;
                  goto LABEL_103;
                }
                v35 = v44;
                s1a = v43;
                if ( j__strlen("//") == v35 )
                {
                  if ( v35 && memcmp(s1a, "//", v35) )
                  {
                    if ( v35 != j__strlen("/<ECSYMBOLS>/") )
                      goto LABEL_113;
                    goto LABEL_118;
                  }
                  sub_2157B60((__int64)v48, (__int64)&v52);
                  if ( (v49 & 1) != 0 )
                  {
                    v37 = v48[0];
                    v48[0] = 0;
                    *a2 = v37;
LABEL_128:
                    sub_111DFC0((__int64 *)v48);
                    goto LABEL_103;
                  }
                  *(__m128i *)(a1 + 80) = _mm_load_si128((const __m128i *)v48);
                  sub_111E100(&v52);
                  if ( *a2 )
                    goto LABEL_128;
                  if ( ((v60 | v55) & 0xFFFFFFFFFFFFFFF8LL) == 0 || v53.m128i_i64[0] == v58 )
                  {
                    v39 = v54;
                    *(__m128i *)(a1 + 96) = _mm_load_si128(&v53);
                    *(_WORD *)(a1 + 112) = v39;
                    *a2 = 0;
                    goto LABEL_128;
                  }
                  (*(void (__fastcall **)(__m128i *))(*(_QWORD *)v52.m128i_i64[1] + 24LL))(&v50);
                  sub_2157570((__int64)&v43, &v50);
                  sub_111DFC0(v50.m128i_i64);
                  v38 = (__int64)v43;
                  if ( (v45 & 1) != 0 )
                  {
                    v43 = nullptr;
                    *a2 = v38;
                    goto LABEL_128;
                  }
                  v35 = v44;
                  s1a = v43;
                  sub_111DFC0((__int64 *)v48);
                }
                if ( j__strlen("/<ECSYMBOLS>/") != v35 )
                  goto LABEL_113;
                if ( !v35 )
                {
LABEL_119:
                  sub_2157B60((__int64)&v50, (__int64)&v52);
                  if ( (v51 & 1) != 0 )
                  {
                    v36 = v50.m128i_i64[0];
                    v50.m128i_i64[0] = 0;
                    *a2 = v36;
                    goto LABEL_121;
                  }
                  *(__m128i *)(a1 + 64) = _mm_load_si128(&v50);
                  sub_111E100(&v52);
                  if ( *a2 )
                  {
LABEL_121:
                    sub_111DFC0(v50.m128i_i64);
                    goto LABEL_103;
                  }
                  sub_111DFC0(v50.m128i_i64);
LABEL_113:
                  v34 = v54;
                  *(__m128i *)(a1 + 96) = _mm_load_si128(&v53);
                  *(_WORD *)(a1 + 112) = v34;
                  *a2 = 0;
                  goto LABEL_103;
                }
LABEL_118:
                if ( memcmp(s1a, "/<ECSYMBOLS>/", v35) )
                  goto LABEL_113;
                goto LABEL_119;
              }
            }
          }
          else
          {
            if ( j__strlen("/SYM64/") != v15 )
            {
LABEL_72:
              if ( j__strlen("//") != v15 )
                goto LABEL_80;
              if ( !v15 )
              {
LABEL_59:
                *(_BYTE *)(a1 + 114) = *(_BYTE *)(a1 + 114) & 0xF8 | v13;
                sub_2157B60((__int64)&v50, (__int64)&v52);
                if ( (v51 & 1) == 0 )
                {
                  *(__m128i *)(a1 + 80) = _mm_load_si128(&v50);
                  sub_111E100(&v52);
                  if ( *a2 )
                    goto LABEL_50;
                  goto LABEL_49;
                }
                goto LABEL_52;
              }
              goto LABEL_58;
            }
            if ( v15 )
              goto LABEL_56;
          }
          sub_2157B60((__int64)v48, (__int64)&v52);
          v13 = v49 & 1;
          if ( (v49 & 1) != 0 )
            goto LABEL_62;
          *(__m128i *)(a1 + 48) = _mm_load_si128((const __m128i *)v48);
          if ( j__strlen("/SYM64/") == v15 )
          {
            v13 = 1;
            if ( v15 )
              v13 = memcmp(s1, "/SYM64/", v15) == 0;
          }
          sub_111E100(&v52);
          if ( *a2 || ((v60 | v55) & 0xFFFFFFFFFFFFFFF8LL) == 0 || v53.m128i_i64[0] == v58 )
            goto LABEL_43;
          (*(void (__fastcall **)(__m128i *))(*(_QWORD *)v52.m128i_i64[1] + 24LL))(&v50);
          if ( (v51 & 1) != 0 )
          {
            v32 = v50.m128i_i64[0];
            v50.m128i_i64[0] = 0;
            *a2 = v32;
            sub_111DFC0(v50.m128i_i64);
            goto LABEL_43;
          }
          v15 = v50.m128i_u64[1];
          s1 = (_BYTE *)v50.m128i_i64[0];
          sub_111DFC0(v50.m128i_i64);
          sub_111DFC0((__int64 *)v48);
          goto LABEL_72;
        }
        v21 = memcmp(s1, "__.SYMDEF", n) == 0 ? 2 : 4;
      }
    }
    else
    {
      if ( j__strlen("__.SYMDEF_64") != v15 )
        goto LABEL_28;
      if ( v15 )
      {
        v20 = memcmp(s1, "__.SYMDEF_64", v15);
        v21 = 4;
        if ( v20 )
          goto LABEL_28;
      }
      else
      {
        v21 = 4;
      }
    }
    *(_BYTE *)(a1 + 114) = v21 & 7 | *(_BYTE *)(a1 + 114) & 0xF8;
    sub_2157B60((__int64)&v50, (__int64)&v52);
    if ( (v51 & 1) == 0 )
    {
      *(__m128i *)(a1 + 48) = _mm_load_si128(&v50);
      sub_111E100(&v52);
      if ( *a2 )
      {
LABEL_50:
        sub_111DFC0(v50.m128i_i64);
        goto LABEL_16;
      }
LABEL_49:
      v22 = v54;
      *(__m128i *)(a1 + 96) = _mm_load_si128(&v53);
      *(_WORD *)(a1 + 112) = v22;
      *a2 = 0;
      goto LABEL_50;
    }
LABEL_52:
    v23 = v50.m128i_i64[0];
    v50.m128i_i64[0] = 0;
    *a2 = v23;
    goto LABEL_50;
  }
LABEL_9:
  if ( v52.m128i_i64[1] )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52.m128i_i64[1] + 16LL))(v52.m128i_i64[1]);
  return result;
}
