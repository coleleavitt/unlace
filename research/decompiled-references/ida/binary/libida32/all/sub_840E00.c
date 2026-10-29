__int64 __fastcall sub_840E00(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int16 v6; // r9
  __int16 *v7; // rdx
  __int16 *v8; // rax
  __int16 v9; // r8

  while ( 1 )
  {
    result = 2 * a3;
    v4 = 2 * a3 + 1;
    v5 = 2 * a3 + 2;
    if ( v4 >= a2 )
      break;
    v6 = *(_WORD *)(a1 + 2 * v4);
    if ( *(_WORD *)(a1 + 2 * a3) >= v6 )
      break;
    if ( v5 >= a2 || v6 >= *(_WORD *)(a1 + 2 * v4 + 2) )
      v5 = 2 * a3 + 1;
LABEL_8:
    if ( a3 == v5 )
      return result;
    v7 = (__int16 *)(a1 + 2 * v5);
    v8 = (__int16 *)(a1 + result);
    v9 = *v8;
    *v8 = *v7;
    *v7 = v9;
    a3 = v5;
  }
  if ( v5 < a2 && *(_WORD *)(a1 + 2 * a3) < *(_WORD *)(a1 + 2 * v5) )
    goto LABEL_8;
  return result;
}

