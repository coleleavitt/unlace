__int64 __fastcall sub_765560(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  __int64 result; // rax
  __int64 *v4; // r12
  char v5; // bl
  __int64 v6; // rsi
  __int64 v7; // rax

  if ( a3 > 0xFu )
    return sub_764420(a1, a2, a3);
  v4 = *(__int64 **)(a1 + 192);
  v5 = a2 + a3;
  *(_BYTE *)(a1 + 204) = a2 + a3;
  result = v4[1];
  v6 = *v4;
  if ( v4[2] < (unsigned __int64)(result + 1) )
  {
    v7 = qvector_reserve(v4, v6, result + 1, 1);
    *v4 = v7;
    v6 = v7;
    result = v4[1];
  }
  *(_BYTE *)(v6 + result) = v5;
  ++v4[1];
  ++*(_DWORD *)(a1 + 200);
  return result;
}

