/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805FDA0
// Address: 0x0805FDA0

//----- (0805FDA0) --------------------------------------------------------
char **__cdecl sub_805FDA0(int a1, signed int a2)
{
  char **v2; // edi
  char **v3; // eax
  __m128i v4; // xmm0
  char *v5; // ebx
  char *v6; // edx
  char **v8; // [esp-60h] [ebp-60h] BYREF
  __m128i v9; // [esp-54h] [ebp-54h] BYREF
  int v10; // [esp-44h] [ebp-44h]
  char v11; // [esp-40h] [ebp-40h]
  int v12; // [esp-3Ch] [ebp-3Ch]
  __int16 v13; // [esp-38h] [ebp-38h]
  int v14; // [esp-34h] [ebp-34h]
  void *v15; // [esp-30h] [ebp-30h]
  int v16; // [esp-2Ch] [ebp-2Ch]
  int v17; // [esp-28h] [ebp-28h]
  unsigned int v18; // [esp-20h] [ebp-20h]

  v2 = (char **)(a1 + 660);
  v18 = __readgsdword(0x14u);
  v13 = 0;
  v3 = *(char ***)(a1 + 664);
  v9.m128i_i64[1] = 0;
  v10 = 0;
  v11 = 0;
  v12 = 1;
  v4 = _mm_cvtsi32_si128(a2);
  v14 = 0;
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  v9.m128i_i64[0] = _mm_unpacklo_epi32(v4, v4).m128i_u64[0];
  if ( !v3 )
    goto LABEL_8;
  do
  {
    while ( 1 )
    {
      v5 = v3[2];
      v6 = v3[3];
      if ( a2 > (int)v3[4] )
        break;
      v2 = v3;
      v3 = (char **)v3[2];
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = (char **)v3[3];
  }
  while ( v6 );
LABEL_6:
  if ( v2 == (char **)(a1 + 660) || a2 < (int)v2[4] )
  {
LABEL_8:
    sub_805FB50(&v8, (_DWORD *)(a1 + 656), v2, &v9);
    v2 = v8;
    if ( v15 )
      sub_80CF780(v15);
  }
  sub_805ED40(a1, v2 + 13, a2);
  if ( v18 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v2 + 5;
}
