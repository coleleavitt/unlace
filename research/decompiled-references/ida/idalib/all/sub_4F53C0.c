__int64 __fastcall sub_4F53C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 72);
  if ( v2 == -1 )
  {
    if ( !under_debugger )
      interr(3286);
    BUG();
  }
  *(_QWORD *)(a2 + 72) = -1;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 24) = 2;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = qvector_reserve(a1, 0, 1, 24);
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v3;
  v5 = v3 + 24 * v4;
  *(_QWORD *)v5 = 0xFFFFFFFFLL;
  *(_QWORD *)(v5 + 8) = v2;
  *(_DWORD *)(v5 + 16) = 0;
  ++*(_QWORD *)(a1 + 8);
  return a1;
}
