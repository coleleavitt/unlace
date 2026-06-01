/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_449530
// Address: 0x0000000000449530

//----- (0000000000449530) ----------------------------------------------------
char *__fastcall sub_449530(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  char *v6; // rsi
  char *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __m128i v10; // xmm0
  char *v11; // rax

  v5 = a1[8];
  v6 = (char *)a1[7];
  if ( a1[9] < (unsigned __int64)(v5 + 1) )
  {
    v11 = (char *)sub_481540((__int64)(a1 + 7), v6, v5 + 1, 0x38u);
    v5 = a1[8];
    a1[7] = (__int64)v11;
    v6 = v11;
  }
  result = &v6[56 * v5];
  *(_QWORD *)result = 0;
  *(_OWORD *)(result + 8) = 0;
  v8 = *a1;
  ++a1[8];
  *((_QWORD *)result + 3) = v8;
  *((_QWORD *)result + 4) = a1[1];
  LODWORD(v8) = *((_DWORD *)a1 + 20);
  *((_QWORD *)result + 5) = a2;
  *((_DWORD *)result + 12) = v8;
  if ( a3 )
  {
    v9 = *a3;
    v10 = _mm_loadu_si128((const __m128i *)(a3 + 1));
    *a3 = *(_QWORD *)result;
    a3[1] = *((_QWORD *)result + 1);
    a3[2] = *((_QWORD *)result + 2);
    *(_QWORD *)result = v9;
    *(__m128i *)(result + 8) = v10;
  }
  return result;
}
