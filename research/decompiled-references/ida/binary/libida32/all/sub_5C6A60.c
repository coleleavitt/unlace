__int64 __fastcall sub_5C6A60(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 168);
  v2 = *(_DWORD *)(a1 + 212);
  v3 = *(_QWORD *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 176) < (unsigned __int64)(v1 + 1) )
  {
    v6 = qvector_reserve(a1 + 160, v3, v1 + 1, 1);
    *(_QWORD *)(a1 + 160) = v6;
    v3 = v6;
    v1 = *(_QWORD *)(a1 + 168);
  }
  *(_BYTE *)(v3 + v1) = v2;
  v4 = *(_QWORD *)(a1 + 120);
  ++*(_QWORD *)(a1 + 168);
  *(_DWORD *)(v4 + 80) |= 2u;
  return 0;
}

