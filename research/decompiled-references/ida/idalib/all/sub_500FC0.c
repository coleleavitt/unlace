__int64 __fastcall sub_500FC0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5)
{
  char v5; // al
  __int64 v7; // xmm0_8
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i *v12; // rax
  int v14; // edi
  Elf64_Sym *v15; // r8
  __int64 v16; // rax
  unsigned int v17; // edi
  __m128i v18; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v5 = *(_BYTE *)(a5 + 1);
  v19 = __readfsqword(0x28u);
  if ( v5 == 1 )
  {
    v14 = *(unsigned __int16 *)(a5 + 6);
    v15 = &stru_10000;
    v16 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL) + 24LL) - 1);
    if ( (unsigned int)v16 <= 7 )
    {
      LODWORD(v15) = dword_23AE1C0[v16];
      v17 = (unsigned int)v15 | v14;
      if ( (_DWORD)v15 != (_DWORD)&stru_10000 )
        LODWORD(v15) = v17;
    }
    sub_5001E0(a1, a2, a3, a4, (unsigned __int32)v15, 0, 0);
  }
  else
  {
    if ( v5 != 5 )
    {
      if ( !under_debugger )
        interr(2947);
      BUG();
    }
    v7 = *(_QWORD *)(a5 + 8);
    *(_BYTE *)(a1 + 24) = 11;
    if ( a4 == -1 )
      a4 = a3;
    *(_QWORD *)a1 = 0;
    v8 = a4;
    *(_OWORD *)(a1 + 8) = 0;
    v18.m128i_i64[0] = v7;
    v9 = qvector_reserve(a1, 0, 1, 24);
    v10 = *(_QWORD *)(a1 + 8);
    v11 = _mm_loadl_epi64(&v18);
    *(_QWORD *)a1 = v9;
    v12 = (__m128i *)(v9 + 24 * v10);
    v12[1].m128i_i32[0] = 0;
    *v12 = _mm_unpacklo_epi64(v11, (__m128i)v8);
    ++*(_QWORD *)(a1 + 8);
  }
  return a1;
}
