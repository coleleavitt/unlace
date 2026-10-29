__int64 __fastcall sub_1527780(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rax
  __int64 *v4; // rdi
  int v5; // eax
  unsigned int v6; // r12d

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(__int64 **)(a1 + 8);
  if ( (_DWORD)v2 != 1 )
  {
    if ( (_DWORD)v2 == 2 )
      v1 = (*(_WORD *)(v4[7] + 206) >> 7) & 3;
    else
      v1 = v2 == 0;
  }
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(a1 + 16);
  if ( !v5 )
    v5 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v5;
  sub_14634E0(v4, (int *)(a1 + 16));
  return sub_1666B20(*(_QWORD *)(a1 + 96), v6, v1);
}
