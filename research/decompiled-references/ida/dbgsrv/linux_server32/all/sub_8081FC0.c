/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8081FC0
// Address: 0x08081FC0

//----- (08081FC0) --------------------------------------------------------
_DWORD *__userpurge sub_8081FC0@<eax>(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v4; // eax
  const char *v5; // edx
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  const char *v10; // eax
  int v11; // eax
  const char *v12; // ecx
  const char *v13; // edx
  int v14; // edx
  const char *v15; // eax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  char *s2; // [esp+0h] [ebp-34h]
  char *s2a; // [esp+0h] [ebp-34h]
  char *s1b; // [esp+4h] [ebp-30h]
  char *s1; // [esp+4h] [ebp-30h]
  char *s1a; // [esp+4h] [ebp-30h]
  unsigned int v23; // [esp+14h] [ebp-20h]

  v23 = __readgsdword(0x14u);
  if ( a3 == a2 + 1 )
  {
    if ( !a2[5] )
      goto LABEL_14;
    s2a = (char *)a2[4];
    v11 = *((_DWORD *)s2a + 5);
    if ( *(_DWORD *)(a4 + 4) )
    {
      v12 = *(const char **)a4;
      v13 = (const char *)&dword_80DDFD8;
      if ( !v11 )
        goto LABEL_18;
    }
    else
    {
      v12 = (const char *)&dword_80DDFD8;
      if ( !v11 )
        goto LABEL_14;
    }
    v13 = *((const char **)s2a + 4);
LABEL_18:
    if ( strcmp(v13, v12) < 0 )
    {
      *a1 = 0;
      a1[1] = s2a;
      goto LABEL_5;
    }
LABEL_14:
    sub_8081E00(a1, (int)a2, a4);
    goto LABEL_5;
  }
  v4 = *(_DWORD *)(a4 + 4);
  if ( a3[5] )
  {
    v5 = (const char *)a3[4];
    if ( !v4 )
    {
      s2 = (char *)&dword_80DDFD8;
      if ( !*v5 )
        goto LABEL_9;
LABEL_21:
      if ( (_DWORD *)a2[3] == a3 )
        goto LABEL_26;
      v14 = std::_Rb_tree_decrement(a3);
      v15 = (const char *)&dword_80DDFD8;
      if ( *(_DWORD *)(v14 + 20) )
        v15 = *(const char **)(v14 + 16);
      s1a = (char *)v14;
      if ( strcmp(v15, s2) >= 0 )
        goto LABEL_14;
      if ( *((_DWORD *)s1a + 3) )
      {
LABEL_26:
        v16 = _mm_cvtsi32_si128((unsigned int)a3);
        *(_QWORD *)a1 = _mm_unpacklo_epi32(v16, v16).m128i_u64[0];
      }
      else
      {
        *a1 = 0;
        a1[1] = s1a;
      }
      goto LABEL_5;
    }
  }
  else
  {
    v5 = (const char *)&dword_80DDFD8;
    if ( !v4 )
    {
LABEL_4:
      a1[1] = 0;
      *a1 = a3;
      goto LABEL_5;
    }
  }
  s2 = *(char **)a4;
  s1b = (char *)v5;
  v7 = strcmp(*(const char **)a4, v5);
  v5 = s1b;
  if ( v7 < 0 )
    goto LABEL_21;
LABEL_9:
  if ( strcmp(v5, s2) >= 0 )
    goto LABEL_4;
  v8 = a3;
  if ( (_DWORD *)a2[4] == a3 )
    goto LABEL_30;
  v9 = std::_Rb_tree_increment(a3);
  v10 = (const char *)&dword_80DDFD8;
  if ( *(_DWORD *)(v9 + 20) )
    v10 = *(const char **)(v9 + 16);
  s1 = (char *)v9;
  if ( strcmp(s2, v10) >= 0 )
    goto LABEL_14;
  v8 = a3;
  if ( !a3[3] )
  {
LABEL_30:
    *a1 = 0;
    a1[1] = v8;
  }
  else
  {
    v17 = _mm_cvtsi32_si128((unsigned int)s1);
    *(_QWORD *)a1 = _mm_unpacklo_epi32(v17, v17).m128i_u64[0];
  }
LABEL_5:
  if ( v23 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
