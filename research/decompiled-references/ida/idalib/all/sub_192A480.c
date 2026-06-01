unsigned __int64 __fastcall sub_192A480(__int64 a1, __int64 a2, unsigned __int64 a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rbx
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // r13
  __int64 v15; // r9
  __int64 v17; // [rsp-8h] [rbp-60h]
  unsigned int v18; // [rsp+Ch] [rbp-4Ch]
  unsigned int v19; // [rsp+10h] [rbp-48h]
  int v20; // [rsp+14h] [rbp-44h]
  __int64 v21; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD *)(a3 + 24);
  v21 = a2;
  v20 = *(_DWORD *)(a3 + 4);
  if ( v20 != 1 )
  {
    if ( v6 == 1 )
      return 1;
    v7 = 1;
    v18 = sub_18C3160(66);
    v11 = v18 - 21 >= 0xB ? 5 : 0;
    while ( 1 )
    {
      v12 = v7;
      v13 = v6 & 0xFFFFFFFFFFFFFFFELL;
      ++v7;
      v14 = *(_QWORD **)(a3 + 8 * v12 + 24);
      v19 = sub_C00A40(a3, a2, v8, v9, v10);
      sub_18F8950(a1, v18, v19, v13, (unsigned __int64)v14, v15, (__m128i)a4, *(double *)a5.m128_u64);
      sub_16CDEE0(a1, v13, v11, *(double *)a4.m128_u64);
      sub_16CDEE0(a1, (unsigned __int64)v14, v11, *(double *)a4.m128_u64);
      a2 = v21;
      v6 = sub_1929BB0(a1, v21, v19, v18, v13, v14, a4, a5, 0);
      v8 = v17;
      if ( v20 == v7 )
        break;
      if ( v6 == 1 )
        return 1;
    }
  }
  if ( v6 != 1 )
    return sub_190C990(
             a1,
             *(_DWORD *)(a3 + 16),
             *(_DWORD *)(a3 + 20),
             v6 & 0xFFFFFFFFFFFFFFFELL,
             *(double *)a4.m128_u64,
             a5);
  return 1;
}
