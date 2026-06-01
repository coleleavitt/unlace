/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4418C0
// Address: 0x00000000004418C0

//----- (00000000004418C0) ----------------------------------------------------
__int64 __fastcall sub_4418C0(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int8 *v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  size_t v14; // r12
  void *v15; // rax

  if ( a1 == a2 )
    return 0;
  v10 = a1;
  if ( *a1 == 10 )
  {
    v10 = sub_4419D0(a1, 1, a3, a4, a5, a6, a7, a8, a9, a10);
    if ( !v10 )
      return sub_479E90();
  }
  sub_441540((__int64)v10, a3, a4, a5, a6, a7, a8, a9, a10);
  v11 = *a2;
  *v10 = v11;
  switch ( v11 )
  {
    case 2LL:
    case 8LL:
    case 9LL:
      *((_QWORD *)v10 + 1) = *((_QWORD *)a2 + 1);
      goto LABEL_7;
    case 3LL:
    case 10LL:
      *(__m128i *)(v10 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
      return 0;
    case 5LL:
      v13 = *((_QWORD *)a2 + 1);
      *((_QWORD *)v10 + 1) = v13;
      ++*(_DWORD *)(v13 + 48);
      goto LABEL_7;
    case 6LL:
      *((_DWORD *)v10 + 2) = *((_DWORD *)a2 + 2);
      goto LABEL_7;
    case 7LL:
      *((_QWORD *)v10 + 1) = 0;
      *((_OWORD *)v10 + 1) = 0;
      v14 = *((_QWORD *)a2 + 2);
      if ( v14 )
      {
        v15 = sub_4814F0(*((_QWORD *)a2 + 2));
        *((_QWORD *)v10 + 3) = v14;
        *((_QWORD *)v10 + 1) = v15;
        memcpy(v15, *((const void **)a2 + 1), v14);
        *((_QWORD *)v10 + 2) = v14;
      }
LABEL_7:
      result = 0;
      break;
    default:
      if ( !byte_4C94E1 )
        sub_481AC0(283);
      BUG();
  }
  return result;
}
// 4418D7: variable 'a7' is possibly undefined
// 4418D7: variable 'a8' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
