/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8098220
// Address: 0x08098220

//----- (08098220) --------------------------------------------------------
int __cdecl sub_8098220(int a1, int a2)
{
  char *v2; // eax
  char v3; // dl
  int v4; // eax
  char *v5; // edx
  unsigned int v6; // edx
  int v7; // ebx
  __m128i v8; // xmm0
  int result; // eax
  __int16 v10; // dx
  void *v11; // ebx
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  int v18; // edx
  void *v19; // eax
  void *v20; // edi
  int v21; // eax
  int v22; // [esp-74h] [ebp-74h]
  unsigned int v23; // [esp-70h] [ebp-70h]
  bool v24; // [esp-6Ch] [ebp-6Ch]
  int v25; // [esp-6Ch] [ebp-6Ch]
  bool v26; // [esp-61h] [ebp-61h]
  int v27; // [esp-60h] [ebp-60h]
  size_t v28; // [esp-60h] [ebp-60h]
  unsigned int v29; // [esp-5Ch] [ebp-5Ch]
  __int64 v30; // [esp-54h] [ebp-54h]
  int v31; // [esp-54h] [ebp-54h]
  void *v32; // [esp-54h] [ebp-54h]
  int v33; // [esp-54h] [ebp-54h]
  void *v34; // [esp-4Ch] [ebp-4Ch] BYREF
  unsigned int v35; // [esp-48h] [ebp-48h]
  int v36; // [esp-44h] [ebp-44h]
  int v37; // [esp-40h] [ebp-40h]
  int v38; // [esp-3Ch] [ebp-3Ch]
  int v39; // [esp-38h] [ebp-38h]
  __int128 v40; // [esp-34h] [ebp-34h]
  unsigned int v41; // [esp-20h] [ebp-20h]

  v41 = __readgsdword(0x14u);
  v34 = nullptr;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v24 = 0;
  v40 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v2 = *(char **)(a1 + 4);
        v3 = *v2;
        if ( *v2 != 32 && (unsigned __int8)(v3 - 9) > 1u )
          break;
        *(_DWORD *)(a1 + 4) = v2 + 1;
      }
      if ( v3 )
        break;
      if ( *(_DWORD *)(a1 + 32) <= 1u )
        goto LABEL_6;
      sub_80925F0((_DWORD *)a1);
    }
    if ( v3 != 35 || v2[1] != 35 )
      goto LABEL_6;
    v10 = *(_WORD *)(a2 + 12);
    if ( (unsigned __int16)(v10 - 7) <= 1u || v10 == 3 )
    {
      v11 = *(void **)(a1 + 16);
      v12 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      v32 = v11;
      v13 = *(_DWORD *)(a1 + 20);
      v27 = v12;
      *(_DWORD *)(a1 + 20) = 0;
    }
    else
    {
      v27 = 0;
      v13 = 0;
      v32 = nullptr;
    }
    v14 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 4) = v2 + 2;
    v29 = v14;
    result = sub_8097180(a1, (int)&v34, *(_DWORD *)(a1 + 32), nullptr);
    if ( result )
      goto LABEL_51;
    if ( (_WORD)v37 == 1 )
      goto LABEL_56;
    if ( (_WORD)v37 == 47 )
    {
      if ( *(_WORD *)(a2 + 12) == 47 && (*(_BYTE *)(a1 + 408) & 4) != 0 )
      {
LABEL_47:
        if ( *(_DWORD *)(a1 + 32) )
        {
          do
            sub_80925F0((_DWORD *)a1);
          while ( *(_DWORD *)(a1 + 32) );
          result = 0;
        }
        *(_WORD *)(a2 + 12) = 1;
LABEL_51:
        v20 = v32;
        if ( !v32 )
          goto LABEL_15;
LABEL_52:
        v33 = result;
        sub_80CF780(v20);
        result = v33;
        goto LABEL_15;
      }
    }
    else if ( (_WORD)v37 == 59 && (*(_BYTE *)(a1 + 408) & 8) != 0 )
    {
      goto LABEL_47;
    }
    v26 = sub_8092990(a1, (int)&v34, *(void **)(a1 + 12));
    if ( !v26 )
    {
      *(_QWORD *)(a1 + 4) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 12)), _mm_cvtsi32_si128(v29)).m128i_u64[0];
LABEL_56:
      if ( v32 )
      {
        sub_80CF780(v32);
        if ( !v24 )
          goto LABEL_58;
      }
      else
      {
LABEL_6:
        if ( !v24 )
          goto LABEL_58;
      }
      v4 = *(_DWORD *)(a2 + 4);
      v5 = (char *)&qword_811CFF4 + 5645;
      if ( v4 )
        v5 = *(char **)a2;
      v6 = *v5;
      if ( v6 <= 0x7F && (v6 - 48 <= 9 || (_BYTE)v6 == 46) )
      {
        v7 = *(_DWORD *)(a1 + 8);
        v30 = *(_QWORD *)a1;
        v8 = _mm_cvtsi32_si128((unsigned int)&qword_811CFF4 - 258076);
        if ( v4 )
          v8 = _mm_cvtsi32_si128(*(_DWORD *)a2);
        *(_QWORD *)a1 = _mm_unpacklo_epi32(v8, v8).m128i_u64[0];
        result = sub_8097180(a1, a2, 0, nullptr);
        *(_DWORD *)(a1 + 8) = v7;
        *(_QWORD *)a1 = v30;
        goto LABEL_15;
      }
      v21 = sub_8096D80((int *)a1, 1, a2);
      if ( v21 == -1 )
      {
        result = sub_80C7850();
        goto LABEL_15;
      }
      if ( v21 == 1 )
      {
        result = sub_8097180(a1, a2, 0, nullptr);
        if ( *(_DWORD *)(a1 + 32) && !result )
          result = sub_8098220(a1, a2);
        goto LABEL_15;
      }
LABEL_58:
      result = 0;
      goto LABEL_15;
    }
    v15 = *(_WORD *)(a2 + 12);
    if ( v15 != 2 && v15 <= 0x7Fu )
      break;
LABEL_35:
    v17 = v35;
    if ( v35 )
    {
      v28 = v35 - 1;
      if ( v35 != 1 )
      {
        v18 = *(_DWORD *)(a2 + 4);
        v25 = v35 - 1;
        if ( v18 )
        {
          v25 = --v18 + v35 - 1;
          v17 = v18 + v35;
        }
        v19 = *(void **)a2;
        if ( *(_DWORD *)(a2 + 8) < v17 )
        {
          v22 = v18;
          v23 = v17;
          v19 = sub_80CF920(a2, v19, v17, 1u);
          v18 = v22;
          v17 = v23;
          *(_DWORD *)a2 = v19;
        }
        *(_DWORD *)(a2 + 4) = v17;
        *((_BYTE *)v19 + v25) = 0;
        memcpy((void *)(v18 + *(_DWORD *)a2), v34, v28);
      }
    }
    *(_DWORD *)(a1 + 8) = v29;
    if ( v32 )
      sub_80CF780(v32);
    v24 = v26;
  }
  if ( v13 > 1 )
  {
    v16 = *(_DWORD *)a2;
    *(_DWORD *)(a2 + 4) = v13;
    *(_DWORD *)a2 = v32;
    *(_DWORD *)(a2 + 8) = v27;
    v32 = (void *)v16;
    goto LABEL_35;
  }
  result = sub_80C7880(29);
  v20 = v32;
  if ( v32 )
    goto LABEL_52;
LABEL_15:
  if ( v34 )
  {
    v31 = result;
    v35 = 0;
    sub_80CF780(v34);
    result = v31;
  }
  if ( v41 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
