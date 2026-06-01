__int64 __fastcall sub_1526F20(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebp
  __int64 v3; // r12

  v1 = *(_DWORD *)(a1 + 20);
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v1 )
    v1 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v1;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  return sub_166D1D0(*(_QWORD *)(a1 + 96), v3, v2);
}
