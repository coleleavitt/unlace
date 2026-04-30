unsigned __int64 __fastcall sub_209180(__int64 a1, _QWORD *a2, __int64 *a3, char a4, int a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rsi
  _DWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // [rsp+8h] [rbp-40h]

  a3[1] = 0;
  sub_174A70((__int64)a2, a3, a1 + 8, a4, 0);
  result = (unsigned __int64)(a2 + 17);
  v15 = a2 + 17;
  if ( a3[1] )
  {
    v9 = 0;
    do
    {
      v11 = a2[17];
      v12 = (_DWORD *)(*a3 + 8 * v9);
      v13 = a2[18];
      if ( a2[19] < (unsigned __int64)(v13 + 1) )
      {
        v14 = qvector_reserve(v15, v11, v13 + 1, 16);
        a2[17] = v14;
        v11 = v14;
        v13 = a2[18];
      }
      ++v9;
      v10 = 16 * v13 + v11;
      *(_QWORD *)v10 = -1;
      *(_DWORD *)(v10 + 8) = -1;
      *(_BYTE *)(v10 + 12) = 0;
      ++a2[18];
      *(_DWORD *)v10 = *v12;
      result = (unsigned int)v12[1];
      *(_DWORD *)(v10 + 8) = a5;
      *(_DWORD *)(v10 + 4) = result;
      *(_BYTE *)(v10 + 12) = 1;
    }
    while ( v9 < a3[1] );
  }
  return result;
}
