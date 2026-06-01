__int64 __fastcall sub_1C540F0(_QWORD *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5, __m128 a6, __m128 a7)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r12
  __int64 v21; // rax

  if ( a5 )
  {
    sub_18C79B0((__int64)a1, 3, 0, 4);
    v11 = sub_190BE30((__int64)a1, a1[76], a2, a3, a4, 0, *(double *)a6.m128_u64, a7, 0, nullptr, 1);
    sub_190D5E0((__int64)a1, a6);
    if ( v11 <= 1 )
      return v11;
  }
  else
  {
    v11 = sub_190BE30((__int64)a1, a1[76], a2, a3, a4, 0, *(double *)a6.m128_u64, a7, 0, nullptr, 1);
    if ( v11 <= 1 )
      return v11;
  }
  v15 = sub_1907C70((__int64)a1, (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFELL), (__m128i)a6, a7, v9, v10, v12, v13);
  v11 = v15;
  if ( v15 > 1 )
  {
    v20 = v15 & 0xFFFFFFFFFFFFFFFELL;
    if ( (unsigned __int8)sub_1C535A0(
                            (_WORD *)(v15 & 0xFFFFFFFFFFFFFFFELL),
                            a1,
                            v16,
                            v17,
                            v18,
                            v19,
                            *(double *)a6.m128_u64) )
      return 1;
    v21 = *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v21 + 17) & 4) == 0
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1
      && (unsigned __int8)sub_1E63D90(a1, v20, 3095) )
    {
      return 1;
    }
  }
  return v11;
}
