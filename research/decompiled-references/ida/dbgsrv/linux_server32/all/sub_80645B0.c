/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80645B0
// Address: 0x080645B0

//----- (080645B0) --------------------------------------------------------
int __cdecl sub_80645B0(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int result; // eax
  __m128i v7; // xmm0
  _DWORD *v8; // eax
  int v9; // eax
  char v10; // [esp+4h] [ebp-58h]
  int v11; // [esp+Ch] [ebp-50h]
  int v12; // [esp+10h] [ebp-4Ch]
  unsigned __int64 v13; // [esp+14h] [ebp-48h] BYREF
  int v14; // [esp+1Ch] [ebp-40h]
  char v15; // [esp+20h] [ebp-3Ch]
  int v16; // [esp+24h] [ebp-38h]
  _BYTE v17[24]; // [esp+28h] [ebp-34h] BYREF
  unsigned int v18; // [esp+40h] [ebp-1Ch]

  v18 = __readgsdword(0x14u);
  v1 = *(_DWORD *)(a1 + 532);
  if ( v1 )
    (*(void (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v1,
      a1 + 536,
      *(unsigned __int8 *)(a1 + 537));
  v2 = *(_DWORD *)(a1 + 540);
  *(_BYTE *)(a1 + 537) = 0;
  *(_DWORD *)(a1 + 532) = 0;
  if ( v2 )
    (*(void (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v2,
      a1 + 544,
      *(unsigned __int8 *)(a1 + 545));
  v3 = *(_DWORD *)(a1 + 548);
  *(_BYTE *)(a1 + 545) = 0;
  *(_DWORD *)(a1 + 540) = 0;
  if ( v3 )
    (*(void (__cdecl **)(int, int, int, int, _DWORD))(*(_DWORD *)a1 + 160))(
      a1,
      4,
      v3,
      a1 + 552,
      *(unsigned __int8 *)(a1 + 553));
  *(_DWORD *)(a1 + 548) = 0;
  *(_BYTE *)(a1 + 553) = 0;
  sub_805B750(a1);
  v10 = 0;
  v11 = a1 + 660;
  v12 = *(_DWORD *)(a1 + 668);
  while ( v11 != v12 )
  {
    v4 = *(_DWORD *)(v12 + 20);
    v10 |= *(_DWORD *)(a1 + 724) == v4;
    v5 = ptrace(PTRACE_DETACH, v4, 0, 0);
    v12 = std::_Rb_tree_increment(v12);
    if ( v5 )
      goto LABEL_10;
  }
  if ( !v10 && ptrace(PTRACE_DETACH, *(_DWORD *)(a1 + 724), 0, 0) )
  {
LABEL_10:
    result = -1;
    goto LABEL_11;
  }
  v14 = -1;
  memset(v17, 0, sizeof(v17));
  v15 = 0;
  v16 = 0;
  v13 = 0xFFFFFFFFLL;
  sub_80C6150(&v13, 12);
  v14 = -1;
  v15 = 1;
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 724));
  v13 = _mm_unpacklo_epi32(v7, v7).m128i_u64[0];
  if ( (v16 & 0xFFFFFFF) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 80);
    if ( v9 == *(_DWORD *)(a1 + 88) - 44 )
    {
      sub_8061440((_DWORD *)(a1 + 56), (int)&v13);
    }
    else
    {
      *(_BYTE *)(v9 + 12) = 0;
      *(_DWORD *)(v9 + 8) = -1;
      *(_DWORD *)(v9 + 16) = 0;
      *(_QWORD *)v9 = 0xFFFFFFFFLL;
      sub_80C62B0(v9, (int)&v13);
      *(_DWORD *)(a1 + 80) += 44;
    }
    *(_BYTE *)(a1 + 768) = 0;
  }
  *(_BYTE *)(a1 + 770) = 0;
  v8 = *(_DWORD **)(a1 + 664);
  *(_BYTE *)(a1 + 733) = 1;
  sub_8056DB0(v8);
  *(_DWORD *)(a1 + 664) = 0;
  *(_DWORD *)(a1 + 676) = 0;
  *(_DWORD *)(a1 + 668) = v11;
  *(_DWORD *)(a1 + 672) = v11;
  *(_DWORD *)(a1 + 724) = -1;
  *(_BYTE *)(a1 + 732) = 0;
  sub_80C6090(&v13);
  result = 1;
LABEL_11:
  if ( v18 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
