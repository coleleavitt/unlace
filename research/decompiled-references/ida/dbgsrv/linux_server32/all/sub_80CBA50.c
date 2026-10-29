/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CBA50
// Address: 0x080CBA50

//----- (080CBA50) --------------------------------------------------------
unsigned int sub_80CBA50(size_t *a1, char a2, char *a3, ...)
{
  size_t v3; // ecx
  char *v4; // eax
  const char *v5; // ecx
  const char *v6; // eax
  void *v7; // ebx
  size_t *v8; // ebx
  unsigned int v9; // edx
  __m128i v10; // xmm0
  char *v11; // eax
  unsigned int result; // eax
  char *v13; // [esp+0h] [ebp-1048h]
  size_t v14; // [esp+4h] [ebp-1044h]
  size_t size; // [esp+Ch] [ebp-103Ch]
  void *ptr; // [esp+10h] [ebp-1038h]
  int v17; // [esp+18h] [ebp-1030h]
  size_t nb; // [esp+1Ch] [ebp-102Ch]
  size_t n; // [esp+1Ch] [ebp-102Ch]
  void *na; // [esp+1Ch] [ebp-102Ch]
  void *src; // [esp+20h] [ebp-1028h] BYREF
  size_t v22; // [esp+24h] [ebp-1024h]
  int v23; // [esp+28h] [ebp-1020h]
  char s[4096]; // [esp+2Ch] [ebp-101Ch] BYREF
  unsigned int v25; // [esp+102Ch] [ebp-1Ch]
  va_list va; // [esp+105Ch] [ebp+14h] BYREF

  va_start(va, a3);
  v25 = __readgsdword(0x14u);
  sub_80CE4C0(s, 4096, a3, (int)va);
  if ( (a2 & 4) != 0 && !(unsigned __int8)sub_80CEDA0((int)s) )
    goto LABEL_17;
  src = nullptr;
  v22 = 0;
  v23 = 0;
  nb = strlen(s);
  src = sub_80CF920((int)&src, nullptr, nb + 1, 1u);
  v22 = nb + 1;
  memmove(src, s, nb);
  *((_BYTE *)src + nb) = 0;
  v3 = a1[1];
  v4 = (char *)*a1;
  v17 = *a1 + 12 * v3;
  size = v22;
  if ( *a1 == v17 )
    goto LABEL_20;
  n = *a1;
  ptr = src;
  v14 = a1[1];
  v13 = (char *)*a1;
  while ( 1 )
  {
    if ( *(_DWORD *)(n + 4) )
    {
      v5 = *(const char **)n;
      v6 = (const char *)&dword_80DDFD8;
      if ( !size )
        goto LABEL_6;
    }
    else
    {
      if ( !size )
      {
        size = 0;
        v7 = ptr;
        v3 = v14;
        v4 = v13;
        if ( n != v17 )
          goto LABEL_15;
        goto LABEL_13;
      }
      v5 = (const char *)&dword_80DDFD8;
    }
    v6 = (const char *)ptr;
LABEL_6:
    if ( !strcmp(v6, v5) )
      break;
    n += 12;
    if ( v17 == n )
    {
      v3 = v14;
      v4 = v13;
      goto LABEL_20;
    }
  }
  v7 = ptr;
  v3 = v14;
  v4 = v13;
  if ( n != v17 )
    goto LABEL_15;
LABEL_20:
  if ( size )
  {
    na = sub_80CF8B0(size);
    memcpy(na, src, size);
    v8 = a1;
    v3 = a1[1];
    v4 = (char *)*a1;
    v9 = v3 + 1;
    if ( a1[2] < v3 + 1 )
    {
LABEL_22:
      v4 = (char *)sub_80CF920((int)v8, v4, v9, 0xCu);
      v3 = v8[1];
      *v8 = (size_t)v4;
    }
  }
  else
  {
LABEL_13:
    v8 = a1;
    v9 = v3 + 1;
    na = nullptr;
    if ( a1[2] < v3 + 1 )
      goto LABEL_22;
  }
  v10 = _mm_cvtsi32_si128(size);
  v11 = &v4[12 * v3];
  *(_DWORD *)v11 = na;
  v7 = src;
  *(_QWORD *)(v11 + 4) = _mm_unpacklo_epi32(v10, v10).m128i_u64[0];
  ++a1[1];
LABEL_15:
  if ( v7 )
  {
    v22 = 0;
    sub_80CF780(v7);
  }
LABEL_17:
  result = v25 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
