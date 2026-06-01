__int64 __fastcall sub_785A20(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int16 v6; // esi^2
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax

  v2 = a2;
  v3 = *(__int64 **)(a1 + 200);
  if ( a2 <= 0xF )
  {
    LOBYTE(v2) = a2 - 32;
    *(_BYTE *)(a1 + 212) = a2 - 32;
  }
  else
  {
    if ( (char)a2 != a2 )
    {
      *(_BYTE *)(a1 + 212) = -45;
      v4 = v3[1];
      v5 = *v3;
      if ( v3[2] < (unsigned __int64)(v4 + 1) )
      {
        v10 = qvector_reserve(v3, v5, v4 + 1, 1);
        *v3 = v10;
        v5 = v10;
        v4 = v3[1];
      }
      *(_BYTE *)(v5 + v4) = -45;
      ++v3[1];
      ++*(_DWORD *)(a1 + 208);
      sub_7847B0(a1, v2);
      v6 = WORD1(v2);
      v7 = HIDWORD(v2);
      sub_7847B0(a1, v6);
      sub_7847B0(a1, v7);
      return sub_7847B0(a1, WORD1(v7));
    }
    *(_BYTE *)(a1 + 212) = -96;
    v12 = v3[1];
    v13 = *v3;
    if ( v3[2] < (unsigned __int64)(v12 + 1) )
    {
      v14 = qvector_reserve(v3, v13, v12 + 1, 1);
      *v3 = v14;
      v13 = v14;
      v12 = v3[1];
    }
    *(_BYTE *)(v13 + v12) = -96;
    ++v3[1];
    v3 = *(__int64 **)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
  }
  result = v3[1];
  v9 = *v3;
  if ( v3[2] < (unsigned __int64)(result + 1) )
  {
    v11 = qvector_reserve(v3, v9, result + 1, 1);
    *v3 = v11;
    v9 = v11;
    result = v3[1];
  }
  *(_BYTE *)(v9 + result) = v2;
  ++v3[1];
  ++*(_DWORD *)(a1 + 208);
  return result;
}
