__int64 __fastcall sub_15277F0(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // r12d
  unsigned int v4; // ebp
  unsigned int v5; // r13d

  v1 = *(_QWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 16);
  v4 = (unsigned __int16)v1;
  v5 = WORD1(v1);
  if ( !v2 )
    v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v2;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  return sub_166A250(*(_QWORD *)(a1 + 96), v3, v5, v4);
}
