__int64 __fastcall sub_761AD0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  __int64 v3; // rsi
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 248);
  v2 = *(_DWORD *)(a1 + 200);
  v3 = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(a1 + 256) < (unsigned __int64)(v1 + 1) )
  {
    v5 = qvector_reserve(a1 + 240, v3, v1 + 1, 4);
    *(_QWORD *)(a1 + 240) = v5;
    v3 = v5;
    v1 = *(_QWORD *)(a1 + 248);
  }
  *(_DWORD *)(v3 + 4 * v1) = v2;
  ++*(_QWORD *)(a1 + 248);
  return 0;
}

