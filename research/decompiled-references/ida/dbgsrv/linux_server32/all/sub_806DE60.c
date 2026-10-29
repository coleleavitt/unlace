/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806DE60
// Address: 0x0806DE60

//----- (0806DE60) --------------------------------------------------------
int __cdecl sub_806DE60(int *a1, unsigned __int64 *a2, unsigned int a3, int a4, int a5, unsigned int a6, __int64 a7)
{
  int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // esi
  int result; // eax
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // [esp+14h] [ebp-34h]

  v7 = a5;
  v8 = a6;
  v16 = a7;
  if ( (a6 & a5) == 0xFFFFFFFF )
  {
    v7 = sub_80CD730((int)a1, 0, 1);
    v8 = v15;
  }
  if ( (HIDWORD(a7) & (unsigned int)a7) == 0xFFFFFFFF )
  {
    LODWORD(v14) = sub_80CD6E0(a1);
    v16 = v14;
  }
  v9 = v16 - __PAIR64__(v8, v7);
  if ( ((((v16 - __PAIR64__(v8, v7)) >> 32) | v8) & 0x80000000) != 0LL )
  {
    v13 = 0;
LABEL_12:
    *a2 = v13;
    result = sub_80697F0();
    if ( result != 1 )
      sub_8069CE0(0);
    return result;
  }
  v10 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 && a3 && !is_mul_ok(a3, v10)
    || (v11 = a3 * v10, result = (v9 - (unsigned __int64)(unsigned int)v11) >> 32, v9 < (unsigned int)v11) )
  {
    v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9 / a3), _mm_cvtsi32_si128((unsigned __int64)(v9 / a3) >> 32)).m128i_u64[0];
    goto LABEL_12;
  }
  return result;
}
// 806DF96: variable 'v15' is possibly undefined
// 806DF6E: variable 'v14' is possibly undefined
