__int64 __fastcall sub_5E8BB0(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebp
  int v4; // edx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int16 v8; // ax
  unsigned int qerrno; // eax
  int v10; // edx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  const char *v14; // rdx
  char v15; // al
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  const char *v20; // rsi
  int v21; // eax
  __int64 v22; // rax
  const char *v23; // rsi
  const char *v24; // rsi
  unsigned int v25; // eax
  int v26; // edx
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __m128i v28; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  if ( !sub_5E6680(a1) )
  {
    qerrno = get_qerrno();
    v3 = qerrno;
    if ( qerrno )
    {
      if ( *(_BYTE *)(a1 + 224) && qerrno - 20 <= 8 )
      {
        v25 = set_qerrno(0);
        v26 = *(unsigned __int16 *)(a1 + 64);
        v3 = v25;
        v2 = *(_DWORD *)(a1 + 744);
        if ( (v2 & 1) == 0 )
        {
          v11 = (unsigned int)(v26 - 179);
          if ( (unsigned __int16)(v26 - 179) <= 0x14u )
            goto LABEL_22;
        }
        if ( (_WORD)v26 != 166 )
        {
LABEL_7:
          if ( v3 )
            goto LABEL_8;
          LOWORD(v4) = *(_WORD *)(a1 + 64);
          goto LABEL_42;
        }
      }
      else
      {
        v2 = *(_DWORD *)(a1 + 744);
        if ( (v2 & 1) != 0 )
        {
          if ( *(_WORD *)(a1 + 64) == 166 )
            *(_WORD *)(a1 + 64) = 2;
          goto LABEL_8;
        }
        v10 = *(unsigned __int16 *)(a1 + 64);
        v11 = (unsigned int)(v10 - 179);
        if ( (unsigned __int16)(v10 - 179) <= 0x14u )
        {
LABEL_22:
          v12 = 1123329;
          if ( !_bittest64(&v12, v11) )
            goto LABEL_7;
LABEL_5:
          if ( unk_2C81928 )
            *(_DWORD *)(a1 + 744) = v2 | 1;
          else
            *(_WORD *)(a1 + 64) = 2;
          goto LABEL_7;
        }
        if ( (_WORD)v10 != 166 )
          goto LABEL_8;
      }
      *(_WORD *)(a1 + 64) = 2;
      if ( v3 )
        goto LABEL_8;
      goto LABEL_27;
    }
  }
  v2 = *(_DWORD *)(a1 + 744);
  v3 = v2 & 1;
  if ( (v2 & 1) != 0 )
  {
    v8 = *(_WORD *)(a1 + 64);
    if ( v8 != 166 )
      goto LABEL_15;
  }
  else
  {
    v4 = *(unsigned __int16 *)(a1 + 64);
    if ( (unsigned __int16)(v4 - 179) <= 0x14u )
    {
      v5 = 1123329;
      if ( _bittest64(&v5, (unsigned int)(v4 - 179)) )
        goto LABEL_5;
LABEL_42:
      v8 = v4;
LABEL_15:
      if ( v8 != 2 )
      {
LABEL_16:
        v3 = 0;
        goto LABEL_8;
      }
      goto LABEL_27;
    }
    if ( (_WORD)v4 != 166 )
      goto LABEL_42;
  }
  *(_WORD *)(a1 + 64) = 2;
LABEL_27:
  if ( *(_BYTE *)(a1 + 224) )
    goto LABEL_16;
  if ( (getinf(57) & 0xF) == 6 && *(_QWORD *)(a1 + 144) )
  {
    v23 = haystack;
    if ( *(_QWORD *)(a1 + 48) )
      v23 = *(const char **)(a1 + 40);
    if ( !(unsigned int)get_named_type(*(_QWORD *)(a1 + 248), (_DWORD)v23, 1, 0, 0, 0, 0, 0, 0) )
    {
      v24 = haystack;
      if ( *(_QWORD *)(a1 + 48) )
        v24 = *(const char **)(a1 + 40);
      sub_6AB550(*(_QWORD *)(a1 + 248), v24);
    }
  }
  if ( *(_DWORD *)(a1 + 740)
    || (v22 = *(_QWORD *)(a1 + 128)) == 0
    || (*(_BYTE *)(v22 + 186) & 0x3F) == 0 && (*(_QWORD *)(v22 + 40) & 0xFFFFFFFFFFFFF1FFLL) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 48) == 0;
    ptr = nullptr;
    v14 = haystack;
    v28 = 0;
    if ( !v13 )
      v14 = *(const char **)(a1 + 40);
    v15 = sub_5E8720(a1, (__int64 *)&ptr, v14, 0);
    v16 = ptr;
    if ( v15 )
    {
      v17 = *(void **)(a1 + 40);
      v18 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 40) = ptr;
      v19 = _mm_loadu_si128(&v28);
      *(_WORD *)(a1 + 64) = 6;
      ptr = v17;
      v16 = v17;
      v28.m128i_i64[1] = v18;
      *(__m128i *)(a1 + 48) = v19;
    }
    if ( v16 )
    {
      v28.m128i_i64[0] = 0;
      qfree(v16);
    }
  }
  if ( *(_WORD *)(a1 + 64) != 2 )
    goto LABEL_16;
  v20 = haystack;
  if ( *(_QWORD *)(a1 + 48) )
    v20 = *(const char **)(a1 + 40);
  v21 = sub_3DD990(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 1672LL), v20);
  if ( !v21 )
    goto LABEL_16;
  *(_DWORD *)(a1 + 88) = v21;
  v3 = 0;
  *(_WORD *)(a1 + 64) = 9;
LABEL_8:
  if ( *(_QWORD *)(a1 + 504) )
  {
    ptr = nullptr;
    v28 = 0;
    v6 = lex_print_token(&ptr, a1 + 40);
    sub_391AE0(*(_QWORD *)(a1 + 504), (__int64)&unk_22D5BC1, v6);
    if ( *(_WORD *)(a1 + 64) == 1 )
      sub_391AE0(*(_QWORD *)(a1 + 504), (__int64)"\n");
    if ( ptr )
    {
      v28.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  return v3;
}
