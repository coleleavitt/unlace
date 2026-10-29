/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A5B30
// Address: 0x080A5B30

//----- (080A5B30) --------------------------------------------------------
int __cdecl sub_80A5B30(int a1, int a2, char a3, int a4, int a5)
{
  int v5; // esi
  unsigned __int64 v6; // xmm0_8
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax

  v5 = a1 + 24 * a2;
  v6 = *(_QWORD *)v5;
  if ( a3 == 1 )
  {
    *(_QWORD *)a5 = sub_80CD930(v6);
    v11 = sub_80CD930(*(_QWORD *)(v5 + 8));
    *(_DWORD *)(a5 + 16) = HIDWORD(v11);
    *(_DWORD *)(a5 + 20) = 0;
    *(_QWORD *)(a5 + 8) = (unsigned int)v11;
    v12 = sub_80CD930(*(_QWORD *)(v5 + 16));
    v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(HIDWORD(v12))).m128i_u64[0];
  }
  else
  {
    *(_QWORD *)a5 = v6;
    v7 = *(_DWORD *)(v5 + 8);
    if ( a4 == 8 && a3 == 2 )
    {
      v8 = HIBYTE(*(_DWORD *)(v5 + 12));
    }
    else
    {
      v8 = *(_DWORD *)(v5 + 8);
      v7 = *(_DWORD *)(v5 + 12);
    }
    *(_DWORD *)(a5 + 8) = v8;
    *(_DWORD *)(a5 + 12) = 0;
    *(_DWORD *)(a5 + 16) = v7;
    *(_DWORD *)(a5 + 20) = 0;
    v9 = *(_QWORD *)(v5 + 16);
  }
  *(_QWORD *)(a5 + 24) = v9;
  return a5;
}
