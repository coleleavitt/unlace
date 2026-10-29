const char *__fastcall sub_7A10(__int64 a1, int a2, int a3, unsigned __int8 *a4, unsigned __int16 *a5)
{
  unsigned __int16 v8; // r15
  int v9; // esi
  const char *result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  if ( (unsigned int)sub_7120(a1, a2, a4) == -1 )
    return nullptr;
  v8 = *(_WORD *)(a1 + 57);
  if ( a2 )
  {
    if ( !v8 )
      return nullptr;
  }
  if ( (*(_BYTE *)(a1 + 59) & 8) != 0 )
    *(_QWORD *)(a1 + 16) += 32LL;
  if ( (unsigned __int16)(v8 - 193) <= 1u || (v9 = 0, v8 == 147) )
    v9 = *(_DWORD *)(a1 + 28);
  if ( a3 && a3 != v8 )
    return nullptr;
  result = sub_6960(v8, v9, *a4, *(_DWORD *)(a1 + 24));
  if ( result )
  {
    if ( a5 )
      *a5 = v8;
  }
  return result;
}

