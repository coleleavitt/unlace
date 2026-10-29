__m128 *__fastcall sub_208ADC0(__m128 *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __m128 *result; // rax
  int v4; // esi
  double v5[2]; // [rsp+0h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  result = a1;
  if ( !v2 )
    goto LABEL_6;
  v4 = *(unsigned __int8 *)v2;
  if ( (unsigned int)(v4 - 1) <= 1 )
  {
    a1->m128_u64[0] = v2 & 0xFFFFFFFFFFFFFFFBLL;
    a1->m128_u64[1] = (v2 + 136) & 0xFFFFFFFFFFFFFFFBLL;
    return result;
  }
  if ( (_BYTE)v4 == 4 )
  {
    *(_QWORD *)&v5[0] = (*(_QWORD *)(v2 + 128) + 8LL * *(unsigned int *)(v2 + 136)) | 4;
    *a1 = _mm_loadh_ps(v5);
  }
  else
  {
LABEL_6:
    *a1 = 0;
  }
  return result;
}
