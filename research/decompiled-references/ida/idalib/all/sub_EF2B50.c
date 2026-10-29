char *__fastcall sub_EF2B50(__int16 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int16 v7; // ax
  char *result; // rax
  __m128 v9; // xmm0
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h]
  int v12; // [rsp+18h] [rbp-20h]
  int v13; // [rsp+1Ch] [rbp-1Ch]

  v7 = *a1;
  v10 = a3;
  v7 &= 0xFE00u;
  LOBYTE(v7) = v7 | 0x9A;
  *a1 = v7;
  result = (char *)&unk_2CD7484;
  if ( unk_2CD7484 )
  {
    v13 = a6;
    v12 = a5;
    v11 = a2;
    result = sub_EE9B50(154);
    a6 = v13;
    a5 = v12;
  }
  v11 = a2;
  *((_QWORD *)a1 + 3) = a4;
  v9 = _mm_loadh_ps((const double *)&v10);
  *((_DWORD *)a1 + 8) = a5;
  *(__m128 *)(a1 + 4) = v9;
  *((_DWORD *)a1 + 9) = a6;
  return result;
}
