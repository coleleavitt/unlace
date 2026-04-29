__int64 __fastcall sub_2582F0(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rax

  *(_DWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 168LL);
  v3 = *(_QWORD **)(a1 + 64);
  v4 = v3[21];
  v5 = v3[20];
  if ( v3[22] < (unsigned __int64)(v4 + 1) )
  {
    v7 = qvector_reserve(v3 + 20, v5, v4 + 1, 8);
    v3[20] = v7;
    v5 = v7;
    v4 = v3[21];
  }
  *(_QWORD *)(v5 + 8 * v4) = a2;
  ++v3[21];
  return 0;
}
