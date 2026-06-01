__int64 __fastcall sub_1E05D70(__int64 a1, __int64 a2, __int64 *a3, unsigned __int64 **a4, __int64 *a5)
{
  __int64 v7; // rax
  __int64 v8; // r15
  _QWORD *v9; // r15
  unsigned int v10; // rax^4
  unsigned __int64 *v11; // r12
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v21; // [rsp+8h] [rbp-C0h]
  __m128 v22[11]; // [rsp+10h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) != 26 )
    v7 = sub_F63050(v7, a2, a3, a4);
  v21 = v7;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  sub_A5E110(v22, v7);
  *a3 = sub_A73610(
          v8,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 18640LL),
          (__int64 *)(v21 + 48),
          *(unsigned __int16 *)(v21 + 22),
          (const __m128i *)v22,
          0);
  v9 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  v10 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2) >> 32;
  v11 = sub_A81910(v9, *a3, v10);
  v12 = **a4;
  v22[0].m128_u64[1] = (unsigned __int64)(*a4 + 1);
  v22[0].m128_u64[0] = v12;
  v13 = sub_BF48A0((__int64 *)v22);
  if ( *(_BYTE *)(v13 + 16) != 25 )
  {
    v15 = *(unsigned __int16 *)(v13 + 22);
    if ( *(_WORD *)(v13 + 22) )
    {
      if ( (v14 + 16 >= (unsigned __int64)(v11 + 5) || (unsigned __int64)(v11 + 3) >= v14 + 32) && v15 - 1 > 1 )
      {
        v16 = 0;
        do
        {
          *(__m128i *)&v11[v16 + 3] = _mm_loadu_si128((const __m128i *)(v14 + v16 * 8 + 16));
          v16 += 2;
        }
        while ( v16 != 2LL * (v15 >> 1) );
        v17 = v15 & 0xFFFFFFFE;
        if ( v15 != (_DWORD)v17 )
          v11[v17 + 3] = *(_QWORD *)(8 * v17 + v14 + 16);
      }
      else
      {
        v19 = 0;
        do
        {
          v11[v19 + 3] = *(_QWORD *)(v14 + 8 * v19 + 16);
          ++v19;
        }
        while ( v15 != (_DWORD)v19 );
      }
    }
  }
  *a4 = v11;
  result = (*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 18072LL) | 6;
  *a5 = result;
  return result;
}
