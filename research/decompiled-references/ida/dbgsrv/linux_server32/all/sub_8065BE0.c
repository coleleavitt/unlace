/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8065BE0
// Address: 0x08065BE0

//----- (08065BE0) --------------------------------------------------------
unsigned int __cdecl sub_8065BE0(_DWORD *a1, unsigned int a2, const char *a3)
{
  unsigned int *v3; // ecx
  _DWORD *v4; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // edx
  _DWORD *v7; // eax
  _DWORD *v8; // edx
  _DWORD *v9; // ebp
  const char *v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v14; // [esp-14h] [ebp-78h]
  int v15; // [esp-10h] [ebp-74h]
  int v16; // [esp-Ch] [ebp-70h]
  _DWORD *v17; // [esp+0h] [ebp-64h]
  unsigned int *v18; // [esp+4h] [ebp-60h]
  __m128i v19; // [esp+18h] [ebp-4Ch] BYREF
  char v20[16]; // [esp+34h] [ebp-30h] BYREF
  unsigned int v21; // [esp+44h] [ebp-20h]

  v3 = (unsigned int *)a1[19];
  v4 = (_DWORD *)a1[18];
  v21 = __readgsdword(0x14u);
  v5 = (_DWORD *)a1[16];
  v6 = (_DWORD *)a1[20];
LABEL_2:
  v7 = v6;
  v8 = v4;
  v9 = v7;
  while ( v5 != v9 )
  {
    if ( a2 == (v5[4] & 0xFFFFFFF) )
    {
      if ( a2 > 0xB || ((0x902u >> a2) & 1) == 0 )
      {
        if ( !byte_811F8A1 )
        {
          if ( v21 == __readgsdword(0x14u) )
            sub_80CFF40(3295, v14, v15, v16);
          sub_80D7AB0();
        }
        JUMPOUT(0x804C880);
      }
      v10 = (const char *)&dword_80DDFD8;
      if ( v5[6] )
        v10 = (const char *)v5[5];
      v18 = v3;
      v17 = v8;
      v11 = strcmp(v10, a3);
      v8 = v17;
      v3 = v18;
      if ( !v11 )
      {
        v19 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v5), _mm_cvtsi32_si128(*v18)),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(*v18 + 484), _mm_cvtsi32_si128((unsigned int)v18)));
        sub_8065690((int)v20, a1 + 14, &v19);
        v12 = (0x902u >> a2) & 1;
        goto LABEL_14;
      }
    }
    v5 += 11;
    if ( v8 == v5 )
    {
      v5 = (_DWORD *)v3[1];
      v6 = v9;
      ++v3;
      v4 = v5 + 121;
      goto LABEL_2;
    }
  }
  v12 = 0;
LABEL_14:
  if ( v21 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v12;
}
// 8065D32: control flows out of bounds to 804C880
// 8065D4D: variable 'v14' is possibly undefined
// 8065D4D: variable 'v15' is possibly undefined
// 8065D4D: variable 'v16' is possibly undefined
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811F8A1: using guessed type char byte_811F8A1;
