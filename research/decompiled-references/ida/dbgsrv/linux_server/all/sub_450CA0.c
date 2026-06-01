/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450CA0
// Address: 0x0000000000450CA0

//----- (0000000000450CA0) ----------------------------------------------------
__int64 __fastcall sub_450CA0(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v4; // zf
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rax
  __m128i v10; // xmm1
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  int v12; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v4 = *(_BYTE *)(a1 + 336) == 0;
  v13 = __readfsqword(0x28u);
  if ( v4 )
    goto LABEL_10;
  while ( 1 )
  {
    v6 = sub_44DDC0(a1, a2, 0, a3);
    if ( *(_QWORD *)(a1 + 64) )
    {
      if ( v6 )
        goto LABEL_4;
      v6 = sub_44ED20(a1, a2);
    }
    v12 = v6;
    if ( v6 )
    {
LABEL_4:
      v7 = v6;
      return sub_479EB0(v7);
    }
    if ( *(_WORD *)(a2 + 24) == 1 )
    {
      *(_BYTE *)(a1 + 336) = 0;
    }
    else if ( *(_BYTE *)(a1 + 336) )
    {
      return 0;
    }
LABEL_10:
    v9 = sub_44C380(a1, &v12);
    v7 = v12;
    v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
    if ( v12 == -1 || v12 == 34 )
      break;
    if ( v12 )
      return sub_479EB0(v7);
    while ( *(_QWORD *)(a1 + 64) )
      sub_4495F0(a1);
    v10 = _mm_load_si128(&v11);
    *(_BYTE *)(a1 + 336) = 1;
    *(__m128i *)a1 = v10;
  }
  *(_WORD *)(a2 + 24) = 1;
  return 0;
}
