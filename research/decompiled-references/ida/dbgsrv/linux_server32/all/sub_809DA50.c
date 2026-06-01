/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809DA50
// Address: 0x0809DA50

//----- (0809DA50) --------------------------------------------------------
unsigned int *__usercall sub_809DA50@<eax>(unsigned int *a1@<eax>, _DWORD *a2@<edx>, unsigned int a3@<ecx>, int a4)
{
  int v6; // eax
  unsigned int v8; // eax
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  _DWORD *v12; // [esp+0h] [ebp-30h]
  _DWORD *v13; // [esp+0h] [ebp-30h]
  unsigned int v14; // [esp+10h] [ebp-20h]

  v14 = __readgsdword(0x14u);
  if ( (_DWORD *)a3 == a2 + 1 )
  {
    if ( !a2[5] )
      goto LABEL_5;
    v6 = a2[4];
    if ( *(_DWORD *)(v6 + 16) >= a4 )
      goto LABEL_5;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(a3 + 16) <= a4 )
  {
    if ( *(_DWORD *)(a3 + 16) >= a4 )
    {
      *a1 = a3;
      a1[1] = 0;
    }
    else
    {
      if ( a2[4] == a3 )
        goto LABEL_19;
      v13 = a2;
      v8 = std::_Rb_tree_increment(a3);
      a2 = v13;
      if ( *(_DWORD *)(v8 + 16) <= a4 )
        goto LABEL_5;
      if ( !*(_DWORD *)(a3 + 12) )
      {
LABEL_19:
        *a1 = 0;
        a1[1] = a3;
      }
      else
      {
        v9 = _mm_cvtsi32_si128(v8);
        *(_QWORD *)a1 = _mm_unpacklo_epi32(v9, v9).m128i_u64[0];
      }
    }
  }
  else
  {
    if ( a2[3] != a3 )
    {
      v12 = a2;
      v6 = std::_Rb_tree_decrement(a3);
      a2 = v12;
      if ( *(_DWORD *)(v6 + 16) >= a4 )
      {
LABEL_5:
        sub_809D8A0(a1, (int)a2, a4);
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v6 + 12) )
      {
        v10 = _mm_cvtsi32_si128(a3);
        *(_QWORD *)a1 = _mm_unpacklo_epi32(v10, v10).m128i_u64[0];
        goto LABEL_6;
      }
LABEL_15:
      *a1 = 0;
      a1[1] = v6;
      goto LABEL_6;
    }
    v11 = _mm_cvtsi32_si128(a3);
    *(_QWORD *)a1 = _mm_unpacklo_epi32(v11, v11).m128i_u64[0];
  }
LABEL_6:
  if ( v14 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return a1;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B760: using guessed type int __cdecl std::_Rb_tree_decrement(_DWORD);
