__int64 __fastcall sub_340DA0(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax

  v5 = a1[15];
  v6 = a1[14];
  if ( a1[16] < (unsigned __int64)(v5 + 1) )
  {
    v9 = qvector_reserve(a1 + 14, v6, v5 + 1, 32);
    a1[14] = v9;
    v6 = v9;
    v5 = a1[15];
  }
  v7 = 32 * v5 + v6;
  *(_OWORD *)v7 = -1;
  *(_BYTE *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 16) = -1;
  ++a1[15];
  *(_QWORD *)v7 = *a2;
  result = a2[1];
  *(_BYTE *)(v7 + 24) = a3;
  *(_QWORD *)(v7 + 8) = result;
  return result;
}
