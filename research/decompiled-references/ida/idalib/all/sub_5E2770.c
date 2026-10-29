__int64 __fastcall sub_5E2770(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_DWORD *)(a1 + 220);
  v3 = *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)(a1 + 184) < (unsigned __int64)(v1 + 1) )
  {
    v6 = qvector_reserve(a1 + 168, v3, v1 + 1, 1);
    *(_QWORD *)(a1 + 168) = v6;
    v3 = v6;
    v1 = *(_QWORD *)(a1 + 176);
  }
  *(_BYTE *)(v3 + v1) = v2;
  v4 = *(_QWORD *)(a1 + 128);
  ++*(_QWORD *)(a1 + 176);
  *(_DWORD *)(v4 + 80) |= 2u;
  return 0;
}
