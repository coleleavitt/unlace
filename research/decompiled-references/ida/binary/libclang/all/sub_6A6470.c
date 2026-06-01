__int64 __fastcall sub_6A6470(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // eax
  __int64 result; // rax
  unsigned int v8; // [rsp+0h] [rbp-58h] BYREF
  char v9; // [rsp+4h] [rbp-54h]
  __m128i v10; // [rsp+8h] [rbp-50h] BYREF
  __m128i v11; // [rsp+18h] [rbp-40h] BYREF
  __m128i v12[3]; // [rsp+28h] [rbp-30h] BYREF

  if ( !a2 || *(char *)(a2 + 29) >= 0 )
  {
    *(_QWORD *)(a1 + 8) = a2;
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 != a3 )
      goto LABEL_4;
LABEL_10:
    v6 = *(unsigned __int8 *)(a3 + 4);
    goto LABEL_8;
  }
  *(_QWORD *)(a1 + 8) = sub_77A0C0(a2);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 == a3 )
    goto LABEL_10;
LABEL_4:
  sub_6A4260((__int64)&v8, (int *)a3);
  if ( (unsigned int *)v4 == &v8 )
  {
    if ( v8 > 1 )
      sub_69F740(v4);
    v6 = *(unsigned __int8 *)(v4 + 4);
  }
  else
  {
    if ( *(_DWORD *)v4 > 1u )
      sub_69F740(v4);
    *(_DWORD *)v4 = v8;
    v5 = *(unsigned __int8 *)(v4 + 4);
    *(__m128i *)(v4 + 8) = _mm_loadu_si128(&v10);
    *(__m128i *)(v4 + 24) = _mm_loadu_si128(&v11);
    *(__m128i *)(v4 + 40) = _mm_loadu_si128(v12);
    v6 = v9 & 1 | v5 & 0xFFFFFFFE;
    *(_BYTE *)(v4 + 4) = v6;
  }
LABEL_8:
  result = *(_BYTE *)(a3 + 4) & 1 | v6 & 0xFFFFFFFE;
  *(_BYTE *)(v4 + 4) = result;
  return result;
}

