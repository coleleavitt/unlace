__int64 __fastcall sub_4DE6A0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = *(_DWORD *)(a2 + 72);
  if ( v2 == -1 )
  {
    if ( !under_debugger )
      interr(3286);
    BUG();
  }
  *(_DWORD *)(a2 + 72) = -1;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 24) = 2;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = qvector_reserve(a1, 0, 1, 16);
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v3;
  v5 = 16 * v4 + v3;
  *(_QWORD *)v5 = 0xFFFFFFFFLL;
  *(_DWORD *)(v5 + 8) = v2;
  *(_DWORD *)(v5 + 12) = 0;
  ++*(_QWORD *)(a1 + 8);
  return a1;
}

