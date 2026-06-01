/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806EBD0
// Address: 0x0806EBD0

//----- (0806EBD0) --------------------------------------------------------
unsigned int __cdecl sub_806EBD0(unsigned int a1, _DWORD *a2)
{
  unsigned int v3; // edx
  _DWORD *v4; // eax
  int v5; // [esp-18h] [ebp-18h]
  int v6; // [esp-14h] [ebp-14h]
  __int64 v7; // [esp-14h] [ebp-14h]
  int v8; // [esp-10h] [ebp-10h]

  if ( *(_DWORD *)(a1 + 4) > 1u )
    return a1;
  v3 = a2[53];
  if ( !a1 || a1 < v3 || v3 + 68 * a2[54] < a1 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(20086, v5, v6, v8);
    JUMPOUT(0x804CD7E);
  }
  v4 = a2 + 65;
  if ( (unsigned int)(-252645135 * ((int)(a1 - v3) >> 2)) < a2[56] )
    v4 = a2 + 57;
  HIDWORD(v7) = *(_DWORD *)(a1 + 24);
  LODWORD(v7) = v4;
  sub_806E910((int)a2, (__m128i **)a1, v7);
  return a1;
}
// 806EC7A: control flows out of bounds to 804CD7E
// 806EC75: variable 'v5' is possibly undefined
// 806EC75: variable 'v6' is possibly undefined
// 806EC75: variable 'v8' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
