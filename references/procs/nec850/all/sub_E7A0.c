__int64 __fastcall sub_E7A0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int16 v3; // ax
  unsigned int v5; // esi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v11; // eax
  __m128i v12; // xmm0
  int v13; // eax
  __m128i v14; // xmm0
  __int64 v15; // rax
  char fixup; // al
  unsigned __int8 v17; // [rsp+Ch] [rbp-4Ch]
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  __m128i si128; // [rsp+18h] [rbp-40h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h]
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]

  v3 = *(_WORD *)(a2 + 24);
  v22 = __readfsqword(0x28u);
  if ( (unsigned __int16)(v3 - 36) > 1u || *(_BYTE *)(a2 + 81) != 1 || *(_WORD *)(a2 + 86) )
    goto LABEL_3;
  if ( v3 == 36 )
  {
    v15 = *(_QWORD *)(a2 + 16);
    v17 = a3;
    v18 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23BB0);
    v20 = 0;
    v21 = 0;
    fixup = get_fixup(&v18, v15 + 2);
    a3 = v17;
    if ( fixup && (v18 & 0x400000000LL) == 0 )
      goto LABEL_3;
    *(_BYTE *)(a2 + 72) |= 4u;
    *(_QWORD *)(a2 + 48) <<= 16;
  }
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 120));
  *(_BYTE *)(a2 + 121) = 0;
  *(_WORD *)(a2 + 24) = 38;
  v13 = *(_DWORD *)(a2 + 152);
  *(__m128i *)(a2 + 80) = v12;
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 136));
  *(_DWORD *)(a2 + 112) = v13;
  *(__m128i *)(a2 + 96) = v14;
LABEL_3:
  v5 = sub_E580(*(_QWORD *)(a1 + 16), a2, a3);
  v6 = 0;
  while ( *(unsigned __int16 *)(a2 + 24) != dword_23600[v6] )
  {
    if ( ++v6 == 11 )
      goto LABEL_6;
  }
  v11 = v6 - 4;
  if ( v11 <= 3 && *(_WORD *)(a2 + 86) == *(_WORD *)(a2 + 126) )
  {
    *(_BYTE *)(a2 + 121) = 0;
    *(_WORD *)(a2 + 24) = dword_23600[v11];
  }
LABEL_6:
  v7 = sub_A660(a2);
  if ( v7 != -1 )
  {
    v8 = a2 + 40LL * v7;
    if ( !*(_WORD *)(v8 + 46) )
    {
      v9 = *(unsigned int *)(v8 + 56);
      *(_BYTE *)(v8 + 41) = 2;
      *(_QWORD *)(v8 + 56) = v9;
    }
  }
  return v5;
}
