__int64 __fastcall sub_194030(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 result; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax

  v1 = *(_DWORD **)(a1 + 32);
  if ( *v1 != 2 )
    return 0;
  if ( sub_1918A0(*(_QWORD *)(a1 + 40), (__int64)v1) )
  {
    v3 = *(_QWORD **)(a1 + 40);
    result = 1;
    if ( v3[13] )
      return result;
    v4 = v3[11];
    v5 = *(_QWORD *)(a1 + 32);
    v6 = v3[10];
    if ( v3[12] < (unsigned __int64)(v4 + 1) )
    {
      v7 = qvector_reserve(v3 + 10, v6, v4 + 1, 8);
      v3[10] = v7;
      v6 = v7;
      v4 = v3[11];
    }
    *(_QWORD *)(v6 + 8 * v4) = v5;
    ++v3[11];
    *(_BYTE *)(a1 + 48) = 1;
  }
  return 0;
}
