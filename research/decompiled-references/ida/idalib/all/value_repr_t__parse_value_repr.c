__int64 __fastcall value_repr_t__parse_value_repr(__int64 a1, __int64 a2, char a3)
{
  size_t v3; // rbp
  __int64 v4; // r13
  char *v5; // r12
  char *v6; // rbp
  char **v7; // r14
  void *v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  const char *v11; // rsi
  size_t v12; // rdx
  int v13; // eax
  size_t v14; // rax
  char *v16; // rax
  const void *v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // al
  __m128i si128; // xmm0
  const char *v22; // [rsp+0h] [rbp-88h]
  size_t v23; // [rsp+8h] [rbp-80h]
  bool v24; // [rsp+13h] [rbp-75h]
  __int64 v26; // [rsp+20h] [rbp-68h]
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v29 = __readfsqword(0x28u);
  v28 = 0;
  s1 = nullptr;
  v26 = qword_2CCB598;
  if ( v3 )
  {
    v16 = (char *)qalloc_or_throw(v3);
    v17 = *(const void **)a2;
    *((_QWORD *)&v28 + 1) = v3;
    s1 = v16;
    memcpy(v16, v17, v3);
    *(_QWORD *)&v28 = v3;
  }
  sub_580AB0((__int64 *)&s1, 32);
  v4 = v28;
  v5 = s1;
  v6 = (char *)haystack;
  v7 = &off_2B2E860;
  v8 = &unk_2B2EA70;
  v24 = (unsigned __int64)v28 > 1;
  v23 = v28 - 1;
  if ( (_QWORD)v28 )
    v6 = s1;
  while ( 1 )
  {
    v10 = (__int64)v7[1];
    if ( v10 )
      break;
    if ( !strcmp(v6, *v7) )
    {
      v9 = (unsigned __int64)v7[2];
      if ( v9 )
      {
        v18 = *(_QWORD *)a1;
        if ( (v9 & 0xF) != 0 )
          v18 = (unsigned __int64)v7[2] & 0xF | v18 & 0xFFFFFFFFFFFFFBF0LL;
        *(_QWORD *)a1 = v18 | v9 & 0xFFFFFFFFFFFFFFF0LL;
        if ( v7[2] == byte_9 )
        {
          v20 = getinf_flag(3, 4);
          v5 = s1;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
          *(_QWORD *)(a1 + 24) = 0;
          *(__m128i *)(a1 + 8) = si128;
          *(_DWORD *)(a1 + 32) = v20 == 0 ? 2 : 9;
        }
        goto LABEL_30;
      }
    }
LABEL_8:
    v7 += 3;
    if ( v7 == (char **)&unk_2B2EA70 )
    {
      LODWORD(v8) = 0;
      goto LABEL_23;
    }
  }
  v11 = *v7;
  v12 = (size_t)v7[1];
  if ( !*v7 )
    goto LABEL_15;
  if ( v10 == -1 )
  {
    v22 = *v7;
    v14 = strlen(*v7);
    v11 = v22;
    if ( !v14 )
      goto LABEL_15;
    v12 = v14;
  }
  if ( !v4 || v23 < v12 || strncmp(v5, v11, v12) )
    goto LABEL_8;
LABEL_15:
  if ( v5[v10] != 40 || !v24 || v5[v4 - 2] != 41 )
    goto LABEL_8;
  v13 = sub_581A20(v26, a1, (__int64)&s1, (__int64)v7[2], v10);
  v5 = s1;
  LODWORD(v8) = v13;
  if ( !(_BYTE)v13 )
    goto LABEL_23;
LABEL_30:
  if ( (a3 & 0xFu) > 9 )
  {
    if ( (a3 & 0x3F) == 0x2D )
    {
      v19 = -96;
      LODWORD(v8) = 0;
      if ( !_bittest64(&v19, *(_QWORD *)a1 & 0xFLL) )
        LOBYTE(v8) = (*(_QWORD *)a1 & 0xFFFFFFFFFFFFF0F0LL) == 0;
    }
    else
    {
      LODWORD(v8) = 1;
      if ( (a3 & 0x2F) == 0xD )
        LODWORD(v8) = (*(_BYTE *)(a1 + 1) & 0x10) == 0;
    }
  }
  else
  {
    LOBYTE(v8) = (*(_QWORD *)a1 & 0xFLL) != 10;
  }
LABEL_23:
  if ( v5 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v5);
  }
  return (unsigned int)v8;
}
