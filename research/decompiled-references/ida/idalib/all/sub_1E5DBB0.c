__int64 __fastcall sub_1E5DBB0(__int64 a1)
{
  _QWORD *v1; // r10
  __int64 v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // r10
  _QWORD *v5; // r9
  _QWORD *v7; // rax
  _QWORD *v8; // r9
  unsigned int v9; // edx

  v1 = *(_QWORD **)(a1 + 8);
  v2 = (__int64)&v1[*(unsigned int *)(a1 + 16)];
  v3 = sub_1E5DA80(v1, v2, 65);
  if ( v5 != v3 )
    return 1;
  v7 = sub_1E5DA80(v4, v2, 64);
  LOBYTE(v9) = v8 != v7;
  return v9;
}
