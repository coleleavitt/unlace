__int64 __fastcall sub_764370(__int64 a1, unsigned __int16 a2)
{
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  __int16 v6; // bp
  __int64 *v7; // r12
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax

  v3 = *(__int64 **)(a1 + 192);
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < (unsigned __int64)(v4 + 1) )
  {
    v10 = qvector_reserve(*(_QWORD *)(a1 + 192), v5, v4 + 1, 1);
    *v3 = v10;
    v5 = v10;
    v4 = v3[1];
  }
  *(_BYTE *)(v5 + v4) = a2;
  v6 = HIBYTE(a2);
  ++v3[1];
  v7 = *(__int64 **)(a1 + 192);
  ++*(_DWORD *)(a1 + 200);
  result = v7[1];
  v9 = *v7;
  if ( v7[2] < (unsigned __int64)(result + 1) )
  {
    v11 = qvector_reserve(v7, v9, result + 1, 1);
    *v7 = v11;
    v9 = v11;
    result = v7[1];
  }
  *(_BYTE *)(v9 + result) = v6;
  ++v7[1];
  ++*(_DWORD *)(a1 + 200);
  return result;
}

