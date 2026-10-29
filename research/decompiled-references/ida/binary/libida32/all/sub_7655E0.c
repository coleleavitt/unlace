__int64 __fastcall sub_7655E0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = a2;
  v3 = *(__int64 **)(a1 + 192);
  if ( a2 <= 0xF )
  {
    LOBYTE(v2) = a2 - 32;
    *(_BYTE *)(a1 + 204) = a2 - 32;
  }
  else
  {
    if ( (char)a2 != a2 )
    {
      *(_BYTE *)(a1 + 204) = -89;
      v4 = v3[1];
      v5 = *v3;
      if ( v3[2] < (unsigned __int64)(v4 + 1) )
      {
        v11 = qvector_reserve(v3, v5, v4 + 1, 1);
        *v3 = v11;
        v5 = v11;
        v4 = v3[1];
      }
      *(_BYTE *)(v5 + v4) = -89;
      ++v3[1];
      ++*(_DWORD *)(a1 + 200);
      sub_764370(a1, v2);
      return sub_764370(a1, HIWORD(v2));
    }
    *(_BYTE *)(a1 + 204) = -96;
    v9 = v3[1];
    v10 = *v3;
    if ( v3[2] < (unsigned __int64)(v9 + 1) )
    {
      v12 = qvector_reserve(v3, v10, v9 + 1, 1);
      *v3 = v12;
      v10 = v12;
      v9 = v3[1];
    }
    *(_BYTE *)(v10 + v9) = -96;
    ++v3[1];
    v3 = *(__int64 **)(a1 + 192);
    ++*(_DWORD *)(a1 + 200);
  }
  result = v3[1];
  v7 = *v3;
  if ( v3[2] < (unsigned __int64)(result + 1) )
  {
    v8 = qvector_reserve(v3, v7, result + 1, 1);
    *v3 = v8;
    v7 = v8;
    result = v3[1];
  }
  *(_BYTE *)(v7 + result) = v2;
  ++v3[1];
  ++*(_DWORD *)(a1 + 200);
  return result;
}

