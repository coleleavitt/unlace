__int64 __fastcall sub_966670(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  unsigned int v4; // r15d
  unsigned int v5; // r13d
  unsigned int i; // esi

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(_DWORD *)(a1 + 272);
  for ( i = a2 - v3; i > v4; v4 += sub_95C920(a1, (_QWORD *)(v3 + v4), a3, i, v5, 0) )
    ;
  *(_DWORD *)(a1 + 44) = i;
  return i;
}
