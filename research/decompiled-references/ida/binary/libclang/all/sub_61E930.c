__int64 __fastcall sub_61E930(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 *v9; // rcx
  __m128i v10; // [rsp+40h] [rbp-38h] BYREF
  __m128i v11[2]; // [rsp+50h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 && (unsigned __int8)sub_61B740(a1, v3, *(_QWORD *)(a2 + 72)) )
    return 1;
  sub_63A1A0(&v10, a2, *(unsigned int *)(a2 + 24), *a1);
  result = sub_619180((__int64)a1, a2, v4, v5, v6, v7, (__int128)_mm_load_si128(&v10), (__int128)_mm_load_si128(v11));
  if ( (_BYTE)result )
    return 1;
  v9 = *(__int64 **)(a2 + 80);
  if ( ((unsigned int)*(_QWORD *)(a2 + 40) & 7) - 3 <= 2 )
  {
    if ( v9 )
      return sub_61B330(a1, *v9, (__int64)(v9 + 1));
  }
  return result;
}

