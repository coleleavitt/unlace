__int64 __fastcall sub_2223850(__int64 a1, unsigned __int8 *a2, size_t a3)
{
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v6; // r13
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 104) )
  {
    v5 = *(unsigned __int8 **)(a1 + 64);
    v6 = &a2[a3];
    if ( a2 <= v5 && v5 <= v6 )
      sub_2223530(a1, v5, a3 - (v5 - a2));
    else
      sub_2223530(a1, a2, a3);
    *(_QWORD *)(a1 + 64) = v6;
  }
  result = sub_227BF10(*(_QWORD *)(a1 + 48), a2, a3);
  *(_QWORD *)(a1 + 64) = 0;
  return result;
}
