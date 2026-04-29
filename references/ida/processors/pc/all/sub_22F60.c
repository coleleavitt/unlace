__int64 __fastcall sub_22F60(_QWORD *a1, __int64 a2, __int16 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rax

  v7 = sub_22F00((__int64)a1);
  v8 = a1[1];
  v9 = v7;
  v10 = a1[2];
  if ( a1[3] < (unsigned __int64)(v10 + 1) )
  {
    v13 = qvector_reserve();
    a1[1] = v13;
    v8 = v13;
    v10 = a1[2];
  }
  v11 = 32 * v10 + v8;
  *(_QWORD *)v11 = a2;
  *(_QWORD *)(v11 + 8) = v9;
  *(_QWORD *)(v11 + 16) = a4;
  *(_WORD *)(v11 + 24) = a3;
  *(_WORD *)(v11 + 26) = 0;
  ++a1[2];
  return 0;
}
