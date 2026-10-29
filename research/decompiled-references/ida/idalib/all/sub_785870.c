__int64 __fastcall sub_785870(__int64 a1, char a2, unsigned __int16 a3)
{
  __int64 *v5; // rbp
  char v6; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // r13
  __int64 v13; // rsi
  __int64 *v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax

  v5 = *(__int64 **)(a1 + 200);
  if ( (unsigned __int8)a3 == a3 )
  {
    *(_BYTE *)(a1 + 212) = a2;
    v11 = v5[1];
    v12 = a3;
    v13 = *v5;
    if ( v5[2] < (unsigned __int64)(v11 + 1) )
    {
      v16 = qvector_reserve(v5, v13, v11 + 1, 1);
      *v5 = v16;
      v13 = v16;
      v11 = v5[1];
    }
    *(_BYTE *)(v13 + v11) = a2;
    ++v5[1];
    v14 = *(__int64 **)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    result = v14[1];
    v15 = *v14;
    if ( v14[2] < (unsigned __int64)(result + 1) )
    {
      v17 = qvector_reserve(v14, v15, result + 1, 1);
      *v14 = v17;
      v15 = v17;
      result = v14[1];
    }
    *(_BYTE *)(v15 + result) = v12;
    ++v14[1];
    ++*(_DWORD *)(a1 + 208);
  }
  else
  {
    v6 = a2 + 1;
    *(_BYTE *)(a1 + 212) = a2 + 1;
    v7 = v5[1];
    v8 = *v5;
    if ( v5[2] < (unsigned __int64)(v7 + 1) )
    {
      v10 = qvector_reserve(v5, v8, v7 + 1, 1);
      *v5 = v10;
      v8 = v10;
      v7 = v5[1];
    }
    *(_BYTE *)(v8 + v7) = v6;
    ++v5[1];
    ++*(_DWORD *)(a1 + 208);
    return sub_7847B0(a1, a3);
  }
  return result;
}
