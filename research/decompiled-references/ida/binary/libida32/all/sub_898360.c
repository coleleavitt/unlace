unsigned __int64 __fastcall sub_898360(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax

  v9 = a2[1];
  v10 = *a2;
  if ( a2[2] < (unsigned __int64)(v9 + 1) )
  {
    v12 = qvector_reserve(a2, v10, v9 + 1, 1);
    *a2 = v12;
    v10 = v12;
    v9 = a2[1];
  }
  *(_BYTE *)(v10 + v9) = 2;
  ++a2[1];
  sub_3FA160(a2, a3);
  sub_3FA160(a2, a4);
  return sub_3FA160(a2, a5);
}

