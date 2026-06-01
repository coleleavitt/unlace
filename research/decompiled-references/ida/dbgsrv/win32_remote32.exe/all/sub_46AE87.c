/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46AE87
// Address: 0x0046AE87

//----- (0046AE87) --------------------------------------------------------
char __thiscall sub_46AE87(__m128i *this, int a2)
{
  __m128i *v3; // edi
  __m128i *v4; // ebx
  unsigned int v5; // eax
  __m128i *v6; // ecx
  WCHAR v8; // [esp-Ch] [ebp-14h]
  _DWORD *v9; // [esp-8h] [ebp-10h]

  v3 = this + 4;
  if ( sub_469B21(this->m128i_i32[0], this->m128i_i32[1], *((_BYTE *)this + 49), *((_DWORD *)this + 11)) )
  {
    *((_DWORD *)this + 5) += 4;
    v4 = (__m128i *)v3[64].m128i_i32[1];
    if ( !v4 )
      v4 = v3;
    v9 = (_DWORD *)this->m128i_i32[2];
    v8 = *(_WORD *)(*((_DWORD *)this + 5) - 4);
    v5 = sub_469A8C(v3);
    if ( sub_4796DB((int *)this + 14, v4, v5, v8, v9) )
      *((_BYTE *)this + 48) = 1;
  }
  else
  {
    v6 = (__m128i *)v3[64].m128i_i32[1];
    if ( !v6 )
      v6 = v3;
    *((_DWORD *)this + 5) += 4;
    v6->m128i_i8[0] = *(_BYTE *)(*((_DWORD *)this + 5) - 4);
    *((_DWORD *)this + 14) = 1;
  }
  if ( v3[64].m128i_i32[1] )
    v3 = (__m128i *)v3[64].m128i_i32[1];
  *((_DWORD *)this + 13) = v3;
  return 1;
}
