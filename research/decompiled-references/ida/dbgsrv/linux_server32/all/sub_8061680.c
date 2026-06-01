/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8061680
// Address: 0x08061680

//----- (08061680) --------------------------------------------------------
int __cdecl sub_8061680(int a1, signed int a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ebx
  int v5; // ecx
  int v6; // edx
  int result; // eax
  unsigned __int64 v8; // xmm1_8
  int v9; // eax
  int v10; // edx
  __m128i v11; // xmm0
  unsigned __int64 v12; // [esp-4Ch] [ebp-4Ch] BYREF
  int v13; // [esp-44h] [ebp-44h]
  char v14; // [esp-40h] [ebp-40h]
  int v15; // [esp-3Ch] [ebp-3Ch]
  _DWORD v16[6]; // [esp-38h] [ebp-38h] BYREF
  unsigned int v17; // [esp-20h] [ebp-20h]

  v17 = __readgsdword(0x14u);
  v3 = *(_DWORD **)(a1 + 664);
  if ( !v3 )
    goto LABEL_23;
  v4 = (_DWORD *)(a1 + 660);
  do
  {
    while ( 1 )
    {
      v5 = v3[2];
      v6 = v3[3];
      if ( v3[4] < a2 )
        break;
      v4 = v3;
      v3 = (_DWORD *)v3[2];
      if ( !v5 )
        goto LABEL_6;
    }
    v3 = (_DWORD *)v3[3];
  }
  while ( v6 );
LABEL_6:
  if ( v4 == (_DWORD *)(a1 + 660) || v4[4] > a2 )
  {
LABEL_23:
    if ( v17 == __readgsdword(0x14u) )
      return sub_8058290();
    goto LABEL_20;
  }
  v14 = 0;
  v13 = -1;
  v4[10] = a3;
  memset(v16, 0, sizeof(v16));
  v8 = *(__int64 *)((char *)&qword_811CFF4 - 258036);
  v15 = 0;
  v12 = v8;
  sub_80C6150(&v12, 4);
  if ( (((v15 & 0xFFFFFFF) - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v17 == __readgsdword(0x14u) )
      sub_8054D70();
    goto LABEL_20;
  }
  v9 = *(_DWORD *)(a1 + 88);
  v10 = *(_DWORD *)(a1 + 80);
  v14 = 1;
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 724));
  v16[0] = 0;
  v13 = -1;
  v12 = _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(a2)).m128i_u64[0];
  if ( v10 == v9 - 44 )
  {
    sub_8061440((_DWORD *)(a1 + 56), (int)&v12);
  }
  else
  {
    *(_BYTE *)(v10 + 12) = 0;
    *(_DWORD *)(v10 + 8) = -1;
    *(_DWORD *)(v10 + 16) = 0;
    *(_QWORD *)v10 = v8;
    sub_80C62B0(v10, (int)&v12);
    *(_DWORD *)(a1 + 80) += 44;
  }
  *(_BYTE *)(a1 + 768) = 0;
  if ( a3 == 3 )
    sub_805B5E0(a1, a2);
  sub_80C6090(&v12);
  result = v17 - __readgsdword(0x14u);
  if ( result )
LABEL_20:
    sub_80D7AB0();
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
