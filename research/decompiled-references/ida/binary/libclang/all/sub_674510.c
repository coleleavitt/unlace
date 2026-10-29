__int64 __fastcall sub_674510(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  __int64 result; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]

  v10 = a2;
  v11 = a3;
  if ( !a2 )
    return 1;
  if ( (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    if ( (unsigned int)sub_A7AE10(a2) - 3 > 1 )
      return 1;
LABEL_8:
    v8 = sub_A7BB80(&v10);
    return sub_673BB0(a1, v8, v9, a4, a5, a6, a7);
  }
  result = sub_674510(a1, *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL, v11);
  if ( (_BYTE)result )
  {
    if ( (unsigned int)sub_A7AE10(v10) - 3 > 1 )
      return 1;
    goto LABEL_8;
  }
  return result;
}

