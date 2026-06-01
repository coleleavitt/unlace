__int64 __fastcall sub_16E1180(__int64 a1, __int64 a2, int a3, int a4, __m128 a5)
{
  unsigned int v7; // ebp
  unsigned __int8 *v8; // rbx
  unsigned int v9; // eax

  v7 = 1;
  v8 = *(unsigned __int8 **)(a2 + 48);
  if ( *(_QWORD *)(a2 + 56) )
    v7 = *(_QWORD *)(a2 + 56) - (_DWORD)v8;
  v9 = sub_16B5B40(a1, (int)v8);
  return sub_16E0DC0(a1, *(_DWORD *)(a2 + 100), v9, a3, a4, v8, a5, v7);
}
