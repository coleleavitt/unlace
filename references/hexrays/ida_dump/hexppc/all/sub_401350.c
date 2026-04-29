__int64 __fastcall sub_401350(
        __int64 a1,
        int a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int8 a6,
        double a7)
{
  unsigned int *v11; // rax
  __int64 v14; // rsi
  unsigned int v15; // eax
  __m128i v16; // xmm0
  char v17; // r9
  unsigned __int8 v18[16]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v19[11]; // [rsp+20h] [rbp-58h] BYREF

  v11 = *(unsigned int **)(a1 + 192);
  v19[3] = __readfsqword(0x28u);
  if ( *(unsigned int **)(a1 + 200) != v11 && sub_32AA00(*v11, 0) )
  {
    v14 = *(int *)(a5 + 4);
    v15 = sub_134700(*(_QWORD **)(a1 + 16), v14, 1);
    if ( v15 == -1 )
    {
      if ( !under_debugger )
        sub_37EEE0(0xCE3Du, v14, a7);
      BUG();
    }
    v16 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
    v17 = 1;
    *(_DWORD *)v18 = 1;
    *(_QWORD *)&v18[4] = _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(v15)).m128i_u64[0];
    if ( !a6 )
      v17 = a2 > 62;
    v19[0] = 0xFFFFFFFF00000000LL;
    v19[1] = 0;
    sub_4012A0((__int64 *)a1, 4, v18, (unsigned __int8 *)v19, (unsigned __int8 *)a5, v17);
    sub_119360((__int64)v19);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 64LL))(
      a1,
      (unsigned int)a2,
      a3,
      a4,
      v18,
      a6);
    sub_119360((__int64)v18);
  }
  else
  {
    sub_4012A0((__int64 *)a1, a2, a3, a4, (unsigned __int8 *)a5, a6);
  }
  return *(_QWORD *)(a1 + 200);
}
