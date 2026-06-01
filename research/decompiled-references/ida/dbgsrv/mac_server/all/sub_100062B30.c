/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062B30
// Address: 0x0000000100062B30

//----- (0000000100062B30) ----------------------------------------------------
char *__fastcall sub_100062B30(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r15
  _BYTE *v3; // r14
  __int64 v4; // r12
  _BYTE *v5; // r15
  __int64 v6; // r13
  __int64 v7; // r12
  char *result; // rax
  __int64 v9; // [rsp+0h] [rbp-30h]

  v1 = a1[1];
  v2 = a1[2];
  if ( v2 >= v1 + 1 )
  {
    v3 = (_BYTE *)*a1;
  }
  else
  {
    v3 = qvector_reserve((__int64)a1, nullptr, v1 + 1, 0x30u);
    v4 = a1[2];
    a1[2] = v2;
    v5 = (_BYTE *)*a1;
    v6 = a1[1];
    if ( v6 - 1 >= 0 )
    {
      v9 = v4;
      v7 = 0;
      do
      {
        *(_QWORD *)&v3[v7] = *(_QWORD *)&v5[v7];
        *(_QWORD *)&v5[v7] = 0;
        *(_QWORD *)&v3[v7 + 8] = *(_QWORD *)&v5[v7 + 8];
        *(_QWORD *)&v5[v7 + 8] = 0;
        *(_QWORD *)&v3[v7 + 16] = *(_QWORD *)&v5[v7 + 16];
        *(_QWORD *)&v5[v7 + 16] = 0;
        v3[v7 + 40] = v5[v7 + 40];
        *(__m128i *)&v3[v7 + 24] = _mm_loadu_si128((const __m128i *)&v5[v7 + 24]);
        sub_10000A1B0((char **)&v5[v7]);
        v7 += 48;
        --v6;
      }
      while ( v6 );
      v5 = (_BYTE *)*a1;
      v4 = v9;
    }
    qfree(v5);
    *a1 = v3;
    a1[2] = v4;
    v1 = a1[1];
  }
  result = &v3[48 * v1];
  *(_OWORD *)result = 0;
  *((_QWORD *)result + 2) = 0;
  *(_OWORD *)(result + 24) = -1;
  result[40] = 0;
  ++a1[1];
  return result;
}
