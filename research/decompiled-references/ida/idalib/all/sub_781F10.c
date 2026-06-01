__int64 __fastcall sub_781F10(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  __int64 v3; // rsi
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 256);
  v2 = *(_DWORD *)(a1 + 208);
  v3 = *(_QWORD *)(a1 + 248);
  if ( *(_QWORD *)(a1 + 264) < (unsigned __int64)(v1 + 1) )
  {
    v5 = qvector_reserve(a1 + 248, v3, v1 + 1, 4);
    *(_QWORD *)(a1 + 248) = v5;
    v3 = v5;
    v1 = *(_QWORD *)(a1 + 256);
  }
  *(_DWORD *)(v3 + 4 * v1) = v2;
  ++*(_QWORD *)(a1 + 256);
  return 0;
}
