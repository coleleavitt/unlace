/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809A630
// Address: 0x0809A630

//----- (0809A630) --------------------------------------------------------
int __cdecl sub_809A630(int a1, int a2, _DWORD *a3)
{
  int v3; // eax
  int result; // eax
  __m128i v5; // xmm0
  unsigned __int64 v6; // [esp+0h] [ebp-34h]
  int v7; // [esp+10h] [ebp-24h] BYREF
  unsigned int v8; // [esp+14h] [ebp-20h]

  v8 = __readgsdword(0x14u);
  if ( !*(_BYTE *)(a1 + 172) )
    goto LABEL_11;
  while ( 1 )
  {
    v3 = sub_8097180(a1, a2, 0, a3);
    if ( *(_DWORD *)(a1 + 32) )
    {
      if ( v3 )
        goto LABEL_4;
      v3 = sub_8098220(a1, a2);
    }
    v7 = v3;
    if ( v3 )
    {
LABEL_4:
      result = sub_80C7880(v3);
      goto LABEL_5;
    }
    if ( *(_WORD *)(a2 + 12) == 1 )
    {
      *(_BYTE *)(a1 + 172) = 0;
    }
    else if ( *(_BYTE *)(a1 + 172) )
    {
      goto LABEL_20;
    }
LABEL_11:
    v5 = _mm_cvtsi32_si128(sub_80957C0(a1, &v7));
    v3 = v7;
    v6 = _mm_unpacklo_epi32(v5, v5).m128i_u64[0];
    if ( v7 == -1 || v7 == 34 )
      break;
    if ( v7 )
      goto LABEL_4;
    while ( *(_DWORD *)(a1 + 32) )
      sub_80925F0((_DWORD *)a1);
    *(_BYTE *)(a1 + 172) = 1;
    *(_QWORD *)a1 = v6;
  }
  *(_WORD *)(a2 + 12) = 1;
LABEL_20:
  result = 0;
LABEL_5:
  if ( v8 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
