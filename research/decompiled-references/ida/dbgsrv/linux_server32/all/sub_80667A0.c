/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80667A0
// Address: 0x080667A0

//----- (080667A0) --------------------------------------------------------
int __cdecl sub_80667A0(int a1, int *a2, char a3)
{
  FILE *v3; // eax
  char v4; // di
  char *v5; // edi
  const char *v6; // eax
  int v7; // ebx
  int v8; // ecx
  _DWORD *v9; // edx
  int v10; // eax
  int *v11; // edi
  unsigned int v12; // eax
  unsigned int *v13; // edi
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  char *v16; // eax
  int v17; // eax
  bool v18; // cc
  char *v19; // eax
  void *v20; // edi
  char *v21; // edx
  char *v22; // eax
  char *v23; // eax
  __m128i v24; // xmm0
  _DWORD *v25; // eax
  unsigned int v26; // edx
  size_t v27; // ecx
  int *v28; // eax
  char v29; // bl
  int *v30; // eax
  char *v31; // eax
  unsigned int i; // edx
  int v33; // eax
  char *v34; // ecx
  char *j; // edi
  char *v36; // edx
  void *v37; // eax
  int result; // eax
  void *v39; // eax
  size_t v40; // [esp+0h] [ebp-94h]
  unsigned int v41; // [esp+4h] [ebp-90h]
  unsigned int v42; // [esp+4h] [ebp-90h]
  size_t n; // [esp+Ch] [ebp-88h]
  const void *na; // [esp+Ch] [ebp-88h]
  int v45; // [esp+10h] [ebp-84h]
  char *s2; // [esp+1Ch] [ebp-78h]
  char *v47; // [esp+20h] [ebp-74h]
  char *v48; // [esp+28h] [ebp-6Ch]
  char *v49; // [esp+28h] [ebp-6Ch]
  char *v50; // [esp+28h] [ebp-6Ch]
  void *ptr; // [esp+34h] [ebp-60h] BYREF
  char *v52; // [esp+38h] [ebp-5Ch]
  unsigned int v53; // [esp+3Ch] [ebp-58h]
  unsigned int v54; // [esp+44h] [ebp-50h] BYREF
  unsigned int v55; // [esp+48h] [ebp-4Ch]
  char s[16]; // [esp+58h] [ebp-3Ch] BYREF
  unsigned __int8 v57; // [esp+68h] [ebp-2Ch]
  char *s1; // [esp+6Ch] [ebp-28h]
  unsigned int v59; // [esp+70h] [ebp-24h]
  unsigned int v60; // [esp+74h] [ebp-20h]
  unsigned int v61; // [esp+78h] [ebp-1Ch]

  v61 = __readgsdword(0x14u);
  if ( *(_BYTE *)(a1 + 733) || (v3 = *(FILE **)(a1 + 760)) == nullptr )
  {
    result = -5;
    goto LABEL_70;
  }
  if ( a3 )
  {
    sub_8061880(a1, 0, 1);
    v3 = *(FILE **)(a1 + 760);
  }
  rewind(v3);
  s1 = nullptr;
  v59 = 0;
  v60 = 0;
  ptr = nullptr;
  v52 = nullptr;
  v53 = 0;
  v45 = 1;
  while ( 1 )
  {
    v4 = sub_805D440(a1, (int)&v54);
    if ( !v4 )
      break;
    if ( v54 < v55 )
    {
      if ( *(_DWORD *)(a1 + 776) > 1u )
        goto LABEL_17;
      n = v59;
      if ( v59 <= 1 )
        goto LABEL_17;
      v5 = s1;
      if ( ptr != (char *)ptr + 12 * (_DWORD)v52 )
      {
        v48 = (char *)ptr;
        v47 = (char *)ptr + 12 * (_DWORD)v52;
        while ( 1 )
        {
          v6 = (const char *)&dword_80DDFD8;
          if ( *((_DWORD *)v48 + 1) )
            v6 = *(const char **)v48;
          if ( !strcmp(v5, v6) )
            break;
          v48 += 12;
          if ( v47 == v48 )
            goto LABEL_32;
        }
        if ( v48 != v47 )
        {
LABEL_17:
          v7 = *a2;
          v8 = a2[1];
          v9 = (_DWORD *)*a2;
          if ( !v8 )
            goto LABEL_39;
          goto LABEL_18;
        }
      }
LABEL_32:
      v19 = strstr(v5, "ld-");
      if ( !v19 || v19 - v5 == -1 || v19 != v5 && *(v19 - 1) != 47 )
        goto LABEL_17;
      v20 = sub_80CF8B0(n);
      memcpy(v20, s1, n);
      v21 = v52;
      v22 = (char *)ptr;
      if ( v53 < (unsigned int)(v52 + 1) )
      {
        v22 = (char *)sub_80CF920((int)&ptr, ptr, (unsigned int)(v52 + 1), 0xCu);
        v21 = v52;
        ptr = v22;
      }
      v23 = &v22[12 * (_DWORD)v21];
      *(_DWORD *)v23 = v20;
      v24 = _mm_cvtsi32_si128(n);
      *(_QWORD *)(v23 + 4) = _mm_unpacklo_epi32(v24, v24).m128i_u64[0];
      ++v52;
      v7 = *a2;
      v8 = a2[1];
      v9 = (_DWORD *)*a2;
      if ( !v8 )
      {
LABEL_39:
        v11 = a2;
        v12 = 1;
        if ( a2[2] )
          goto LABEL_23;
LABEL_40:
        v25 = sub_80CF920((int)v11, v9, v12, 0x28u);
        v8 = v11[1];
        *v11 = (int)v25;
        v9 = v25;
        goto LABEL_23;
      }
LABEL_18:
      v10 = 0;
      while ( *v9 != v54 )
      {
        ++v10;
        v9 += 10;
        if ( v10 == v8 )
        {
          v9 = (_DWORD *)v7;
          goto LABEL_22;
        }
      }
      v9 = (_DWORD *)v7;
      if ( v10 != v8 )
        continue;
LABEL_22:
      v11 = a2;
      v12 = v8 + 1;
      if ( a2[2] < (unsigned int)(v8 + 1) )
        goto LABEL_40;
LABEL_23:
      v13 = &v9[10 * v8];
      *v13 = 0;
      v13[1] = 0;
      v13[2] = 0;
      v13[3] = 0;
      v13[4] = 0;
      *((_WORD *)v13 + 18) = 0;
      v13[5] = 0;
      v13[6] = 0;
      v13[7] = 0;
      v13[8] = 0;
      ++a2[1];
      v14 = v13[3];
      v15 = v13[4];
      *v13 = v54;
      v13[1] = v55;
      v16 = (char *)v13[2];
      v13[2] = (unsigned int)s1;
      v13[3] = v59;
      v13[4] = v60;
      s1 = v16;
      v17 = v57;
      v59 = v14;
      v18 = v45 < v57;
      v60 = v15;
      *((_BYTE *)v13 + 36) = v57;
      if ( !v18 )
        v17 = v45;
      v45 = v17;
      if ( strchr(s, 114) )
        *((_BYTE *)v13 + 37) |= 4u;
      if ( strchr(s, 119) )
        *((_BYTE *)v13 + 37) |= 2u;
      if ( strchr(s, 120) )
        *((_BYTE *)v13 + 37) |= 1u;
    }
  }
  if ( !v52 )
    goto LABEL_56;
  v49 = nullptr;
  s2 = (char *)(a1 + 772);
  while ( 2 )
  {
    v31 = (char *)ptr + 12 * (_DWORD)v49;
    if ( s2 == v31 )
    {
LABEL_52:
      if ( *(_DWORD *)(a1 + 776) )
        v28 = *(int **)(a1 + 772);
      else
        v28 = &dword_80DDFD8;
    }
    else
    {
      v26 = *((_DWORD *)v31 + 1);
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v26 != 1 )
        {
          na = *(const void **)v31;
          v39 = *(void **)(a1 + 772);
          if ( *(_DWORD *)(a1 + 780) < v26 )
          {
            v40 = v26 - 1;
            v42 = v26;
            v39 = sub_80CF920((int)s2, v39, v26, 1u);
            v27 = v40;
            *(_DWORD *)(a1 + 772) = v39;
            v26 = v42;
          }
          v41 = v26;
          *(_DWORD *)(a1 + 776) = v26;
          memmove(v39, na, v27);
          *(_BYTE *)(*(_DWORD *)(a1 + 772) + v41 - 1) = 0;
          goto LABEL_52;
        }
      }
      *(_DWORD *)(a1 + 776) = 0;
      v28 = &dword_80DDFD8;
    }
    sub_80A03F0(a1, "trying potential interpreter %s\n", v28);
    v29 = sub_8062DB0(a1, a2);
    if ( v29 )
    {
      v30 = &dword_80DDFD8;
      if ( *(_DWORD *)(a1 + 776) )
        v30 = *(int **)(a1 + 772);
      sub_8058E20(a1, "Found a valid interpeter in %s, will report shared library events!\n", v30);
      sub_8065D60(a1, a2);
      v4 = v29;
    }
    if ( ++v49 < v52 )
      continue;
    break;
  }
  if ( !v4 )
    *(_DWORD *)(a1 + 776) = 0;
LABEL_56:
  for ( i = 0; i < a2[1]; *(_BYTE *)(*a2 + 8 * v33 + 36) = v45 )
    v33 = 5 * i++;
  if ( a3 )
    sub_8062200(a1, 0, 1);
  v34 = (char *)ptr;
  if ( ptr )
  {
    if ( v52 )
    {
      v50 = v52;
      for ( j = nullptr; j != v50; ++j )
      {
        v36 = &v34[12 * (_DWORD)j];
        v37 = *(void **)v36;
        if ( *(_DWORD *)v36 )
        {
          *((_DWORD *)v36 + 1) = 0;
          sub_80CF780(v37);
          v34 = (char *)ptr;
        }
      }
    }
    v52 = nullptr;
    sub_80CF780(v34);
  }
  if ( s1 )
  {
    v59 = 0;
    sub_80CF780(s1);
  }
  result = 1;
LABEL_70:
  if ( v61 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
