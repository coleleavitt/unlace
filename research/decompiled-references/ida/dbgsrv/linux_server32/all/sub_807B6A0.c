/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807B6A0
// Address: 0x0807B6A0

//----- (0807B6A0) --------------------------------------------------------
int __cdecl sub_807B6A0(int a1, char *a2)
{
  int v2; // esi
  int v3; // ecx
  char *v4; // edx
  int v5; // edx
  const char *v6; // eax
  int v7; // eax
  char v8; // cl
  int v9; // edx
  int v10; // eax
  int v11; // esi
  void *v12; // eax
  unsigned int v13; // eax
  int result; // eax
  int v15; // eax
  void *v16; // ecx
  int v17; // [esp-14h] [ebp-74h]
  int v18; // [esp-10h] [ebp-70h]
  int v19; // [esp-Ch] [ebp-6Ch]
  int v20; // [esp+8h] [ebp-58h]
  unsigned int v21; // [esp+8h] [ebp-58h]
  size_t na; // [esp+Ch] [ebp-54h]
  size_t n; // [esp+Ch] [ebp-54h]
  char *v24; // [esp+10h] [ebp-50h]
  int v25; // [esp+10h] [ebp-50h]
  int v26; // [esp+10h] [ebp-50h]
  char *s; // [esp+14h] [ebp-4Ch]
  char *sa; // [esp+14h] [ebp-4Ch]
  char *sb; // [esp+14h] [ebp-4Ch]
  char *sc; // [esp+14h] [ebp-4Ch]
  void *src; // [esp+20h] [ebp-40h] BYREF
  int v32; // [esp+24h] [ebp-3Ch]
  unsigned int v33; // [esp+28h] [ebp-38h]
  char v34[4]; // [esp+30h] [ebp-30h] BYREF
  __int128 v35; // [esp+34h] [ebp-2Ch]
  unsigned int v36; // [esp+44h] [ebp-1Ch]

  v2 = a1;
  s = a2;
  v3 = *(_DWORD *)(a1 + 68);
  v36 = __readgsdword(0x14u);
  if ( v3 )
    sub_8075940((_DWORD *)(a1 + 64));
  if ( *(_DWORD *)(a1 + 80) )
    sub_8075940((_DWORD *)(a1 + 76));
  if ( *(_DWORD *)(a1 + 92) )
    sub_8075940((_DWORD *)(a1 + 88));
  v4 = *(char **)(a1 + 232);
  if ( v4 )
  {
    v34[0] = 2;
    v24 = v4;
    sa = nullptr;
    v35 = 0;
    do
      sub_8089430(*(_DWORD *)(a1 + 228) + 20 * (_DWORD)sa++);
    while ( v24 != sa );
    *(_DWORD *)(a1 + 232) = 0;
    s = a2;
    sub_8089430((int)v34);
  }
  sub_807B5A0((char **)(a1 + 128), 0);
  sub_807B5A0((char **)(a1 + 140), 0);
  sub_807B5A0((char **)(a1 + 152), 0);
  sub_807B5A0((char **)(a1 + 164), 0);
  if ( *(_DWORD *)(a1 + 180) )
    *(_DWORD *)(a1 + 180) = 0;
  if ( *(_DWORD *)(a1 + 192) )
    *(_DWORD *)(a1 + 192) = 0;
  sub_807B620((char **)(a1 + 200), 0);
  sub_807B620((char **)(a1 + 212), 0);
  v5 = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 240) = -1;
  if ( !v5 )
  {
    v20 = sub_8080740(*(int **)(a1 + 60), s);
    if ( v20 != -1 )
      goto LABEL_33;
    goto LABEL_43;
  }
  src = nullptr;
  v32 = 0;
  v33 = 0;
  if ( s )
  {
    na = strlen(s);
    src = sub_80CF920((int)&src, nullptr, na + 1, 1u);
    v32 = na + 1;
    memmove(src, s, na);
    *((_BYTE *)src + na) = 0;
    v5 = *(_DWORD *)(a1 + 100);
  }
  v6 = (const char *)&dword_80DDFD8;
  if ( *(_DWORD *)(v5 + 36) )
    v6 = *(const char **)(v5 + 32);
  v25 = v5;
  v7 = strcmp(v6, s);
  v8 = *(_BYTE *)(a1 + 124);
  v9 = v25;
  if ( !v7 )
  {
    if ( !v8 )
    {
      *(_DWORD *)(a1 + 120) = 1;
      v10 = sub_8082260(v25, *(int **)(a1 + 60), (int)&src);
      goto LABEL_23;
    }
    v15 = v32;
    v16 = src;
    if ( v32 )
    {
      n = v32 - 1;
      v21 = v32 + 1;
      if ( v33 >= v32 + 1 )
        goto LABEL_50;
    }
    else
    {
      if ( v33 > 1 )
      {
        v32 = 2;
        *((_BYTE *)src + 1) = 0;
LABEL_52:
        *(_BYTE *)src = 126;
        v9 = *(_DWORD *)(a1 + 100);
        *(_DWORD *)(a1 + 120) = 2;
        goto LABEL_22;
      }
      n = 0;
      v21 = 2;
    }
    v16 = sub_80CF920((int)&src, src, v21, 1u);
    src = v16;
    v15 = n + 1;
LABEL_50:
    v32 = v21;
    *((_BYTE *)v16 + v15) = 0;
    if ( n )
      memmove((char *)src + 1, src, n);
    goto LABEL_52;
  }
  if ( !v8 )
  {
LABEL_22:
    v10 = sub_8082260(v9, *(int **)(a1 + 60), (int)&src);
LABEL_23:
    v20 = v10;
    if ( v10 != -1 )
    {
      if ( *(_DWORD *)(a1 + 120) == 2 )
        *(_DWORD *)(*(_DWORD *)(a1 + 100) + 52) = v10;
      if ( *(_DWORD *)(a1 + 80) )
      {
        v26 = *(_DWORD *)(a1 + 80);
        v11 = 0;
        sb = *(char **)(a1 + 76);
        while ( !*((_DWORD *)sb + 1) || strcmp(*(const char **)sb, "this") )
        {
          sb += 12;
          if ( v26 == ++v11 )
          {
            v2 = a1;
            goto LABEL_40;
          }
        }
        v12 = src;
        v2 = a1;
        if ( !src )
          goto LABEL_33;
      }
      else
      {
LABEL_40:
        sub_8077680((char **)(a1 + 76), "this");
        v12 = src;
        if ( !src )
          goto LABEL_33;
      }
      v32 = 0;
      sub_80CF780(v12);
LABEL_33:
      v13 = *(_DWORD *)(**(_DWORD **)(v2 + 60) + 4 * v20);
      *(_DWORD *)(v2 + 112) = 0;
      *(_BYTE *)(v2 + 116) = -90;
      *(_QWORD *)(v2 + 104) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v13), _mm_cvtsi32_si128(v13 + 16)).m128i_u64[0];
      if ( *(_DWORD *)(v13 + 68) != -1 )
      {
        if ( !byte_811F8A1 )
        {
          if ( v36 == __readgsdword(0x14u) )
            sub_80CFF40(484, v17, v18, v19);
          sub_80D7AB0();
        }
        JUMPOUT(0x804D9F4);
      }
      result = 0;
      goto LABEL_35;
    }
    if ( src )
    {
      v32 = 0;
      sub_80CF780(src);
    }
LABEL_43:
    sub_80C7910(0, s);
    result = sub_80C7880(40);
    goto LABEL_35;
  }
  result = sub_80C7880(1584);
  if ( src )
  {
    sc = (char *)result;
    v32 = 0;
    sub_80CF780(src);
    result = (int)sc;
  }
LABEL_35:
  if ( v36 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 807BB86: control flows out of bounds to 804D9F4
// 807BBA2: variable 'v17' is possibly undefined
// 807BBA2: variable 'v18' is possibly undefined
// 807BBA2: variable 'v19' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
