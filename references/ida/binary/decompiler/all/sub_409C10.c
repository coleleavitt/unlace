__int64 __fastcall sub_409C10(
        __int64 a1,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int8 a6)
{
  unsigned int *v9; // rax
  unsigned int v12; // eax
  __m128i v13; // xmm0
  char v14; // r9
  unsigned __int8 v15[16]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v16[11]; // [rsp+20h] [rbp-58h] BYREF

  v9 = *(unsigned int **)(a1 + 192);
  v16[3] = __readfsqword(0x28u);
  if ( *(unsigned int **)(a1 + 200) != v9 && (unsigned __int8)sub_32B8E0(*v9, 0) )
  {
    v12 = sub_135C40(*(_QWORD **)(a1 + 16), *(int *)(a5 + 4), 1);
    if ( v12 == -1 )
    {
      if ( !under_debugger )
        sub_37EA20(52797);
      BUG();
    }
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
    v14 = 1;
    *(_DWORD *)v15 = 1;
    *(_QWORD *)&v15[4] = _mm_unpacklo_epi32(v13, _mm_cvtsi32_si128(v12)).m128i_u64[0];
    if ( !a6 )
      v14 = a2 > 62;
    v16[0] = 0xFFFFFFFF00000000LL;
    v16[1] = 0;
    sub_409B60(a1, 4, v15, (unsigned __int8 *)v16, (unsigned __int8 *)a5, v14);
    sub_11A960((__int64)v16);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 64LL))(
      a1,
      (unsigned int)a2,
      a3,
      a4,
      v15,
      a6);
    sub_11A960((__int64)v15);
  }
  else
  {
    sub_409B60(a1, a2, a3, a4, (unsigned __int8 *)a5, a6);
  }
  return *(_QWORD *)(a1 + 200);
}
