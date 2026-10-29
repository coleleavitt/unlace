__int64 __fastcall sub_5CB7C0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // rax

  v1 = a1[55];
  v2 = a1[16];
  v3 = a1[54];
  if ( a1[56] < (unsigned __int64)(v1 + 1) )
  {
    v6 = qvector_reserve(a1 + 54, v3, v1 + 1, 8);
    a1[54] = v6;
    v3 = v6;
    v1 = a1[55];
  }
  *(_QWORD *)(v3 + 8 * v1) = v2;
  ++a1[55];
  v4 = sub_5CB650((__int64)a1);
  a1[16] = v4;
  *(_QWORD *)(v4 + 40) |= 0x800uLL;
  return 0;
}

