/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8083E40
// Address: 0x08083E40

//----- (08083E40) --------------------------------------------------------
unsigned int *__usercall sub_8083E40@<eax>(
        unsigned int *a1@<eax>,
        _DWORD *a2@<edx>,
        unsigned int a3@<ecx>,
        unsigned int a4)
{
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v11; // eax
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  unsigned int v14; // [esp+0h] [ebp-20h]

  v14 = __readgsdword(0x14u);
  v7 = a4;
  if ( (_DWORD *)a3 == a2 + 1 )
  {
    if ( !a2[5] )
      goto LABEL_5;
    v9 = a2[4];
    if ( *(_DWORD *)(v9 + 16) >= a4 )
      goto LABEL_5;
    goto LABEL_15;
  }
  v8 = *(_DWORD *)(a3 + 16);
  if ( a4 < v8 )
  {
    if ( a2[3] == a3 )
      goto LABEL_18;
    v9 = std::_Rb_tree_decrement(a3);
    v7 = a4;
    if ( *(_DWORD *)(v9 + 16) >= a4 )
    {
LABEL_5:
      sub_8083D60(a1, (int)a2, v7);
      goto LABEL_6;
    }
    if ( *(_DWORD *)(v9 + 12) )
    {
LABEL_18:
      v13 = _mm_cvtsi32_si128(a3);
      *(_QWORD *)a1 = _mm_unpacklo_epi32(v13, v13).m128i_u64[0];
      goto LABEL_6;
    }
LABEL_15:
    *a1 = 0;
    a1[1] = v9;
    goto LABEL_6;
  }
  if ( v8 >= a4 )
  {
    *a1 = a3;
    a1[1] = 0;
  }
  else
  {
    if ( a2[4] == a3 )
      goto LABEL_19;
    v11 = std::_Rb_tree_increment(a3);
    v7 = a4;
    if ( a4 >= *(_DWORD *)(v11 + 16) )
      goto LABEL_5;
    if ( !*(_DWORD *)(a3 + 12) )
    {
LABEL_19:
      *a1 = 0;
      a1[1] = a3;
    }
    else
    {
      v12 = _mm_cvtsi32_si128(v11);
      *(_QWORD *)a1 = _mm_unpacklo_epi32(v12, v12).m128i_u64[0];
    }
  }
LABEL_6:
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
