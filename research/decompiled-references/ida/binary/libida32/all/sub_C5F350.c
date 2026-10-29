__int64 __fastcall sub_C5F350(__int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  const __m128i *v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi

  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0xD )
  {
    sub_C1BDB0(*a1, *(_QWORD *)(a2 + 16), a3, a4, a5);
    return sub_C5BA10(a1, a2, v7, v8);
  }
  else if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x3B )
  {
    v9 = (const __m128i *)a1[1];
    v10 = *(_QWORD *)(a2 + 16);
    v11 = *a1;
    v12 = a1[2];
    if ( v9 )
      return sub_C2BC60(v12, v11, v9, v10);
    else
      return sub_C15CD0(v12, v11, v10, v10, a5);
  }
  else
  {
    return sub_C5F0E0(a1, a2, a3, a4, a5, a6);
  }
}

