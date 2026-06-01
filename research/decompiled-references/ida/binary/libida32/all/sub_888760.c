__int64 __fastcall sub_888760(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v10; // rax

  v5 = a1[53];
  qmutex_lock(v5);
  v6 = a1[49];
  v7 = a1[48];
  if ( a1[50] < (unsigned __int64)(v6 + 1) )
  {
    v10 = qvector_reserve(a1 + 48, v7, v6 + 1, 16);
    a1[48] = v10;
    v7 = v10;
    v6 = a1[49];
  }
  v8 = 16 * v6 + v7;
  *(_QWORD *)v8 = 0;
  *(_BYTE *)(v8 + 8) = 0;
  ++a1[49];
  *(_QWORD *)v8 = a2;
  *(_BYTE *)(v8 + 8) = a3;
  return qmutex_unlock(v5);
}

