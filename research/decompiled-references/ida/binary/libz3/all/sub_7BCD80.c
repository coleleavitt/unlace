size_t __fastcall sub_7BCD80(__int64 a1, __m128i a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  size_t result; // rax

  v2 = *(_QWORD *)(a1 + 984);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  sub_7BC8D0(a1, (_QWORD *)(a1 + 984));
  result = 0;
  if ( !*(_BYTE *)(a1 + 996) )
  {
    result = sub_7B8DC0(a1, 0xFFFFFFFE, (int **)(a1 + 984), *(_DWORD *)(a1 + 808), 1u, v3, a2);
    ++*(_DWORD *)(a1 + 216);
  }
  return result;
}

