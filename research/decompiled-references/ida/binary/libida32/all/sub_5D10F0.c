__int64 __fastcall sub_5D10F0(_QWORD *a1, __int64 a2)
{
  void *v4; // rdi
  __int64 v5; // rsi
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax

  v4 = (void *)a1[66];
  if ( v4 )
  {
    a1[67] = 0;
    qfree(v4);
    a1[66] = 0;
    a1[68] = 0;
  }
  sub_5D1040((__int64)a1);
  v5 = a1[48];
  v6 = *(_DWORD *)(a1[12] + 1328LL);
  v7 = a1[49];
  if ( a1[50] < (unsigned __int64)(v7 + 1) )
  {
    v10 = qvector_reserve(a1 + 48, v5, v7 + 1, 16);
    a1[48] = v10;
    v5 = v10;
    v7 = a1[49];
  }
  v8 = 16 * v7 + v5;
  *(_QWORD *)v8 = a2;
  *(_BYTE *)(v8 + 8) = v6;
  *(_BYTE *)(v8 + 9) = 0;
  ++a1[49];
  return 0;
}

