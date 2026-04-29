__int64 __fastcall sub_3CC140(__int64 a1, int a2, __int64 a3, __int64 a4, double a5)
{
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rsi

  v7 = sub_3C9ED0(*(_QWORD *)(a1 + 16), a4, a4);
  result = sub_3CBFA0(
             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 136LL) + 24 * a3),
             a2,
             *(_QWORD *)a1,
             *(_QWORD *)(a1 + 8),
             v7,
             a5);
  v10 = *(_DWORD *)(a1 + 48);
  if ( v10 < (int)v9 )
    goto LABEL_13;
  if ( v10 > (int)v9 )
    return result;
  if ( v10 )
  {
    if ( *(_QWORD *)(a1 + 40) >= result )
      return result;
LABEL_13:
    *(_QWORD *)(a1 + 40) = result;
    *(_QWORD *)(a1 + 48) = v9;
    return result;
  }
  v11 = -*(_QWORD *)(a1 + 40);
  if ( *(__int64 *)(a1 + 40) > 0 )
    v11 = *(_QWORD *)(a1 + 40);
  v12 = -result;
  if ( result > 0 )
    v12 = result;
  if ( v11 > v12 || v11 >= v12 && *(_QWORD *)(a1 + 40) > result )
    goto LABEL_13;
  return result;
}
