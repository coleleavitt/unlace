__int64 __fastcall sub_5ECF10(_QWORD *a1, __int64 a2)
{
  void *v4; // rdi
  __int64 v5; // rsi
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax

  v4 = (void *)a1[67];
  if ( v4 )
  {
    a1[68] = 0;
    qfree(v4);
    a1[67] = 0;
    a1[69] = 0;
  }
  sub_5ECE50((__int64)a1);
  v5 = a1[49];
  v6 = *(_DWORD *)(a1[13] + 1512LL);
  v7 = a1[50];
  if ( a1[51] < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(a1 + 49, v5, v7 + 1, 16);
    a1[49] = v10;
    v5 = v10;
    v7 = a1[50];
  }
  v8 = 16 * v7 + v5;
  *(_QWORD *)v8 = a2;
  *(_BYTE *)(v8 + 8) = v6;
  *(_BYTE *)(v8 + 9) = 0;
  ++a1[50];
  return 0;
}
