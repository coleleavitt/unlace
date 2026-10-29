__int64 __fastcall sub_784860(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  char v4; // si
  __int64 *v5; // r12
  char v6; // bp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // rax
  char v11; // bp
  char v12; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = a2 >> 3;
  v5 = *(__int64 **)(a1 + 200);
  if ( (unsigned __int8)a3 == a3 )
  {
    v11 = v4 + 0x80;
    v12 = a3;
    *(_BYTE *)(a1 + 212) = v4 + 0x80;
    v13 = v5[1];
    v14 = *v5;
    if ( v5[2] < (unsigned __int64)(v13 + 1) )
    {
      v17 = qvector_reserve(v5, v14, v13 + 1, 1);
      *v5 = v17;
      v14 = v17;
      v13 = v5[1];
    }
    *(_BYTE *)(v14 + v13) = v11;
    ++v5[1];
    v15 = *(__int64 **)(a1 + 200);
    ++*(_DWORD *)(a1 + 208);
    result = v15[1];
    v16 = *v15;
    if ( v15[2] < (unsigned __int64)(result + 1) )
    {
      v18 = qvector_reserve(v15, v16, result + 1, 1);
      *v15 = v18;
      v16 = v18;
      result = v15[1];
    }
    *(_BYTE *)(v16 + result) = v12;
    ++v15[1];
    ++*(_DWORD *)(a1 + 208);
  }
  else
  {
    v6 = v4 - 127;
    *(_BYTE *)(a1 + 212) = v4 - 127;
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
